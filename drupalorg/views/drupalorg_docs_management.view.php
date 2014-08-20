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
$handler->display->display_options['title'] = 'Documentation management';
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
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'title_1' => 'title_1',
  'comment_count' => 'comment_count',
  'created' => 'created',
  'changed' => 'changed',
  'name' => 'name',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'comment_count' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
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
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Text area */
$handler->display->display_options['header']['text']['id'] = 'text';
$handler->display->display_options['header']['text']['table'] = 'views';
$handler->display->display_options['header']['text']['field'] = 'area';
$handler->display->display_options['header']['text']['content'] = '<p>This page helps you to find Community Documentation pages that need to be improved. Some notes and related information:</p>
<ul>
<li><a href="/new-contributors">New contributor tasks</a>: Step-by-step instructions for tasks you can do to improve documentation. Look in the "Writers" and "Anyone" sections.</li>
<li><a href="/contribute/documentation">Contribute to documentation guide</a></li>
<li><a href="/governance/documentation-policies">Documentation Guidelines, Policies, and Standards</a></li>
<li><a href="/documentation">Community Documentation home page</a></li>
<li><a href="/node/1168704">Drupal.org content overview</a> (list of documentation and non-documentation Books)</li>
</ul>

* Entries in the Book dropdown marked with an asterisk are Communication & Marketing guides';
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'bid';
$handler->display->display_options['fields']['title_1']['label'] = 'Book';
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Field: Content: Comment count */
$handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'custom';
$handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'custom';
$handler->display->display_options['fields']['changed']['custom_date_format'] = 'M d, Y';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Revised by';
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title_1']['id'] = 'title_1';
$handler->display->display_options['filters']['title_1']['table'] = 'node';
$handler->display->display_options['filters']['title_1']['field'] = 'title';
$handler->display->display_options['filters']['title_1']['operator'] = 'contains';
$handler->display->display_options['filters']['title_1']['group'] = 1;
$handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['label'] = 'Title contains';
$handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
$handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['group'] = 1;
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['label'] = 'Page status';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_31';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'book' => 'book',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'bid';
$handler->display->display_options['filters']['nid']['group'] = 1;
$handler->display->display_options['filters']['nid']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
$handler->display->display_options['filters']['nid']['is_grouped'] = TRUE;
$handler->display->display_options['filters']['nid']['group_info']['label'] = 'Book';
$handler->display->display_options['filters']['nid']['group_info']['identifier'] = 'nid';
$handler->display->display_options['filters']['nid']['group_info']['group_items'] = array(
  1 => array(
    'title' => '<No book>',
    'operator' => 'empty',
    'value' => array(
      'value' => '0',
      'min' => '',
      'max' => '',
    ),
  ),
  2 => array(
    'title' => 'Theming Guide',
    'operator' => '=',
    'value' => array(
      'value' => '1709980',
      'min' => '',
      'max' => '',
    ),
  ),
  3 => array(
    'title' => 'Structure Guide',
    'operator' => '=',
    'value' => array(
      'value' => '627082',
      'min' => '',
      'max' => '',
    ),
  ),
  4 => array(
    'title' => 'Understanding Drupal',
    'operator' => '=',
    'value' => array(
      'value' => '258',
      'min' => '',
      'max' => '',
    ),
  ),
  5 => array(
    'title' => 'Tutorial and site recipes',
    'operator' => '=',
    'value' => array(
      'value' => '627198',
      'min' => '',
      'max' => '',
    ),
  ),
  6 => array(
    'title' => 'About Drupal *',
    'operator' => '=',
    'value' => array(
      'value' => '1',
      'min' => '',
      'max' => '',
    ),
  ),
  7 => array(
    'title' => 'About drupal.org *',
    'operator' => '=',
    'value' => array(
      'value' => '179723',
      'min' => '',
      'max' => '',
    ),
  ),
  8 => array(
    'title' => 'Administration & Security Guide',
    'operator' => '=',
    'value' => array(
      'value' => '627152',
      'min' => '',
      'max' => '',
    ),
  ),
  9 => array(
    'title' => 'Develop for Drupal',
    'operator' => '=',
    'value' => array(
      'value' => '316',
      'min' => '',
      'max' => '',
    ),
  ),
  10 => array(
    'title' => 'Drupal CMS benefits *',
    'operator' => '=',
    'value' => array(
      'value' => '909476',
      'min' => '',
      'max' => '',
    ),
  ),
  11 => array(
    'title' => 'Getting involved guide *',
    'operator' => '=',
    'value' => array(
      'value' => '281873',
      'min' => '',
      'max' => '',
    ),
  ),
  12 => array(
    'title' => 'Installation Guide',
    'operator' => '=',
    'value' => array(
      'value' => '251019',
      'min' => '',
      'max' => '',
    ),
  ),
  13 => array(
    'title' => 'Mobile Guide',
    'operator' => '=',
    'value' => array(
      'value' => '1380356',
      'min' => '',
      'max' => '',
    ),
  ),
  14 => array(
    'title' => 'Multilingual Guide',
    'operator' => '=',
    'value' => array(
      'value' => '324602',
      'min' => '',
      'max' => '',
    ),
  ),
  15 => array(
    'title' => 'Reference',
    'operator' => '=',
    'value' => array(
      'value' => '627210',
      'min' => '',
      'max' => '',
    ),
  ),
  16 => array(
    'title' => 'Site Building Guide',
    'operator' => '=',
    'value' => array(
      'value' => '257',
      'min' => '',
      'max' => '',
    ),
  ),
);
/* Filter criterion: Content: Has taxonomy terms (with depth) */
$handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
$handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Audience';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
$handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
$handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'vocabulary_38';
$handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_2']['field'] = 'tid';
$handler->display->display_options['filters']['tid_2']['group'] = 1;
$handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Level';
$handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
$handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'level';
$handler->display->display_options['filters']['tid_2']['type'] = 'select';
$handler->display->display_options['filters']['tid_2']['vocabulary'] = 'vocabulary_56';
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_1']['field'] = 'tid';
$handler->display->display_options['filters']['tid_1']['group'] = 1;
$handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Drupal version';
$handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
$handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
$handler->display->display_options['filters']['tid_1']['type'] = 'select';
$handler->display->display_options['filters']['tid_1']['vocabulary'] = 'vocabulary_5';
/* Filter criterion: Content: Comment count */
$handler->display->display_options['filters']['comment_count']['id'] = 'comment_count';
$handler->display->display_options['filters']['comment_count']['table'] = 'node_comment_statistics';
$handler->display->display_options['filters']['comment_count']['field'] = 'comment_count';
$handler->display->display_options['filters']['comment_count']['operator'] = '>=';
$handler->display->display_options['filters']['comment_count']['group'] = 1;
$handler->display->display_options['filters']['comment_count']['exposed'] = TRUE;
$handler->display->display_options['filters']['comment_count']['expose']['operator_id'] = 'comment_count_op';
$handler->display->display_options['filters']['comment_count']['expose']['label'] = 'Comment count';
$handler->display->display_options['filters']['comment_count']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['comment_count']['expose']['operator'] = 'comment_count_op';
$handler->display->display_options['filters']['comment_count']['expose']['identifier'] = 'comment_count';
$handler->display->display_options['filters']['comment_count']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['comment_count']['is_grouped'] = TRUE;
$handler->display->display_options['filters']['comment_count']['group_info']['label'] = 'Comments';
$handler->display->display_options['filters']['comment_count']['group_info']['identifier'] = 'comment_count';
$handler->display->display_options['filters']['comment_count']['group_info']['group_items'] = array(
  1 => array(
    'title' => 'No comments',
    'operator' => '=',
    'value' => array(
      'value' => '0',
      'min' => '',
      'max' => '',
    ),
  ),
  2 => array(
    'title' => '< 5',
    'operator' => '<',
    'value' => array(
      'value' => '5',
      'min' => '',
      'max' => '',
    ),
  ),
  3 => array(
    'title' => '< 20',
    'operator' => '<',
    'value' => array(
      'value' => '20',
      'min' => '',
      'max' => '',
    ),
  ),
  4 => array(
    'title' => '> = 20',
    'operator' => '>=',
    'value' => array(
      'value' => '20',
      'min' => '',
      'max' => '',
    ),
  ),
  5 => array(
    'title' => '',
    'operator' => '>=',
    'value' => array(
      'value' => '',
      'min' => '',
      'max' => '',
    ),
  ),
);
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
$handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid_3']['field'] = 'tid';
$handler->display->display_options['filters']['tid_3']['value'] = '';
$handler->display->display_options['filters']['tid_3']['group'] = 1;
$handler->display->display_options['filters']['tid_3']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid_3']['expose']['operator_id'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['label'] = 'Keyword taxonomy term';
$handler->display->display_options['filters']['tid_3']['expose']['operator'] = 'tid_3_op';
$handler->display->display_options['filters']['tid_3']['expose']['identifier'] = 'tid_3';
$handler->display->display_options['filters']['tid_3']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['tid_3']['vocabulary'] = 'vocabulary_54';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'documentation/manage';
