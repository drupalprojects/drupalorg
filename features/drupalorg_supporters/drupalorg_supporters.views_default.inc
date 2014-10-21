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
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'grid cols-2 drupalorg-random';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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

  /* Display: Premium Supporters */
  $handler = $view->new_display('page', 'Premium Supporters', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Supporting Partners';
  $handler->display->display_options['display_description'] = 'Premium supporting partner organizations.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="https://assoc.drupal.org/supporting-partners">Supporting Partners</a> are businesses who offer Drupal services. Their program fees help fund Drupal.org improvements, so together we can collaborate more easily and accelerate Drupal\'s innovation.

<h2>Premium Supporting Partners</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
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
  $handler->display->display_options['path'] = 'supporters/partners';

  /* Display: Supporters */
  $handler = $view->new_display('attachment', 'Supporters', 'attachment_1');
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

  /* Display: Premium Technology */
  $handler = $view->new_display('page', 'Premium Technology', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Technology Supporters';
  $handler->display->display_options['display_description'] = 'Premium technology partner organizations.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class="left"><a href="https://assoc.drupal.org/technology-supporters">Drupal Technology Supporters</a> are companies who provide a product or service that helps the Drupal community build amazing sites. These Supporters educate the community about their offerings and their program fees help fund Drupal.org improvements.</p>

<p class="right"><a class="link-button" href="https://www.drupal.org/technology-supporter-resources"><span>Educational Materials from Tech Supporters</span></a></p>

<h2>Premium Technology Supporters</h2>';
  $handler->display->display_options['header']['area']['format'] = '3';
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
  $handler->display->display_options['path'] = 'supporters/technology';

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

  /* Display: Premium Hosting */
  $handler = $view->new_display('page', 'Premium Hosting', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hosting Supporters';
  $handler->display->display_options['display_description'] = 'Premium hosting partner organizations.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="https://assoc.drupal.org/drupal-hosting-supporter-program">Drupal Hosting Supporters</a> help the community publish great sites. These Supporters educate the community about their offerings, promote Drupal to their user base, and their program fees help fund Drupal.org improvements.

Check out <a href="https://www.drupal.org/drupal-hosting-supporter-resources">Hosting Supporters Resource Center</a> for useful resources from these companies.

<h2>Premium Hosting Supporters</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Locations (taxonomy_vocabulary_52) */
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
  $handler->display->display_options['path'] = 'supporters/hosting';

  /* Display: Hosting */
  $handler = $view->new_display('attachment', 'Hosting', 'attachment_3');
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
  /* Relationship: Content: Locations (taxonomy_vocabulary_52) */
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
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Hosting by country */
  $handler = $view->new_display('block', 'Hosting by country', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by country';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Locations (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'Locations';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['id'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['field'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Locations (taxonomy_vocabulary_52) */
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
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'supporters/hosting';
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
    'hosting_premium' => 'hosting_premium',
    'hosting' => 'hosting',
  );
  $export['drupalorg_supporters'] = $view;

  return $export;
}
