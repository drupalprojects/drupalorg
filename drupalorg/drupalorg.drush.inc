<?php

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
