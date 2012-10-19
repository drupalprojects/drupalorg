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
  $view->name = 'drupalorg_marketplace_hosting';
  $view->description = 'List of organizations providing hosting';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'drupalorg-grid-2 drupalorg-4-col';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = 'The following hosting companies are great choices not only because they provide quality services, but because they go out of their way to support the Drupal community directly. Through code contributions or sponsorship of the Drupal Association, these organizations help make Drupal successful.';
  $handler->display->display_options['header']['text']['format'] = '1';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = '<h2>Other great hosts that support Drupal</h2>';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_organization_hosting_level_value']['id'] = 'field_organization_hosting_level_value';
  $handler->display->display_options['fields']['field_organization_hosting_level_value']['table'] = 'node_data_field_organization_hosting_level';
  $handler->display->display_options['fields']['field_organization_hosting_level_value']['field'] = 'field_organization_hosting_level_value';
  $handler->display->display_options['fields']['field_organization_hosting_level_value']['label'] = '';
  $handler->display->display_options['fields']['field_organization_hosting_level_value']['exclude'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_organization_hosting_url_url']['id'] = 'field_organization_hosting_url_url';
  $handler->display->display_options['fields']['field_organization_hosting_url_url']['table'] = 'node_data_field_organization_hosting_url';
  $handler->display->display_options['fields']['field_organization_hosting_url_url']['field'] = 'field_organization_hosting_url_url';
  $handler->display->display_options['fields']['field_organization_hosting_url_url']['label'] = 'Hosting URL';
  $handler->display->display_options['fields']['field_organization_hosting_url_url']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_organization_hosting_url_url]">[title]</a>';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_organization_hosting_level_value']['id'] = 'field_organization_hosting_level_value';
  $handler->display->display_options['sorts']['field_organization_hosting_level_value']['table'] = 'node_data_field_organization_hosting_level';
  $handler->display->display_options['sorts']['field_organization_hosting_level_value']['field'] = 'field_organization_hosting_level_value';
  $handler->display->display_options['sorts']['field_organization_hosting_level_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['id'] = 'field_organization_hosting_level_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['table'] = 'node_data_field_organization_hosting_level';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['field'] = 'field_organization_hosting_level_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['expose']['operator'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['id'] = 'field_organization_hosting_categ_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['table'] = 'node_data_field_organization_hosting_categ';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['field'] = 'field_organization_hosting_categ_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['value'] = array(
    'Shared' => 'Shared',
    'Enterprise &amp; Managed' => 'Enterprise &amp; Managed',
    'Platform as a Service' => 'Platform as a Service',
  );
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['expose']['operator'] = FALSE;

  /* Display: Shared */
  $handler = $view->new_display('page', 'Shared', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shared Hosting Providers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['id'] = 'field_organization_hosting_level_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['table'] = 'node_data_field_organization_hosting_level';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['field'] = 'field_organization_hosting_level_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['expose']['operator'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['id'] = 'field_organization_hosting_categ_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['table'] = 'node_data_field_organization_hosting_categ';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['field'] = 'field_organization_hosting_categ_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['value'] = array(
    'Shared' => 'Shared',
  );
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'hosting/shared';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Shared Hosting';
  $handler->display->display_options['menu']['description'] = 'Shared hosting';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-hosting-types-menu';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Hosting';
  $handler->display->display_options['tab_options']['description'] = 'Drupal hosting providers';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Enterprise */
  $handler = $view->new_display('page', 'Enterprise', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Enterprise & Managed Hosting';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['id'] = 'field_organization_hosting_level_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['table'] = 'node_data_field_organization_hosting_level';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['field'] = 'field_organization_hosting_level_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['expose']['operator'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['id'] = 'field_organization_hosting_categ_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['table'] = 'node_data_field_organization_hosting_categ';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['field'] = 'field_organization_hosting_categ_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['value'] = array(
    'Enterprise &amp; Managed' => 'Enterprise &amp; Managed',
  );
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'hosting/enterprise';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Enterprise & Managed';
  $handler->display->display_options['menu']['description'] = 'Enterprise & Managed hosting';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-hosting-types-menu';

  /* Display: PaaS */
  $handler = $view->new_display('page', 'PaaS', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Platform as a Service';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['id'] = 'field_organization_hosting_level_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['table'] = 'node_data_field_organization_hosting_level';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['field'] = 'field_organization_hosting_level_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_hosting_level_value_many_to_one']['expose']['operator'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['id'] = 'field_organization_hosting_categ_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['table'] = 'node_data_field_organization_hosting_categ';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['field'] = 'field_organization_hosting_categ_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['value'] = array(
    'Platform as a Service' => 'Platform as a Service',
  );
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_hosting_categ_value_many_to_one']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'hosting/paas';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Platform as a Service';
  $handler->display->display_options['menu']['description'] = 'Platform as a Service hosting';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-hosting-types-menu';
  $export['drupalorg_marketplace_hosting'] = $view;

  $view = new view();
  $view->name = 'drupalorg_organizations';
  $view->description = 'Basic organizations list';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Marketplace Service Providers';
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
    'services' => 'services',
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
    'sectors' => 'sectors',
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
    'locations' => 'locations',
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'drupal-services';
  $export['drupalorg_organizations'] = $view;

  $view = new view();
  $view->name = 'drupalorg_training';
  $view->description = 'List of organizations providing training services';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Training';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = 'The following is a list of organizations that indicate they provide Drupal training services.

For upcoming Trainings check <a href="http://groups.drupal.org/events?type[]=training">Events section</a> and <a href="http://drupal.org/learn-drupal">Global Training Days 2012</a>.';
  $handler->display->display_options['header']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'Sorry, no training companies found for this country.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_logo_fid']['id'] = 'field_logo_fid';
  $handler->display->display_options['fields']['field_logo_fid']['table'] = 'node_data_field_logo';
  $handler->display->display_options['fields']['field_logo_fid']['field'] = 'field_logo_fid';
  $handler->display->display_options['fields']['field_logo_fid']['label'] = '';
  $handler->display->display_options['fields']['field_logo_fid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo_fid']['alter']['text'] = '<div class="grid-3 alpha">[field_logo_fid]</div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="grid-5 omega">[title]</div>';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_organization_training_desc_value']['id'] = 'field_organization_training_desc_value';
  $handler->display->display_options['fields']['field_organization_training_desc_value']['table'] = 'node_data_field_organization_training_desc';
  $handler->display->display_options['fields']['field_organization_training_desc_value']['field'] = 'field_organization_training_desc_value';
  $handler->display->display_options['fields']['field_organization_training_desc_value']['label'] = '';
  $handler->display->display_options['fields']['field_organization_training_desc_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization_training_desc_value']['alter']['text'] = '<div class="grid-5 omega">[field_organization_training_desc_value]</div>';
  $handler->display->display_options['fields']['field_organization_training_desc_value']['alter']['max_length'] = '390';
  $handler->display->display_options['fields']['field_organization_training_desc_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_organization_training_desc_value']['alter']['html'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_organization_training_url_url']['id'] = 'field_organization_training_url_url';
  $handler->display->display_options['fields']['field_organization_training_url_url']['table'] = 'node_data_field_organization_training_url';
  $handler->display->display_options['fields']['field_organization_training_url_url']['field'] = 'field_organization_training_url_url';
  $handler->display->display_options['fields']['field_organization_training_url_url']['label'] = '';
  $handler->display->display_options['fields']['field_organization_training_url_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization_training_url_url']['alter']['text'] = '<div class="grid-5 omega">[field_organization_training_url_url]</div>
';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Training in %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['id'] = 'field_org_training_request_value_many_to_one';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['table'] = 'node_data_field_org_training_request';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['field'] = 'field_org_training_request_value_many_to_one';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['id'] = 'field_organization_training_list_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['table'] = 'node_data_field_organization_training_list';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['field'] = 'field_organization_training_list_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['value'] = array(
    'on' => 'on',
  );
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'training';

  /* Display: Sidebar navigation */
  $handler = $view->new_display('block', 'Sidebar navigation', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by country';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Term';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'All services';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Training: %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['add_table'] = TRUE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['id'] = 'field_org_training_request_value_many_to_one';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['table'] = 'node_data_field_org_training_request';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['field'] = 'field_org_training_request_value_many_to_one';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['id'] = 'field_organization_training_list_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['table'] = 'node_data_field_organization_training_list';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['field'] = 'field_organization_training_list_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['value'] = array(
    'on' => 'on',
  );
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    52 => '52',
  );
  $handler->display->display_options['filters']['vid']['group'] = '0';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = FALSE;

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
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = '0';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['id'] = 'field_org_marketplace_request_value_many_to_one';
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['table'] = 'node_data_field_org_marketplace_request';
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['field'] = 'field_org_marketplace_request_value_many_to_one';
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['expose']['operator_id'] = 'field_org_marketplace_request_value_many_to_one_op';
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['expose']['label'] = 'Request for Services section';
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['expose']['operator'] = 'field_org_marketplace_request_value_many_to_one_op';
  $handler->display->display_options['filters']['field_org_marketplace_request_value_many_to_one']['expose']['identifier'] = 'services_request';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['id'] = 'field_organization_list_rule_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['table'] = 'node_data_field_organization_list_rule';
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['field'] = 'field_organization_list_rule_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['value'] = array(
    'featured' => 'featured',
  );
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['expose']['operator_id'] = 'field_organization_list_rule_value_many_to_one_op';
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['expose']['label'] = 'Services listing';
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['expose']['operator'] = 'field_organization_list_rule_value_many_to_one_op';
  $handler->display->display_options['filters']['field_organization_list_rule_value_many_to_one']['expose']['identifier'] = 'services';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['id'] = 'field_org_training_request_value_many_to_one';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['table'] = 'node_data_field_org_training_request';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['field'] = 'field_org_training_request_value_many_to_one';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['value'] = array();
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['expose']['operator_id'] = 'field_org_training_request_value_many_to_one_op';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['expose']['label'] = 'Request for Training section';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['expose']['operator'] = 'field_org_training_request_value_many_to_one_op';
  $handler->display->display_options['filters']['field_org_training_request_value_many_to_one']['expose']['identifier'] = 'training_request';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['id'] = 'field_organization_training_list_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['table'] = 'node_data_field_organization_training_list';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['field'] = 'field_organization_training_list_value_many_to_one';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['value'] = array();
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['expose']['operator_id'] = 'field_organization_training_list_value_many_to_one_op';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['expose']['label'] = 'Training listing';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['expose']['operator'] = 'field_organization_training_list_value_many_to_one_op';
  $handler->display->display_options['filters']['field_organization_training_list_value_many_to_one']['expose']['identifier'] = 'training';
  $handler->display->display_options['path'] = 'drupal-services/manage';
  $export['drupalorg_training'] = $view;

  return $export;
}
