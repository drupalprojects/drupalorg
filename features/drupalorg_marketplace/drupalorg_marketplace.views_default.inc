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
  $view->name = 'drupal_org_all_organizations';
  $view->description = 'List of organizations with profiles on Drupal.org';
  $view->tag = 'marketplace';
  $view->base_table = 'node';
  $view->human_name = 'All Drupal Organizations';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter results';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @start to @end of @total organizations. <a href="/node/1887616">Confirmed users</a> can <a href="/node/add/organization">add an organization</a>.</p>
<p>Organizations using Drupal are shops providing Drupal services, customers that have Drupal installations, and companies that support Drupal financially or through sponsoring amazing events that promote Drupal.</p>
<p>The organizations listed below are in order of issue credits awarded in the past 90 days and by membership in the Drupal Supporter Programs.</p>';
  /* Relationship: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_52_tid']['label'] = 'locations';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Sort criterion: Content: Org contribution rank (field_org_contribution_rank) */
  $handler->display->display_options['sorts']['field_org_contribution_rank_value']['id'] = 'field_org_contribution_rank_value';
  $handler->display->display_options['sorts']['field_org_contribution_rank_value']['table'] = 'field_data_field_org_contribution_rank';
  $handler->display->display_options['sorts']['field_org_contribution_rank_value']['field'] = 'field_org_contribution_rank_value';
  $handler->display->display_options['sorts']['field_org_contribution_rank_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'A-Z';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'organizations';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Organization name contains';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Organization type (field_organization_type) */
  $handler->display->display_options['filters']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['filters']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['operator_id'] = 'field_organization_type_tid_op';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['label'] = 'Organization type';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['operator'] = 'field_organization_type_tid_op';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['identifier'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organization_type_tid']['vocabulary'] = 'organization_type';

  /* Display: Drupal Orgs */
  $handler = $view->new_display('page', 'Drupal Orgs', 'organizations');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = 'Organizations using Drupal: %1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '1';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['base_path'] = 'organizations';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Organization name contains';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Organization type (field_organization_type) */
  $handler->display->display_options['filters']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['filters']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['operator_id'] = 'field_organization_type_tid_op';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['label'] = 'Organization type';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['operator'] = 'field_organization_type_tid_op';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['identifier'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organization_type_tid']['vocabulary'] = 'organization_type';
  /* Filter criterion: Content: Membership status (field_org_membership_status) */
  $handler->display->display_options['filters']['field_org_membership_status_value']['id'] = 'field_org_membership_status_value';
  $handler->display->display_options['filters']['field_org_membership_status_value']['table'] = 'field_data_field_org_membership_status';
  $handler->display->display_options['filters']['field_org_membership_status_value']['field'] = 'field_org_membership_status_value';
  $handler->display->display_options['filters']['field_org_membership_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_membership_status_value']['expose']['operator_id'] = 'field_org_membership_status_value_op';
  $handler->display->display_options['filters']['field_org_membership_status_value']['expose']['label'] = 'Membership status (field_org_membership_status)';
  $handler->display->display_options['filters']['field_org_membership_status_value']['expose']['operator'] = 'field_org_membership_status_value_op';
  $handler->display->display_options['filters']['field_org_membership_status_value']['expose']['identifier'] = 'field_org_membership_status_value';
  $handler->display->display_options['filters']['field_org_membership_status_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_org_membership_status_value']['group_info']['label'] = 'Membership status';
  $handler->display->display_options['filters']['field_org_membership_status_value']['group_info']['identifier'] = 'membership';
  $handler->display->display_options['filters']['field_org_membership_status_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_org_membership_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Drupal Association members',
      'operator' => 'longerthan',
      'value' => '1',
    ),
    2 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  $handler->display->display_options['path'] = 'organizations';

  /* Display: Drupal Orgs by Country */
  $handler = $view->new_display('block', 'Drupal Orgs by Country', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by country';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'grid cols-2 drupalorg-random sponsors--signature';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Offices in */
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['id'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['field'] = 'taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_52']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Drupal Orgs by Country';
  $translatables['drupal_org_all_organizations'] = array(
    t('Defaults'),
    t('Organizations'),
    t('more'),
    t('Filter results'),
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
    t('<p>Displaying @start to @end of @total organizations. <a href="/node/1887616">Confirmed users</a> can <a href="/node/add/organization">add an organization</a>.</p>
<p>Organizations using Drupal are shops providing Drupal services, customers that have Drupal installations, and companies that support Drupal financially or through sponsoring amazing events that promote Drupal.</p>
<p>The organizations listed below are in order of issue credits awarded in the past 90 days and by membership in the Drupal Supporter Programs.</p>'),
    t('locations'),
    t('Title'),
    t('Updated date'),
    t('A-Z'),
    t('All'),
    t('Organization name contains'),
    t('Organization type'),
    t('Drupal Orgs'),
    t('Organizations using Drupal: %1'),
    t('Membership status (field_org_membership_status)'),
    t('Membership status'),
    t('Drupal Orgs by Country'),
    t('Browse by country'),
  );
  $export['drupal_org_all_organizations'] = $view;

  $view = new view();
  $view->name = 'drupalorg_organization_supported_projects';
  $view->description = 'Embedded on organization node view.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Drupalorg organization supported projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Supporting organizations (field_supporting_organizations) */
  $handler->display->display_options['relationships']['field_supporting_organizations_value']['id'] = 'field_supporting_organizations_value';
  $handler->display->display_options['relationships']['field_supporting_organizations_value']['table'] = 'field_data_field_supporting_organizations';
  $handler->display->display_options['relationships']['field_supporting_organizations_value']['field'] = 'field_supporting_organizations_value';
  $handler->display->display_options['relationships']['field_supporting_organizations_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_supporting_organizations_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field collection item: Organization (field_supporting_organization) */
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['id'] = 'field_supporting_organization_target_id';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['table'] = 'field_data_field_supporting_organization';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['field'] = 'field_supporting_organization_target_id';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['relationship'] = 'field_supporting_organizations_value';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_supporting_organization_target_id']['validate_options']['types'] = array(
    'organization' => 'organization',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['drupalorg_organization_supported_projects'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field collection item from field_supporting_organizations'),
    t('All'),
  );
  $export['drupalorg_organization_supported_projects'] = $view;

  $view = new view();
  $view->name = 'drupalorg_organizations';
  $view->description = 'List of organizations for drupal-services page';
  $view->tag = 'marketplace';
  $view->base_table = 'node';
  $view->human_name = 'Drupal.org Marketplace: Service Browser';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Marketplace';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Apply filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total organizations provide Drupal services and have requested to be listed here.';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Sort criterion: Content: Org contribution rank (field_org_contribution_rank) */
  $handler->display->display_options['sorts']['field_org_contribution_rank_value']['id'] = 'field_org_contribution_rank_value';
  $handler->display->display_options['sorts']['field_org_contribution_rank_value']['table'] = 'field_data_field_org_contribution_rank';
  $handler->display->display_options['sorts']['field_org_contribution_rank_value']['field'] = 'field_org_contribution_rank_value';
  $handler->display->display_options['sorts']['field_org_contribution_rank_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'A-Z';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'All services';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Marketplace: %1';
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
  $handler->display->display_options['arguments']['tid_1']['title'] = 'Marketplace: %2';
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
  $handler->display->display_options['arguments']['tid_2']['title'] = 'Marketplace: %3';
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
  /* Filter criterion: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_52_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['label'] = 'Countries in which your organization has a physical presence (taxonomy_vocabulary_52)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['operator'] = 'taxonomy_vocabulary_52_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['identifier'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['vocabulary'] = 'vocabulary_52';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'All services';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Marketplace: %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['base_path'] = 'drupal-services';
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
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['tid_1']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['exception']['title'] = 'All sectors';
  $handler->display->display_options['arguments']['tid_1']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['title'] = 'Marketplace: %2';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['base_path'] = 'drupal-services';
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
  $handler->display->display_options['arguments']['tid_2']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['tid_2']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['exception']['title'] = 'All locations';
  $handler->display->display_options['arguments']['tid_2']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['title'] = 'Marketplace: %3';
  $handler->display->display_options['arguments']['tid_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_2']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['base_path'] = 'drupal-services';
  $handler->display->display_options['arguments']['tid_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['tid_2']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_2']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid_2']['add_table'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: List in marketplace (field_org_marketplace_request) */
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['id'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['table'] = 'field_data_field_org_marketplace_request';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['field'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['group'] = 1;
  /* Filter criterion: Content: Services listing (field_organization_list_rule) */
  $handler->display->display_options['filters']['field_organization_list_rule_value']['id'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['table'] = 'field_data_field_organization_list_rule';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['field'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['value'] = array(
    'all-providers' => 'all-providers',
    'featured' => 'featured',
  );
  $handler->display->display_options['filters']['field_organization_list_rule_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['operator_id'] = 'field_organization_list_rule_value_op';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['label'] = 'Services listing';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['operator'] = 'field_organization_list_rule_value_op';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['identifier'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['remember_roles'] = array(
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
    42 => 0,
  );
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_organization_list_rule_value']['group_info']['label'] = 'Services listing (field_organization_list_rule)';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['group_info']['identifier'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_organization_list_rule_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Services (taxonomy_vocabulary_48) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['id'] = 'taxonomy_vocabulary_48_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['table'] = 'field_data_taxonomy_vocabulary_48';
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['field'] = 'taxonomy_vocabulary_48_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_48_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['expose']['operator'] = 'taxonomy_vocabulary_48_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['expose']['identifier'] = 'services';
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['expose']['remember_roles'] = array(
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
    42 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_48_tid']['vocabulary'] = 'vocabulary_48';
  /* Filter criterion: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['label'] = 'Sectors';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['identifier'] = 'sectors';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['multiple'] = TRUE;
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
    42 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['vocabulary'] = 'vocabulary_50';
  /* Filter criterion: Content: Offices in (taxonomy_vocabulary_52) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['id'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['field'] = 'taxonomy_vocabulary_52_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_52_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['label'] = 'Offices in';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['operator'] = 'taxonomy_vocabulary_52_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['identifier'] = 'offices';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['expose']['remember_roles'] = array(
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
    42 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_52_tid']['vocabulary'] = 'vocabulary_52';
  /* Filter criterion: Content: Locations served (field_organization_loc_served) */
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['id'] = 'field_organization_loc_served_tid';
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['table'] = 'field_data_field_organization_loc_served';
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['field'] = 'field_organization_loc_served_tid';
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['expose']['operator_id'] = 'field_organization_loc_served_tid_op';
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['expose']['label'] = 'Locations served';
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['expose']['operator'] = 'field_organization_loc_served_tid_op';
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['expose']['identifier'] = 'locations';
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['expose']['remember_roles'] = array(
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
    42 => 0,
  );
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organization_loc_served_tid']['vocabulary'] = 'vocabulary_52';
  $handler->display->display_options['path'] = 'drupal-services';

  /* Display: Premium Partners and Above */
  $handler = $view->new_display('panel_pane', 'Premium Partners and Above', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Talk to an expert';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'card-logo',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['value'] = array(
    'supporting_signature' => 'supporting_signature',
    'supporting_premium' => 'supporting_premium',
    'technology_signature' => 'technology_signature',
    'technology_premium' => 'technology_premium',
    'hosting_signature' => 'hosting_signature',
    'hosting_premium' => 'hosting_premium',
  );
  $translatables['drupalorg_organizations'] = array(
    t('Defaults'),
    t('Marketplace'),
    t('more'),
    t('Apply filters'),
    t('Clear filters'),
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
    t('@total organizations provide Drupal services and have requested to be listed here.'),
    t('Title'),
    t('Updated date'),
    t('A-Z'),
    t('All services'),
    t('Marketplace: %1'),
    t('All sectors'),
    t('Marketplace: %2'),
    t('All locations'),
    t('Marketplace: %3'),
    t('Countries in which your organization has a physical presence (taxonomy_vocabulary_52)'),
    t('Page'),
    t('Services listing'),
    t('Services listing (field_organization_list_rule)'),
    t('Services'),
    t('Sectors'),
    t('Offices in'),
    t('Locations served'),
    t('Premium Partners and Above'),
    t('Talk to an expert'),
    t('View panes'),
  );
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
  $handler->display->display_options['style_options']['row_class'] = 'views-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = TRUE;
  $handler->display->display_options['empty']['text']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['text'] = '<div class="grid-3 alpha">[field_logo]</div>';
  $handler->display->display_options['fields']['field_logo']['element_class'] = 'intro';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="grid-5 omega">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="main"><h2>[title]</h2>
[body]
</div>';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '390';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'supporting-technologies';
  $translatables['drupalorg_supporting_technologies'] = array(
    t('Defaults'),
    t('Supporting Technologies'),
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
    t('Coming soon.'),
    t('<div class="grid-3 alpha">[field_logo]</div>'),
    t('<div class="grid-5 omega">[title]</div>'),
    t('<div class="main"><h2>[title]</h2>
[body]
</div>'),
    t('Page'),
  );
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
  /* Field: Content: Offices in */
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
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
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
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
  $translatables['drupalorg_training'] = array(
    t('Defaults'),
    t('Training'),
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
    t('The following is a list of organizations that indicate they provide Drupal training services.

For upcoming Trainings check <a href="http://groups.drupal.org/events?type[]=training">Events section</a> and <a href="http://drupal.org/learn-drupal">Global Training Days</a>.'),
    t('Sorry, no training companies found for this country.'),
    t('term'),
    t('<div class="grid-3 alpha">[field_logo]</div>'),
    t('<div class="grid-5 omega">[title]</div>'),
    t('<div class="grid-5 omega">[field_organization_training_desc-value]</div>'),
    t('<div class="grid-5 omega">[field_organization_training_url]</div>'),
    t('All'),
    t('Page'),
    t('<div class="main"><h2>[title]</h2>
[field_organization_training_desc]
<p>[field_organization_training_url]</p>
</div>'),
    t('Sidebar navigation'),
    t('Browse by country'),
    t('Offices in'),
    t('Trainings: %1'),
    t('Management view'),
    t('Marketplace management'),
    t('<a href="http://drupal.org/node/1735708">Marketplace guidelines</a>.  Guides for reviewers: <a href="http://drupal.org/node/1710338">marketplace listings</a>, <a href="http://drupal.org/node/1735864">training listings</a>.'),
    t('user'),
    t('author'),
    t('Organization'),
    t('<div class="grid-4">[title]</div>'),
    t('Posted by'),
    t('Posted on'),
    t('Updated by'),
    t('Updated on'),
    t('Published'),
    t('Title'),
    t('Services listing request'),
    t('Services listing'),
    t('Training section request'),
    t('Training listing'),
  );
  $export['drupalorg_training'] = $view;

  $view = new view();
  $view->name = 'organization_case_studies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organization: Case Studies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '◀︎ [title_1]';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_case_organizations_target_id']['id'] = 'field_case_organizations_target_id';
  $handler->display->display_options['relationships']['field_case_organizations_target_id']['table'] = 'field_data_field_case_organizations';
  $handler->display->display_options['relationships']['field_case_organizations_target_id']['field'] = 'field_case_organizations_target_id';
  $handler->display->display_options['relationships']['field_case_organizations_target_id']['required'] = TRUE;
  /* Field: Content: Primary screenshot */
  $handler->display->display_options['fields']['field_mainimage']['id'] = 'field_mainimage';
  $handler->display->display_options['fields']['field_mainimage']['table'] = 'field_data_field_mainimage';
  $handler->display->display_options['fields']['field_mainimage']['field'] = 'field_mainimage';
  $handler->display->display_options['fields']['field_mainimage']['label'] = '';
  $handler->display->display_options['fields']['field_mainimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mainimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mainimage']['settings'] = array(
    'image_style' => 'case-4-2x',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_case_organizations_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Back to [title_1]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_case_organizations_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Case studies from %1';
  $handler->display->display_options['arguments']['nid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['breadcrumb'] = 'node/%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'organization' => 'organization',
  );
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
    'casestudy' => 'casestudy',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/case-studies';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all case studies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Case studies';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Case studies</h3>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Primary screenshot */
  $handler->display->display_options['fields']['field_mainimage']['id'] = 'field_mainimage';
  $handler->display->display_options['fields']['field_mainimage']['table'] = 'field_data_field_mainimage';
  $handler->display->display_options['fields']['field_mainimage']['field'] = 'field_mainimage';
  $handler->display->display_options['fields']['field_mainimage']['label'] = '';
  $handler->display->display_options['fields']['field_mainimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mainimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mainimage']['settings'] = array(
    'image_style' => 'case-4-2x',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $translatables['organization_case_studies'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('◀︎ [title_1]'),
    t('Content entity referenced from field_case_organizations'),
    t('Back to [title_1]'),
    t('All'),
    t('Case studies from %1'),
    t('node/%1'),
    t('Page'),
    t('Block'),
    t('View all case studies'),
    t('Case studies'),
    t('<h3>Case studies</h3>'),
  );
  $export['organization_case_studies'] = $view;

  $view = new view();
  $view->name = 'users_in_organization';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Users in organization';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '48';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'flat';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '◀︎ [title]';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: User: Organizations (field_organizations) */
  $handler->display->display_options['relationships']['field_organizations_value']['id'] = 'field_organizations_value';
  $handler->display->display_options['relationships']['field_organizations_value']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['relationships']['field_organizations_value']['field'] = 'field_organizations_value';
  $handler->display->display_options['relationships']['field_organizations_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_organizations_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['id'] = 'field_organization_reference_target_id';
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['table'] = 'field_data_field_organization_reference';
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['field'] = 'field_organization_reference_target_id';
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['required'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'grid-2-2x-square';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['alter']['text'] = '<h3>[field_job_title]</h3>';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Organization */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['fields']['field_organization_name']['label'] = '';
  $handler->display->display_options['fields']['field_organization_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'On Drupal.org for [created] <br/>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_organization_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Back to [title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_organization_reference_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'People at %1';
  $handler->display->display_options['arguments']['nid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['breadcrumb'] = 'node/%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'organization' => 'organization',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field collection item: Current (field_current) */
  $handler->display->display_options['filters']['field_current_value']['id'] = 'field_current_value';
  $handler->display->display_options['filters']['field_current_value']['table'] = 'field_data_field_current';
  $handler->display->display_options['filters']['field_current_value']['field'] = 'field_current_value';
  $handler->display->display_options['filters']['field_current_value']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['filters']['field_current_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/users';
  $translatables['users_in_organization'] = array(
    t('Master'),
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
    t('◀︎ [title]'),
    t('field collection item from field_organizations'),
    t('Content entity referenced from field_organization_reference'),
    t('[name]'),
    t('<h3>[field_job_title]</h3>'),
    t('On Drupal.org for [created] <br/>'),
    t('Back to [title]'),
    t('All'),
    t('People at %1'),
    t('node/%1'),
    t('Page'),
  );
  $export['users_in_organization'] = $view;

  return $export;
}
