<?php
/**
 * @file
 * drupalorg_supporters.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_supporters_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'drupalorg_supporters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organization Supporters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grid cols-2 drupalorg-random sponsors--signature';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Display in panel if empty';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';

  /* Display: Signature Hosting */
  $handler = $view->new_display('page', 'Signature Hosting', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hosting Supporters';
  $handler->display->display_options['display_description'] = 'Signature hosting partner organizations.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h2>Signature Hosting Supporters</h2>';
  $handler->display->display_options['header']['area_1']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  /* Contextual filter: Content: Type (field_hosting_type) */
  $handler->display->display_options['arguments']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['arguments']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_hosting_type_value']['limit'] = '0';
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'hosting_signature' => 'hosting_signature',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'supporters/hosting';

  /* Display: Premium Hosting */
  $handler = $view->new_display('attachment', 'Premium Hosting', 'attachment_4');
  $handler->display->display_options['display_description'] = 'Hosting partner organizations.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grid cols-2 drupalorg-random';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Premium Hosting Supporters</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  /* Contextual filter: Content: Type (field_hosting_type) */
  $handler->display->display_options['arguments']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['arguments']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_hosting_type_value']['limit'] = '0';
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'hosting_premium' => 'hosting_premium',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
    'block_4' => 0,
    'block_3' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Hosting */
  $handler = $view->new_display('attachment', 'Hosting', 'hosting');
  $handler->display->display_options['display_description'] = 'Hosting partner organizations.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grid cols-4 drupalorg-random';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Hosting Supporters</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  /* Contextual filter: Content: Type (field_hosting_type) */
  $handler->display->display_options['arguments']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['arguments']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_hosting_type_value']['limit'] = '0';
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'hosting' => 'hosting',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
    'block_4' => 0,
    'block_3' => 0,
    'page_1' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Hosting by country */
  $handler = $view->new_display('block', 'Hosting by country', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by country';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Offices in */
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['id'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['field'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'hosting_signature' => 'hosting_signature',
    'hosting_premium' => 'hosting_premium',
    'hosting' => 'hosting',
  );

  /* Display: Hosting by type */
  $handler = $view->new_display('block', 'Hosting by type', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by type';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_hosting_type']['id'] = 'field_hosting_type';
  $handler->display->display_options['fields']['field_hosting_type']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['fields']['field_hosting_type']['field'] = 'field_hosting_type';
  $handler->display->display_options['fields']['field_hosting_type']['label'] = '';
  $handler->display->display_options['fields']['field_hosting_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hosting_type']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hosting_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Type (field_hosting_type) */
  $handler->display->display_options['arguments']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['arguments']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_hosting_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['human'] = TRUE;
  $handler->display->display_options['arguments']['field_hosting_type_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_hosting_type_value']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_hosting_type_value']['validate_options']['types'] = array(
    'organization' => 'organization',
  );
  $handler->display->display_options['arguments']['field_hosting_type_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_hosting_type_value']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['field_hosting_type_value']['transform_dash'] = TRUE;
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
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'hosting_signature' => 'hosting_signature',
    'hosting_premium' => 'hosting_premium',
    'hosting' => 'hosting',
  );
  /* Filter criterion: Content: Type (field_hosting_type) */
  $handler->display->display_options['filters']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['filters']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['filters']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['filters']['field_hosting_type_value']['operator'] = 'not empty';

  /* Display: Signature Technology */
  $handler = $view->new_display('page', 'Signature Technology', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Technology Supporters';
  $handler->display->display_options['display_description'] = 'Premium technology partner organizations.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Signature Technology Supporters</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'technology_signature' => 'technology_signature',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'supporters/technology';

  /* Display: Premium Technology */
  $handler = $view->new_display('attachment', 'Premium Technology', 'attachment_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Technology Supporters';
  $handler->display->display_options['display_description'] = 'Technology partner organizations.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grid cols-2 drupalorg-random';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Premium Technology Supporters</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'technology_premium' => 'technology_premium',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Technology */
  $handler = $view->new_display('attachment', 'Technology', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Technology Supporters';
  $handler->display->display_options['display_description'] = 'Technology partner organizations.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grid cols-4 drupalorg-random';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Technology Supporters</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'technology' => 'technology',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Signature supporting partners */
  $handler = $view->new_display('page', 'Signature supporting partners', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Supporting Partners';
  $handler->display->display_options['display_description'] = 'Signature supporting partner organizations.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h2>Signature Supporting Partners</h2>';
  $handler->display->display_options['header']['area_1']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['label'] = 'Sectors';
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name_1']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name_1']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name_1']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['arguments']['name_1']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name_1']['transform_dash'] = TRUE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['arguments']['name']['exception']['value'] = '';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_50' => 'vocabulary_50',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'supporting_signature' => 'supporting_signature',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'supporters/partners';

  /* Display: Premium supporting partners */
  $handler = $view->new_display('attachment', 'Premium supporting partners', 'attachment_3');
  $handler->display->display_options['display_description'] = 'Supporting partner organizations.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grid cols-2 drupalorg-random';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Premium Supporting Partners</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['label'] = 'Sectors';
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name_1']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name_1']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name_1']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['arguments']['name_1']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name_1']['transform_dash'] = TRUE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['arguments']['name']['exception']['value'] = '';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_50' => 'vocabulary_50',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'supporting_premium' => 'supporting_premium',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Supporting partners */
  $handler = $view->new_display('attachment', 'Supporting partners', 'attachment_1');
  $handler->display->display_options['display_description'] = 'Supporting partner organizations.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grid cols-4 drupalorg-random';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Supporting Partners</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['label'] = 'Sectors';
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name_1']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name_1']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name_1']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $handler->display->display_options['arguments']['name_1']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name_1']['transform_dash'] = TRUE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['arguments']['name']['exception']['value'] = '';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_50' => 'vocabulary_50',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'supporting' => 'supporting',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Partners by country */
  $handler = $view->new_display('block', 'Partners by country', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by country';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Offices in */
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['id'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['field'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['sorts']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'supporting_premium' => 'supporting_premium',
    'supporting' => 'supporting',
  );

  /* Display: Partners by sector */
  $handler = $view->new_display('block', 'Partners by sector', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by sector';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['label'] = 'Sectors';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_50_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Offices in */
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['id'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['field'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['specify_validation'] = TRUE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_50' => 'vocabulary_50',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'supporting_premium' => 'supporting_premium',
    'supporting' => 'supporting',
  );

  /* Display: Charter Customer Supporting Partner */
  $handler = $view->new_display('page', 'Charter Customer Supporting Partner', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Charter Customer Supporting Partners';
  $handler->display->display_options['display_description'] = 'Charter customer cupporting partner organizations.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h2>Charter Customer Supporting Partners</h2>';
  $handler->display->display_options['header']['area_1']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  /* Contextual filter: Content: Type (field_hosting_type) */
  $handler->display->display_options['arguments']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['arguments']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_hosting_type_value']['limit'] = '0';
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'supporting_customer_charter' => 'supporting_customer_charter',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'supporters/customer';

  /* Display: Customer Supporting Partner */
  $handler = $view->new_display('page', 'Customer Supporting Partner', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Customer Supporting Partners';
  $handler->display->display_options['display_description'] = 'Customer cupporting partner organizations.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h2>Customer Supporting Partners</h2>';
  $handler->display->display_options['header']['area_1']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'supporters-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  /* Contextual filter: Content: Type (field_hosting_type) */
  $handler->display->display_options['arguments']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['arguments']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['arguments']['field_hosting_type_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hosting_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_hosting_type_value']['limit'] = '0';
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
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'supporting_customer' => 'supporting_customer',
  );
  /* Filter criterion: Content: Logo (field_logo:fid) */
  $handler->display->display_options['filters']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['table'] = 'field_data_field_logo';
  $handler->display->display_options['filters']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['filters']['field_logo_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'supporters/customer';
  $translatables['drupalorg_supporters'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Display in panel if empty'),
    t('Signature Hosting'),
    t('Hosting Supporters'),
    t('Signature hosting partner organizations.'),
    t('<h2>Signature Hosting Supporters</h2>'),
    t('Locations'),
    t('All'),
    t('Premium Hosting'),
    t('Hosting partner organizations.'),
    t('<h2>Premium Hosting Supporters</h2>'),
    t('Hosting'),
    t('<h2>Hosting Supporters</h2>'),
    t('Hosting by country'),
    t('Browse by country'),
    t('Hosting by type'),
    t('Browse by type'),
    t('Signature Technology'),
    t('Technology Supporters'),
    t('Premium technology partner organizations.'),
    t('<h2>Signature Technology Supporters</h2>'),
    t('Premium Technology'),
    t('Technology partner organizations.'),
    t('<h2>Premium Technology Supporters</h2>'),
    t('Technology'),
    t('<h2>Technology Supporters</h2>'),
    t('Signature supporting partners'),
    t('Supporting Partners'),
    t('Signature supporting partner organizations.'),
    t('<h2>Signature Supporting Partners</h2>'),
    t('Sectors'),
    t('Premium supporting partners'),
    t('Supporting partner organizations.'),
    t('<h2>Premium Supporting Partners</h2>'),
    t('Supporting partners'),
    t('<h2>Supporting Partners</h2>'),
    t('Partners by country'),
    t('Partners by sector'),
    t('Browse by sector'),
    t('Charter Customer Supporting Partner'),
    t('Charter Customer Supporting Partners'),
    t('Charter customer cupporting partner organizations.'),
    t('<h2>Charter Customer Supporting Partners</h2>'),
    t('Customer Supporting Partner'),
    t('Customer Supporting Partners'),
    t('Customer cupporting partner organizations.'),
    t('<h2>Customer Supporting Partners</h2>'),
  );
  $export['drupalorg_supporters'] = $view;

  return $export;
}
