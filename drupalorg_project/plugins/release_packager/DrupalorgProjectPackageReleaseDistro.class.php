<?php

/**
 * Packaging plugin that handles packaged drupal distributions.
 *
 * This just extends the default packaging case to add the drush make logic.
 */
class DrupalorgProjectPackageReleaseDistro extends DrupalorgProjectPackageRelease implements ProjectReleasePackagerInterface {

  public function __construct($release_node, $temp_directory) {
    parent::__construct($release_node, $temp_directory);

    // Full path to the drush executable. This also needs to define --include
    // with the full path to the directory where drupalorg_drush is located.
    // This is needed to manually include it as a searchable path for drush
    // extensions, as this script's owner will not likely have a home
    // directory to search.
    $this->conf['drush'] = '/usr/bin/php /var/www/drupal.org/tools/drush5/drush.php --no-cache --include=/var/www/drupal.org/tools/drupalorg_drush';
  }

  public function createPackage(&$files) {

    // First, do the default packaging.
    $rval = parent::createPackage($files);

    if ($rval == 'error' || $rval == 'no-op') {
      // If we already failed or determined there's nothing to do, return
      // immediately instead of doing any of the distro-specific packaging.
      return $rval;
    }

    // Move inside the profile directory.
    $profile_dir = $this->temp_directory . '/' . $this->project_short_name;

    // In order for extended packaging to take place, the profile must have a
    // file named drupal-org.make in the main directory of their profile.
    $drupalorg_makefile = 'drupal-org.make';

    // If they need to do fancy thing with core (patches, specific Git
    // revisions, etc) they need to define core in a separate .make file.
    $drupalorg_core_makefile = $profile_dir . '/drupal-org-core.make';

    if (file_exists($profile_dir . '/' . $drupalorg_makefile)) {
      // On packaged install profiles, we want the profile-only tarball to be
      // the heaviest weight in the {project_release_file} table so it sinks
      // to the bottom of various listings.
      $files[$this->filenames['path_tgz']] = 10;
      $files[$this->filenames['path_zip']] = 11;


      // Parse the drupal-org.make file since we'll need to inspect the 'core'
      // attribute.
      $contrib_info = drupal_parse_info_file($profile_dir . '/' . $drupalorg_makefile);

      // If the distro defines its own drupal-org-core.make file, use that.
      if (file_exists($drupalorg_core_makefile)) {
        // Parse this so we can validate the 'core' attribute later.
        $core_info = drupal_parse_info_file($drupalorg_core_makefile);
      }

      // Otherwise, create one automatically just using the 'core' attribute
      // from the drupal-org.make file and write it out into the build root.
      else {
        if (!isset($contrib_info['core'])) {
          watchdog('package_error', "%profile does not have the required 'core' attribute.", array('%profile' => $this->release_file_id), WATCHDOG_ERROR, $this->release_node_view_link);
          return 'error';
        }

        // Write a drupal-org-core.make file used to build core.
        $core_info = $this->createCoreMakeFile($contrib_info['core'], $drupalorg_core_makefile);
      }

      // Now that we have both of the .make files we're going to use,
      // ensure that the core major version matches across both files and the
      // API version of the release node itself.
      $core_parts = explode('.', $core_info['core']);
      $contrib_parts = explode('.', $contrib_info['core']);
      $release_parts = explode('.', $this->release_version);

      if ($core_parts[0] != $contrib_parts[0]) {
        watchdog('package_error', "%profile specified different major versions in the 'core' attributes in drupal-org.make and drupal-org-core.make.", array('%profile' => $this->release_file_id), WATCHDOG_ERROR, $this->release_node_view_link);
      }
      if ($core_parts[0] != $release_parts[0]) {
        watchdog('package_error', "%profile specified an invalid 'core' attribute -- the core major version must match the API version of the release.", array('%profile' => $this->release_file_id), WATCHDOG_ERROR, $this->release_node_view_link);
        return 'error';
      }

      // NO-CORE DISTRIBUTION.

      $no_core_id = "{$this->release_file_id}-no-core";
      // Build the drupal file path and the full file path for tgz and zip.
      $no_core_file_path_tgz = $this->file_destination_root . '/' . $no_core_id . '.tar.gz';
      $no_core_full_dest_tgz = file_stream_wrapper_get_instance_by_uri($no_core_file_path_tgz)->realpath();
      $no_core_file_path_zip = $this->file_destination_root . '/' . $no_core_id . '.zip';
      $no_core_full_dest_zip = file_stream_wrapper_get_instance_by_uri($no_core_file_path_zip)->realpath();

      // Run drush_make to build the profile's contents.
      // --drupal-org: Invoke drupal.org specific validation/processing.
      // --drupal-org-build-root: Let the script know where to place it's
      //   build-related files.
      // --drupal-org-log-errors-to-file: Store build errors for later output.
      // --drupal-org-log-package-metadata: Store package metadata for
      //   later recording in the database.
      if (!drush_shell_cd_and_exec($profile_dir, $this->conf['drush'] . ' make --drupal-org=contrib --drupal-org-build-root=%s --drupal-org-log-errors-to-file --drupal-org-log-package-metadata=metadata-contrib.json %s .', $this->temp_directory, $drupalorg_makefile)) {
        // The build failed, get any output error messages and include them
        // in the packaging error report.
        if (file_exists($profile_dir . '/build_errors.txt')) {
          $lines = file($profile_dir . '/build_errors.txt', FILE_IGNORE_NEW_LINES|FILE_SKIP_EMPTY_LINES);
        }
        else {
          $lines = drush_shell_exec_output();
        }
        watchdog('error', 'Build for %profile failed: <pre>@output</pre>', array('%profile' => $no_core_id, '@output' => implode("\n", $lines)), WATCHDOG_ERROR, $this->release_node_view_link);
        return 'error';
      }

      // Package the no-core distribution.
      // 'h' is for dereference, we want to include the files, not the links
      if (!drush_shell_cd_and_exec($this->temp_directory, '%s -ch --file=- %s | %s -9 --no-name > %s', $this->conf['tar'], $this->project_short_name, $this->conf['gzip'], $no_core_full_dest_tgz)) {
        watchdog('package_error', 'Archiving failed: <pre>@output</pre>', array('@output' => implode("\n", drush_shell_exec_output())), WATCHDOG_ERROR);
        return 'error';
      }
      $files[$no_core_file_path_tgz] = 6;

      @unlink($no_core_full_dest_zip);
      if (!drush_shell_cd_and_exec($this->temp_directory, '%s -rq %s %s', $this->conf['zip'], $no_core_full_dest_zip, $this->project_short_name)) {
        watchdog('package_error', 'Archiving failed: <pre>@output</pre>', array('@output' => implode("\n", drush_shell_exec_output())), WATCHDOG_ERROR);
        return 'error';
      }
      $files[$no_core_file_path_zip] = 7;


      // CORE DISTRIBUTION.

      // Create the name of the directory where we'll build core. This will be
      // the top-level directory in the fully packaged distribution release.
      // We use the profile's shortname and full version string (just like the
      // tarball name itself) to prevent end-users from accidentally
      // clobbering directories when they unpack multiple distribution
      // releases.
      $core_build_dir = $this->release_file_id;

      // Run drush_make to build core.
      // --drupal-org=core: Invoke drupal.org specific validation/processing.
      // --drupal-org-build-root: Let the script know where to place it's
      //   build-related files.
      // --drupal-org-log-errors-to-file: Store build errors for later output.
      // --drupal-org-log-package-metadata: Store package metadata for
      //   later recording in the database.
      if (!drush_shell_cd_and_exec($this->temp_directory, $this->conf['drush'] . ' make --drupal-org=core --drupal-org-build-root=%s --drupal-org-log-errors-to-file --drupal-org-log-package-metadata=metadata-core.json %s %s', $this->temp_directory, $drupalorg_core_makefile, $core_build_dir)) {
        // The build failed, get any output error messages and include them
        // in the packaging error report.
        if (file_exists($this->temp_directory . '/build_errors.txt')) {
          $lines = file($this->temp_directory . '/build_errors.txt', FILE_IGNORE_NEW_LINES|FILE_SKIP_EMPTY_LINES);
        }
        else {
          $lines = drush_shell_exec_output();
        }
        watchdog('error', 'Build for %profile failed: <pre>@output</pre>', array('%profile' => $no_core_id, '@output' => implode("\n", $lines)), WATCHDOG_ERROR, $this->release_node_view_link);
        return 'error';
      }

      // Move the profile into place inside core.
      if (!rename($this->temp_directory . '/' . $this->project_short_name, $this->temp_directory . '/' . $core_build_dir . '/profiles/' . $this->project_short_name)) {
        watchdog('package_error', "Can't rename %project_short_name to %destination", array('%project_short_name' => $this->project_short_name, '%destination' => $core_build_dir . '/profiles/' . $this->project_short_name), WATCHDOG_ERROR);
        return 'error';
      }

      $core_id = "{$this->release_file_id}-core";

      // Build the drupal file path and the full file path for tgz and zip.
      $core_file_path_tgz = $this->file_destination_root . '/' . $core_id . '.tar.gz';
      $core_full_dest_tgz = file_stream_wrapper_get_instance_by_uri($core_file_path_tgz)->realpath();
      $core_file_path_zip = $this->file_destination_root . '/' . $core_id . '.zip';
      $core_full_dest_zip = file_stream_wrapper_get_instance_by_uri($core_file_path_zip)->realpath();

      // Package the core distribution.
      // 'h' is for dereference, we want to include the files, not the links
      if (!drush_shell_cd_and_exec($this->temp_directory, '%s -ch --file=- %s | %s -9 --no-name > %s', $this->conf['tar'], $core_build_dir, $this->conf['gzip'], $core_full_dest_tgz)) {
        watchdog('package_error', 'Archiving failed: <pre>@output</pre>', array('@output' => implode("\n", drush_shell_exec_output())), WATCHDOG_ERROR);
        return 'error';
      }
      // We want this to float to the top, so give it the lightest weight.
      $files[$core_file_path_tgz] = 0;

      @unlink($core_full_dest_zip);
      if (!drush_shell_cd_and_exec($this->temp_directory, '%s -rq %s %s', $this->conf['zip'], $core_full_dest_zip, $core_build_dir)) {
        watchdog('package_error', 'Archiving failed: <pre>@output</pre>', array('@output' => implode("\n", drush_shell_exec_output())), WATCHDOG_ERROR);
        return 'error';
      }
      // We want the .zip version with core to be ligher than the non-core
      // files, but heavier than .tar.gz.
      $files[$core_file_path_zip] = 1;

      // If project_package exists, process the package metadata and record
      // everything we just packaged up with this release.
      if (module_exists('project_package')) {
        // Development releases may have changed package contents -- clear
        // out their package items so a fresh item summary will be built.
        if ($this->release_node->field_release_build_type[$this->release_node->language][0]['value'] === 'dynamic') {
          db_query("DELETE FROM {project_package_local_release_item} WHERE package_nid = :nid", array(':nid' => $this->release_node->nid));
        }

        // Retrieve the package metadata.
        foreach (array('core', 'contrib') as $type) {
          $metadata_file = $this->temp_directory . '/metadata-' . $type . '.json';
          if (file_exists($metadata_file)) {
            $json = file_get_contents($metadata_file);
            $metadata = json_decode($json, TRUE);
          }
          else {
            watchdog('package_error', '%file does not exist for %profile release.', array('%file' => 'metadata-' . $type . '.json', '%profile' => $this->release_file_id), WATCHDOG_ERROR, $this->release_node_view_link);
            return 'error';
          }
          // Record everything included in the release.
          $this->recordPackageMetadata($metadata);
        }
      }

    }
    else {
      watchdog('package', 'No makefile for %profile profile, skipping extended packaging.', array('%profile' => $this->release_file_id), WATCHDOG_WARNING, $this->release_node_view_link);
    }
    return $rval;
  }

  /**
   * Record information about everything packaged in a release.
   *
   * @param array $metadata
   *   An array of packaging metadata as provided by drush make.
   */
  public function recordPackageMetadata($metadata) {
    $local_projects = array();
    if (!empty($metadata['project'])) {
      foreach ($metadata['project'] as $name => $project) {
        if (!empty($project['nid'])) {
          $local_projects[] = $project['nid'];
          $this->recordPatchInfo($project, $project['nid'], 'local');
        }
        else {
          // TODO: handle 'remote' projects as if they were libraries...
        }
      }
    }

    if (!empty($metadata['library'])) {
      foreach ($metadata['library'] as $name => $library) {
        if (!empty($library['url'])) {
          // Record the remote item and save its ID in case there are patches.
          $remote_id = project_package_record_remote_item($this->release_node->nid, $library['url'], $name);
          $this->recordPatchInfo($library, $remote_id, 'remote');
        }
      }
    }

    // Record all the local projects themselves.
    if (!empty($local_projects)) {
      project_package_record_local_items($this->release_node->nid, $local_projects);
    }

  }

  /**
   * Record information about patches for a single packaging item.
   *
   * @param array $item
   *   An array of packaging metadata about a specific item. This could be
   *   either a project or a library.
   * @param integer $item_id
   *   The unique ID for the packaged item. If $item is a project, this should
   *   be the release node ID of the release packaged for that project. If
   *   $item is a library, this should be the 'id' column from
   *   {project_package_remote_item}.
   * @param string $type
   *   What type of thing $item is describing. Can be 'local' for a project or
   *   'remote' for a library.
   */
  public function recordPatchInfo($item, $item_id, $type) {
    if (!empty($item['patch'])) {
      foreach ($item['patch'] as $url) {
        project_package_record_patch($this->release_node->nid, $url, $item_id, $type);
      }
    }
  }

  /**
   * Construct a .make file which will build Drupal core.
   *
   * This is a very simple 'bootstrap' .make file, which should only ever
   * include the minimal package metadata to build core.
   *
   * All arguments should be in a format that drush_make can understand.
   *
   * @param $core_version
   *   The core release to package with the profile.
   * @param $core_makefile
   *   The path to the make file to create.
   *
   * @return array
   *   The information we just wrote out as if we had parsed the .make file
   *   with drupal_parse_info_file()
   */
  protected function createCoreMakeFile($core_version, $core_makefile) {
    // See what they defined for the top-level 'core' attribute. If they just
    // said something like '7.x' we want to use '7' as the version so drush
    // make finds the latest official core release. If they actually want
    // 7.x-dev (evil!) they need to say so explicitly via a separate
    // drupal-org-core.make file.
    $matches = array();
    if (preg_match("/^(\d+)\.x$/", $core_version, $matches)) {
      $core_project_version = $matches[1];
    }
    else {
      $core_project_version = $core_version;
    }
    $output = "api = 2\n";
    $output .= "core = $core_version\n";
    $output .= "projects[drupal] = $core_project_version\n";
    file_put_contents($core_makefile, $output);

    // Return this .make file as a parsed info array.
    return array(
      'api' => 2,
      'core' => $core_version,
      'projects' => array(
        'drupal' => $core_project_version,
      ),
    );
  }
}
