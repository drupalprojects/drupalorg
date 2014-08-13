<?php

class DrupalorgProjectPackageRelease implements ProjectReleasePackagerInterface {
  /**
   * Configuration settings.
   */
  protected $conf = array(
    'tar' => '/bin/tar',
    'gzip' => '/bin/gzip',
    'zip' => '/usr/bin/zip',
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
  protected $temp_directory = '';

  public function __construct($release_node, $temp_directory) {
    $this->conf['git'] = _versioncontrol_git_get_binary_path();
    $this->conf['license'] = realpath(drupal_get_path('module', 'drupalorg_project') . '/plugins/release_packager/LICENSE.txt');

    // Stash the release node this packager is going to be working on.
    $this->release_node = $release_node;

    // Save all the directory information.
    $this->temp_directory = $temp_directory;

    // Load the project for this release, using our static node_load() cache.
    $this->project_node = node_load(project_release_get_release_project_nid($release_node));

    // We use all of these a lot in a number of functions, so initialize them
    // once here so we can just reuse them whenever we need them.
    $this->project_short_name = $this->project_node->field_project_machine_name[$this->project_node->language][0]['value'];
    $this->release_version = $release_node->field_release_version[$release_node->language][0]['value'];
    $this->release_file_id = $this->project_short_name . '-' . $this->release_version;
    $this->release_node_view_link = l(t('view'), 'node/' . $this->release_node->nid);

    // Figure out the filenames we're going to be using for our packages.
    $field = field_info_field('field_release_file');
    $instance = field_info_instance('field_collection_item', 'field_release_file', 'field_release_files');
    $this->file_destination_root = file_field_widget_uri($field, $instance);
    $this->filenames['path_tgz'] = $this->file_destination_root . '/' . $this->release_file_id . '.tar.gz';
    $this->filenames['full_dest_tgz'] = file_stream_wrapper_get_instance_by_uri($this->filenames['path_tgz'])->realpath();
    $this->filenames['path_zip'] = $this->file_destination_root . '/' . $this->release_file_id . '.zip';
    $this->filenames['full_dest_zip'] = file_stream_wrapper_get_instance_by_uri($this->filenames['path_zip'])->realpath();
  }

  public function createPackage(&$files) {
    // Files to ignore when checking timestamps:
    $exclude = array('.', '..', 'LICENSE.txt');

    // Remember if the tar.gz version of this release file already exists.
    $tgz_exists = is_file($this->filenames['full_dest_tgz']);

    if (empty($this->project_node->versioncontrol_project['repo'])) {
      watchdog('package_error', '%project_title does not have a VCS repository defined', array('%project_title' => $this->project_node->title), WATCHDOG_ERROR);
      return 'error';
    }
    $repo = variable_get('git_base_url', 'git://git.drupal.org/project/') . $this->project_node->versioncontrol_project['repo']->name . '.git';

    // Figure out how to check this thing out from Git.
    if (empty($this->release_node->field_release_vcs_label)) {
      watchdog('package_error', '%release_title does not have a VCS repository defined', array('%release_title' => $this->release_node->title), WATCHDOG_ERROR);
      return 'error';
    }
    $git_tag = $this->release_node->field_release_vcs_label[$this->release_node->language][0]['value'];

    // For core, we want to checkout into a directory named via the version,
    // e.g. "drupal-7.0".
    if ($this->project_node->type == 'project_core') {
      $export_to = $this->release_file_id;
    }
    // For everything else, just use the project shortname.
    else {
      $export_to = $this->project_short_name;
    }

    // Full path to the Git clone and exported archive.
    $this->repository = $this->temp_directory . '/clone';
    $this->export = $this->temp_directory . '/' . $export_to;

    // Clone this release from Git, and see if we need to rebuild it.
    if (!drush_shell_exec('%s clone --branch=%s %s %s', $this->conf['git'], $git_tag, $repo, $this->repository)) {
      watchdog('package_error', 'Git clone failed: <pre>@output</pre>', array('@output' => implode("\n", drush_shell_exec_output())), WATCHDOG_ERROR, $this->release_node_view_link);
      return 'error';
    }
    // Archive and expand to preserve timestamps.
    if (!drush_shell_cd_and_exec($this->temp_directory, '%s --git-dir=%s archive --format=tar --prefix=%s/ %s | %s x', $this->conf['git'], $this->repository . '/.git', $export_to, $git_tag, $this->conf['tar'])) {
      watchdog('package_error', 'Git archive failed: <pre>@output</pre>', array('@output' => implode("\n", drush_shell_exec_output())), WATCHDOG_ERROR, $this->release_node_view_link);
      return 'error';
    }
    if (!is_dir($this->export)) {
      watchdog('package_error', '%export does not exist after clone and archive.', array('%export' => $export), WATCHDOG_ERROR, $this->release_node_view_link);
      return 'error';
    }

    $info_files = array(
      'info' => array(),
      'yml' => array(),
    );
    // Use the request time if the youngest file is from the future.
    $youngest = min($this->fileFindYoungest($this->export, 0, $exclude, $info_files), DRUSH_REQUEST_TIME);
    if ($this->release_node->field_release_build_type[$this->release_node->language][0]['value'] === 'dynamic' && $tgz_exists && filemtime($this->filenames['full_dest_tgz']) + 300 > $youngest) {
      // The existing tarball for this release is newer than the youngest
      // file in the directory, we're done.
      return 'no-op';
    }

    // If this is a -dev release, do some magic to determine a spiffy
    // "rebuild_version" string which we'll put into any .info files and
    // save in the DB for other uses.
    if ($this->release_node->field_release_build_type[$this->release_node->language][0]['value'] === 'dynamic') {
      $this->computeRebuildVersion();
    }

    // Update any .info files with packaging metadata.
    foreach ($info_files['info'] as $file) {
      if (!$this->fixInfoFileVersion($file)) {
        watchdog('package_error', 'Failed to update version in %file, aborting packaging.', array('%file' => $file), WATCHDOG_ERROR, $this->release_node_view_link);
        return 'error';
      }
    }
    foreach ($info_files['yml'] as $file) {
      if (!$this->fixInfoYmlFileVersion($file)) {
        watchdog('package_error', 'Failed to update version in %file, aborting packaging.', array('%file' => $file), WATCHDOG_ERROR, $this->release_node_view_link);
        return 'error';
      }
    }

    // Link not copy, since we want to preserve the date...
    @unlink($this->export . '/LICENSE.txt');
    if (!symlink($this->conf['license'], $this->export . '/LICENSE.txt')) {
      watchdog('package_error', 'Adding LICENSE.txt failed.', array(), WATCHDOG_ERROR);
      return 'error';
    }

    // 'h' is for dereference, we want to include the files, not the links
    if (!drush_shell_cd_and_exec($this->temp_directory, "%s -ch --file=- %s | %s -9 --no-name > %s", $this->conf['tar'], $export_to, $this->conf['gzip'], $this->filenames['full_dest_tgz'])) {
      watchdog('package_error', 'Archiving failed: <pre>@output</pre>', array('@output' => implode("\n", drush_shell_exec_output())), WATCHDOG_ERROR);
      return 'error';
    }
    $files[$this->filenames['path_tgz']] = 0;

    // If we're rebuilding, make sure the previous .zip is gone, since just
    // running zip again with the same zip archive won't give us the semantics
    // we want. For example, files that are removed in CVS will still be left
    // in the .zip archive.
    @unlink($this->filenames['full_dest_zip']);
    if (!drush_shell_cd_and_exec($this->temp_directory, "%s -rq %s %s", $this->conf['zip'], $this->filenames['full_dest_zip'], $export_to)) {
      watchdog('package_error', 'Archiving failed: <pre>@output</pre>', array('@output' => implode("\n", drush_shell_exec_output())), WATCHDOG_ERROR);
      return 'error';
    }
    $files[$this->filenames['path_zip']] = 1;

    // We must remove the link before Drush runs drush_delete_dir_contents.
    // Drush cleanup will briefly set all files to 777, including the file
    // LICENSE.txt is linked to. Remove when
    // https://github.com/drush-ops/drush/issues/672 is fixed.
    @unlink($this->export . '/LICENSE.txt');

    return $tgz_exists ? 'rebuild' : 'success';
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
    // This is called tag but in reality this is the branch for dev releases.
    $branch = $this->release_node->field_release_vcs_label[$this->release_node->language][0]['value'];
    // Try to find a tag.
    drush_shell_cd_and_exec($this->repository, '%s rev-list --topo-order --max-count=1 %s 2>&1', $this->conf['git'], $branch);
    $last_tag_hash = drush_shell_exec_output();
    if ($last_tag_hash) {
      drush_shell_cd_and_exec($this->repository, '%s describe --tags %s 2>&1', $this->conf['git'], $last_tag_hash[0]);
      $last_tag = drush_shell_exec_output();
      if ($last_tag) {
        $last_tag = $last_tag[0];
        // Make sure the tag starts as Drupal formatted (for eg.
        // 7.x-1.0-alpha1) and if we are on a proper branch (ie. not master)
        // then it's on that branch.
        if (preg_match('/^(?<drupalversion>' . preg_quote(substr($branch, 0, -1)) . '\d+(?:-[^-]+)?)(?<gitextra>-(?<numberofcommits>\d+-)g[0-9a-f]{7})?$/', $last_tag, $matches)) {
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
   * Fix the given .info file with the specified version string.
   */
  protected function fixInfoFileVersion($file) {
    $site_name = variable_get('site_name', 'Drupal.org');

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
    $info .= 'datestamp = "' . time() . "\"\n";
    $info .= "\n";

    if (!chmod($file, 0644)) {
      watchdog('package_error', 'chmod(@file, 0644) failed', array('@file' => $file), WATCHDOG_ERROR);
      return FALSE;
    }
    if (!$info_fd = fopen($file, 'ab')) {
      watchdog('package_error', "fopen(@file, 'ab') failed", array('@file' => $file), WATCHDOG_ERROR);
      return FALSE;
    }
    if (!fwrite($info_fd, $info)) {
      watchdog('package_error', 'fwrite(@file) failed', array('@file' => $file), WATCHDOG_ERROR);
      return FALSE;
    }
    return TRUE;
  }

  /**
   * Fix the given .info.yml file with the specified version string.
   */
  protected function fixInfoYmlFileVersion($file) {
    $site_name = variable_get('site_name', 'Drupal.org');

    $doc = file_get_contents($file);

    // Comment out the keys we're going to add.
    $doc = preg_replace('/^((?:version|core|project|datestamp)\s*:.*)$/m', '# $1', $doc);

    // Add Drupal.org packaging keys.
    $doc .= "\n# Information added by $site_name packaging script on " . gmdate('Y-m-d') . "\n";
    $doc .= "version: '" . $this->release_version . "'\n";
    $api_term = taxonomy_term_load(project_release_get_release_api_tid($this->release_node));
    if ($api_term !== FALSE) {
      $doc .= "core: '" . $api_term->name . "'\n";
    }
    $doc .= "project: '" . $this->project_short_name . "'\n";
    $doc .= "datestamp: " . time() . "\n";

    if (!chmod($file, 0644)) {
      watchdog('package_error', 'chmod(@file, 0644) failed.', array('@file' => $file), WATCHDOG_ERROR);
      return FALSE;
    }
    if (file_put_contents($file, $doc) === FALSE) {
      watchdog('package_error', 'Writing @file failed.', array('@file' => $file), WATCHDOG_ERROR);
      return FALSE;
    }
    return TRUE;
  }

  /**
   * Find the youngest (newest) file in a directory tree. Stolen wholesale from
   * the original package-drupal.php script. Modified to also notice any files
   * that end with ".info" and store all of them in the array passed in as an
   * argument. Since we have to recurse through the whole directory tree
   * already, we should just record all the info we need in one pass instead of
   * doing it twice.
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
            // There can be dangling links checked into Git.
            if (file_exists("$dir/$file")) {
              $mtime = filemtime("$dir/$file");
              $timestamp = ($mtime > $timestamp) ? $mtime : $timestamp;
              if (preg_match('/^.+\.info$/', $file)) {
                $info_files['info'][] = $dir . '/' . $file;
              }
              elseif (preg_match('/^.+\.info\.yml$/', $file)) {
                $info_files['yml'][] = $dir . '/' . $file;
              }
            }
          }
        }
      }
      closedir($fp);
    }
    return $timestamp;
  }
}
