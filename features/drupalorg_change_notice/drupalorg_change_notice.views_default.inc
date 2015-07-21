<?php
/**
 * @file
 * drupalorg_change_notice.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_change_notice_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'change_records';
  $view->description = 'List Change record nodes';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Change records';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_change_to_branch' => 'field_change_to_branch',
    'field_change_to' => 'field_change_to_branch',
    'created' => 'created',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'field_change_to_branch' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 0,
    ),
    'field_change_to' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'Invalid project or no changes found.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_target_id']['id'] = 'field_project_target_id';
  $handler->display->display_options['relationships']['field_project_target_id']['table'] = 'field_data_field_project';
  $handler->display->display_options['relationships']['field_project_target_id']['field'] = 'field_project_target_id';
  /* Field: Content: Introduced in branch */
  $handler->display->display_options['fields']['field_change_to_branch']['id'] = 'field_change_to_branch';
  $handler->display->display_options['fields']['field_change_to_branch']['table'] = 'field_data_field_change_to_branch';
  $handler->display->display_options['fields']['field_change_to_branch']['field'] = 'field_change_to_branch';
  $handler->display->display_options['fields']['field_change_to_branch']['label'] = 'Introduced in branch/version';
  /* Field: Content: Introduced in version */
  $handler->display->display_options['fields']['field_change_to']['id'] = 'field_change_to';
  $handler->display->display_options['fields']['field_change_to']['table'] = 'field_data_field_change_to';
  $handler->display->display_options['fields']['field_change_to']['field'] = 'field_change_to';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Notice created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd-M-Y';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '255',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Change';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]" title="[field_description_value]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[field_description]';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['label'] = '';
  $handler->display->display_options['fields']['field_project']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_project']['settings'] = array(
    'link' => 0,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Change records for %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '3060';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'project_nid';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
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
    'changenotice' => 'changenotice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Description (field_description) */
  $handler->display->display_options['filters']['field_description_value_1']['id'] = 'field_description_value_1';
  $handler->display->display_options['filters']['field_description_value_1']['table'] = 'field_data_field_description';
  $handler->display->display_options['filters']['field_description_value_1']['field'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_description_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_description_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_description_value_1']['expose']['operator_id'] = 'field_description_value_1_op';
  $handler->display->display_options['filters']['field_description_value_1']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_description_value_1']['expose']['operator'] = 'field_description_value_1_op';
  $handler->display->display_options['filters']['field_description_value_1']['expose']['identifier'] = 'field_description_value_1';
  $handler->display->display_options['filters']['field_description_value_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Introduced in branch (field_change_to_branch) */
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['id'] = 'field_change_to_branch_value_1';
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['table'] = 'field_data_field_change_to_branch';
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['field'] = 'field_change_to_branch_value';
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['expose']['operator_id'] = 'field_change_to_branch_value_1_op';
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['expose']['label'] = 'Branch changed in';
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['expose']['operator'] = 'field_change_to_branch_value_1_op';
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['expose']['identifier'] = 'field_change_to_branch_value_1';
  $handler->display->display_options['filters']['field_change_to_branch_value_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Introduced in version (field_change_to) */
  $handler->display->display_options['filters']['field_change_to_value_1']['id'] = 'field_change_to_value_1';
  $handler->display->display_options['filters']['field_change_to_value_1']['table'] = 'field_data_field_change_to';
  $handler->display->display_options['filters']['field_change_to_value_1']['field'] = 'field_change_to_value';
  $handler->display->display_options['filters']['field_change_to_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_change_to_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_change_to_value_1']['expose']['operator_id'] = 'field_change_to_value_1_op';
  $handler->display->display_options['filters']['field_change_to_value_1']['expose']['label'] = 'Introduced in version';
  $handler->display->display_options['filters']['field_change_to_value_1']['expose']['operator'] = 'field_change_to_value_1_op';
  $handler->display->display_options['filters']['field_change_to_value_1']['expose']['identifier'] = 'field_change_to_value_1';
  $handler->display->display_options['filters']['field_change_to_value_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Change node created';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* Filter criterion: Content: Impacts (field_impacts) */
  $handler->display->display_options['filters']['field_impacts_value']['id'] = 'field_impacts_value';
  $handler->display->display_options['filters']['field_impacts_value']['table'] = 'field_data_field_impacts';
  $handler->display->display_options['filters']['field_impacts_value']['field'] = 'field_impacts_value';
  $handler->display->display_options['filters']['field_impacts_value']['group'] = 1;
  $handler->display->display_options['filters']['field_impacts_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_impacts_value']['expose']['operator_id'] = 'field_impacts_value_op';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['label'] = 'Impacts';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['operator'] = 'field_impacts_value_op';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['identifier'] = 'field_impacts_value';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_impacts_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Online documentation (field_online_recorded) */
  $handler->display->display_options['filters']['field_online_recorded_value']['id'] = 'field_online_recorded_value';
  $handler->display->display_options['filters']['field_online_recorded_value']['table'] = 'field_data_field_online_recorded';
  $handler->display->display_options['filters']['field_online_recorded_value']['field'] = 'field_online_recorded_value';
  $handler->display->display_options['filters']['field_online_recorded_value']['group'] = 1;
  $handler->display->display_options['filters']['field_online_recorded_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_online_recorded_value']['expose']['operator_id'] = 'field_online_recorded_value_op';
  $handler->display->display_options['filters']['field_online_recorded_value']['expose']['label'] = 'Online doc update';
  $handler->display->display_options['filters']['field_online_recorded_value']['expose']['operator'] = 'field_online_recorded_value_op';
  $handler->display->display_options['filters']['field_online_recorded_value']['expose']['identifier'] = 'field_online_recorded_value';
  $handler->display->display_options['filters']['field_online_recorded_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Theming guide (field_theme_recorded) */
  $handler->display->display_options['filters']['field_theme_recorded_value']['id'] = 'field_theme_recorded_value';
  $handler->display->display_options['filters']['field_theme_recorded_value']['table'] = 'field_data_field_theme_recorded';
  $handler->display->display_options['filters']['field_theme_recorded_value']['field'] = 'field_theme_recorded_value';
  $handler->display->display_options['filters']['field_theme_recorded_value']['group'] = 1;
  $handler->display->display_options['filters']['field_theme_recorded_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_theme_recorded_value']['expose']['operator_id'] = 'field_theme_recorded_value_op';
  $handler->display->display_options['filters']['field_theme_recorded_value']['expose']['label'] = 'Theming guide update';
  $handler->display->display_options['filters']['field_theme_recorded_value']['expose']['operator'] = 'field_theme_recorded_value_op';
  $handler->display->display_options['filters']['field_theme_recorded_value']['expose']['identifier'] = 'field_theme_recorded_value';
  $handler->display->display_options['filters']['field_theme_recorded_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Module developer documentation (field_module_recorded) */
  $handler->display->display_options['filters']['field_module_recorded_value']['id'] = 'field_module_recorded_value';
  $handler->display->display_options['filters']['field_module_recorded_value']['table'] = 'field_data_field_module_recorded';
  $handler->display->display_options['filters']['field_module_recorded_value']['field'] = 'field_module_recorded_value';
  $handler->display->display_options['filters']['field_module_recorded_value']['group'] = 1;
  $handler->display->display_options['filters']['field_module_recorded_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_module_recorded_value']['expose']['operator_id'] = 'field_module_recorded_value_op';
  $handler->display->display_options['filters']['field_module_recorded_value']['expose']['label'] = 'Module developer doc update';
  $handler->display->display_options['filters']['field_module_recorded_value']['expose']['operator'] = 'field_module_recorded_value_op';
  $handler->display->display_options['filters']['field_module_recorded_value']['expose']['identifier'] = 'field_module_recorded_value';
  $handler->display->display_options['filters']['field_module_recorded_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Examples project (field_examples_recorded) */
  $handler->display->display_options['filters']['field_examples_recorded_value']['id'] = 'field_examples_recorded_value';
  $handler->display->display_options['filters']['field_examples_recorded_value']['table'] = 'field_data_field_examples_recorded';
  $handler->display->display_options['filters']['field_examples_recorded_value']['field'] = 'field_examples_recorded_value';
  $handler->display->display_options['filters']['field_examples_recorded_value']['group'] = 1;
  $handler->display->display_options['filters']['field_examples_recorded_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_examples_recorded_value']['expose']['operator_id'] = 'field_examples_recorded_value_op';
  $handler->display->display_options['filters']['field_examples_recorded_value']['expose']['label'] = 'Examples project update';
  $handler->display->display_options['filters']['field_examples_recorded_value']['expose']['operator'] = 'field_examples_recorded_value_op';
  $handler->display->display_options['filters']['field_examples_recorded_value']['expose']['identifier'] = 'field_examples_recorded_value';
  $handler->display->display_options['filters']['field_examples_recorded_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Coder Review (field_coder_recorded) */
  $handler->display->display_options['filters']['field_coder_recorded_value']['id'] = 'field_coder_recorded_value';
  $handler->display->display_options['filters']['field_coder_recorded_value']['table'] = 'field_data_field_coder_recorded';
  $handler->display->display_options['filters']['field_coder_recorded_value']['field'] = 'field_coder_recorded_value';
  $handler->display->display_options['filters']['field_coder_recorded_value']['group'] = 1;
  $handler->display->display_options['filters']['field_coder_recorded_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coder_recorded_value']['expose']['operator_id'] = 'field_coder_recorded_value_op';
  $handler->display->display_options['filters']['field_coder_recorded_value']['expose']['label'] = 'Coder Review update';
  $handler->display->display_options['filters']['field_coder_recorded_value']['expose']['operator'] = 'field_coder_recorded_value_op';
  $handler->display->display_options['filters']['field_coder_recorded_value']['expose']['identifier'] = 'field_coder_recorded_value';
  $handler->display->display_options['filters']['field_coder_recorded_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Coder Upgrade (field_coder_update_recorded) */
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['id'] = 'field_coder_update_recorded_value';
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['table'] = 'field_data_field_coder_update_recorded';
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['field'] = 'field_coder_update_recorded_value';
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['group'] = 1;
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['expose']['operator_id'] = 'field_coder_update_recorded_value_op';
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['expose']['label'] = 'Coder Upgrade update';
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['expose']['operator'] = 'field_coder_update_recorded_value_op';
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['expose']['identifier'] = 'field_coder_update_recorded_value';
  $handler->display->display_options['filters']['field_coder_update_recorded_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Other (field_other_recorded) */
  $handler->display->display_options['filters']['field_other_recorded_value']['id'] = 'field_other_recorded_value';
  $handler->display->display_options['filters']['field_other_recorded_value']['table'] = 'field_data_field_other_recorded';
  $handler->display->display_options['filters']['field_other_recorded_value']['field'] = 'field_other_recorded_value';
  $handler->display->display_options['filters']['field_other_recorded_value']['group'] = 1;
  $handler->display->display_options['filters']['field_other_recorded_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_other_recorded_value']['expose']['operator_id'] = 'field_other_recorded_value_op';
  $handler->display->display_options['filters']['field_other_recorded_value']['expose']['label'] = 'Other update';
  $handler->display->display_options['filters']['field_other_recorded_value']['expose']['operator'] = 'field_other_recorded_value_op';
  $handler->display->display_options['filters']['field_other_recorded_value']['expose']['identifier'] = 'field_other_recorded_value';
  $handler->display->display_options['filters']['field_other_recorded_value']['expose']['remember_roles'] = array(
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

  /* Display: Change list page (published) */
  $handler = $view->new_display('page', 'Change list page (published)', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = TRUE;
  $handler->display->display_options['header']['text']['content'] = '<a href="/node/add/changenotice?edit%5Bfield_project%5D[und][0][target_id]=%1 ([field_project])">Add new change record</a>';
  $handler->display->display_options['header']['text']['format'] = '1';
  $handler->display->display_options['header']['text']['tokenize'] = TRUE;
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
    'changenotice' => 'changenotice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Description (field_description) */
  $handler->display->display_options['filters']['field_description_value']['id'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['table'] = 'field_data_field_description';
  $handler->display->display_options['filters']['field_description_value']['field'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_description_value']['group'] = 1;
  $handler->display->display_options['filters']['field_description_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_description_value']['expose']['operator_id'] = 'field_description_value_op';
  $handler->display->display_options['filters']['field_description_value']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_description_value']['expose']['operator'] = 'field_description_value_op';
  $handler->display->display_options['filters']['field_description_value']['expose']['identifier'] = 'keywords_description';
  $handler->display->display_options['filters']['field_description_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Change record status (field_change_record_status) */
  $handler->display->display_options['filters']['field_change_record_status_value']['id'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['table'] = 'field_data_field_change_record_status';
  $handler->display->display_options['filters']['field_change_record_status_value']['field'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_change_record_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['operator_id'] = 'field_change_record_status_value_op';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['label'] = 'Change record status';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['operator'] = 'field_change_record_status_value_op';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['identifier'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Introduced in branch (field_change_to_branch) */
  $handler->display->display_options['filters']['field_change_to_branch_value']['id'] = 'field_change_to_branch_value';
  $handler->display->display_options['filters']['field_change_to_branch_value']['table'] = 'field_data_field_change_to_branch';
  $handler->display->display_options['filters']['field_change_to_branch_value']['field'] = 'field_change_to_branch_value';
  $handler->display->display_options['filters']['field_change_to_branch_value']['group'] = 1;
  $handler->display->display_options['filters']['field_change_to_branch_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['operator_id'] = 'field_change_to_branch_value_op';
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['label'] = 'Introduced in branch';
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['operator'] = 'field_change_to_branch_value_op';
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['identifier'] = 'to_branch';
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Introduced in version (field_change_to) */
  $handler->display->display_options['filters']['field_change_to_value']['id'] = 'field_change_to_value';
  $handler->display->display_options['filters']['field_change_to_value']['table'] = 'field_data_field_change_to';
  $handler->display->display_options['filters']['field_change_to_value']['field'] = 'field_change_to_value';
  $handler->display->display_options['filters']['field_change_to_value']['group'] = 1;
  $handler->display->display_options['filters']['field_change_to_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_change_to_value']['expose']['operator_id'] = 'field_change_to_value_op';
  $handler->display->display_options['filters']['field_change_to_value']['expose']['label'] = 'Introduced in version';
  $handler->display->display_options['filters']['field_change_to_value']['expose']['operator'] = 'field_change_to_value_op';
  $handler->display->display_options['filters']['field_change_to_value']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_change_to_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Change node created';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* Filter criterion: Content: Impacts (field_impacts) */
  $handler->display->display_options['filters']['field_impacts_value']['id'] = 'field_impacts_value';
  $handler->display->display_options['filters']['field_impacts_value']['table'] = 'field_data_field_impacts';
  $handler->display->display_options['filters']['field_impacts_value']['field'] = 'field_impacts_value';
  $handler->display->display_options['filters']['field_impacts_value']['group'] = 1;
  $handler->display->display_options['filters']['field_impacts_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_impacts_value']['expose']['operator_id'] = 'field_impacts_value_op';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['label'] = 'Impacts';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['operator'] = 'field_impacts_value_op';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['identifier'] = 'impacts';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_impacts_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'list-changes/published';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Published';
  $handler->display->display_options['menu']['description'] = 'Published change records';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Published';
  $handler->display->display_options['tab_options']['description'] = 'Published change records';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Change list page (drafts) */
  $handler = $view->new_display('page', 'Change list page (drafts)', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Draft change records';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = TRUE;
  $handler->display->display_options['header']['text']['content'] = '<a href="/node/add/changenotice?edit%5Bfield_project%5D[und][0][target_id]=%1 ([field_project])">Add new change record</a>';
  $handler->display->display_options['header']['text']['format'] = '1';
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
    'changenotice' => 'changenotice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Description (field_description) */
  $handler->display->display_options['filters']['field_description_value']['id'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['table'] = 'field_data_field_description';
  $handler->display->display_options['filters']['field_description_value']['field'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_description_value']['group'] = 1;
  $handler->display->display_options['filters']['field_description_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_description_value']['expose']['operator_id'] = 'field_description_value_op';
  $handler->display->display_options['filters']['field_description_value']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_description_value']['expose']['operator'] = 'field_description_value_op';
  $handler->display->display_options['filters']['field_description_value']['expose']['identifier'] = 'keywords_description';
  $handler->display->display_options['filters']['field_description_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Change record status (field_change_record_status) */
  $handler->display->display_options['filters']['field_change_record_status_value']['id'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['table'] = 'field_data_field_change_record_status';
  $handler->display->display_options['filters']['field_change_record_status_value']['field'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_change_record_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['operator_id'] = 'field_change_record_status_value_op';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['label'] = 'Change record status';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['operator'] = 'field_change_record_status_value_op';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['identifier'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Introduced in branch (field_change_to_branch) */
  $handler->display->display_options['filters']['field_change_to_branch_value']['id'] = 'field_change_to_branch_value';
  $handler->display->display_options['filters']['field_change_to_branch_value']['table'] = 'field_data_field_change_to_branch';
  $handler->display->display_options['filters']['field_change_to_branch_value']['field'] = 'field_change_to_branch_value';
  $handler->display->display_options['filters']['field_change_to_branch_value']['group'] = 1;
  $handler->display->display_options['filters']['field_change_to_branch_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['operator_id'] = 'field_change_to_branch_value_op';
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['label'] = 'Introduced in branch';
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['operator'] = 'field_change_to_branch_value_op';
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['identifier'] = 'to_branch';
  $handler->display->display_options['filters']['field_change_to_branch_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Introduced in version (field_change_to) */
  $handler->display->display_options['filters']['field_change_to_value']['id'] = 'field_change_to_value';
  $handler->display->display_options['filters']['field_change_to_value']['table'] = 'field_data_field_change_to';
  $handler->display->display_options['filters']['field_change_to_value']['field'] = 'field_change_to_value';
  $handler->display->display_options['filters']['field_change_to_value']['group'] = 1;
  $handler->display->display_options['filters']['field_change_to_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_change_to_value']['expose']['operator_id'] = 'field_change_to_value_op';
  $handler->display->display_options['filters']['field_change_to_value']['expose']['label'] = 'Introduced in version';
  $handler->display->display_options['filters']['field_change_to_value']['expose']['operator'] = 'field_change_to_value_op';
  $handler->display->display_options['filters']['field_change_to_value']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_change_to_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['group'] = 1;
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Change node created';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  /* Filter criterion: Content: Impacts (field_impacts) */
  $handler->display->display_options['filters']['field_impacts_value']['id'] = 'field_impacts_value';
  $handler->display->display_options['filters']['field_impacts_value']['table'] = 'field_data_field_impacts';
  $handler->display->display_options['filters']['field_impacts_value']['field'] = 'field_impacts_value';
  $handler->display->display_options['filters']['field_impacts_value']['group'] = 1;
  $handler->display->display_options['filters']['field_impacts_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_impacts_value']['expose']['operator_id'] = 'field_impacts_value_op';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['label'] = 'Impacts';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['operator'] = 'field_impacts_value_op';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['identifier'] = 'impacts';
  $handler->display->display_options['filters']['field_impacts_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_impacts_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'list-changes/drafts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Draft';
  $handler->display->display_options['menu']['description'] = 'Draft change records';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Change list page (review) */
  $handler = $view->new_display('page', 'Change list page (review)', 'drafts_fixed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Draft change records for fixed issues';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = TRUE;
  $handler->display->display_options['header']['text']['content'] = 'These draft change records reference <strong>Fixed</strong> or <strong>Closed (fixed)</strong> issues. They should be reviewed and published if appropriate.';
  $handler->display->display_options['header']['text']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_target_id']['id'] = 'field_project_target_id';
  $handler->display->display_options['relationships']['field_project_target_id']['table'] = 'field_data_field_project';
  $handler->display->display_options['relationships']['field_project_target_id']['field'] = 'field_project_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_issues_target_id']['id'] = 'field_issues_target_id';
  $handler->display->display_options['relationships']['field_issues_target_id']['table'] = 'field_data_field_issues';
  $handler->display->display_options['relationships']['field_issues_target_id']['field'] = 'field_issues_target_id';
  $handler->display->display_options['relationships']['field_issues_target_id']['label'] = 'Referenced issue';
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
    'changenotice' => 'changenotice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Change record status (field_change_record_status) */
  $handler->display->display_options['filters']['field_change_record_status_value']['id'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['table'] = 'field_data_field_change_record_status';
  $handler->display->display_options['filters']['field_change_record_status_value']['field'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_change_record_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['operator_id'] = 'field_change_record_status_value_op';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['label'] = 'Change record status';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['operator'] = 'field_change_record_status_value_op';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['identifier'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Status (field_issue_status) */
  $handler->display->display_options['filters']['field_issue_status_value']['id'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['table'] = 'field_data_field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_value']['field'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['relationship'] = 'field_issues_target_id';
  $handler->display->display_options['filters']['field_issue_status_value']['value'] = array(
    2 => '2',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['operator_id'] = 'field_issue_status_value_op';
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['label'] = 'Issue status';
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['operator'] = 'field_issue_status_value_op';
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['identifier'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'list-changes/review';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Review';
  $handler->display->display_options['menu']['description'] = 'Draft change records for review';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Updates page */
  $handler = $view->new_display('page', 'Updates page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Change records - Updates done';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'list-change-updates';

  /* Display: Issue page draft API changes */
  $handler = $view->new_display('block', 'Issue page draft API changes', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Change record drafts';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_issues_target_id']['id'] = 'field_issues_target_id';
  $handler->display->display_options['relationships']['field_issues_target_id']['table'] = 'field_data_field_issues';
  $handler->display->display_options['relationships']['field_issues_target_id']['field'] = 'field_issues_target_id';
  $handler->display->display_options['relationships']['field_issues_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_issues_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'project_issue' => 'project_issue',
  );
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
    'changenotice' => 'changenotice',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Change record status (field_change_record_status) */
  $handler->display->display_options['filters']['field_change_record_status_value']['id'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['table'] = 'field_data_field_change_record_status';
  $handler->display->display_options['filters']['field_change_record_status_value']['field'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['block_description'] = 'Issue page draft API changes';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'project_nid';
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
    'changenotice' => 'changenotice',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Change record status (field_change_record_status) */
  $handler->display->display_options['filters']['field_change_record_status_value']['id'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['table'] = 'field_data_field_change_record_status';
  $handler->display->display_options['filters']['field_change_record_status_value']['field'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'changes/%/rss.xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'block_1' => 0,
  );

  /* Display: Issue page published API changes */
  $handler = $view->new_display('block', 'Issue page published API changes', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Change records for this issue';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_issues_target_id']['id'] = 'field_issues_target_id';
  $handler->display->display_options['relationships']['field_issues_target_id']['table'] = 'field_data_field_issues';
  $handler->display->display_options['relationships']['field_issues_target_id']['field'] = 'field_issues_target_id';
  $handler->display->display_options['relationships']['field_issues_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_issues_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'project_issue' => 'project_issue',
  );
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
    'changenotice' => 'changenotice',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Change record status (field_change_record_status) */
  $handler->display->display_options['filters']['field_change_record_status_value']['id'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['table'] = 'field_data_field_change_record_status';
  $handler->display->display_options['filters']['field_change_record_status_value']['field'] = 'field_change_record_status_value';
  $handler->display->display_options['filters']['field_change_record_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Change records for issue page';
  $export['change_records'] = $view;

  return $export;
}
