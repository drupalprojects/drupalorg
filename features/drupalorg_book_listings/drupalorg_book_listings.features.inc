<?php
/**
 * @file
 * drupalorg_book_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_book_listings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_book_listings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalorg_book_listings_node_info() {
  $items = array(
    'book_listing' => array(
      'name' => t('Book listing'),
      'base' => 'features',
      'description' => t('A published published print or e-book covering a Drupal-related topic.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
