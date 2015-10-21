<?php

/**
 * @file view to find nodes that a specific user has edited.
 */

$view = new view();
$view->name = 'drupalorg_admin_noderev_by_user';
$view->description = 'Administrative view of all nodes edits by a user';
$view->tag = '';
$view->base_table = 'node_revision';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer nodes';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'created' => 'created',
  'status' => 'status',
  'delete_revision' => 'delete_revision',
  'link_to_revision' => 'delete_revision',
  'log' => 'log',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'delete_revision' => array(
    'align' => '',
    'separator' => ' ',
    'empty_column' => 0,
  ),
  'link_to_revision' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'log' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Content revision: Content */
$handler->display->display_options['relationships']['vid']['id'] = 'vid';
$handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['vid']['field'] = 'vid';
/* Relationship: Content revision: User */
$handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['relationships']['uid_1']['table'] = 'node_revision';
$handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['relationship'] = 'vid';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'vid';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
/* Field: Content revision: Log message */
$handler->display->display_options['fields']['log']['id'] = 'log';
$handler->display->display_options['fields']['log']['table'] = 'node_revision';
$handler->display->display_options['fields']['log']['field'] = 'log';
/* Field: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['relationship'] = 'vid';
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'vid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['fields']['uid_1']['table'] = 'users';
$handler->display->display_options['fields']['uid_1']['field'] = 'uid';
$handler->display->display_options['fields']['uid_1']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['uid_1']['label'] = '';
$handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['relationship'] = 'vid';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['relationship'] = 'vid';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'vid';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['relationship'] = 'uid_1';
$handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['uid']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['uid']['title'] = 'Nodes Edited by %1';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
/* Filter criterion: Global: Fields comparison */
$handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
$handler->display->display_options['filters']['fields_compare']['table'] = 'views';
$handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
$handler->display->display_options['filters']['fields_compare']['operator'] = '<>';
$handler->display->display_options['filters']['fields_compare']['group'] = 1;
$handler->display->display_options['filters']['fields_compare']['right_field'] = 'uid_1';
$handler->display->display_options['filters']['fields_compare']['left_field'] = 'uid';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'vid';
$handler->display->display_options['filters']['type']['value'] = array(
  'book_listing' => 'book_listing',
  'book' => 'book',
  'casestudy' => 'casestudy',
  'changenotice' => 'changenotice',
  'forum' => 'forum',
  'project_issue' => 'project_issue',
  'organization' => 'organization',
  'page' => 'page',
  'section' => 'section',
  'story' => 'story',
);

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'admin_noderev_by_user_pane');
$handler->display->display_options['argument_input'] = array(
  'uid' => array(
    'type' => 'user',
    'context' => 'entity:comment.field_attribute_contribution_to',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'User: Uid',
  ),
);
