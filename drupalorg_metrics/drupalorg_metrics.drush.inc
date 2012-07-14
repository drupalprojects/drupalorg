<?php

/**
 * @file
 *   drupalorg_metrics module drush integration.
 */

/**
 * Implements hook_drush_command().
 *
 * @See drush_parse_command() for a list of recognized keys.
 *
 * @return
 *   An associative array describing your command(s).
 */
function drupalorg_metrics_drush_command() {
  $items = array();

  $items['drupalorg-metrics-generate'] = array(
    'description' => "Generate and cache metrics data.",
    'aliases' => array('domg'),
  );

  return $items;
}

/**
 * Command callback. Generate and cache metrics data.
 */
function drush_drupalorg_metrics_generate() {
  drupalorg_metrics_record_stats(2007, 2030);
}
