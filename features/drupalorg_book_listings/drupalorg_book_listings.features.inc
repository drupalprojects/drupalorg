<?php
/**
 * @file
 * drupalorg_book_listings.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupalorg_book_listings_views_api() {
  return array("version" => "3.0");
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
  return $items;
}
