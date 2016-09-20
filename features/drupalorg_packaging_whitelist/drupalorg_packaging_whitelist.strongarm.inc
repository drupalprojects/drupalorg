<?php
/**
 * @file
 * drupalorg_packaging_whitelist.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalorg_packaging_whitelist_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_packaging_whitelist';
  $strongarm->value = 1;
  $export['comment_default_mode_packaging_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_packaging_whitelist';
  $strongarm->value = '0';
  $export['comment_packaging_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_packaging_whitelist';
  $strongarm->value = 2;
  $export['comment_preview_packaging_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_packaging_whitelist';
  $strongarm->value = array(
    0 => 'navigation',
  );
  $export['menu_options_packaging_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_packaging_whitelist';
  $strongarm->value = 'navigation:0';
  $export['menu_parent_packaging_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_packaging_whitelist';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
    2 => 'panelizer',
  );
  $export['node_options_packaging_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_packaging_whitelist';
  $strongarm->value = 1;
  $export['node_preview_packaging_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_packaging_whitelist';
  $strongarm->value = 1;
  $export['node_submitted_packaging_whitelist'] = $strongarm;

  return $export;
}
