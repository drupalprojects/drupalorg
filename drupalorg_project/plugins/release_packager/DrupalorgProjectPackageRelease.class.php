<?php

class DrupalorgProjectPackageRelease implements ProjectReleasePackagerInterface {
  /**
   * Configuration settings.
   */
  protected $conf = array(
    'license' => '/var/www/drupal.org/project/scripts/package-extra/LICENSE.txt',
    'tar' => '/bin/tar',
    'gzip' => '/bin/gzip',
    'zip' => '/usr/bin/zip',
    'cvs' => '/usr/bin/cvs',
    'ln' => '/bin/ln',
    'rm' => '/bin/rm',
  );

  /// Protected data members of the class
  protected $release_node;
  protected $release_version = '';
  protected $release_file_id = '';
  protected $release_node_view_link = '';
  protected $project_node;
  protected $project_short_name = '';
  protected $filenames = array();

  protected $file_destination_root = '';
  protected $file_destination_subdirectory = '';
  protected $temp_directory = '';
  protected $project_build_root = '';

  /// Data about CVS respositories shared across all instances of this class.
  protected static $repositories = array();

  /// Have we initialized our shared static data yet?
  protected static $shared_init = FALSE;

  public function __construct($release_node, $file_destination_root, $file_destination_subdir, $temp_directory) {
    // Make sure the shared data is initialized.
    self::shared_init();

    // Stash the release node this packager is going to be working on.
    $this->release_node = $release_node;

    // Save all the directory information.
    $this->file_destination_root = $file_destination_root;
    $this->file_destination_subdir = $file_destination_subdir;
    $this->temp_directory = $temp_directory;

    // Load the project for this release, using our static node_load() cache.
    $this->project_node = project_release_packager_node_load($release_node->project_release['pid']);

    // We use all of these a lot in a number of functions, so initialize them
    // once here so we can just reuse them whenever we need them.
    $this->project_short_name = escapeshellcmd($this->project_node->project['uri']);
    $this->release_version = escapeshellcmd($release_node->project_release['version']);
    $this->release_file_id = $this->project_short_name . '-' . $this->release_version;
    $this->release_node_view_link = l(t('view'), 'node/' . $this->release_node->nid);
    $this->project_build_root = $this->temp_directory . '/' . $this->project_short_name;

    // Figure out the filenames we're going to be using for our packages.
    $this->filenames['file_path_tgz'] = $file_destination_subdir . '/' . $this->release_file_id . '.tar.gz';
    $this->filenames['full_dest_tgz'] = $file_destination_root . '/' . $this->filenames['file_path_tgz'];
    $this->filenames['file_path_zip'] = $file_destination_subdir . '/' . $this->release_file_id . '.zip';
    $this->filenames['full_dest_zip'] = $file_destination_root . '/' . $this->filenames['file_path_zip'];
  }
  
  /**
   * One-time initialization shared across all instances of this class.
   */
  protected static function shared_init() {
    if (self::$shared_init) {
      return;
    }
    
    $query = db_query("SELECT rid, root, modules, name FROM {cvs_repositories}");
    while ($repo = db_fetch_object($query)) {
       self::$repositories[$repo->rid] = array(
        'root' => $repo->root,
        'modules' => $repo->modules,
        'name' => $repo->name,
      );
    }

    putenv("TERM=vt100");  // drush requires a terminal.
    
    self::$shared_init = TRUE;
  }

  public function createPackage(&$files, &$contents) {
    // Files to ignore when checking timestamps:
    $exclude = array('.', '..', 'LICENSE.txt');

    // Remember if the tar.gz version of this release file already exists.
    $tgz_exists = is_file($this->filenames['full_dest_tgz']);

    // Figure out how to check this thing out from CVS.
    $cvs_tag = escapeshellcmd($this->release_node->project_release['tag']);
    $cvs_repo_id = $this->project_node->cvs['repository'];
    $cvs_root = self::$repositories[$cvs_repo_id]['root'];
    $cvs_module = self::$repositories[$cvs_repo_id]['modules'];
    $cvs_export_from = $cvs_module . $this->project_node->cvs['directory'];

    // For core, we want to checkout into a directory named via the version,
    // e.g. "drupal-7.0".
    if ($this->project_node->nid == DRUPALORG_CORE_NID) {
      $export_to = $this->release_file_id;
    }
    // For everything else, just use the project shortname.
    else {
      $export_to = $this->project_short_name;
    }

    // Clean up any old build directory if it exists.
    // Don't use drupal_exec or return if this fails, we expect it to be empty.
    exec("{$this->conf['rm']} -rf {$this->project_build_root}");

    // Make a fresh build directory and move inside it.
    if (!mkdir($this->project_build_root) || !drupal_chdir($this->project_build_root)) {
      return 'error';
    }

    // Checkout this release from CVS, and see if we need to rebuild it
    if (!drupal_exec("{$this->conf['cvs']} -d $cvs_root -q export -r $cvs_tag -d $export_to $cvs_export_from")) {
      return 'error';
    }
    if (!is_dir("{$this->project_build_root}/$export_to")) {
      wd_err("ERROR: %export_to does not exist after cvs export -r %cvs_tag -d %export_to %cvs_export_from", array('%export_to' => $export_to, '%cvs_tag' =>  $cvs_tag, '%cvs_export_dir' => $cvs_export_from), $release_node_view_link);
      return 'error';
    }

    $info_files = array();
    $youngest = $this->fileFindYoungest($export_to, 0, $exclude, $info_files);
    if (!empty($this->release_node->project_release['rebuild']) && $tgz_exists && filemtime($this->filenames['full_dest_tgz']) + 300 > $youngest) {
      // The existing tarball for this release is newer than the youngest
      // file in the directory, we're done.
      return 'no-op';
    }

    // Update any .info files with packaging metadata.
    foreach ($info_files as $file) {
      if (!$this->fixInfoFileVersion($file, $this->project_short_name, $this->release_version)) {
        wd_err("ERROR: Failed to update version in %file, aborting packaging", array('%file' => $file), $release_node_view_link);
        return 'error';
      }
    }

    // Link not copy, since we want to preserve the date...
    if (!drupal_exec("{$this->conf['ln']} -sf {$this->conf['license']} $export_to/LICENSE.txt")) {
      return 'error';
    }

    // 'h' is for dereference, we want to include the files, not the links
    if (!drupal_exec("{$this->conf['tar']} -ch --file=- $export_to | {$this->conf['gzip']} -9 --no-name > {$this->filenames['full_dest_tgz']}")) {
      return 'error';
    }
    $files[$this->filenames['file_path_tgz']] = 0;

    // If we're rebuilding, make sure the previous .zip is gone, since just
    // running zip again with the same zip archive won't give us the semantics
    // we want. For example, files that are removed in CVS will still be left
    // in the .zip archive.
    @unlink($this->filenames['full_dest_zip']);
    if (!drupal_exec("{$this->conf['zip']} -rq {$this->filenames['full_dest_zip']} $export_to")) {
      return 'error';
    }
    $files[$this->filenames['file_path_zip']] = 1;

    return $tgz_exists ? 'rebuild' : 'success';
  }

  public function cleanupFailedBuild() {
    $extensions = array('.tar.gz', '.zip');
    $release_file_base = $this->file_destination_root . '/' . $this->file_destination_subdir . '/' . $this->release_file_id;

    // Remove the main release files.
    foreach ($extensions as $extension) {
      $filename = $release_file_base . $extension;
      if (file_exists($filename)) {
        unlink($filename);
      }
    }
  }

  public function cleanupSuccessfulBuild() {
    drupal_exec("{$this->conf['rm']} -rf {$this->project_build_root}");
  }

  /**
   * Fix the given .info file with the specified version string
   */
  protected function fixInfoFileVersion($file, $project_short_name, $version) {
    global $site_name;

    $info = "\n; Information added by $site_name packaging script on " . gmdate('Y-m-d') . "\n";
    $info .= "version = \"$version\"\n";
    // .info files started with 5.x, so we don't have to worry about version
    // strings like "4.7.x-1.0" in this regular expression. If we can't parse
    // the version (also from an old "HEAD" release), or the version isn't at
    // least 6.x, don't add any "core" attribute at all.
    $matches = array();
    if (preg_match('/^((\d+)\.x)-.*/', $version, $matches) && $matches[2] >= 6) {
      $info .= "core = \"$matches[1]\"\n";
    }
    $info .= "project = \"$project_short_name\"\n";
    $info .= 'datestamp = "'. time() ."\"\n";
    $info .= "\n";

    if (!chmod($file, 0644)) {
      wd_err("ERROR: chmod(@file, 0644) failed", array('@file' => $file));
      return FALSE;
    }
    if (!$info_fd = fopen($file, 'ab')) {
      wd_err("ERROR: fopen(@file, 'ab') failed", array('@file' => $file));
      return FALSE;
    }
    if (!fwrite($info_fd, $info)) {
      wd_err("ERROR: fwrite(@file) failed". '<pre>' . $info, array('@file' => $file));
      return FALSE;
    }
    return TRUE;
  }

  /**
   * Find the youngest (newest) file in a directory tree.
   * Stolen wholesale from the original package-drupal.php script.
   * Modified to also notice any files that end with ".info" and store
   * all of them in the array passed in as an argument. Since we have to
   *  recurse through the whole directory tree already, we should just
   * record all the info we need in one pass instead of doing it twice.
   */
  public function fileFindYoungest($dir, $timestamp, $exclude, &$info_files) {
    if (is_dir($dir)) {
      $fp = opendir($dir);
      while (FALSE !== ($file = readdir($fp))) {
        if (!in_array($file, $exclude)) {
          if (is_dir("$dir/$file")) {
            $timestamp = $this->fileFindYoungest("$dir/$file", $timestamp, $exclude, $info_files);
          }
          else {
            $mtime = filemtime("$dir/$file");
            $timestamp = ($mtime > $timestamp) ? $mtime : $timestamp;
            if (preg_match('/^.+\.info$/', $file)) {
              $info_files[] = "$dir/$file";
            }
          }
        }
      }
      closedir($fp);
    }
    return $timestamp;
  }

}
