<?php

/**
 * Implementation of hook_drush_help().
 */
function drupalorg_drush_help($section) {
  switch ($section) {
    case 'drupalorg:map-content':
      return dt('Update home page map pins.');
    case 'drupalorg:rebuild-stats':
      return dt('Update home page stats.');
    case 'drupalorg:aggregator':
      return dt('Run aggregator module cron.');
  }
}

/**
 * Implementation of hook_drush_command();
 */
function drupalorg_drush_command() {
  return array(
    'map-content' => array(
      'description' => 'Update home page map pins.',
    ),
    'rebuild-stats' => array(
      'description' => 'Update home page stats.',
    ),
    'aggregator' => array(
      'description' => 'Run aggregator module cron.',
    ),
    'cyclic-solr-reindex' => array(
      'description' => 'Continuously reindex the site. (Part of the Drupal.org D7 upgrade machinery.)',
    ),
  );
}

function drush_drupalorg_map_content() {
  drupalorg_map_content(TRUE);
}

function drush_drupalorg_rebuild_stats() {
  drupalorg_get_activity(TRUE);
}

function drush_drupalorg_aggregator() {
  aggregator_not_cron();
}

function drush_drupalorg_cyclic_solr_reindex() {
  module_load_include('inc', 'apachesolr', 'apachesolr.index');
  $rows = array();
  $env_id = apachesolr_default_environment();
  $limit = 50;
  $entity_type = 'node';
  $pos = variable_get('drupalorg_search_backfill_pos', db_query('SELECT MAX(nid) FROM {node}')->fetchField());

  $rows = db_query_range("SELECT 'node' AS entity_type, nid AS entity_id, type AS bundle, status, changed FROM {node} WHERE nid < :pos ORDER BY nid DESC", 0, $limit, array(':pos' => $pos))->fetchAll();

  if (empty($rows)) {
    // We reached the beginning, start over next run.
    variable_del('drupalorg_search_backfill_pos');
    return;
  }

  // No need to muck about with status callback.
  $documents = array();
  foreach ($rows as $row) {
    $row_documents = apachesolr_index_entities_document($row, $entity_type, $env_id);
    $documents = array_merge($documents, $row_documents);
  }

  $indexed = apachesolr_index_send_to_solr($env_id, $documents);
  if ($indexed !== FALSE) {
    foreach ($rows as $row) {
      $pos = $row->entity_id;
    }
  }
  variable_set('drupalorg_search_backfill_pos', $pos);
}