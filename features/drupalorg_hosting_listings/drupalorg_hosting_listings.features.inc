<?php
/**
 * @file
 * drupalorg_hosting_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_hosting_listings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_hosting_listings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalorg_hosting_listings_node_info() {
  $items = array(
    'hosting_listing' => array(
      'name' => t('Hosting listing'),
      'base' => 'node_content',
      'description' => t('Information about hosting providers in the Drupal Association’s Hosting Partner program'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
