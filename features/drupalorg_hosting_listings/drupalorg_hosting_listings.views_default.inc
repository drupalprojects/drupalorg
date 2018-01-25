<?php
/**
 * @file
 * drupalorg_hosting_listings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_hosting_listings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hosting';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hosting';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Drupal Web Hosting';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '[field_server_location] [taxonomy_vocabulary_50] [field_host_features]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_featured']['id'] = 'field_featured';
  $handler->display->display_options['fields']['field_featured']['table'] = 'field_data_field_featured';
  $handler->display->display_options['fields']['field_featured']['field'] = 'field_featured';
  $handler->display->display_options['fields']['field_featured']['label'] = '';
  $handler->display->display_options['fields']['field_featured']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured']['alter']['text'] = '<b class="featured">Featured</b>';
  $handler->display->display_options['fields']['field_featured']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'grid-3-2x',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '[field_featured]
[field_logo]
[body]';
  $handler->display->display_options['fields']['field_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['path'] = '[field_link-url]';
  $handler->display->display_options['fields']['field_link']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Content: Sectors */
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['id'] = 'taxonomy_vocabulary_50';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['field'] = 'taxonomy_vocabulary_50';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['alter']['text'] = 'term-[taxonomy_vocabulary_50-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['settings'] = array(
    'text' => '[term:tid]',
    'link' => '',
    'check_access' => TRUE,
  );
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['delta_offset'] = '0';
  /* Field: Content: Features */
  $handler->display->display_options['fields']['field_host_features']['id'] = 'field_host_features';
  $handler->display->display_options['fields']['field_host_features']['table'] = 'field_data_field_host_features';
  $handler->display->display_options['fields']['field_host_features']['field'] = 'field_host_features';
  $handler->display->display_options['fields']['field_host_features']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_host_features']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_host_features']['alter']['text'] = 'term-[field_host_features-tid]';
  $handler->display->display_options['fields']['field_host_features']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_host_features']['settings'] = array(
    'text' => '[term:tid]',
    'link' => '',
    'check_access' => TRUE,
  );
  $handler->display->display_options['fields']['field_host_features']['delta_offset'] = '0';
  /* Field: Content: Server location */
  $handler->display->display_options['fields']['field_server_location']['id'] = 'field_server_location';
  $handler->display->display_options['fields']['field_server_location']['table'] = 'field_data_field_server_location';
  $handler->display->display_options['fields']['field_server_location']['field'] = 'field_server_location';
  $handler->display->display_options['fields']['field_server_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_server_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_server_location']['alter']['text'] = 'term-[field_server_location-tid]';
  $handler->display->display_options['fields']['field_server_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_server_location']['delta_offset'] = '0';
  /* Sort criterion: Content: Featured (field_featured) */
  $handler->display->display_options['sorts']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['sorts']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['sorts']['field_featured_value']['field'] = 'field_featured_value';
  /* Contextual filter: Content: Hosting type (field_hosting_type) */
  $handler->display->display_options['arguments']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['arguments']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_hosting_type_value']['limit'] = '0';
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
    'hosting_listing' => 'hosting_listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_featured_value']['group'] = 1;
  /* Filter criterion: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['identifier'] = 'sector';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['vocabulary'] = 'vocabulary_50';
  /* Filter criterion: Content: Features (field_host_features) */
  $handler->display->display_options['filters']['field_host_features_tid']['id'] = 'field_host_features_tid';
  $handler->display->display_options['filters']['field_host_features_tid']['table'] = 'field_data_field_host_features';
  $handler->display->display_options['filters']['field_host_features_tid']['field'] = 'field_host_features_tid';
  $handler->display->display_options['filters']['field_host_features_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_host_features_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['operator_id'] = 'field_host_features_tid_op';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['label'] = 'Features';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['operator'] = 'field_host_features_tid_op';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['identifier'] = 'features';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_host_features_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_host_features_tid']['vocabulary'] = 'hosting_features';
  /* Filter criterion: Content: Server location (field_server_location) */
  $handler->display->display_options['filters']['field_server_location_tid']['id'] = 'field_server_location_tid';
  $handler->display->display_options['filters']['field_server_location_tid']['table'] = 'field_data_field_server_location';
  $handler->display->display_options['filters']['field_server_location_tid']['field'] = 'field_server_location_tid';
  $handler->display->display_options['filters']['field_server_location_tid']['value'] = '';
  $handler->display->display_options['filters']['field_server_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_server_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['operator_id'] = 'field_server_location_tid_op';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['label'] = 'Server location';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['operator'] = 'field_server_location_tid_op';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_server_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_server_location_tid']['vocabulary'] = 'vocabulary_52';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'hosting-beta';

  /* Display: Non-featured */
  $handler = $view->new_display('attachment', 'Non-featured', 'attachment_1');
  $handler->display->display_options['display_description'] = 'Puts non-featured at the bottom (instead of sort order) and add random class';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = '[field_server_location] [taxonomy_vocabulary_50] [field_host_features]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'drupalorg-random';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'hosting_listing' => 'hosting_listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_value']['group'] = 1;
  /* Filter criterion: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['identifier'] = 'sector';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['vocabulary'] = 'vocabulary_50';
  /* Filter criterion: Content: Features (field_host_features) */
  $handler->display->display_options['filters']['field_host_features_tid']['id'] = 'field_host_features_tid';
  $handler->display->display_options['filters']['field_host_features_tid']['table'] = 'field_data_field_host_features';
  $handler->display->display_options['filters']['field_host_features_tid']['field'] = 'field_host_features_tid';
  $handler->display->display_options['filters']['field_host_features_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_host_features_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['operator_id'] = 'field_host_features_tid_op';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['label'] = 'Features';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['operator'] = 'field_host_features_tid_op';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['identifier'] = 'features';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_host_features_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_host_features_tid']['vocabulary'] = 'hosting_features';
  /* Filter criterion: Content: Server location (field_server_location) */
  $handler->display->display_options['filters']['field_server_location_tid']['id'] = 'field_server_location_tid';
  $handler->display->display_options['filters']['field_server_location_tid']['table'] = 'field_data_field_server_location';
  $handler->display->display_options['filters']['field_server_location_tid']['field'] = 'field_server_location_tid';
  $handler->display->display_options['filters']['field_server_location_tid']['value'] = '';
  $handler->display->display_options['filters']['field_server_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_server_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['operator_id'] = 'field_server_location_tid_op';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['label'] = 'Server location';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['operator'] = 'field_server_location_tid_op';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_server_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_server_location_tid']['vocabulary'] = 'vocabulary_52';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: No results */
  $handler = $view->new_display('attachment', 'No results', 'attachment_2');
  $handler->display->display_options['display_description'] = 'Needed to show when there are no results of both featured & unfeatured';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No matching hosting listings found.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_featured']['id'] = 'field_featured';
  $handler->display->display_options['fields']['field_featured']['table'] = 'field_data_field_featured';
  $handler->display->display_options['fields']['field_featured']['field'] = 'field_featured';
  $handler->display->display_options['fields']['field_featured']['label'] = '';
  $handler->display->display_options['fields']['field_featured']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured']['alter']['text'] = '<b class="featured">Featured</b>';
  $handler->display->display_options['fields']['field_featured']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'grid-3-2x',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '[field_featured]
[field_logo]
[body]';
  $handler->display->display_options['fields']['field_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['path'] = '[field_link-url]';
  $handler->display->display_options['fields']['field_link']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Content: Sectors */
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['id'] = 'taxonomy_vocabulary_50';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['field'] = 'taxonomy_vocabulary_50';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['alter']['text'] = 'term-[taxonomy_vocabulary_50-tid]';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['settings'] = array(
    'text' => '[term:tid]',
    'link' => '',
    'check_access' => TRUE,
  );
  $handler->display->display_options['fields']['taxonomy_vocabulary_50']['delta_offset'] = '0';
  /* Field: Content: Features */
  $handler->display->display_options['fields']['field_host_features']['id'] = 'field_host_features';
  $handler->display->display_options['fields']['field_host_features']['table'] = 'field_data_field_host_features';
  $handler->display->display_options['fields']['field_host_features']['field'] = 'field_host_features';
  $handler->display->display_options['fields']['field_host_features']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_host_features']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_host_features']['alter']['text'] = 'term-[field_host_features-tid]';
  $handler->display->display_options['fields']['field_host_features']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_host_features']['settings'] = array(
    'text' => '[term:tid]',
    'link' => '',
    'check_access' => TRUE,
  );
  $handler->display->display_options['fields']['field_host_features']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'hosting_listing' => 'hosting_listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['identifier'] = 'sector';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['vocabulary'] = 'vocabulary_50';
  /* Filter criterion: Content: Features (field_host_features) */
  $handler->display->display_options['filters']['field_host_features_tid']['id'] = 'field_host_features_tid';
  $handler->display->display_options['filters']['field_host_features_tid']['table'] = 'field_data_field_host_features';
  $handler->display->display_options['filters']['field_host_features_tid']['field'] = 'field_host_features_tid';
  $handler->display->display_options['filters']['field_host_features_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_host_features_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['operator_id'] = 'field_host_features_tid_op';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['label'] = 'Features';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['operator'] = 'field_host_features_tid_op';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['identifier'] = 'features';
  $handler->display->display_options['filters']['field_host_features_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_host_features_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_host_features_tid']['vocabulary'] = 'hosting_features';
  /* Filter criterion: Content: Server location (field_server_location) */
  $handler->display->display_options['filters']['field_server_location_tid']['id'] = 'field_server_location_tid';
  $handler->display->display_options['filters']['field_server_location_tid']['table'] = 'field_data_field_server_location';
  $handler->display->display_options['filters']['field_server_location_tid']['field'] = 'field_server_location_tid';
  $handler->display->display_options['filters']['field_server_location_tid']['value'] = '';
  $handler->display->display_options['filters']['field_server_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_server_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['operator_id'] = 'field_server_location_tid_op';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['label'] = 'Server location';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['operator'] = 'field_server_location_tid_op';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_server_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_server_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_server_location_tid']['vocabulary'] = 'vocabulary_52';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $translatables['hosting'] = array(
    t('Master'),
    t('Drupal Web Hosting'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<b class="featured">Featured</b>'),
    t('[field_featured]
[field_logo]
[body]'),
    t('Sectors'),
    t('term-[taxonomy_vocabulary_50-tid]'),
    t('Features'),
    t('term-[field_host_features-tid]'),
    t('Server location'),
    t('term-[field_server_location-tid]'),
    t('All'),
    t('Sector'),
    t('Page'),
    t('Non-featured'),
    t('Puts non-featured at the bottom (instead of sort order) and add random class'),
    t('No results'),
    t('Needed to show when there are no results of both featured & unfeatured'),
    t('No matching hosting listings found.'),
  );
  $export['hosting'] = $view;

  $view = new view();
  $view->name = 'hosting_listing_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hosting listing admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hosting listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    41 => '41',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add listing';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/hosting-listing">Add a <strong>new hosting listing</strong></a>, <a href="/hosting">view hosting page</a>';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Title';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[title]';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_featured']['id'] = 'field_featured';
  $handler->display->display_options['fields']['field_featured']['table'] = 'field_data_field_featured';
  $handler->display->display_options['fields']['field_featured']['field'] = 'field_featured';
  /* Field: Content: Hosting type */
  $handler->display->display_options['fields']['field_hosting_type']['id'] = 'field_hosting_type';
  $handler->display->display_options['fields']['field_hosting_type']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['fields']['field_hosting_type']['field'] = 'field_hosting_type';
  $handler->display->display_options['fields']['field_hosting_type']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  $handler->display->display_options['fields']['field_hosting_type']['delta_offset'] = '0';
  /* Sort criterion: Content: Featured (field_featured) */
  $handler->display->display_options['sorts']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['sorts']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['sorts']['field_featured_value']['field'] = 'field_featured_value';
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['sorts']['status']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hosting_listing' => 'hosting_listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/hosting-listings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Hosting';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['hosting_listing_admin'] = array(
    t('Master'),
    t('Hosting listings'),
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
    t('Add listing'),
    t('<a href="/node/add/hosting-listing">Add a <strong>new hosting listing</strong></a>, <a href="/hosting">view hosting page</a>'),
    t('Title'),
    t('[title]'),
    t('Published'),
    t('Featured'),
    t('Hosting type'),
    t('Page'),
  );
  $export['hosting_listing_admin'] = $view;

  return $export;
}
