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
    'description' => "Generate per-file download statistics based on a set of awstats files.",
    'drupal dependencies' => array('project_release'),
    'aliases' => array('dop'),
    'examples' => array(
      'drush drupalorg-project-generate-download-stats --glob "/var/log/DROP/drupal-awstats-data/awstats*.ftp.drupal.org.txt"' => 'Process drupal.org download statistics.',
    ),
    'options' => array(
      'glob' => 'A shell glob used to determine the set of files to process.',
    ),
  );

  return $items;
}

/**
 * Command callback. Parse awstats log files and generate download statistics.
 */
function drush_drupalorg_project_generate_download_stats($glob = FALSE) {
  // Safety harness off.
  ini_set('memory_limit', '-1');
  if (!$glob) {
    return drush_set_error('You must supply a glob!');
  }

  $now = time();
  $map = array();
  $pcmap = array();
  $result = db_query('SELECT f.fid, f.filepath, n.pid, n.version_api_tid FROM {files} f INNER JOIN {project_release_file} r ON f.fid = r.fid INNER JOIN {project_release_nodes} n ON r.nid = n.nid');
  while ($row = db_fetch_object($result)) {
    $map[$row->filepath] = $row->fid;
    $pcmap[$row->filepath] = array($row->pid, !empty($row->version_api_tid) ? $row->version_api_tid : -1);
  }

  $result = db_query('SELECT tid, name FROM {term_data} WHERE vid = %d', _project_release_get_api_vid());
  $coremap = array();
  while ($row = db_fetch_object($result)) {
    $coremap[$row->tid] = $row->name;
  }
  $coremap[-1] = 'Unknown';

  $files = glob($glob);
  $globalcounts = array();
  $mcounts = array();
  foreach ($files as $file) {
    $month = array();
    preg_match('/awstats(\d{2})(\d{4})/', $file, $month);
    if (!isset($month[1]) || !isset($month[2])) {
      return drush_set_error('BAD_NAMING_CONVENTION', dt('Could not determine month from file name!'));
    }
    $month = "$month[2]$month[1]";

    $handle = fopen($file, 'r');
    while ($line = fgets($handle)) {
      if ('BEGIN_SIDER ' == substr($line, 0, 12)) {
        break;
      }
    }
    $tcount = (int) substr($line, 12);
    $count = 0;
    while ($count < $tcount) {
      $line = fgets($handle);
      $arr = explode(' ', substr($line, 1));
      $globalcounts[$arr[0]] += (int) $arr[1];
      $curr = $pcmap[$arr[0]];
      $mcounts[$curr[0]][$month][$curr[1]] += (int) $arr[1];
      $count++;
    }
    $line = fgets($handle);
    fclose($handle);
    if ($line != "END_SIDER\n") {
      return drush_set_error('AWSTATS_FILE_CORRUPTED', dt('END_SIDER was not where we expected it!'));
    }
    db_query('SELECT 1'); // Ping the database to keep our connection alive.
  }

  $conn = new Mongo();
  $m = $conn->selectDB("download-statistics");
  $coll = $m->selectCollection('data');
  $coll->remove();
  foreach ($mcounts as $project => $months) {
    ksort($months);
    $data = array();
    foreach ($months as $month => $cores) {
      foreach ($cores as $core => $downloads) {
        $data[$month][$coremap[$core]] = $downloads;
      }
      ksort($data[$month]);
    }
    $coll->insert(array('pid' => (int)$project, 'downloads' => $data));
  }

  drush_log('Writing statistics to database', 'ok');
  foreach ($map as $k => $v) {
    if (!empty($globalcounts[$k])) {
      db_query('UPDATE {project_release_file} SET downloads = %d WHERE fid = %d', $globalcounts[$k], $v);
    }
  }
  drush_log('Completed.', 'ok');
}