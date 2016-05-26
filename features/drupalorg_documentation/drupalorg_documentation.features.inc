<?php
/**
 * @file
 * drupalorg_documentation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_documentation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_documentation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalorg_documentation_node_info() {
  $items = array(
    'documentation' => array(
      'name' => t('Documentation page'),
      'base' => 'node_content',
      'description' => t('DO NOT USE for now, we are still testing these. Please. kkthx. - tvn'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'guide' => array(
      'name' => t('Documentation guide'),
      'base' => 'node_content',
      'description' => t('DO NOT USE for now, we are still testing these. Please. kkthx. - tvn'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
