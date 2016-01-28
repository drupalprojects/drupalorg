<?php
/**
 * @file
 * drupalorg_book_listings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_book_listings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'book_listings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Book listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Books about Drupal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No books currently listed match your filters. Try a less restrictive set of filters.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['label'] = '';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'grid-2',
    'image_link' => 'content',
  );
  /* Field: Content: Sub-title */
  $handler->display->display_options['fields']['field_book_subtitle']['id'] = 'field_book_subtitle';
  $handler->display->display_options['fields']['field_book_subtitle']['table'] = 'field_data_field_book_subtitle';
  $handler->display->display_options['fields']['field_book_subtitle']['field'] = 'field_book_subtitle';
  $handler->display->display_options['fields']['field_book_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_book_subtitle']['element_label_colon'] = FALSE;
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_book_listing_authors']['id'] = 'field_book_listing_authors';
  $handler->display->display_options['fields']['field_book_listing_authors']['table'] = 'field_data_field_book_listing_authors';
  $handler->display->display_options['fields']['field_book_listing_authors']['field'] = 'field_book_listing_authors';
  $handler->display->display_options['fields']['field_book_listing_authors']['label'] = '';
  $handler->display->display_options['fields']['field_book_listing_authors']['element_label_colon'] = FALSE;
  /* Field: Content: Drupal version */
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['id'] = 'taxonomy_vocabulary_5';
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['table'] = 'field_data_taxonomy_vocabulary_5';
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['field'] = 'taxonomy_vocabulary_5';
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_5']['delta_offset'] = '0';
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['taxonomy_vocabulary_38']['id'] = 'taxonomy_vocabulary_38';
  $handler->display->display_options['fields']['taxonomy_vocabulary_38']['table'] = 'field_data_taxonomy_vocabulary_38';
  $handler->display->display_options['fields']['taxonomy_vocabulary_38']['field'] = 'taxonomy_vocabulary_38';
  $handler->display->display_options['fields']['taxonomy_vocabulary_38']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_38']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_38']['delta_offset'] = '0';
  /* Field: Content: Level */
  $handler->display->display_options['fields']['taxonomy_vocabulary_56']['id'] = 'taxonomy_vocabulary_56';
  $handler->display->display_options['fields']['taxonomy_vocabulary_56']['table'] = 'field_data_taxonomy_vocabulary_56';
  $handler->display->display_options['fields']['taxonomy_vocabulary_56']['field'] = 'taxonomy_vocabulary_56';
  $handler->display->display_options['fields']['taxonomy_vocabulary_56']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_56']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_56']['delta_offset'] = '0';
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['taxonomy_vocabulary_54']['id'] = 'taxonomy_vocabulary_54';
  $handler->display->display_options['fields']['taxonomy_vocabulary_54']['table'] = 'field_data_taxonomy_vocabulary_54';
  $handler->display->display_options['fields']['taxonomy_vocabulary_54']['field'] = 'taxonomy_vocabulary_54';
  $handler->display->display_options['fields']['taxonomy_vocabulary_54']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_54']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_54']['delta_offset'] = '0';
  /* Field: Content: Book format */
  $handler->display->display_options['fields']['taxonomy_vocabulary_62']['id'] = 'taxonomy_vocabulary_62';
  $handler->display->display_options['fields']['taxonomy_vocabulary_62']['table'] = 'field_data_taxonomy_vocabulary_62';
  $handler->display->display_options['fields']['taxonomy_vocabulary_62']['field'] = 'taxonomy_vocabulary_62';
  $handler->display->display_options['fields']['taxonomy_vocabulary_62']['label'] = 'Format';
  $handler->display->display_options['fields']['taxonomy_vocabulary_62']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_62']['delta_offset'] = '0';
  /* Field: Content: Page count */
  $handler->display->display_options['fields']['field_book_page_count']['id'] = 'field_book_page_count';
  $handler->display->display_options['fields']['field_book_page_count']['table'] = 'field_data_field_book_page_count';
  $handler->display->display_options['fields']['field_book_page_count']['field'] = 'field_book_page_count';
  $handler->display->display_options['fields']['field_book_page_count']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_count']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_book_listing_date']['id'] = 'field_book_listing_date';
  $handler->display->display_options['fields']['field_book_listing_date']['table'] = 'field_data_field_book_listing_date';
  $handler->display->display_options['fields']['field_book_listing_date']['field'] = 'field_book_listing_date';
  $handler->display->display_options['fields']['field_book_listing_date']['label'] = '';
  $handler->display->display_options['fields']['field_book_listing_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_listing_date']['element_label_colon'] = FALSE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['text'] = '[field_publisher-value] in [field_book_listing_date] ([field_book_page_count] pages)';
  $handler->display->display_options['fields']['field_publisher']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Published by';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_publisher] in [field_book_listing_date] ([field_book_page_count] pages)';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_official_website']['id'] = 'field_official_website';
  $handler->display->display_options['fields']['field_official_website']['table'] = 'field_data_field_official_website';
  $handler->display->display_options['fields']['field_official_website']['field'] = 'field_official_website';
  $handler->display->display_options['fields']['field_official_website']['label'] = '';
  $handler->display->display_options['fields']['field_official_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_official_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_official_website']['click_sort_column'] = 'url';
  /* Field: Content: ISBN-13 */
  $handler->display->display_options['fields']['field_book_isbn_13']['id'] = 'field_book_isbn_13';
  $handler->display->display_options['fields']['field_book_isbn_13']['table'] = 'field_data_field_book_isbn_13';
  $handler->display->display_options['fields']['field_book_isbn_13']['field'] = 'field_book_isbn_13';
  $handler->display->display_options['fields']['field_book_isbn_13']['label'] = 'ISBN';
  /* Field: Content: Book availability */
  $handler->display->display_options['fields']['taxonomy_vocabulary_60']['id'] = 'taxonomy_vocabulary_60';
  $handler->display->display_options['fields']['taxonomy_vocabulary_60']['table'] = 'field_data_taxonomy_vocabulary_60';
  $handler->display->display_options['fields']['taxonomy_vocabulary_60']['field'] = 'taxonomy_vocabulary_60';
  $handler->display->display_options['fields']['taxonomy_vocabulary_60']['label'] = 'Availability';
  $handler->display->display_options['fields']['taxonomy_vocabulary_60']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_60']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Direct purchase link */
  $handler->display->display_options['fields']['field_book_purchase_link']['id'] = 'field_book_purchase_link';
  $handler->display->display_options['fields']['field_book_purchase_link']['table'] = 'field_data_field_book_purchase_link';
  $handler->display->display_options['fields']['field_book_purchase_link']['field'] = 'field_book_purchase_link';
  $handler->display->display_options['fields']['field_book_purchase_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_book_purchase_link']['alter']['text'] = '<a href="[field_book_purchase_link-url]" rel="nofollow">Order from [field_publisher]</a>';
  $handler->display->display_options['fields']['field_book_purchase_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_book_purchase_link']['click_sort_column'] = 'url';
  /* Field: Content: ISBN-10 */
  $handler->display->display_options['fields']['field_book_isbn_10']['id'] = 'field_book_isbn_10';
  $handler->display->display_options['fields']['field_book_isbn_10']['table'] = 'field_data_field_book_isbn_10';
  $handler->display->display_options['fields']['field_book_isbn_10']['field'] = 'field_book_isbn_10';
  $handler->display->display_options['fields']['field_book_isbn_10']['label'] = '';
  $handler->display->display_options['fields']['field_book_isbn_10']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_book_isbn_10']['alter']['text'] = '<a rel="nofollow" class="amazon-link" href="http://www.amazon.com/dp/[field_book_isbn_10-value]/?tag=drupal0a-20" title="Ordering via this link benefits the Drupal Association">Order from Amazon.com</a>';
  $handler->display->display_options['fields']['field_book_isbn_10']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More information';
  /* Sort criterion: Content: Publication date (field_book_listing_date) */
  $handler->display->display_options['sorts']['field_book_listing_date_value']['id'] = 'field_book_listing_date_value';
  $handler->display->display_options['sorts']['field_book_listing_date_value']['table'] = 'field_data_field_book_listing_date';
  $handler->display->display_options['sorts']['field_book_listing_date_value']['field'] = 'field_book_listing_date_value';
  $handler->display->display_options['sorts']['field_book_listing_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book_listing' => 'book_listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Book availability (taxonomy_vocabulary_60) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['id'] = 'taxonomy_vocabulary_60_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['table'] = 'field_data_taxonomy_vocabulary_60';
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['field'] = 'taxonomy_vocabulary_60_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['value'] = array(
    38414 => '38414',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_60_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['expose']['operator'] = 'taxonomy_vocabulary_60_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['expose']['identifier'] = 'availability';
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    36 => 0,
    28 => 0,
    26 => 0,
    4 => 0,
    7 => 0,
    14 => 0,
    38 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_60_tid']['vocabulary'] = 'vocabulary_60';
  /* Filter criterion: Content: Drupal version (taxonomy_vocabulary_5) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['id'] = 'taxonomy_vocabulary_5_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['table'] = 'field_data_taxonomy_vocabulary_5';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['field'] = 'taxonomy_vocabulary_5_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['value'] = array(
    102 => '102',
    120 => '120',
    20236 => '20236',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_5_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['label'] = 'Drupal version';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['operator'] = 'taxonomy_vocabulary_5_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    36 => 0,
    28 => 0,
    26 => 0,
    4 => 0,
    7 => 0,
    14 => 0,
    38 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['vocabulary'] = 'vocabulary_5';
  /* Filter criterion: Content: Audience (taxonomy_vocabulary_38) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['id'] = 'taxonomy_vocabulary_38_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['table'] = 'field_data_taxonomy_vocabulary_38';
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['field'] = 'taxonomy_vocabulary_38_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_38_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['expose']['operator'] = 'taxonomy_vocabulary_38_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['expose']['identifier'] = 'audience';
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    36 => 0,
    28 => 0,
    26 => 0,
    4 => 0,
    7 => 0,
    14 => 0,
    38 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_38_tid']['vocabulary'] = 'vocabulary_38';
  /* Filter criterion: Content: Book format (taxonomy_vocabulary_62) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['id'] = 'taxonomy_vocabulary_62_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['table'] = 'field_data_taxonomy_vocabulary_62';
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['field'] = 'taxonomy_vocabulary_62_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_62_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['expose']['operator'] = 'taxonomy_vocabulary_62_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['expose']['identifier'] = 'format';
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    36 => 0,
    28 => 0,
    26 => 0,
    4 => 0,
    7 => 0,
    14 => 0,
    38 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_62_tid']['vocabulary'] = 'vocabulary_62';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'books';
  $translatables['book_listings'] = array(
    t('Master'),
    t('Books about Drupal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No books currently listed match your filters. Try a less restrictive set of filters.'),
    t('Drupal version'),
    t('Audience'),
    t('Level'),
    t('Keywords'),
    t('Format'),
    t('[field_publisher-value] in [field_book_listing_date] ([field_book_page_count] pages)'),
    t('Published by'),
    t('[field_publisher] in [field_book_listing_date] ([field_book_page_count] pages)'),
    t('ISBN'),
    t('Availability'),
    t('Direct purchase link'),
    t('<a href="[field_book_purchase_link-url]" rel="nofollow">Order from [field_publisher]</a>'),
    t('<a rel="nofollow" class="amazon-link" href="http://www.amazon.com/dp/[field_book_isbn_10-value]/?tag=drupal0a-20" title="Ordering via this link benefits the Drupal Association">Order from Amazon.com</a>'),
    t('More information'),
    t('Status'),
    t('Page'),
  );
  $export['book_listings'] = $view;

  return $export;
}
