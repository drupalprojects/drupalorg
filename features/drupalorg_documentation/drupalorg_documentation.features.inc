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
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupalorg_documentation_node_info() {
  $items = array(
    'documentation' => array(
      'name' => t('Documentation page'),
      'base' => 'node_content',
      'description' => t('Documentation for Drupal core or contributed projects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'guide' => array(
      'name' => t('Documentation guide'),
      'base' => 'node_content',
      'description' => t('Documentation guide, a structural content type used to organize a set of documentation pages around specific topic.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
