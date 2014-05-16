<?php
/**
 * @file
 * drupalorg_marketplace.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_marketplace_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'drupalorg_organizations';
  $view->description = 'List of organizations for drupal-services page';
  $view->tag = 'marketplace';
  $view->base_table = 'node';
  $view->human_name = 'Drupal.org Marketplace: Services';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Marketplace';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Services listing (field_organization_list_rule) */
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['id'] = 'field_organization_list_rule_value';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['table'] = 'field_data_field_organization_list_rule';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['field'] = 'field_organization_list_rule_value';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['default_argument_options']['argument'] = 'featured';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organization_list_rule_value']['limit'] = '0';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'All services';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Marketplace: %2';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'vocabulary_48' => 'vocabulary_48',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['add_table'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['exception']['title'] = 'All sectors';
  $handler->display->display_options['arguments']['tid_1']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['title'] = 'Marketplace: %3';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'vocabulary_50' => 'vocabulary_50',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['add_table'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['arguments']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_2']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_2']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['exception']['title'] = 'All locations';
  $handler->display->display_options['arguments']['tid_2']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['title'] = 'Marketplace: %4';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['add_table'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: List in marketplace (field_org_marketplace_request) */
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['id'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['table'] = 'field_data_field_org_marketplace_request';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['field'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Services listing (field_organization_list_rule) */
  $handler->display->display_options['filters']['field_organization_list_rule_value']['id'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['table'] = 'field_data_field_organization_list_rule';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['field'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['value'] = array(
    'all-providers' => 'all-providers',
    'featured' => 'featured',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'drupal-services';
  $export['drupalorg_organizations'] = $view;

  $view = new view();
  $view->name = 'drupalorg_supporting_technologies';
  $view->description = 'List of organizations providing supporting technologies';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Drupal.org Marketplace: Supporting Technologies';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Supporting Technologies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = TRUE;
  $handler->display->display_options['empty']['text']['content'] = 'No organizations found.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
    'vocabulary_1' => 0,
    'vocabulary_5' => 0,
    'vocabulary_38' => 0,
    'vocabulary_54' => 0,
    'vocabulary_56' => 0,
    'vocabulary_6' => 0,
    'vocabulary_4' => 0,
    'vocabulary_44' => 0,
    'vocabulary_46' => 0,
    'vocabulary_3' => 0,
    'vocabulary_48' => 0,
    'vocabulary_50' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'vocabulary_58' => 0,
    'vocabulary_7' => 0,
    'vocabulary_2' => 0,
    'vocabulary_31' => 0,
    'vocabulary_32' => 0,
    'vocabulary_33' => 0,
    'vocabulary_34' => 0,
    'vocabulary_9' => 0,
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="grid-3 alpha">[field_logo]</div>';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'grid-3',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="grid-5 omega">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Training description */
  $handler->display->display_options['fields']['field_organization_training_desc']['id'] = 'field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['table'] = 'field_data_field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['field'] = 'field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['label'] = '';
  $handler->display->display_options['fields']['field_organization_training_desc']['alter']['text'] = '<div class="grid-5 omega">[field_organization_training_desc-value]</div>';
  $handler->display->display_options['fields']['field_organization_training_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_training_desc']['group_columns'] = array(
    'format' => 'format',
  );
  /* Field: Content: Training url */
  $handler->display->display_options['fields']['field_organization_training_url']['id'] = 'field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['table'] = 'field_data_field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['field'] = 'field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['label'] = '';
  $handler->display->display_options['fields']['field_organization_training_url']['alter']['text'] = '<div class="grid-5 omega">[field_organization_training_url]</div>';
  $handler->display->display_options['fields']['field_organization_training_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_training_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_organization_training_url']['group_column'] = 'entity_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
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
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Supporting Technologies listing (field_organization_technologies) */
  $handler->display->display_options['filters']['field_organization_technologies_value']['id'] = 'field_organization_technologies_value';
  $handler->display->display_options['filters']['field_organization_technologies_value']['table'] = 'field_data_field_organization_technologies';
  $handler->display->display_options['filters']['field_organization_technologies_value']['field'] = 'field_organization_technologies_value';
  $handler->display->display_options['filters']['field_organization_technologies_value']['value'] = array(
    'on' => 'on',
  );
  $handler->display->display_options['filters']['field_organization_technologies_value']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="grid-3 alpha">[field_logo]</div>';
  $handler->display->display_options['fields']['field_logo']['element_class'] = 'intro';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'grid-3',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="grid-5 omega">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '390';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
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
  $handler->display->display_options['path'] = 'supporting-technologies';
  $export['drupalorg_supporting_technologies'] = $view;

  $view = new view();
  $view->name = 'drupalorg_training';
  $view->description = 'List of organizations providing training services';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Drupal.org Marketplace: Training';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Training';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = 'The following is a list of organizations that indicate they provide Drupal training services.

For upcoming Trainings check <a href="http://groups.drupal.org/events?type[]=training">Events section</a> and <a href="http://drupal.org/learn-drupal">Global Training Days</a>.';
  $handler->display->display_options['header']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'Sorry, no training companies found for this country.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
    'vocabulary_1' => 0,
    'vocabulary_5' => 0,
    'vocabulary_38' => 0,
    'vocabulary_54' => 0,
    'vocabulary_56' => 0,
    'vocabulary_6' => 0,
    'vocabulary_4' => 0,
    'vocabulary_44' => 0,
    'vocabulary_46' => 0,
    'vocabulary_3' => 0,
    'vocabulary_48' => 0,
    'vocabulary_50' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'vocabulary_58' => 0,
    'vocabulary_7' => 0,
    'vocabulary_2' => 0,
    'vocabulary_31' => 0,
    'vocabulary_32' => 0,
    'vocabulary_33' => 0,
    'vocabulary_34' => 0,
    'vocabulary_9' => 0,
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="grid-3 alpha">[field_logo]</div>';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'grid-3',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="grid-5 omega">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Training description */
  $handler->display->display_options['fields']['field_organization_training_desc']['id'] = 'field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['table'] = 'field_data_field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['field'] = 'field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['label'] = '';
  $handler->display->display_options['fields']['field_organization_training_desc']['alter']['text'] = '<div class="grid-5 omega">[field_organization_training_desc-value]</div>';
  $handler->display->display_options['fields']['field_organization_training_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_training_desc']['group_columns'] = array(
    'format' => 'format',
  );
  /* Field: Content: Training url */
  $handler->display->display_options['fields']['field_organization_training_url']['id'] = 'field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['table'] = 'field_data_field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['field'] = 'field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['label'] = '';
  $handler->display->display_options['fields']['field_organization_training_url']['alter']['text'] = '<div class="grid-5 omega">[field_organization_training_url]</div>';
  $handler->display->display_options['fields']['field_organization_training_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_training_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_organization_training_url']['group_column'] = 'entity_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: List in Training section (field_org_training_request) */
  $handler->display->display_options['filters']['field_org_training_request_value']['id'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['table'] = 'field_data_field_org_training_request';
  $handler->display->display_options['filters']['field_org_training_request_value']['field'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Training listing (field_organization_training_list) */
  $handler->display->display_options['filters']['field_organization_training_list_value']['id'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['table'] = 'field_data_field_organization_training_list';
  $handler->display->display_options['filters']['field_organization_training_list_value']['field'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['value'] = array(
    'on' => 'on',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="grid-3 alpha">[field_logo]</div>';
  $handler->display->display_options['fields']['field_logo']['element_class'] = 'intro';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'grid-3',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logo']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="grid-5 omega">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Training description */
  $handler->display->display_options['fields']['field_organization_training_desc']['id'] = 'field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['table'] = 'field_data_field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['field'] = 'field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc']['label'] = '';
  $handler->display->display_options['fields']['field_organization_training_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_training_desc']['alter']['text'] = '<div class="grid-5 omega">[field_organization_training_desc-value]</div>';
  $handler->display->display_options['fields']['field_organization_training_desc']['alter']['max_length'] = '390';
  $handler->display->display_options['fields']['field_organization_training_desc']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_organization_training_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_training_desc']['group_columns'] = array(
    'format' => 'format',
  );
  /* Field: Content: Training url */
  $handler->display->display_options['fields']['field_organization_training_url']['id'] = 'field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['table'] = 'field_data_field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['field'] = 'field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url']['label'] = '';
  $handler->display->display_options['fields']['field_organization_training_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization_training_url']['alter']['text'] = '<div class="main"><h2>[title]</h2>
[field_organization_training_desc] 
<p>[field_organization_training_url]</p>
</div>';
  $handler->display->display_options['fields']['field_organization_training_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_training_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_training_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_organization_training_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_organization_training_url']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
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
  $handler->display->display_options['path'] = 'training';

  /* Display: Sidebar navigation */
  $handler = $view->new_display('block', 'Sidebar navigation', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by country';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
    'vocabulary_1' => 0,
    'vocabulary_5' => 0,
    'vocabulary_38' => 0,
    'vocabulary_54' => 0,
    'vocabulary_56' => 0,
    'vocabulary_6' => 0,
    'vocabulary_4' => 0,
    'vocabulary_44' => 0,
    'vocabulary_46' => 0,
    'vocabulary_3' => 0,
    'vocabulary_48' => 0,
    'vocabulary_50' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'vocabulary_58' => 0,
    'vocabulary_7' => 0,
    'vocabulary_2' => 0,
    'vocabulary_31' => 0,
    'vocabulary_32' => 0,
    'vocabulary_33' => 0,
    'vocabulary_34' => 0,
    'vocabulary_9' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['id'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['field'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = 'Trainings: %1';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: List in Training section (field_org_training_request) */
  $handler->display->display_options['filters']['field_org_training_request_value']['id'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['table'] = 'field_data_field_org_training_request';
  $handler->display->display_options['filters']['field_org_training_request_value']['field'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Training listing (field_organization_training_list) */
  $handler->display->display_options['filters']['field_organization_training_list_value']['id'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['table'] = 'field_data_field_organization_training_list';
  $handler->display->display_options['filters']['field_organization_training_list_value']['field'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['value'] = array(
    'on' => 'on',
  );

  /* Display: Management view */
  $handler = $view->new_display('page', 'Management view', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marketplace management';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'grid-12 alpha omega';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'created' => 'created',
    'name_1' => 'name_1',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name_1' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<a href="http://drupal.org/node/1735708">Marketplace guidelines</a>.  Guides for reviewers: <a href="http://drupal.org/node/1710338">marketplace listings</a>, <a href="http://drupal.org/node/1735864">training listings</a>.';
  $handler->display->display_options['header']['text']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organization';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="grid-4">[title]</div>';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Posted by';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Updated by';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated on';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Content: List in marketplace (field_org_marketplace_request) */
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['id'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['table'] = 'field_data_field_org_marketplace_request';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['field'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['group'] = 1;
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['operator_id'] = 'field_org_marketplace_request_value_op';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['label'] = 'Services listing request';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['operator'] = 'field_org_marketplace_request_value_op';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['identifier'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['remember_roles'] = array(
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
    14 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Services listing (field_organization_list_rule) */
  $handler->display->display_options['filters']['field_organization_list_rule_value']['id'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['table'] = 'field_data_field_organization_list_rule';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['field'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['value'] = array(
    'featured' => 'featured',
  );
  $handler->display->display_options['filters']['field_organization_list_rule_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_list_rule_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['operator_id'] = 'field_organization_list_rule_value_op';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['label'] = 'Services listing';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['operator'] = 'field_organization_list_rule_value_op';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['identifier'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['remember_roles'] = array(
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
    14 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: List in Training section (field_org_training_request) */
  $handler->display->display_options['filters']['field_org_training_request_value']['id'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['table'] = 'field_data_field_org_training_request';
  $handler->display->display_options['filters']['field_org_training_request_value']['field'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['group'] = 1;
  $handler->display->display_options['filters']['field_org_training_request_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['operator_id'] = 'field_org_training_request_value_op';
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['label'] = 'Training section request';
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['operator'] = 'field_org_training_request_value_op';
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['identifier'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['remember_roles'] = array(
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
    14 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Training listing (field_organization_training_list) */
  $handler->display->display_options['filters']['field_organization_training_list_value']['id'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['table'] = 'field_data_field_organization_training_list';
  $handler->display->display_options['filters']['field_organization_training_list_value']['field'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_training_list_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['operator_id'] = 'field_organization_training_list_value_op';
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['label'] = 'Training listing';
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['operator'] = 'field_organization_training_list_value_op';
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['identifier'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['remember_roles'] = array(
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
    14 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'drupal-services/manage';
  $export['drupalorg_training'] = $view;

  return $export;
}
