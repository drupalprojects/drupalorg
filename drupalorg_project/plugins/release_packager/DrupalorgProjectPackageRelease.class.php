<?php

class DrupalorgProjectPackageRelease implements ProjectReleasePackagerInterface {
  /**
   * Configuration settings.
   */
  protected $conf = array(
    'license' => '/var/www/drupal.org/htdocs/sites/all/modules/drupalorg/drupalorg_project/plugins/release_packager/LICENSE.txt',
    'tar' => '/bin/tar',
    'gzip' => '/bin/gzip',
    'zip' => '/usr/bin/zip',
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

  protected $temp_directory = '';
  protected $project_build_root = '';

  public function __construct($release_node, $temp_directory) {
    $this->conf['git'] = _versioncontrol_git_get_binary_path();

    // Stash the release node this packager is going to be working on.
    $this->release_node = $release_node;

    // Save all the directory information.
    $this->temp_directory = $temp_directory;

    // Load the project for this release, using our static node_load() cache.
    $this->project_node = node_load(project_release_get_release_project_nid($release_node));

    // We use all of these a lot in a number of functions, so initialize them
    // once here so we can just reuse them whenever we need them.
    $this->project_short_name = escapeshellcmd($this->project_node->field_project_machine_name[$this->project_node->language][0]['value']);
    $this->release_version = escapeshellcmd($release_node->field_release_version[$release_node->language][0]['value']);
    $this->release_file_id = $this->project_short_name . '-' . $this->release_version;
    $this->release_node_view_link = l(t('view'), 'node/' . $this->release_node->nid);
    $this->project_build_root = $this->temp_directory . '/' . $this->project_short_name;

    // Figure out the filenames we're going to be using for our packages.
    $field = field_info_field('field_release_file');
    $instance = field_info_instance('field_collection_item', 'field_release_file', 'field_release_files');
    $file_destination_root = file_field_widget_uri($field, $instance);
    $this->filenames['full_dest_tgz'] = $file_destination_root . '/' . $this->release_file_id . '.tar.gz';
    $this->filenames['full_dest_zip'] = $file_destination_root . '/' . $this->release_file_id . '.zip';
  }

  public function createPackage(&$files) {
    // Files to ignore when checking timestamps:
    $exclude = array('.', '..', 'LICENSE.txt');

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

    $info_files = array();
    $youngest = $this->fileFindYoungest($export_to, 0, $exclude, $info_files);
    if (!empty($this->release_node->project_release['rebuild']) && $tgz_exists && filemtime($this->filenames['full_dest_tgz']) + 300 > $youngest) {
      // The existing tarball for this release is newer than the youngest
      // file in the directory, we're done.
      return 'no-op';
    }

    // If this is a -dev release, do some magic to determine a spiffy
    // "rebuild_version" string which we'll put into any .info files and
    // save in the DB for other uses.
    if (!empty($this->release_node->project_release['rebuild'])) {
      $this->computeRebuildVersion();
    }

    // Update any .info files with packaging metadata.
    foreach ($info_files as $file) {
      if (!$this->fixInfoFileVersion($file)) {
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
    $files[$this->filenames['full_dest_tgz']] = 0;

    // If we're rebuilding, make sure the previous .zip is gone, since just
    // running zip again with the same zip archive won't give us the semantics
    // we want. For example, files that are removed in CVS will still be left
    // in the .zip archive.
    @unlink($this->filenames['full_dest_zip']);
    if (!drupal_exec("{$this->conf['zip']} -rq {$this->filenames['full_dest_zip']} $export_to")) {
      return 'error';
    }
    $files[$this->filenames['full_dest_zip']] = 1;

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
   * Compute and save the 'rebuild version' string for this release.
   *
   * This does some magic in Git to find the latest release tag along
   * the branch we're packaging from, count the number of commits since
   * then, and use that to construct this fancy alternate version string
   * which is useful for the version-specific dependency support in Drupal
   * 7 and higher.
   *
   * This function is all about side effects (sorry). It just uses data
   * already in the packager object and saves the results there and hands
   * them off to project_release.module via its API, so there's no return
   * value, either.
   */
  protected function computeRebuildVersion() {
    $git = $this->conf['git'] . ' --git-dir=' . escapeshellcmd($this->project_node->versioncontrol_project['repo']->root);
    // This is called tag but in reality this is the branch for dev releases.
    $branch = $this->release_node->project_release['tag'];
    // Prepare for preg later.
    $branch_preg = preg_quote(substr($branch, 0, -1));
    // Prepare for execution now.
    $branch = escapeshellcmd($branch);
    // Try to find a tag.
    exec("$git rev-list --topo-order --max-count=1 $branch 2>&1", $last_tag_hash);
    if ($last_tag_hash) {
      exec("$git describe  --tags $last_tag_hash[0] 2>&1", $last_tag);
      if ($last_tag) {
        $last_tag = $last_tag[0];
        // Make sure the tag starts as Drupal formatted (for eg.
        // 7.x-1.0-alpha1) and if we are on a proper branch (ie. not master)
        // then it's on that branch.
        if (preg_match('/^(?<drupalversion>' . $branch_preg . '\d+(?:-[^-]+)?)(?<gitextra>-(?<numberofcommits>\d+-)g[0-9a-f]{7})?$/', $last_tag, $matches)) {
          // If we found additional git metadata (in particular, number of
          // commits) then use that info to build the version string.
          if (isset($matches['gitextra'])) {
            $this->release_version =  $matches['drupalversion'] . '+' . $matches['numberofcommits'] . 'dev';
          }
          // Otherwise, the branch tip is pointing to the same commit as the
          // last tag on the branch, in which case we use the prior tag and
          // add '+0-dev' to indicate we're still on a -dev branch.
          else {
            $this->release_version = $last_tag . '+0-dev';
          }
        }
      }
    }
    project_release_record_rebuild_metadata($this->release_node->nid, $this->release_version);
  }

  /**
   * Fix the given .info file with the specified version string
   */
  protected function fixInfoFileVersion($file) {
    global $site_name;

    $info = "\n; Information added by $site_name packaging script on " . gmdate('Y-m-d') . "\n";
    $info .= 'version = "' . $this->release_version . "\"\n";

    // .info files started with 5.x, so we don't have to worry about version
    // strings like "4.7.x-1.0" in this regular expression. If we can't parse
    // the version (also from an old "HEAD" release), or the version isn't at
    // least 6.x, don't add any "core" attribute at all.
    $matches = array();
    if (preg_match('/^((\d+)\.x)-.*/', $this->release_version, $matches) && $matches[2] >= 6) {
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
