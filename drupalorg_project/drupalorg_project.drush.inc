<?php

/**
 * @file
 * Generate drupal.org download stats.
 *
 * @author Brandon Bergren (http://drupal.org/user/53081)
 */

/**
 * Implementation of hook_drush_command().
 *
 * @See drush_parse_command() for a list of recognized keys.
 *
 * @return
 *   An associative array describing your command(s).
 */
function drupalorg_project_drush_command() {
  $items = array();

  $items['generate-download-stats'] = array(
    'description' => "Generate per-file download statistics based on a set of processed awstats and fastly files.",
    'drupal dependencies' => array('project_release'),
    'aliases' => array('dop'),
    'examples' => array(
      'drush drupalorg-project-generate-download-stats --file "/data/logs/fastly/downloadcounts/comprehensive_download_stats.csv"' => 'Process drupal.org download statistics.',
    ),
    'options' => array(
      'file' => 'A file of aggregated all time download counts',
    ),
  );
  $items['projects-send-for-codereview'] = array(
    'description' => "Calls a job on Jenkins to send projects for code review",
    'aliases' => array('pscr'),
    'examples' => array(
      'drush projects-send-for-codereview' => 'Send commits to jenkins',
    ),
  );

  return $items;
}

/**
 * Command callback. Parse awstats log files and generate download statistics.
 */
function drush_drupalorg_project_generate_download_stats($file = FALSE) {
  // Safety harness off.
  ini_set('memory_limit', '-1');
  if (!$file) {
    return drush_set_error('You must supply a filename!');
  }

  $now = time();
  $filename_to_entity_map = array();

  // Get all the releases from the database
  $result = db_query("SELECT frf.field_release_file_fid AS fid,
      frf.entity_id AS entity_id,
      CONCAT('files', SUBSTRING(fm.uri FROM 9)) AS filepath,
      frp.field_release_project_target_id AS pid,
      api.taxonomy_vocabulary_6_tid AS version_api_tid
    FROM {field_data_field_release_files} frfs
      LEFT JOIN {field_data_field_release_file} frf ON frfs.field_release_files_value = frf.entity_id
      LEFT JOIN {file_managed} fm ON frf.field_release_file_fid = fm.fid
      LEFT JOIN {field_data_field_release_project} frp ON frfs.entity_id = frp.entity_id
      LEFT JOIN {field_data_taxonomy_vocabulary_6} api ON frfs.entity_id = api.entity_id
    WHERE frf.field_release_file_display = 1 AND api.bundle = 'project_release'");

  foreach ($result as $record) {
    $filename_to_entity_map[$record->filepath] = $record->entity_id;
    //$filename_to_project_version_map[$record->filepath] = array($record->pid, !empty($record->version_api_tid) ? $record->version_api_tid : -1);
  }

  $all_time_counts = array();
  drush_log(dt('Parsing @file.', array('@file' => $file)), 'ok');

  $handle = fopen($file, 'r');

  while ($line = fgets($handle)) {
    list($download_count, $filename) = explode(',', $line);
    $all_time_counts[$filename] = (int)$download_count;
  }
  fclose($handle);



  drush_log('Writing statistics to database', 'ok');
  foreach ($filename_to_entity_map as $filepath => $entity_id) {
    if (!empty($all_time_counts[$filepath])) {
      $collection = field_collection_item_load($entity_id);
      if (empty($collection->field_release_file_downloads) || $collection->field_release_file_downloads[LANGUAGE_NONE][0]['value'] != $all_time_counts[$filepath]) {
        $collection->field_release_file_downloads[LANGUAGE_NONE][0]['value'] = $all_time_counts[$filepath];
        $collection->save(TRUE);
      }
    }
  }

  drush_log('Summing release totals', 'ok');
  $release_totals = array();
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'field_collection_item');
  $query->fieldCondition('field_release_file_downloads', 'value', 0, '>');
  $result = $query->execute();
  foreach (array_chunk(array_keys($result['field_collection_item']), 100) as $ids) {
    foreach (field_collection_item_load_multiple($ids, array(), TRUE) as $item) {
      $release_nid = $item->hostEntityId();
      if (isset($release_totals[$release_nid])) {
        $release_totals[$release_nid] += $item->field_release_file_downloads[LANGUAGE_NONE][0]['value'];
      }
      else {
        $release_totals[$release_nid] = $item->field_release_file_downloads[LANGUAGE_NONE][0]['value'];
      }
    }
  }
  drush_log('Summing project totals', 'ok');
  $project_totals = array();
  foreach (array_chunk($release_totals, 100, TRUE) as $chunk) {
    foreach (node_load_multiple(array_keys($chunk), array(), TRUE) as $node) {
      $project_nid = $node->field_release_project[LANGUAGE_NONE][0]['target_id'];
      if (isset($project_totals[$project_nid])) {
        $project_totals[$project_nid] += $chunk[$node->nid];
      }
      else {
        $project_totals[$project_nid] = $chunk[$node->nid];
      }
    }
  }

  drush_log('Saving project totals', 'ok');
  foreach (array_chunk($project_totals, 100, TRUE) as $chunk) {
    foreach (node_load_multiple(array_keys($chunk), array(), TRUE) as $node) {
      if (empty($node->field_download_count) || $node->field_download_count[LANGUAGE_NONE][0]['value'] != $chunk[$node->nid]) {
        $node->field_download_count[LANGUAGE_NONE][0]['value'] = $chunk[$node->nid];
        // Do not use node_save() so node timestamps are not jostled.
        field_attach_presave('node', $node);
        field_attach_update('node', $node);
      }
    }
  }
}

/**
 * Command callback. Parse find changes and send to jenkins.
 */
function drush_drupalorg_project_projects_send_for_codereview() {
  $last = variable_get('drupalorg_last_commit_codereview_vc_op_id', '7827211');
  $project_types = array('project_module');
  $jenkins_hash = variable_get('drupalorg_jenkinshash_for_codereview', 'X');
  $jenkins_url = variable_get('jenkins_url', 'http://localhost:8080/');
  $result = db_query_range('SELECT vc_op_id,repo_id FROM {versioncontrol_operations} WHERE vc_op_id > :last', 0, 100, array(':last' => $last));

  foreach ($result as $row) {
    $repo = versioncontrol_repository_load($row->repo_id);
    $node = node_load($repo->project_nid);
    $last = $row->vc_op_id;
    if (in_array($node->type, $project_types)) {
      $directions = project_git_instructions_get_defaults($node);
      if (!empty($node->nid) && project_promote_project_is_sandbox($node)) {
        $giturl = $directions['@anon_sandbox_url'];
      }
      else {
        $giturl = $directions['@anon_project_url'];
      }
      // Now we build the URL to call
      $call = $jenkins_url . 'buildByToken/buildWithParameters?job=ProjectCodeChecker&token=' . $jenkins_hash . '&nid=' . $node->nid . '&REPO=' . $giturl;
      file_get_contents($call); // Here we call it
    }
  }
  variable_set('drupalorg_last_commit_codereview_vc_op_id', $last);
}
