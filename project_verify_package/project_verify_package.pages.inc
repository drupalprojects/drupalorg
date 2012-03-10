<?php

/**
 * @file
 * Page callbacks for drupal.org specific verification helpers for the project
 * packaging system.
 */

// -------------------
// BEGIN CONFIGURATION
// -------------------

// The full path of the drush executable.
define('PROJECT_VERIFY_PACKAGE_DRUSH_BIN', '/usr/bin/php /var/www/drupal.org/tools/drush5/drush.php');

// The full path of the directory that contains the drush_make
// extensions.
define('PROJECT_VERIFY_PACKAGE_DRUPALORG_DRUSH_PATH', '/var/www/drupal.org/tools/drupalorg_drush');

// The URL to retrieve the package's .info file. The following tokens are
// available:
//   %project_shortname - The project shortname.
//   %makefile - The value of PROJECT_VERIFY_PACKAGE_MAKE_FILE.
//   %vcs_label - The VCS label (branch or tag) for with the release.
define('PROJECT_VERIFY_PACKAGE_MAKE_FILE_URI', "http://drupalcode.org/project/%project_shortname.git/blob_plain/%vcs_label:/%makefile");

// URI of the 'How to package a profile' handbook page.
define('DOCUMENTATION_LINK', 'http://drupal.org/node/642116');

// The name of the .make file to convert to or verify.
define('PROJECT_VERIFY_PACKAGE_MAKE_FILE', 'drupal-org.make');

// -----------------
// END CONFIGURATION
// -----------------


/**
 * Runs a drush command via pipes, so that nothing touches the I/O subsystem.
 *
 * @param $command
 *   The drush command to send.
 * @param $input
 *   The input to pipe to the drush command.
 * @return
 *   An array, the first element is the command output, the second element is
 *   any error output, and the third element is the command return value.
 */
function project_verify_package_run_drush_via_pipe($command, $input) {

  $descriptorspec = array(
     0 => array("pipe", "r"),  // STDIN
     1 => array("pipe", "w"),  // STDOUT
     2 => array("pipe", "w"),  // STDERR
  );

  // drush expects a terminal, so give it one.
  $env = array('TERM' => 'vt100');

  $process = proc_open(PROJECT_VERIFY_PACKAGE_DRUSH_BIN . ' --include=' . PROJECT_VERIFY_PACKAGE_DRUPALORG_DRUSH_PATH . " $command -", $descriptorspec, $pipes, NULL, $env);

  if (is_resource($process)) {
      // $pipes now looks like this:
      // 0 => writeable handle connected to child STDIN.
      // 1 => readable handle connected to child STDOUT.
      // 2 => readable handle connected to child STDERR.
      fwrite($pipes[0], $input);
      fclose($pipes[0]);

      $output = stream_get_contents($pipes[1]);
      fclose($pipes[1]);

      $errors = stream_get_contents($pipes[2]);
      fclose($pipes[2]);

      // It is important that you close any pipes before calling
      // proc_close in order to avoid a deadlock.
      $return_value = proc_close($process);
  }
  else {
    $output = '';
    $errors = t('Unable to open drush process.');
    $return_value = 1;
  }

  return array($output, $errors, $return_value);
}

/**
 * Helper to get file contents from a URL using a variety of methods.
 *
 * If PHP is configured to allow URLs in fopen(), use file_get_contents().
 * Otherwise, if PHP has libcurl loaded, use that. Finally, fall back to
 * attempting to execute wget from a pipe.
 *
 * @param $url
 *   URL for the file to fetch.
 * @return
 *   An array, first element is a return status string (one of 'success',
 *   'failure', or 'not found'), second element is the .make file on success,
 *   possibly an error message on failure, and nothing if the file is not
 *   found.
 */
function project_verify_package_get_remote_file($url) {
  $result = 'not found';
  $data = 'not found';

  // Use fopen if allowed.
  if (ini_get('allow_url_fopen')) {
    if ($output = file_get_contents($url)) {
      $result = 'success';
      $data = $output;
    }
  }
  // Fallback to cURL if it exists.
  elseif (function_exists('curl_init')) {
    $ch = curl_init($url);
    curl_setopt($ch, CURLOPT_TIMEOUT, 50);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, TRUE);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, TRUE);
    $output = curl_exec($ch);
    // Most likely a server error.
    if ($output === FALSE) {
      $result = 'failure';
      $data = curl_error($ch);
    }
    // All HTTP codes other than 200 assume that the file does not exist on
    // the server.
    elseif (curl_getinfo($ch, CURLINFO_HTTP_CODE) == "200") {
      $result = 'success';
      $data = $output;
    }
    curl_close($ch);
  }
  // Last try, wget.
  else {
    $output = passthru('wget -q -O - ' . escapeshellarg($url), $return_value);
    if ($return_value === 0) {
      $result = 'success';
      $data = $output;
    }
  }

  return array($result, $data);
}

/**
 * Format the output returned from an exec() call.
 *
 * @param $output
 *   A string of output data.
 * @return
 *   An array of strings, each string is a formatted version of the $output
 *   array. The first element is the raw output, the second element is
 *   escaped, and safe to output to a browser. In both cases, the lines are
 *   passed through trim() and any blank lines are removed.
 */
function project_verify_package_clean_output($output) {
  $escaped_output_array = array();
  $raw_output_array = array();
  $lines = explode("\n", $output);
  foreach ($lines as $line) {
    $line = trim($line);
    if (!empty($line)) {
      $escaped_output_array[] = check_plain($line);
      $raw_output_array[] = $line;
    }
  }
  $escaped_output = implode("\n", $escaped_output_array);
  $raw_output = implode("\n", $raw_output_array);

  return array($raw_output, $escaped_output);
}

/**
 * Verify if a drupalorg.make file in a release has the right format.
 */
function _project_verify_package_verify_release_node($form, &$form_state) {
  // It's the final release form, not the VCS tag picker.
  if (!empty($form_state['values']['project_release']['version'])) {
    // Check that it's a project category we want to verify.
    $project = node_load(array('nid' => $form['#node']->project_release['pid']));
    if (!empty($project->taxonomy[PROJECT_VERIFY_PACKAGE_PROJECT_TYPE_TID])) {
      $vcs_label = $form_state['values']['project_release']['tag'];
      $token_args = array(
        '%project_title' => $project->title,
        '%project_shortname' => $project->project['uri'],
        '%makefile' => PROJECT_VERIFY_PACKAGE_MAKE_FILE,
        '%vcs_label' => $vcs_label,
        '!doc_link' => DOCUMENTATION_LINK,
      );
      // Try to grab the .make file to verify.
      $url = strtr(PROJECT_VERIFY_PACKAGE_MAKE_FILE_URI, $token_args);
      list($result, $data) = project_verify_package_get_remote_file($url);
      if ($result == 'success') {
        $makefile = $data;
        // Run the 'verify-makefile' drush command. We only diplay a message
        // for errors.
        list ($output, $errors, $return) = project_verify_package_run_drush_via_pipe('verify-makefile', $makefile);
        if (!($return === 0)) {
          // Reformat the output.
          list($raw_output, $escaped_output) = project_verify_package_clean_output($output);
          list($raw_errors, $escaped_errors) = project_verify_package_clean_output($errors);
          $token_args['!output'] = !empty($escaped_output) ? nl2br($escaped_output) : '';
          $token_args['!errors'] = !empty($escaped_errors) ? nl2br($escaped_errors) : '';
          if (empty($form_state['values']['project_release']['rebuild'])) {
            $message = t("<p>The %makefile file for project %project_title failed verification for Git tag %vcs_label.</p><p><a href=\"!doc_link\">!doc_link</a> -- to learn more about correcting these errors.</p>!output!errors<p>Once these errors are fixed, commit the changes to your %makefile, move the release tag for your project (check the Git manual to learn how to move tags if necessary), and submit the release node again.</p>", $token_args);
          }
          else {
            $message = t("<p>The %makefile file for project %project_title failed verification for Git branch %vcs_label.</p><p><a href=\"!doc_link\">!doc_link</a> -- to learn more about correcting these errors.</p>!output!errors<p>Once these errors are fixed, commit them to the branch, then resubmit the release.</p>", $token_args);
          }
          form_set_error('title', $message);
        }
      }
      elseif ($result == 'not found') {
        // If there is no drupal-org.make file at all, we just want to return
        // without a validation error so that distributions which don't
        // use the Drupal.org packaging system can still create releases.
        return;
      }
      else {
        form_set_error('title', t("Pre-packaging verification failed -- unable to retrieve %makefile from %url: %error", array('%makefile' => PROJECT_VERIFY_PACKAGE_MAKE_FILE, '%url' => $url, '%error' => $data)));
      }
    }
  }
}
