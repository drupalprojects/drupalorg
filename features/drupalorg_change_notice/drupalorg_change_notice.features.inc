<?php
/**
 * @file
 * drupalorg_change_notice.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_change_notice_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_change_notice_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalorg_change_notice_node_info() {
  $items = array(
    'changenotice' => array(
      'name' => t('Change record'),
      'base' => 'features',
      'description' => t('Used to record a change in a project, such as an API change'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
