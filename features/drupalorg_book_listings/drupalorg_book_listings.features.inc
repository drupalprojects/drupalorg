<?php

/**
 * Implementation of hook_node_info().
 */
function drupalorg_book_listings_node_info() {
  $items = array(
    'book_listing' => array(
      'name' => t('Book listing'),
      'module' => 'features',
      'description' => t('A published published print or e-book covering a Drupal-related topic.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function drupalorg_book_listings_views_api() {
  return array(
    'api' => '2',
  );
}
