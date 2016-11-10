<?php
/**
 * @file
 * drupalorg_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'issue_credit';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Issue credit';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'changed' => 'changed',
  );
  $handler->display->display_options['row_options']['separator'] = 'updated';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_issue_credit_target_id']['id'] = 'field_issue_credit_target_id';
  $handler->display->display_options['relationships']['field_issue_credit_target_id']['table'] = 'field_data_field_issue_credit';
  $handler->display->display_options['relationships']['field_issue_credit_target_id']['field'] = 'field_issue_credit_target_id';
  $handler->display->display_options['relationships']['field_issue_credit_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_target_id']['id'] = 'field_project_target_id';
  $handler->display->display_options['relationships']['field_project_target_id']['table'] = 'field_data_field_project';
  $handler->display->display_options['relationships']['field_project_target_id']['field'] = 'field_project_target_id';
  $handler->display->display_options['relationships']['field_project_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_project_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['nid']['format_plural_singular'] = '1 issue';
  $handler->display->display_options['fields']['nid']['format_plural_plural'] = '@count issues';
  /* Sort criterion: MAX(Content: Updated date) */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['group_type'] = 'max';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'project_issue' => 'project_issue',
  );
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'comment';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content: Status (field_issue_status) */
  $handler->display->display_options['filters']['field_issue_status_value']['id'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['table'] = 'field_data_field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_value']['field'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['value'] = array(
    2 => '2',
    7 => '7',
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['filters']['changed_1']['table'] = 'node';
  $handler->display->display_options['filters']['changed_1']['field'] = 'changed';
  $handler->display->display_options['filters']['changed_1']['operator'] = '>=';
  $handler->display->display_options['filters']['changed_1']['value']['value'] = '-1 year';
  $handler->display->display_options['filters']['changed_1']['value']['type'] = 'offset';

  /* Display: User recent */
  $handler = $view->new_display('block', 'User recent', 'user_recent');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title_1' => 'title_1',
    'nid' => 'nid',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_project_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_project_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'node/[nid_1]';
  $handler->display->display_options['fields']['title_1']['alter']['suffix'] = ',';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'u/%1/issue-credits/[nid_1]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['nid']['format_plural_singular'] = '1 issue';
  $handler->display->display_options['fields']['nid']['format_plural_plural'] = '@count issues';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Comment: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'comment';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';

  /* Display: User recent page */
  $handler = $view->new_display('page', 'User recent page', 'user_recent_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'changed' => 'changed',
  );
  $handler->display->display_options['row_options']['separator'] = 'updated';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[name]';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_issue_credit_target_id']['id'] = 'field_issue_credit_target_id';
  $handler->display->display_options['relationships']['field_issue_credit_target_id']['table'] = 'field_data_field_issue_credit';
  $handler->display->display_options['relationships']['field_issue_credit_target_id']['field'] = 'field_issue_credit_target_id';
  $handler->display->display_options['relationships']['field_issue_credit_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'today time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'medium';
  /* Field: Comment: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'comment';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Back to [name]’s profile';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['name']['alter']['prefix'] = '◀︎ ';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Comment: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'comment';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'name';
  /* Contextual filter: Content: Project (field_project) */
  $handler->display->display_options['arguments']['field_project_target_id']['id'] = 'field_project_target_id';
  $handler->display->display_options['arguments']['field_project_target_id']['table'] = 'field_data_field_project';
  $handler->display->display_options['arguments']['field_project_target_id']['field'] = 'field_project_target_id';
  $handler->display->display_options['arguments']['field_project_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project_target_id']['title'] = '%2 issues credited to %1';
  $handler->display->display_options['arguments']['field_project_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_project_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_project_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project_target_id']['validate']['type'] = 'project_nid';
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
    'project_issue' => 'project_issue',
  );
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'comment';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content: Status (field_issue_status) */
  $handler->display->display_options['filters']['field_issue_status_value']['id'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['table'] = 'field_data_field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_value']['field'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['value'] = array(
    2 => '2',
    7 => '7',
  );
  $handler->display->display_options['path'] = 'u/%/issue-credits/%';

  /* Display: Organization recent */
  $handler = $view->new_display('block', 'Organization recent', 'organization_recent');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title_1' => 'title_1',
    'nid' => 'nid',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_project_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_project_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'node/[nid_1]';
  $handler->display->display_options['fields']['title_1']['alter']['suffix'] = ',';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/%organization-nid/issue-credits/[nid_1]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['nid']['format_plural_singular'] = '1 issue';
  $handler->display->display_options['fields']['nid']['format_plural_plural'] = '@count issues';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'project_issue' => 'project_issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'comment';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: Status (field_issue_status) */
  $handler->display->display_options['filters']['field_issue_status_value']['id'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['table'] = 'field_data_field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_value']['field'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['value'] = array(
    2 => '2',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_issue_status_value']['group'] = 1;
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['filters']['changed_1']['table'] = 'node';
  $handler->display->display_options['filters']['changed_1']['field'] = 'changed';
  $handler->display->display_options['filters']['changed_1']['operator'] = '>=';
  $handler->display->display_options['filters']['changed_1']['value']['value'] = '-3 months';
  $handler->display->display_options['filters']['changed_1']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed_1']['group'] = 1;
  /* Filter criterion: Comment: Attribute this contribution (field_attribute_as_volunteer) */
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['id'] = 'field_attribute_as_volunteer_value';
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['table'] = 'field_data_field_attribute_as_volunteer';
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['field'] = 'field_attribute_as_volunteer_value';
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['group'] = 1;
  /* Filter criterion: Comment: Attribute comment at organization (field_attribute_contribution_to) */
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['id'] = 'field_attribute_contribution_to_target_id';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['table'] = 'field_data_field_attribute_contribution_to';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['field'] = 'field_attribute_contribution_to_target_id';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['group'] = 2;
  /* Filter criterion: Comment: Attribute comment for customer (field_for_customer) */
  $handler->display->display_options['filters']['field_for_customer_target_id']['id'] = 'field_for_customer_target_id';
  $handler->display->display_options['filters']['field_for_customer_target_id']['table'] = 'field_data_field_for_customer';
  $handler->display->display_options['filters']['field_for_customer_target_id']['field'] = 'field_for_customer_target_id';
  $handler->display->display_options['filters']['field_for_customer_target_id']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['field_for_customer_target_id']['group'] = 2;
  $handler->display->display_options['filters']['field_for_customer_target_id']['expose']['operator_id'] = 'field_for_customer_target_id_op';
  $handler->display->display_options['filters']['field_for_customer_target_id']['expose']['label'] = 'Attribute comment for customer (field_for_customer)';
  $handler->display->display_options['filters']['field_for_customer_target_id']['expose']['operator'] = 'field_for_customer_target_id_op';
  $handler->display->display_options['filters']['field_for_customer_target_id']['expose']['identifier'] = 'field_for_customer_target_id';
  /* Filter criterion: Content: Project type (field_project_type) */
  $handler->display->display_options['filters']['field_project_type_value']['id'] = 'field_project_type_value';
  $handler->display->display_options['filters']['field_project_type_value']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['filters']['field_project_type_value']['field'] = 'field_project_type_value';
  $handler->display->display_options['filters']['field_project_type_value']['relationship'] = 'field_project_target_id';
  $handler->display->display_options['filters']['field_project_type_value']['value'] = array(
    'full' => 'full',
  );

  /* Display: Organization recent page */
  $handler = $view->new_display('page', 'Organization recent page', 'organization_recent_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'changed' => 'changed',
  );
  $handler->display->display_options['row_options']['separator'] = 'updated';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '◀︎ <a href="!url-1">Back to %1</a>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'today time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'medium';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Project (field_project) */
  $handler->display->display_options['arguments']['field_project_target_id']['id'] = 'field_project_target_id';
  $handler->display->display_options['arguments']['field_project_target_id']['table'] = 'field_data_field_project';
  $handler->display->display_options['arguments']['field_project_target_id']['field'] = 'field_project_target_id';
  $handler->display->display_options['arguments']['field_project_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_project_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project_target_id']['title'] = '%2 issues credited to %1';
  $handler->display->display_options['arguments']['field_project_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_project_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_project_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project_target_id']['validate']['type'] = 'project_nid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'project_issue' => 'project_issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'comment';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: Status (field_issue_status) */
  $handler->display->display_options['filters']['field_issue_status_value']['id'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['table'] = 'field_data_field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_value']['field'] = 'field_issue_status_value';
  $handler->display->display_options['filters']['field_issue_status_value']['value'] = array(
    2 => '2',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_issue_status_value']['group'] = 1;
  /* Filter criterion: Comment: Attribute this contribution (field_attribute_as_volunteer) */
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['id'] = 'field_attribute_as_volunteer_value';
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['table'] = 'field_data_field_attribute_as_volunteer';
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['field'] = 'field_attribute_as_volunteer_value';
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_attribute_as_volunteer_value']['group'] = 1;
  /* Filter criterion: Comment: Attribute comment at organization (field_attribute_contribution_to) */
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['id'] = 'field_attribute_contribution_to_target_id';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['table'] = 'field_data_field_attribute_contribution_to';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['field'] = 'field_attribute_contribution_to_target_id';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['value']['value'] = '***CURRENT_ORGANIZATION***';
  $handler->display->display_options['filters']['field_attribute_contribution_to_target_id']['group'] = 2;
  /* Filter criterion: Comment: Attribute comment for customer (field_for_customer) */
  $handler->display->display_options['filters']['field_for_customer_target_id']['id'] = 'field_for_customer_target_id';
  $handler->display->display_options['filters']['field_for_customer_target_id']['table'] = 'field_data_field_for_customer';
  $handler->display->display_options['filters']['field_for_customer_target_id']['field'] = 'field_for_customer_target_id';
  $handler->display->display_options['filters']['field_for_customer_target_id']['relationship'] = 'field_issue_credit_target_id';
  $handler->display->display_options['filters']['field_for_customer_target_id']['value']['value'] = '***CURRENT_ORGANIZATION***';
  $handler->display->display_options['filters']['field_for_customer_target_id']['group'] = 2;
  $handler->display->display_options['path'] = 'node/%/issue-credits/%';
  $translatables['issue_credit'] = array(
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
    t('Comment entity referenced from field_issue_credit'),
    t('Content entity referenced from field_project'),
    t('User recent'),
    t(','),
    t('All'),
    t('User recent page'),
    t('[name]'),
    t('Back to [name]’s profile'),
    t('◀︎ '),
    t('%2 issues credited to %1'),
    t('Organization recent'),
    t('Attribute comment for customer (field_for_customer)'),
    t('Organization recent page'),
    t('◀︎ <a href="!url-1">Back to %1</a>'),
  );
  $export['issue_credit'] = $view;

  $view = new view();
  $view->name = 'user_mentees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'People mentored';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_mentors_user']['id'] = 'reverse_field_mentors_user';
  $handler->display->display_options['relationships']['reverse_field_mentors_user']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_mentors_user']['field'] = 'reverse_field_mentors_user';
  $handler->display->display_options['relationships']['reverse_field_mentors_user']['label'] = 'Mentor';
  $handler->display->display_options['relationships']['reverse_field_mentors_user']['required'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_mentors_user';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'reverse_field_mentors_user';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'reverse_field_mentors_user';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['picture']['alter']['alt'] = '[name]';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'drupalorg_user_picture_large';
  /* Sort criterion: User: Last login */
  $handler->display->display_options['sorts']['login']['id'] = 'login';
  $handler->display->display_options['sorts']['login']['table'] = 'users';
  $handler->display->display_options['sorts']['login']['field'] = 'login';
  $handler->display->display_options['sorts']['login']['relationship'] = 'reverse_field_mentors_user';
  $handler->display->display_options['sorts']['login']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'People listing %1 as a mentor';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_mentors_user';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'user/%/people-mentored';
  $translatables['user_mentees'] = array(
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
    t('Mentor'),
    t('Name'),
    t('Uid'),
    t('[name]'),
    t('All'),
    t('People listing %1 as a mentor'),
    t('Page'),
  );
  $export['user_mentees'] = $view;

  return $export;
}
