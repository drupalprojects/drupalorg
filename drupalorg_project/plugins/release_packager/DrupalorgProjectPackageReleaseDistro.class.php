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
    // with the full path to the directory where drush_make is located. This
    // is needed to manually include it as a searchable path for drush
    // extensions, as this script's owner will not likely have a home
    // directory to search.
    $this->conf['drush'] = '/var/www/drupal.org/tools/drush/drush --include=/var/www/drupal.org/tools/drush_make';
  }

  public function createPackage(&$files, &$contents) {

    // First, do the default packaging.
    $rval = parent::createPackage($files, $contents);

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
        wd_err("ERROR: %profile does not have the required 'core' attribute.", array('%profile' => $this->release_file_id), $release_node_view_link);
        return 'error';
      }
      else {

        // Basic sanity check for the format of the attribute. The Git checkout
        // attempt of core will handle the rest of the validation (ie, it will
        // fail if a non-existant tag is specified.
        if (!preg_match("/^(\d+)\.(\d+)(-[a-z0-9]+)?$/", $info['core'], $matches)) {
          wd_err("ERROR: %profile specified an invalid 'core' attribute -- both API version and release are required.", array('%profile' => $this->release_file_id), $release_node_view_link);
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
            wd_err("ERROR: %profile specified an invalid 'core' attribute -- the API version must match the API version of the release.", array('%profile' => $this->release_file_id), $release_node_view_link);
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
        // --drupal-org-log-package-items-to-file: Store package items for
        //   later recording in the database.
        if (!drupal_exec("{$this->conf['drush']} make --drupal-org --drupal-org-build-root={$this->project_build_root} --drupal-org-log-errors-to-file --drupal-org-log-package-items-to-file $drupalorg_makefile .")) {
          // The build failed, get any output error messages and include them
          // in the packaging error report.
          $build_errors_file = "{$this->project_build_root}/build_errors.txt";
          if (file_exists($build_errors_file)) {
            $lines = file($build_errors_file, FILE_IGNORE_NEW_LINES|FILE_SKIP_EMPTY_LINES);
            foreach ($lines as $line) {
            	wd_err("ERROR: $line");
            }
          }
          wd_err("ERROR: Build for %profile failed.", array('%profile' => $no_core_id), $release_node_view_link);
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
          wd_err("ERROR: Build for %core failed.", array('%core' => $core_build_dir), $release_node_view_link);
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

        // Development releases may have changed package contents -- clear out
        // their package item summary so a fresh item summary will be inserted.
        if ($release_node->project_release['rebuild'] && module_exists('project_package')) {
          db_query("DELETE FROM {project_package_local_release_item} WHERE package_nid = %d", $nid);
        }

        // Core was built without the drupal.org drush extension, so the
        // package item for core isn't in the package contents file. Retrieve
        // it manually.
        if (!($core_release_nid = db_result(db_query("SELECT nid FROM {project_release_nodes} WHERE pid = %d AND tag = '%s'", DRUPALORG_CORE_NID, $core_version)))) {
          wd_err("ERROR: Can't find core release for $core_version");
          return 'error';
        }
        $contents[] = $core_release_nid;

        // Retrieve the package contents for the release.
        $package_contents_file = "{$this->project_build_root}/package_contents.txt";
        if (file_exists($package_contents_file)) {
          $lines = file($package_contents_file, FILE_IGNORE_NEW_LINES|FILE_SKIP_EMPTY_LINES);
          foreach ($lines as $line) {
            if (is_numeric($line)) {
              $contents[] = $line;
            }
          }
        }
        else {
          wd_err("ERROR: %file does not exist for %profile release.", array('%file' => $package_contents_file, '%profile' => $this->release_file_id), $release_node_view_link);
          return 'error';
        }
      }
    }
    else {
      wd_msg("No makefile for %profile profile -- skipping extended packaging.", array('%profile' => $this->release_file_id), $release_node_view_link);
    }
    return $rval;
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
