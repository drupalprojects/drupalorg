<?php

/**
 * @file
 * View for Docs maintainers and admins to check status of pages.
 */

$view = new view();
$view->name = 'drupalorg_docs_management';
$view->description = 'View for Docs maintainers / admins to check status of pages';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Documentation status/management';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => 2,
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 100;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = '';
$handler->display->display_options['style_options']['columns'] = array(
  'counter' => 'counter',
  'title' => 'title',
  'title_1' => 'title_1',
  'tid' => 'tid',
  'comment_count' => 'comment_count',
  'changed' => 'changed',
  'name' => 'name',
  'status' => 'status',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
  'counter' => array(
    'separator' => '',
  ),
  'title' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'title_1' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'tid' => array(
    'separator' => '',
  ),
  'comment_count' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'changed' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'name' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'status' => array(
    'sortable' => 1,
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['order'] = 'desc';
/* Header: Global: Text area */
$handler->display->display_options['header']['text']['id'] = 'area';
$handler->display->display_options['header']['text']['table'] = 'views';
$handler->display->display_options['header']['text']['field'] = 'area';
$handler->display->display_options['header']['text']['content'] = 'All headings are sortable.';
$handler->display->display_options['header']['text']['format'] = '1';
/* Relationship: Book: Top level book */
$handler->display->display_options['relationships']['bid']['id'] = 'bid';
$handler->display->display_options['relationships']['bid']['table'] = 'book';
$handler->display->display_options['relationships']['bid']['field'] = 'bid';
$handler->display->display_options['relationships']['bid']['label'] = 'Top level book';
/* Relationship: Content revision: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['label'] = 'user';
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = '#';
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'bid';
$handler->display->display_options['fields']['title_1']['label'] = 'Top level book';
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'All terms';
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Revised by';
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Filter criterion: Content: Comment count */
$handler->display->display_options['filters']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['filters']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['filters']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['filters']['comment_count']['operator'] = '>=';
$handler->display->display_options['filters']['comment_count']['group'] = '0';
$handler->display->display_options['filters']['comment_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['comment_count']['expose']['operator_id'] = 'comment_count_op';
$handler->display->display_options['filters']['comment_count']['expose']['label'] = 'Comment count';
$handler->display->display_options['filters']['comment_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['comment_count']['expose']['operator'] = 'comment_count_op';
$handler->display->display_options['filters']['comment_count']['expose']['identifier'] = 'comment_count';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'book' => 'book',
);
$handler->display->display_options['filters']['type']['group'] = '0';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = '0';
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['relationship'] = 'bid';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = '0';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Top level book';
$handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['group'] = '0';
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['label'] = 'Page status';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_31';
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title_1']['id'] = 'title_1';
$handler->display->display_options['filters']['title_1']['table'] = 'node';
$handler->display->display_options['filters']['title_1']['field'] = 'title';
$handler->display->display_options['filters']['title_1']['operator'] = 'contains';
$handler->display->display_options['filters']['title_1']['group'] = '0';
$handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['label'] = 'Title contains';
$handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['group'] = '0';
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Drupal version';
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'vocabulary_5';
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['group'] = '0';
$handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Audience type';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'vocabulary_38';
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['group'] = '0';
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Level';
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'level';
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'vocabulary_56';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'documentation/manage';
