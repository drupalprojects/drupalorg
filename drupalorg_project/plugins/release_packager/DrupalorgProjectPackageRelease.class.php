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
    'git' => '/usr/bin/git',
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

  protected $info_files = array();
  protected $manifest = array();
  // Files to ignore when checking timestamps:
  protected $exclude_files = array('.', '..', 'LICENSE.txt');
  protected $youngest_file_timestamp = 0;

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
    
    putenv("TERM=vt100");  // drush requires a terminal.
    
    self::$shared_init = TRUE;
  }

  public function createPackage(&$files, &$contents) {
    // Remember if the tar.gz version of this release file already exists.
    $tgz_exists = is_file($this->filenames['full_dest_tgz']);

    if (empty($this->project_node->versioncontrol_project['repo'])) {
      wd_err('ERROR: %project_title does not have a VCS repository defined', array('%project_title' => $this->project_node->title));
      return 'error';
    }
    $repo = $this->project_node->versioncontrol_project['repo'];

    // Clean up any old build directory if it exists.
    // Don't use drupal_exec or return if this fails, we expect it to be empty.
    exec("{$this->conf['rm']} -rf {$this->project_build_root}");

    // Make a fresh build directory and move inside it.
    if (!mkdir($this->project_build_root) || !drupal_chdir($this->project_build_root)) {
      return 'error';
    }

    // Figure out how to check this thing out from Git.
    $git_tag = escapeshellcmd($this->release_node->project_release['tag']);

    // For core, we want to checkout into a directory named via the version,
    // e.g. "drupal-7.0".
    if ($this->project_node->nid == DRUPALORG_CORE_NID) {
      $export_to = $this->release_file_id;
    }
    // For everything else, just use the project shortname.
    else {
      $export_to = $this->project_short_name;
    }

    /// @todo: Fix this to not assume direct FS access to the Git repositories.
    /// @see http://drupal.org/node/1028950
    // Invoke git pointing to the right repo.
    $git_export = $this->conf['git'] . ' --git-dir=' . escapeshellcmd($repo->root);
    // Tell it we want a tar archive with a the right subdirectory prefix.
    $git_export .= ' archive --format=tar --prefix=' . $export_to . '/';
    // Use the right Git tag
    $git_export .= ' ' . $git_tag;
    // Pipe the tarball through tar to extract it locally for post-processing.
    $git_export .= ' | ' . $this->conf['tar'] . ' x';

    // Checkout this release from Git, and see if we need to rebuild it
    if (!drupal_exec($git_export)) {
      return 'error';
    }
    if (!is_dir("{$this->project_build_root}/$export_to")) {
      wd_err("ERROR: %export_to does not exist after cvs export -r %cvs_tag -d %export_to %cvs_export_from", array('%export_to' => $export_to, '%cvs_tag' =>  $cvs_tag, '%cvs_export_dir' => $cvs_export_from), $release_node_view_link);
      return 'error';
    }

    $this->walkDirectoryTree($export_to);

    if (!empty($this->release_node->project_release['rebuild']) && $tgz_exists && filemtime($this->filenames['full_dest_tgz']) + 300 > $this->youngest_file_timestamp) {
      // The existing tarball for this release is newer than the youngest
      // file in the directory, we're done.
      return 'no-op';
    }

    // Update any .info files with packaging metadata.
    foreach ($this->info_files as $file) {
      if (!$this->fixInfoFileVersion($file)) {
        wd_err("ERROR: Failed to update version in %file, aborting packaging", array('%file' => $file), $release_node_view_link);
        return 'error';
      }
    }

    // Link not copy, since we want to preserve the date...
    if (!drupal_exec("{$this->conf['ln']} -sf {$this->conf['license']} $export_to/LICENSE.txt")) {
      return 'error';
    }

    $this->writeManifest($export_to);

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
    $info .= 'project = "' . $this->release_version . "\"\n";

    // .info files started with 5.x, so we don't have to worry about version
    // strings like "4.7.x-1.0" in this regular expression. If we can't parse
    // the version (also from an old "HEAD" release), or the version isn't at
    // least 6.x, don't add any "core" attribute at all.
    $matches = array();
    if (preg_match('/^((\d+)\.x)-.*/', $version, $matches) && $matches[2] >= 6) {
      $info .= "core = \"$matches[1]\"\n";
    }
    $info .= 'project = "' . $this->project_short_name . "\"\n";
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
   * Walk the directory tree after we checkout from VCS.
   *
   * This does processing on the directory tree before we create the archive
   * files for this release:
   * - Find the youngest (newest) file in a directory tree (stolen wholesale
   *   from the original package-drupal.php script).
   * - Add packaging metadata to any files that end with ".info".
   * - Find all the filenames for later use creating the packaging manifest.
   *
   * @param string $relative_path
   *   The relative directory path of the file or directory to walk.
   */
  public function walkDirectoryTree($base_dir, $relative_path = '') {
    $target = $base_dir;
    if (!empty($relative_path)) {
      $target .= '/' . $relative_path;
    }
    if (is_dir($target)) {
      $fp = opendir($target);
      while (FALSE !== ($file = readdir($fp))) {
        if (!in_array($file, $this->exclude_files)) {
          $filename = !empty($relative_path) ? "$relative_path/$file" : $file;
          if (is_dir("$base_dir/$filename")) {
            $this->walkDirectoryTree($base_dir, $filename);
          }
          else {
            $mtime = filemtime("$base_dir/$filename");
            $this->youngest_file_timestamp = ($mtime > $this->youngest_file_timestamp) ? $mtime : $this->youngest_file_timestamp;
            if (preg_match('/^.+\.info$/', $file)) {
              $this->info_files[] = "$base_dir/$filename";
            }
            $this->manifest[$filename] = array();
          }
        }
      }
      closedir($fp);
    }
  }

  /**
   * Output the packaging MANIFEST.txt file with all the file metadata.
   *
   * @param string $base_dir
   *   The relative path to where the package directory tree lives.
   */
  public function writeManifest($base_dir) {
    global $base_url;
    $repo = $this->project_node->versioncontrol_project['repo'];
    $git_tag = escapeshellcmd($this->release_node->project_release['tag']);
    $git_base = $this->conf['git'] . ' --git-dir=' . escapeshellcmd($repo->root);
    $git_log = $git_base . ' log --max-count=1 --pretty="format:%H|%ci" ' . $git_tag . ' -- ';

    $git_rev_parse = $git_base . ' rev-parse ' . $git_tag;

    $output = '';
    $output .= '# Project short name: ' . $this->project_node->project['uri'] . "\n";
    $output .= '# Project URL: ' . $base_url . url('node/' . $this->project_node->nid) . "\n";
    $output .= '# Release version: ' . $this->release_node->project_release['version'] . "\n";
    $output .= '# Release URL: ' . $base_url . url('node/' . $this->release_node->nid) . "\n";
    // TODO: Git clone URL?

    $git_rev_parse_handle = popen($git_rev_parse, 'r');
    $git_rev_parse_out = fgets($git_rev_parse_handle);
    pclose($git_rev_parse_handle);
    // The output from git rev-parse already has a newline...
    $output .= '# Release Git SHA1 hash: ' . $git_rev_parse_out;

    // Finally, give the humans some help on the rest of the file contents.
    $output .= "#\n# file md5 hash | Git SHA1 of last commit | date of last commit | filename\n";

    // Now, for every file in the directory tree, find the hashes and dates.
    foreach ($this->manifest as $path => $info) {
      // Find the datestamp and the SHA1 that last modified this file.
      $git_log_handle = popen("$git_log $path", 'r');
      $git_log_out = fgets($git_log_handle);
      pclose($git_log_handle);
      // Stash info about this file in the manifest.
      $output .= md5_file("$base_dir/$path");
      $output .= '|' . $git_log_out . '|' . $path . "\n";
    }
    $manifest = fopen("$base_dir/MANIFEST.txt", 'w');
    fwrite($manifest, $output);
    fclose($manifest);
  }

}
