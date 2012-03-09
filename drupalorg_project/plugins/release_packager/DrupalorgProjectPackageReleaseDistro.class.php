<?php

/**
 * Packaging plugin that handles packaged drupal distributions.
 *
 * This just extends the default packaging case to add the drush make logic.
 */
class DrupalorgProjectPackageReleaseDistro extends DrupalorgProjectPackageRelease implements ProjectReleasePackagerInterface {

  public function __construct($release_node, $file_destination_root, $file_destination_subdir, $temp_directory) {
    parent::__construct($release_node, $file_destination_root, $file_destination_subdir, $temp_directory);

    // Full path to the drush executable. This also needs to define --include
    // with the full path to the directory where drupalorg_drush is located.
    // This is needed to manually include it as a searchable path for drush
    // extensions, as this script's owner will not likely have a home
    // directory to search.
    $this->conf['drush'] = '/usr/bin/php /var/www/drupal.org/tools/drush5/drush.php --include=/var/www/drupal.org/tools/drupalorg_drush';
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
    if (!drupal_chdir("{$this->project_build_root}/{$this->project_short_name}")) {
      return 'error';
    }

    // In order for extended packaging to take place, the profile must have a
    // file named drupal-org.make in the main directory of their profile.
    $drupalorg_makefile = 'drupal-org.make';

    if (file_exists($drupalorg_makefile)) {
      // On packaged install profiles, we want the profile-only tarball to be
      // the heaviest weight in the {project_release_file} table so it sinks
      // to the bottom of various listings.
      $files[$this->filenames['file_path_tgz']] = 10;
      $files[$this->filenames['file_path_zip']] = 11;

      // Search the .make file for the required 'core' attribute.
      $info = drupal_parse_info_file($drupalorg_makefile);

      // Only proceed if a core release was found.
      if (!isset($info['core'])) {
        wd_err("ERROR: %profile does not have the required 'core' attribute.", array('%profile' => $this->release_file_id), $this->release_node_view_link);
        return 'error';
      }
      else {

        // Basic sanity check for the format of the attribute. The Git checkout
        // attempt of core will handle the rest of the validation (ie, it will
        // fail if a non-existant tag is specified.
        if (!preg_match("/^(\d+)\.(\d+)(-[a-z0-9]+)?$/", $info['core'], $matches)) {
          wd_err("ERROR: %profile specified an invalid 'core' attribute -- both API version and release are required.", array('%profile' => $this->release_file_id), $this->release_node_view_link);
          return 'error';
        }
        else {
          // Compare the Drupal API version in the profile's version string
          // with the API version of core specificed in the .make file --
          // these should match.
          $profile_api_version = $matches[1];
          $parts = explode('.', $this->release_version);
          $release_api_version = $parts[0];
          
          if ($profile_api_version != $release_api_version) {
            wd_err("ERROR: %profile specified an invalid 'core' attribute -- the API version must match the API version of the release.", array('%profile' => $this->release_file_id), $this->release_node_view_link);
            return 'error';
          }
        }

        // NO-CORE DISTRIBUTION.

        $no_core_id = "{$this->release_file_id}-no-core";

        // Build the drupal file path and the full file path for tgz and zip.
        $no_core_file_path_tgz = "{$this->file_destination_subdir}/$no_core_id.tar.gz";
        $no_core_full_dest_tgz = "{$this->file_destination_root}/$no_core_file_path_tgz";
        $no_core_file_path_zip = "{$this->file_destination_subdir}/$no_core_id.zip";
        $no_core_full_dest_zip = "{$this->file_destination_root}/$no_core_file_path_zip";

        // Run drush_make to build the profile's contents.
        // --drupal-org: Invoke drupal.org specific validation/processing.
        // --drupal-org-build-root: Let the script know where to place it's
        //   build-related files.
        // --drupal-org-log-errors-to-file: Store build errors for later output.
        // --drupal-org-log-package-metadata: Store package metadata for
        //   later recording in the database.
        if (!drupal_exec("{$this->conf['drush']} make --drupal-org --drupal-org-build-root={$this->project_build_root} --drupal-org-log-errors-to-file --drupal-org-log-package-metadata=metadata-contrib.json $drupalorg_makefile .")) {
          // The build failed, get any output error messages and include them
          // in the packaging error report.
          $build_errors_file = "{$this->project_build_root}/build_errors.txt";
          if (file_exists($build_errors_file)) {
            $lines = file($build_errors_file, FILE_IGNORE_NEW_LINES|FILE_SKIP_EMPTY_LINES);
            foreach ($lines as $line) {
            	wd_err("ERROR: $line");
            }
          }
          wd_err("ERROR: Build for %profile failed.", array('%profile' => $no_core_id), $this->release_node_view_link);
          return 'error';
        }

        // Change into the profile build directory.
        if (!drupal_chdir($this->project_build_root)) {
          return 'error';
        }

        // Package the no-core distribution.
        // 'h' is for dereference, we want to include the files, not the links
        if (!drupal_exec("{$this->conf['tar']} -ch --file=- {$this->project_short_name} | {$this->conf['gzip']} -9 --no-name > $no_core_full_dest_tgz")) {
          return 'error';
        }
        $files[$no_core_file_path_tgz] = 6;

        @unlink($no_core_full_dest_zip);
        if (!drupal_exec("{$this->conf['zip']} -rq $no_core_full_dest_zip {$this->project_short_name}")) {
          return 'error';
        }
        $files[$no_core_file_path_zip] = 7;


        // CORE DISTRIBUTION.

        // Write a small .make file used to build core.
        $core_version = $info['core'];
        $core_build_dir = "drupal-$core_version";
        $core_makefile = "$core_build_dir.make";
        $this->createCoreMakeFile($core_version, $core_makefile);

        // Run drush_make to build core.
        if (!drupal_exec("{$this->conf['drush']} make $core_makefile $core_build_dir")) {
          // The build failed, bail out.
          wd_err("ERROR: Build for %core failed.", array('%core' => $core_build_dir), $this->release_node_view_link);
          return 'error';
        }

        // Move the profile into place inside core.
        if (!rename($this->project_short_name, "$core_build_dir/profiles/{$this->project_short_name}")) {
          wd_err("ERROR: can't rename {$this->project_short_name} to $core_build_dir/profiles/{$this->project_short_name}");
          return 'error';
        }

        $core_id = "{$this->release_file_id}-core";

        // Build the drupal file path and the full file path for tgz and zip.
        $core_file_path_tgz = "{$this->file_destination_subdir}/$core_id.tar.gz";
        $core_full_dest_tgz = "{$this->file_destination_root}/$core_file_path_tgz";
        $core_file_path_zip = "{$this->file_destination_subdir}/$core_id.zip";
        $core_full_dest_zip = "{$this->file_destination_root}/$core_file_path_zip";

        // Package the core distribution.
        // 'h' is for dereference, we want to include the files, not the links
        if (!drupal_exec("{$this->conf['tar']} -ch --file=- $core_build_dir | {$this->conf['gzip']} -9 --no-name > $core_full_dest_tgz")) {
          return 'error';
        }
        // We want this to float to the top, so give it the lightest weight.
        $files[$core_file_path_tgz] = 0;

        @unlink($core_full_dest_zip);
        if (!drupal_exec("{$this->conf['zip']} -rq $core_full_dest_zip $core_build_dir")) {
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
          if ($this->release_node->project_release['rebuild']) {
            db_query("DELETE FROM {project_package_local_release_item} WHERE package_nid = %d", $this->release_node->nid);
          }

          // TODO: Fix this once http://drupal.org/node/1469714 is deployed
          // and we can safely use --drupal-org-log-package-metadata when
          // building core, too.
          // Core was built without the drupal.org drush extension, so the
          // package item for core isn't in the package contents file.
          // Retrieve it manually.
          if (!($core_release_nid = db_result(db_query("SELECT nid FROM {project_release_nodes} WHERE pid = %d AND tag = '%s'", DRUPALORG_CORE_NID, $core_version)))) {
            wd_err("ERROR: Can't find core release for $core_version");
            return 'error';
          }
          project_package_record_local_items($this->release_node->nid, array($core_release_nid));

          // Retrieve the contrib package metadata.
          $contrib_metadata_file = "{$this->project_build_root}/metadata-contrib.json";
          if (file_exists($contrib_metadata_file)) {
            $json = file_get_contents($contrib_metadata_file);
            $contrib_metadata = json_decode($json, TRUE);
          }
          else {
            wd_err("ERROR: %file does not exist for %profile release.", array('%file' => $contrib_metadata_file, '%profile' => $this->release_file_id), $this->release_node_view_link);
            return 'error';
          }

          // Record everything included in the release.
          $this->recordPackageMetadata($contrib_metadata);
        }
      }
    }
    else {
      wd_msg("No makefile for %profile profile -- skipping extended packaging.", array('%profile' => $this->release_file_id), $this->release_node_view_link);
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

  public function cleanupFailedBuild() {
    $extensions = array('.tar.gz', '.zip');
    $release_file_base = $this->file_destination_root . '/' . $this->file_destination_subdir . '/' . $this->release_file_id;

    foreach (array('', '-no-core', '-core') as $variant) {
      foreach ($extensions as $extension) {
        $filename = $release_file_base . $variant . $extension;
        if (file_exists($filename)) {
          unlink($filename);
        }
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
   */
  protected function createCoreMakeFile($core_version, $core_makefile) {
    $output = '';
    $output .= "core = $core_version\n";
    $output .= "projects[drupal] = $core_version\n";
    file_put_contents($core_makefile, $output);
  }
}
