<?php
/**
 * @file
 * drupalorg_searchapi_issue_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_searchapi_issue_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'drupalorg_project_issues_searchapi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_project_issues';
  $view->human_name = 'BETA Project Issue Project (SearchAPI)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Backlog Issues for all projects (assign to move to current)';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all backlog issues';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'project_issue_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'title' => 'title',
    'has_new_content' => 'has_new_content',
    'field_issue_category' => 'field_issue_category',
    'field_issue_version' => 'field_issue_version',
    'field_issue_component' => 'field_issue_component',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'created' => 'created',
    'nothing' => 'nothing',
    'field_issue_status' => 'field_issue_status',
    'field_issue_priority' => 'field_issue_priority',
    'comment_count' => 'comment_count',
    'comment_count_new' => 'comment_count',
    'field_issue_assigned' => 'field_issue_assigned',
    'search_api_relevance' => 'search_api_relevance',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'has_new_content' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_component' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
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
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'comment_count_new' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_assigned' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'search_api_relevance' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No issues match your criteria.';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Has new content */
  $handler->display->display_options['fields']['has_new_content']['id'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['has_new_content']['field'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['label'] = '';
  $handler->display->display_options['fields']['has_new_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['has_new_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['has_new_content']['alter']['text'] = '<span class="marker">[has_new_content]</span>';
  $handler->display->display_options['fields']['has_new_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['has_new_content']['link_to_entity'] = 0;
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['label'] = '';
  $handler->display->display_options['fields']['field_issue_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_issue_category']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Version */
  $handler->display->display_options['fields']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['fields']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['fields']['field_issue_version']['label'] = '';
  $handler->display->display_options['fields']['field_issue_version']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_issue_version']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_issue_version']['alter']['text'] = ', [field_issue_version]';
  $handler->display->display_options['fields']['field_issue_version']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Component */
  $handler->display->display_options['fields']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['fields']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['fields']['field_issue_component']['label'] = '';
  $handler->display->display_options['fields']['field_issue_component']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_issue_component']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Last comment timestamp */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_comment_timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['last_comment_timestamp']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['format_plural_singular'] = '1 comment';
  $handler->display->display_options['fields']['comment_count']['format_plural_plural'] = '@count comments';
  $handler->display->display_options['fields']['comment_count']['link_to_entity'] = 0;
  /* Field: Indexed Node: New comment count */
  $handler->display->display_options['fields']['comment_count_new']['id'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count_new']['field'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['label'] = '';
  $handler->display->display_options['fields']['comment_count_new']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['text'] = '[comment_count_new] new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['path'] = '[url]#new';
  $handler->display->display_options['fields']['comment_count_new']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count_new']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['link_to_entity'] = 0;
  /* Field: Indexed Node: Priority */
  $handler->display->display_options['fields']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['label'] = '';
  $handler->display->display_options['fields']['field_issue_priority']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_issue_priority']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Summary';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4>[title]</h4>
Created [created]<br />
[comment_count] [comment_count_new] [last_comment_timestamp]
';
  /* Field: Indexed Node: Issue tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_9']['id'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['fields']['taxonomy_vocabulary_9']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['taxonomy_vocabulary_9']['field'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['fields']['taxonomy_vocabulary_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_9']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_9']['view_mode'] = 'full';
  $handler->display->display_options['fields']['taxonomy_vocabulary_9']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Priority/Type/Component';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<strong>[field_issue_priority] [field_issue_category]</strong> for [field_issue_component] [field_issue_version]';
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_status']['field'] = 'field_issue_status';
  /* Field: Indexed Node: Assigned */
  $handler->display->display_options['fields']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['alter']['text'] = 'assigned to [field_issue_assigned]';
  $handler->display->display_options['fields']['field_issue_assigned']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_assigned']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_issue_assigned']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_issue_assigned']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_issue_assigned']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_issue_assigned']['bypass_access'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = 'Score';
  $handler->display->display_options['fields']['search_api_relevance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  /* Field: Indexed Node: Edit URL */
  $handler->display->display_options['fields']['edit_url']['id'] = 'edit_url';
  $handler->display->display_options['fields']['edit_url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['edit_url']['field'] = 'edit_url';
  $handler->display->display_options['fields']['edit_url']['label'] = '';
  $handler->display->display_options['fields']['edit_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_url']['alter']['text'] = 'Update';
  $handler->display->display_options['fields']['edit_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_url']['alter']['path'] = '[edit_url]';
  $handler->display->display_options['fields']['edit_url']['alter']['link_class'] = 'issue-button';
  $handler->display->display_options['fields']['edit_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_url']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Priority */
  $handler->display->display_options['sorts']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['sorts']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['sorts']['field_issue_priority']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Indexed Node: Status */
  $handler->display->display_options['sorts']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['sorts']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['field_issue_status']['field'] = 'field_issue_status';
  /* Contextual filter: Indexed Node: Project */
  $handler->display->display_options['arguments']['field_project']['id'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['field_project']['field'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_project']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['title'] = 'Issues for %1';
  $handler->display->display_options['arguments']['field_project']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_project']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_project']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['validate']['type'] = 'project_nid_having_issue_queue';
  $handler->display->display_options['arguments']['field_project']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project']['not'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    'Open' => 'Open',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Version */
  $handler->display->display_options['filters']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_version']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator_id'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_version']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Component */
  $handler->display->display_options['filters']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_component']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator_id'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_component']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Issue tags */
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['id'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['field'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator_id'] = 'taxonomy_vocabulary_9_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['label'] = 'Issue tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator'] = 'taxonomy_vocabulary_9_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['identifier'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['remember_roles'] = array(
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

  /* Display: Issues by project (current - page) */
  $handler = $view->new_display('page', 'Issues by project (current - page)', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Issues for all projects';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all backlog issues';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Current</h2>';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @total issues assigned and active.</p>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/project-issue/!1">Create a new issue</a>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Project */
  $handler->display->display_options['arguments']['field_project']['id'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['field_project']['field'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['title'] = '%1';
  $handler->display->display_options['arguments']['field_project']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['validate']['type'] = 'project_nid_having_issue_queue';
  $handler->display->display_options['arguments']['field_project']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    1 => '1',
    13 => '13',
    8 => '8',
    14 => '14',
    15 => '15',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Version */
  $handler->display->display_options['filters']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_version']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator_id'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_version']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Component */
  $handler->display->display_options['filters']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_component']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator_id'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_component']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Assigned */
  $handler->display->display_options['filters']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator_id'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['label'] = 'Assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['identifier'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'beta/project/issues/%';

  /* Display: Backlog attached */
  $handler = $view->new_display('attachment', 'Backlog attached', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Backlog</h2>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @current_record_count issues of @total unassigned or postponed.</p>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no issues in the %1 backlog.';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Project */
  $handler->display->display_options['arguments']['field_project']['id'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['field_project']['field'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['title'] = '%1: Backlog';
  $handler->display->display_options['arguments']['field_project']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['validate']['type'] = 'project_nid_having_issue_queue';
  $handler->display->display_options['arguments']['field_project']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Version */
  $handler->display->display_options['filters']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_version']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator_id'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_version']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Component */
  $handler->display->display_options['filters']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_component']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator_id'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_component']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Assigned */
  $handler->display->display_options['filters']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_issue_assigned']['group'] = 2;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator_id'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['label'] = 'Assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['identifier'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    4 => '4',
    16 => '16',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 2;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status_1']['id'] = 'field_issue_status_1';
  $handler->display->display_options['filters']['field_issue_status_1']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status_1']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_1']['operator'] = '<>';
  $handler->display->display_options['filters']['field_issue_status_1']['value'] = array(
    2 => '2',
    3 => '3',
    5 => '5',
    6 => '6',
    18 => '18',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_issue_status_1']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Backlog page */
  $handler = $view->new_display('page', 'Backlog page', 'page_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @start - @end of @total issues that are not assigned or have been postponed.</p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Last comment timestamp */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Project */
  $handler->display->display_options['arguments']['field_project']['id'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['field_project']['field'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['title'] = 'Backlog issues for %1';
  $handler->display->display_options['arguments']['field_project']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['validate']['type'] = 'project_nid_having_issue_queue';
  $handler->display->display_options['arguments']['field_project']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Version */
  $handler->display->display_options['filters']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_version']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator_id'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_version']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Component */
  $handler->display->display_options['filters']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_component']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator_id'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_component']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['operator'] = '<>';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    2 => '2',
    3 => '3',
    5 => '5',
    6 => '6',
    18 => '18',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Assigned */
  $handler->display->display_options['filters']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_issue_assigned']['group'] = 2;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator_id'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['label'] = 'Assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['identifier'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status_1']['id'] = 'field_issue_status_1';
  $handler->display->display_options['filters']['field_issue_status_1']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status_1']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_1']['value'] = array(
    4 => '4',
    16 => '16',
  );
  $handler->display->display_options['filters']['field_issue_status_1']['group'] = 2;
  $handler->display->display_options['path'] = 'beta/project/issues/%/backlog';

  /* Display: Fixed page */
  $handler = $view->new_display('page', 'Fixed page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @start - @end of @total issues marked as fixed for this project.</p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Last comment timestamp */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Project */
  $handler->display->display_options['arguments']['field_project']['id'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['field_project']['field'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['title'] = 'Fixed issues for %1';
  $handler->display->display_options['arguments']['field_project']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['validate']['type'] = 'project_nid_having_issue_queue';
  $handler->display->display_options['arguments']['field_project']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    2 => '2',
    3 => '3',
    5 => '5',
    6 => '6',
    18 => '18',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Version */
  $handler->display->display_options['filters']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_version']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator_id'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_version']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Component */
  $handler->display->display_options['filters']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_component']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator_id'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_component']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Issue tags */
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['id'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['field'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator_id'] = 'taxonomy_vocabulary_9_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['label'] = 'Issue tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator'] = 'taxonomy_vocabulary_9_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['identifier'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'beta/project/issues/%/fixed';

  /* Display: Fixed attached */
  $handler = $view->new_display('attachment', 'Fixed attached', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Closed Issues for all projects';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all fixed/closed issues';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Fixed or Closed</h2>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @current_record_count issues of @total fixed or closed.</p>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no issues in the %1 backlog.';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Last comment timestamp */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Priority */
  $handler->display->display_options['sorts']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['sorts']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['sorts']['field_issue_priority']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Indexed Node: Status */
  $handler->display->display_options['sorts']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['sorts']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Project */
  $handler->display->display_options['arguments']['field_project']['id'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['field_project']['field'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['title'] = 'Fixed or Closed';
  $handler->display->display_options['arguments']['field_project']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['validate']['type'] = 'project_nid_having_issue_queue';
  $handler->display->display_options['arguments']['field_project']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Version */
  $handler->display->display_options['filters']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_version']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator_id'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_version']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Component */
  $handler->display->display_options['filters']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_component']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator_id'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_component']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Assigned */
  $handler->display->display_options['filters']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_issue_assigned']['group'] = 2;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator_id'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['label'] = 'Assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['identifier'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    4 => '4',
    16 => '16',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 2;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status_1']['id'] = 'field_issue_status_1';
  $handler->display->display_options['filters']['field_issue_status_1']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status_1']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status_1']['value'] = array(
    2 => '2',
    3 => '3',
    5 => '5',
    6 => '6',
    18 => '18',
    7 => '7',
  );
  $handler->display->display_options['filters']['field_issue_status_1']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['drupalorg_project_issues_searchapi'] = $view;

  $view = new view();
  $view->name = 'project_issue_all_projects_searchapi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_project_issues';
  $view->human_name = 'Project Issue All Projects (SearchAPI)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Issues for all projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'project_issue_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'field_project_machine_name' => 'field_project_machine_name',
    'field_project_title' => 'field_project_title',
    'title' => 'title',
    'has_new_content' => 'title',
    'field_issue_status' => 'field_issue_status',
    'field_issue_priority' => 'field_issue_priority',
    'field_issue_category' => 'field_issue_category',
    'field_issue_version' => 'field_issue_version',
    'comment_count' => 'comment_count',
    'comment_count_new' => 'comment_count',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'field_issue_assigned' => 'field_issue_assigned',
    'created' => 'created',
    'search_api_relevance' => 'search_api_relevance',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_machine_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'has_new_content' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'comment_count_new' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_assigned' => array(
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
    'search_api_relevance' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No issues match your criteria.';
  /* Relationship: Indexed Node: Project */
  $handler->display->display_options['relationships']['field_project']['id'] = 'field_project';
  $handler->display->display_options['relationships']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['relationships']['field_project']['field'] = 'field_project';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Node: Short name */
  $handler->display->display_options['fields']['field_project_machine_name']['id'] = 'field_project_machine_name';
  $handler->display->display_options['fields']['field_project_machine_name']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_project_machine_name']['field'] = 'field_project_machine_name';
  $handler->display->display_options['fields']['field_project_machine_name']['relationship'] = 'field_project';
  $handler->display->display_options['fields']['field_project_machine_name']['exclude'] = TRUE;
  /* Field: Project: Title (indexed) */
  $handler->display->display_options['fields']['field_project_title']['id'] = 'field_project_title';
  $handler->display->display_options['fields']['field_project_title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_project_title']['field'] = 'field_project_title';
  $handler->display->display_options['fields']['field_project_title']['label'] = 'Project';
  $handler->display->display_options['fields']['field_project_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_title']['alter']['path'] = 'project/issues/[field_project_machine_name]';
  $handler->display->display_options['fields']['field_project_title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Has new content */
  $handler->display->display_options['fields']['has_new_content']['id'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['has_new_content']['field'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['has_new_content']['alter']['text'] = '<span class="marker">[has_new_content]</span>';
  $handler->display->display_options['fields']['has_new_content']['link_to_entity'] = 0;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_status']['field'] = 'field_issue_status';
  /* Field: Indexed Node: Priority */
  $handler->display->display_options['fields']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_priority']['field'] = 'field_issue_priority';
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_category']['field'] = 'field_issue_category';
  /* Field: Indexed Node: Version */
  $handler->display->display_options['fields']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['fields']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_version']['field'] = 'field_issue_version';
  /* Field: Indexed Node: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['link_to_entity'] = 0;
  /* Field: Indexed Node: New comment count */
  $handler->display->display_options['fields']['comment_count_new']['id'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count_new']['field'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['text'] = '[comment_count_new] new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['path'] = '[url]#new';
  $handler->display->display_options['fields']['comment_count_new']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['link_to_entity'] = 0;
  /* Field: Indexed Node: Last comment timestamp */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['link_to_entity'] = 0;
  /* Field: Indexed Node: Assigned */
  $handler->display->display_options['fields']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['label'] = 'Assigned to';
  $handler->display->display_options['fields']['field_issue_assigned']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_issue_assigned']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_issue_assigned']['bypass_access'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = 'Score';
  $handler->display->display_options['fields']['search_api_relevance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Last comment timestamp */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  /* Filter criterion: Indexed Node: Project */
  $handler->display->display_options['filters']['field_project']['id'] = 'field_project';
  $handler->display->display_options['filters']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_project']['field'] = 'field_project';
  $handler->display->display_options['filters']['field_project']['operator'] = 'in';
  $handler->display->display_options['filters']['field_project']['group'] = 1;
  $handler->display->display_options['filters']['field_project']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project']['expose']['operator_id'] = 'field_project_op';
  $handler->display->display_options['filters']['field_project']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project']['expose']['operator'] = 'field_project_op';
  $handler->display->display_options['filters']['field_project']['expose']['identifier'] = 'projects';
  $handler->display->display_options['filters']['field_project']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_project']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    'Open' => 'Open',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project/issues';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'author';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'url',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'project/issues/rss';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['project_issue_all_projects_searchapi'] = $view;

  $view = new view();
  $view->name = 'project_issue_project_searchapi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_project_issues';
  $view->human_name = 'Project Issue Project (SearchAPI)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Issues for all projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'project_issue_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'title' => 'title',
    'has_new_content' => 'title',
    'field_issue_status' => 'field_issue_status',
    'field_issue_priority' => 'field_issue_priority',
    'field_issue_category' => 'field_issue_category',
    'field_issue_version' => 'field_issue_version',
    'field_issue_component' => 'field_issue_component',
    'comment_count' => 'comment_count',
    'comment_count_new' => 'comment_count',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'field_issue_assigned' => 'field_issue_assigned',
    'created' => 'created',
    'search_api_relevance' => 'search_api_relevance',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'has_new_content' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_component' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'comment_count_new' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_assigned' => array(
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
    'search_api_relevance' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No issues match your criteria.';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Has new content */
  $handler->display->display_options['fields']['has_new_content']['id'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['has_new_content']['field'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['has_new_content']['alter']['text'] = '<span class="marker">[has_new_content]</span>';
  $handler->display->display_options['fields']['has_new_content']['link_to_entity'] = 0;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_status']['field'] = 'field_issue_status';
  /* Field: Indexed Node: Priority */
  $handler->display->display_options['fields']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_priority']['field'] = 'field_issue_priority';
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_category']['field'] = 'field_issue_category';
  /* Field: Indexed Node: Version */
  $handler->display->display_options['fields']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['fields']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_version']['field'] = 'field_issue_version';
  /* Field: Indexed Node: Component */
  $handler->display->display_options['fields']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['fields']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_component']['field'] = 'field_issue_component';
  /* Field: Indexed Node: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['link_to_entity'] = 0;
  /* Field: Indexed Node: New comment count */
  $handler->display->display_options['fields']['comment_count_new']['id'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count_new']['field'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['text'] = '[comment_count_new] new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['path'] = '[url]#new';
  $handler->display->display_options['fields']['comment_count_new']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['link_to_entity'] = 0;
  /* Field: Indexed Node: Last comment timestamp */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['link_to_entity'] = 0;
  /* Field: Indexed Node: Assigned */
  $handler->display->display_options['fields']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['label'] = 'Assigned to';
  $handler->display->display_options['fields']['field_issue_assigned']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_issue_assigned']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_issue_assigned']['bypass_access'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = 'Score';
  $handler->display->display_options['fields']['search_api_relevance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Last comment timestamp */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  /* Contextual filter: Indexed Node: Project */
  $handler->display->display_options['arguments']['field_project']['id'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['field_project']['field'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['title'] = 'Issues for %1';
  $handler->display->display_options['arguments']['field_project']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['validate']['type'] = 'project_nid_having_issue_queue';
  $handler->display->display_options['arguments']['field_project']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project']['not'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    'Open' => 'Open',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Version */
  $handler->display->display_options['filters']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_version']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator_id'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_version']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Component */
  $handler->display->display_options['filters']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_component']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator_id'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_component']['project_argument'] = 'field_project';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project/issues/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'author';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'url',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'project/issues/rss/%';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['project_issue_project_searchapi'] = $view;

  $view = new view();
  $view->name = 'project_issue_search_all_searchapi';
  $view->description = 'Project issue advanced search for all projects';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_project_issues';
  $view->human_name = 'Project Issue Search All (SearchAPI)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search issues for all projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'project_issue_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'field_project_machine_name_1' => 'field_project_machine_name_1',
    'field_project' => 'field_project',
    'field_project_title' => 'field_project_title',
    'title' => 'title',
    'has_new_content' => 'title',
    'field_issue_status' => 'field_issue_status',
    'field_issue_priority' => 'field_issue_priority',
    'field_issue_category' => 'field_issue_category',
    'field_issue_version' => 'field_issue_version',
    'comment_count' => 'comment_count',
    'comment_count_new' => 'comment_count',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'field_issue_assigned' => 'field_issue_assigned',
    'created' => 'created',
    'search_api_relevance' => 'search_api_relevance',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_machine_name_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'has_new_content' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'comment_count_new' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_assigned' => array(
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
    'search_api_relevance' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No issues match your criteria.';
  /* Relationship: Indexed Node: Project */
  $handler->display->display_options['relationships']['field_project']['id'] = 'field_project';
  $handler->display->display_options['relationships']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['relationships']['field_project']['field'] = 'field_project';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Node: Short name */
  $handler->display->display_options['fields']['field_project_machine_name_1']['id'] = 'field_project_machine_name_1';
  $handler->display->display_options['fields']['field_project_machine_name_1']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_project_machine_name_1']['field'] = 'field_project_machine_name';
  $handler->display->display_options['fields']['field_project_machine_name_1']['relationship'] = 'field_project';
  $handler->display->display_options['fields']['field_project_machine_name_1']['exclude'] = TRUE;
  /* Field: Project: Title (indexed) */
  $handler->display->display_options['fields']['field_project_title']['id'] = 'field_project_title';
  $handler->display->display_options['fields']['field_project_title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_project_title']['field'] = 'field_project_title';
  $handler->display->display_options['fields']['field_project_title']['label'] = 'Project';
  $handler->display->display_options['fields']['field_project_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_title']['alter']['path'] = 'project/issues/search/[field_project_machine_name_1]';
  $handler->display->display_options['fields']['field_project_title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Has new content */
  $handler->display->display_options['fields']['has_new_content']['id'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['has_new_content']['field'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['has_new_content']['alter']['text'] = '<span class="marker">[has_new_content]</span>';
  $handler->display->display_options['fields']['has_new_content']['link_to_entity'] = 0;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_status']['field'] = 'field_issue_status';
  /* Field: Indexed Node: Priority */
  $handler->display->display_options['fields']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_priority']['field'] = 'field_issue_priority';
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_category']['field'] = 'field_issue_category';
  /* Field: Indexed Node: Version */
  $handler->display->display_options['fields']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['fields']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_version']['field'] = 'field_issue_version';
  /* Field: Indexed Node: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['link_to_entity'] = 0;
  /* Field: Indexed Node: New comment count */
  $handler->display->display_options['fields']['comment_count_new']['id'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count_new']['field'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['text'] = '[comment_count_new] new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['path'] = '[url]#new';
  $handler->display->display_options['fields']['comment_count_new']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['link_to_entity'] = 0;
  /* Field: Indexed Node: Last comment timestamp */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['link_to_entity'] = 0;
  /* Field: Indexed Node: Assigned */
  $handler->display->display_options['fields']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['label'] = 'Assigned to';
  $handler->display->display_options['fields']['field_issue_assigned']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_issue_assigned']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_issue_assigned']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_issue_assigned']['bypass_access'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = 'Score';
  $handler->display->display_options['fields']['search_api_relevance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['alter']['max_length'] = '4';
  $handler->display->display_options['fields']['search_api_relevance']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['search_api_relevance']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['search_api_relevance']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Last comment timestamp */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  /* Filter criterion: Indexed Node: Project */
  $handler->display->display_options['filters']['field_project']['id'] = 'field_project';
  $handler->display->display_options['filters']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_project']['field'] = 'field_project';
  $handler->display->display_options['filters']['field_project']['operator'] = 'in';
  $handler->display->display_options['filters']['field_project']['group'] = 1;
  $handler->display->display_options['filters']['field_project']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project']['expose']['operator_id'] = 'field_project_op';
  $handler->display->display_options['filters']['field_project']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project']['expose']['operator'] = 'field_project_op';
  $handler->display->display_options['filters']['field_project']['expose']['identifier'] = 'projects';
  $handler->display->display_options['filters']['field_project']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_project']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Assigned */
  $handler->display->display_options['filters']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_assigned']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator_id'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['label'] = 'Assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['description'] = 'Enter a comma separated list of users.';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['identifier'] = 'assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Author */
  $handler->display->display_options['filters']['author']['id'] = 'author';
  $handler->display->display_options['filters']['author']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['author']['field'] = 'author';
  $handler->display->display_options['filters']['author']['group'] = 1;
  $handler->display->display_options['filters']['author']['exposed'] = TRUE;
  $handler->display->display_options['filters']['author']['expose']['operator_id'] = 'author_op';
  $handler->display->display_options['filters']['author']['expose']['label'] = 'Submitted by';
  $handler->display->display_options['filters']['author']['expose']['description'] = 'Enter a comma separated list of users.';
  $handler->display->display_options['filters']['author']['expose']['operator'] = 'author_op';
  $handler->display->display_options['filters']['author']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['author']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['author']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Followers */
  $handler->display->display_options['filters']['project_issue_followers']['id'] = 'project_issue_followers';
  $handler->display->display_options['filters']['project_issue_followers']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['project_issue_followers']['field'] = 'project_issue_followers';
  $handler->display->display_options['filters']['project_issue_followers']['group'] = 1;
  $handler->display->display_options['filters']['project_issue_followers']['exposed'] = TRUE;
  $handler->display->display_options['filters']['project_issue_followers']['expose']['operator_id'] = 'project_issue_followers_op';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['label'] = 'Followers';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['description'] = 'Enter a comma separated list of users.';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['operator'] = 'project_issue_followers_op';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['identifier'] = 'project_issue_followers';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['project_issue_followers']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array();
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Issue tags */
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['id'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['field'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator_id'] = 'issue_tags_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['label'] = 'Issue tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator_label'] = 'Issue tags operator';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator'] = 'taxonomy_vocabulary_9_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['identifier'] = 'issue_tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project/issues/search';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'author';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'url',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'project/issues/search/rss';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['project_issue_search_all_searchapi'] = $view;

  $view = new view();
  $view->name = 'project_issue_search_project_searchapi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_project_issues';
  $view->human_name = 'Project Issue Search Project (SearchAPI)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Issues for all projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'project_issue_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'title' => 'title',
    'has_new_content' => 'title',
    'field_issue_status' => 'field_issue_status',
    'field_issue_priority' => 'field_issue_priority',
    'field_issue_category' => 'field_issue_category',
    'field_issue_version' => 'field_issue_version',
    'field_issue_component' => 'field_issue_component',
    'comment_count' => 'comment_count',
    'comment_count_new' => 'comment_count',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'field_issue_assigned' => 'field_issue_assigned',
    'created' => 'created',
    'search_api_relevance' => 'search_api_relevance',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'has_new_content' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_component' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'comment_count_new' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_assigned' => array(
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
    'search_api_relevance' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No issues match your criteria.';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Has new content */
  $handler->display->display_options['fields']['has_new_content']['id'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['has_new_content']['field'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['has_new_content']['alter']['text'] = '<span class="marker">[has_new_content]</span>';
  $handler->display->display_options['fields']['has_new_content']['link_to_entity'] = 0;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_status']['field'] = 'field_issue_status';
  /* Field: Indexed Node: Priority */
  $handler->display->display_options['fields']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_priority']['field'] = 'field_issue_priority';
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_category']['field'] = 'field_issue_category';
  /* Field: Indexed Node: Version */
  $handler->display->display_options['fields']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['fields']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_version']['field'] = 'field_issue_version';
  /* Field: Indexed Node: Component */
  $handler->display->display_options['fields']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['fields']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_component']['field'] = 'field_issue_component';
  /* Field: Indexed Node: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['link_to_entity'] = 0;
  /* Field: Indexed Node: New comment count */
  $handler->display->display_options['fields']['comment_count_new']['id'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count_new']['field'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['text'] = '[comment_count_new] new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['path'] = '[url]#new';
  $handler->display->display_options['fields']['comment_count_new']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['link_to_entity'] = 0;
  /* Field: Indexed Node: Last comment timestamp */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['link_to_entity'] = 0;
  /* Field: Indexed Node: Assigned */
  $handler->display->display_options['fields']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['label'] = 'Assigned to';
  $handler->display->display_options['fields']['field_issue_assigned']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_issue_assigned']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_issue_assigned']['bypass_access'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = 'Score';
  $handler->display->display_options['fields']['search_api_relevance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Last comment timestamp */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  /* Contextual filter: Indexed Node: Project */
  $handler->display->display_options['arguments']['field_project']['id'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['field_project']['field'] = 'field_project';
  $handler->display->display_options['arguments']['field_project']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_project']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['title'] = 'Issues for %1';
  $handler->display->display_options['arguments']['field_project']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_project']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project']['validate']['type'] = 'project_nid_having_issue_queue';
  $handler->display->display_options['arguments']['field_project']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_project']['not'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  /* Filter criterion: Indexed Node: Assigned */
  $handler->display->display_options['filters']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_assigned']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator_id'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['label'] = 'Assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['operator'] = 'field_issue_assigned_op';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['identifier'] = 'assigned';
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_assigned']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Author */
  $handler->display->display_options['filters']['author']['id'] = 'author';
  $handler->display->display_options['filters']['author']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['author']['field'] = 'author';
  $handler->display->display_options['filters']['author']['group'] = 1;
  $handler->display->display_options['filters']['author']['exposed'] = TRUE;
  $handler->display->display_options['filters']['author']['expose']['operator_id'] = 'author_op';
  $handler->display->display_options['filters']['author']['expose']['label'] = 'Submitted by';
  $handler->display->display_options['filters']['author']['expose']['operator'] = 'author_op';
  $handler->display->display_options['filters']['author']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['author']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['author']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Followers */
  $handler->display->display_options['filters']['project_issue_followers']['id'] = 'project_issue_followers';
  $handler->display->display_options['filters']['project_issue_followers']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['project_issue_followers']['field'] = 'project_issue_followers';
  $handler->display->display_options['filters']['project_issue_followers']['group'] = 1;
  $handler->display->display_options['filters']['project_issue_followers']['exposed'] = TRUE;
  $handler->display->display_options['filters']['project_issue_followers']['expose']['operator_id'] = 'project_issue_followers_op';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['label'] = 'Followers';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['operator'] = 'project_issue_followers_op';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['identifier'] = 'project_issue_followers';
  $handler->display->display_options['filters']['project_issue_followers']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['project_issue_followers']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array();
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Version */
  $handler->display->display_options['filters']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_version']['field'] = 'field_issue_version';
  $handler->display->display_options['filters']['field_issue_version']['value'] = array();
  $handler->display->display_options['filters']['field_issue_version']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_version']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator_id'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['operator'] = 'field_issue_version_op';
  $handler->display->display_options['filters']['field_issue_version']['expose']['identifier'] = 'version';
  $handler->display->display_options['filters']['field_issue_version']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_version']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_version']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_version']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Component */
  $handler->display->display_options['filters']['field_issue_component']['id'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_component']['field'] = 'field_issue_component';
  $handler->display->display_options['filters']['field_issue_component']['value'] = array();
  $handler->display->display_options['filters']['field_issue_component']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_component']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator_id'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['label'] = 'Component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['operator'] = 'field_issue_component_op';
  $handler->display->display_options['filters']['field_issue_component']['expose']['identifier'] = 'component';
  $handler->display->display_options['filters']['field_issue_component']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issue_component']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_component']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_component']['project_argument'] = 'field_project';
  /* Filter criterion: Indexed Node: Issue tags */
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['id'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['field'] = 'taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator_id'] = 'issue_tags_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['label'] = 'Issue tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator_label'] = 'Issue tags operator';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['operator'] = 'taxonomy_vocabulary_9_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['identifier'] = 'issue_tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project/issues/search/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'author';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'url',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'project/issues/search/%/rss';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['project_issue_search_project_searchapi'] = $view;

  $view = new view();
  $view->name = 'project_issue_user_issues_searchapi';
  $view->description = 'Project issues for a specific user';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_project_issues';
  $view->human_name = 'Project Issue user issues (SearchAPI)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My issues';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'project_issue_access_per_user_queue';
  $handler->display->display_options['access']['project_issue_user_argument'] = 'project_issue_followers';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'project_issue_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'field_project_machine_name' => 'field_project_machine_name',
    'field_project' => 'field_project',
    'field_project_title' => 'field_project_title',
    'title' => 'title',
    'has_new_content' => 'title',
    'field_issue_status' => 'field_issue_status',
    'field_issue_priority' => 'field_issue_priority',
    'field_issue_category' => 'field_issue_category',
    'field_issue_version' => 'field_issue_version',
    'comment_count' => 'comment_count',
    'comment_count_new' => 'comment_count',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'field_issue_assigned' => 'field_issue_assigned',
    'created' => 'created',
    'search_api_relevance' => 'search_api_relevance',
  );
  $handler->display->display_options['style_options']['default'] = 'last_comment_timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_machine_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'has_new_content' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_priority' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'comment_count_new' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_assigned' => array(
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
    'search_api_relevance' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No issues match your criteria.';
  /* Relationship: Indexed Node: Project */
  $handler->display->display_options['relationships']['field_project']['id'] = 'field_project';
  $handler->display->display_options['relationships']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['relationships']['field_project']['field'] = 'field_project';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Node: Short name */
  $handler->display->display_options['fields']['field_project_machine_name']['id'] = 'field_project_machine_name';
  $handler->display->display_options['fields']['field_project_machine_name']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_project_machine_name']['field'] = 'field_project_machine_name';
  $handler->display->display_options['fields']['field_project_machine_name']['relationship'] = 'field_project';
  $handler->display->display_options['fields']['field_project_machine_name']['exclude'] = TRUE;
  /* Field: Project: Title (indexed) */
  $handler->display->display_options['fields']['field_project_title']['id'] = 'field_project_title';
  $handler->display->display_options['fields']['field_project_title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_project_title']['field'] = 'field_project_title';
  $handler->display->display_options['fields']['field_project_title']['label'] = 'Project';
  $handler->display->display_options['fields']['field_project_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_title']['alter']['path'] = 'project/issues/[field_project_machine_name]';
  $handler->display->display_options['fields']['field_project_title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Has new content */
  $handler->display->display_options['fields']['has_new_content']['id'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['has_new_content']['field'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['has_new_content']['alter']['text'] = '<span class="marker">[has_new_content]</span>';
  $handler->display->display_options['fields']['has_new_content']['link_to_entity'] = 0;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_status']['field'] = 'field_issue_status';
  /* Field: Indexed Node: Priority */
  $handler->display->display_options['fields']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_priority']['field'] = 'field_issue_priority';
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_category']['field'] = 'field_issue_category';
  /* Field: Indexed Node: Version */
  $handler->display->display_options['fields']['field_issue_version']['id'] = 'field_issue_version';
  $handler->display->display_options['fields']['field_issue_version']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_version']['field'] = 'field_issue_version';
  /* Field: Indexed Node: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['link_to_entity'] = 0;
  /* Field: Indexed Node: New comment count */
  $handler->display->display_options['fields']['comment_count_new']['id'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count_new']['field'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['path'] = '[url]#new';
  $handler->display->display_options['fields']['comment_count_new']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['suffix'] = ' new';
  $handler->display->display_options['fields']['comment_count_new']['link_to_entity'] = 0;
  /* Field: Indexed Node: Last comment timestamp */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['link_to_entity'] = 0;
  /* Field: Indexed Node: Assigned */
  $handler->display->display_options['fields']['field_issue_assigned']['id'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_assigned']['field'] = 'field_issue_assigned';
  $handler->display->display_options['fields']['field_issue_assigned']['label'] = 'Assigned to';
  $handler->display->display_options['fields']['field_issue_assigned']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_issue_assigned']['view_mode'] = 'full';
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['label'] = 'Score';
  $handler->display->display_options['fields']['search_api_relevance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Last comment timestamp */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  /* Contextual filter: Indexed Node: Followers */
  $handler->display->display_options['arguments']['project_issue_followers']['id'] = 'project_issue_followers';
  $handler->display->display_options['arguments']['project_issue_followers']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['arguments']['project_issue_followers']['field'] = 'project_issue_followers';
  $handler->display->display_options['arguments']['project_issue_followers']['default_action'] = 'default';
  $handler->display->display_options['arguments']['project_issue_followers']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['project_issue_followers']['title'] = 'Issues for %1';
  $handler->display->display_options['arguments']['project_issue_followers']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['project_issue_followers']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['project_issue_followers']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['project_issue_followers']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['project_issue_followers']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['project_issue_followers']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['project_issue_followers']['not'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search for';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  /* Filter criterion: Indexed Node: Project */
  $handler->display->display_options['filters']['field_project']['id'] = 'field_project';
  $handler->display->display_options['filters']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_project']['field'] = 'field_project';
  $handler->display->display_options['filters']['field_project']['operator'] = 'in';
  $handler->display->display_options['filters']['field_project']['group'] = 1;
  $handler->display->display_options['filters']['field_project']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project']['expose']['operator_id'] = 'field_project_op';
  $handler->display->display_options['filters']['field_project']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_project']['expose']['operator'] = 'field_project_op';
  $handler->display->display_options['filters']['field_project']['expose']['identifier'] = 'projects';
  $handler->display->display_options['filters']['field_project']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_project']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_project']['project_source'] = 'participant';
  $handler->display->display_options['filters']['field_project']['project_uid_argument'] = 'project_issue_followers';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    'Open' => 'Open',
  );
  $handler->display->display_options['filters']['field_issue_status']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_status']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => '- Open issues -',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => '13',
        8 => '8',
        14 => '14',
        15 => '15',
        2 => '2',
        4 => '4',
        16 => '16',
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    2 => array(
      'title' => 'Active',
      'operator' => '=',
      'value' => array(
        1 => '1',
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    3 => array(
      'title' => 'Needs work',
      'operator' => '=',
      'value' => array(
        13 => '13',
        1 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    4 => array(
      'title' => 'Needs review',
      'operator' => '=',
      'value' => array(
        8 => '8',
        1 => 0,
        13 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    5 => array(
      'title' => 'Reviewed and tested by the community',
      'operator' => '=',
      'value' => array(
        14 => '14',
        1 => 0,
        13 => 0,
        8 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    6 => array(
      'title' => 'Patch (to be ported)',
      'operator' => '=',
      'value' => array(
        15 => '15',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    7 => array(
      'title' => 'Fixed',
      'operator' => '=',
      'value' => array(
        2 => '2',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    8 => array(
      'title' => 'Postponed',
      'operator' => '=',
      'value' => array(
        4 => '4',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    9 => array(
      'title' => 'Postponed (maintainer needs more info)',
      'operator' => '=',
      'value' => array(
        16 => '16',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    10 => array(
      'title' => 'Closed (duplicate)',
      'operator' => '=',
      'value' => array(
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    11 => array(
      'title' => 'Closed (won\'t fix)',
      'operator' => '=',
      'value' => array(
        5 => '5',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        6 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    12 => array(
      'title' => 'Closed (works as designed)',
      'operator' => '=',
      'value' => array(
        6 => '6',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        18 => 0,
        7 => 0,
      ),
    ),
    13 => array(
      'title' => 'Closed (cannot reproduce)',
      'operator' => '=',
      'value' => array(
        18 => '18',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
    ),
    14 => array(
      'title' => 'Closed (fixed)',
      'operator' => '=',
      'value' => array(
        7 => '7',
        1 => 0,
        13 => 0,
        8 => 0,
        14 => 0,
        15 => 0,
        2 => 0,
        4 => 0,
        16 => 0,
        3 => 0,
        5 => 0,
        6 => 0,
        18 => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Node: Priority */
  $handler->display->display_options['filters']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['filters']['field_issue_priority']['value'] = array();
  $handler->display->display_options['filters']['field_issue_priority']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_priority']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator_id'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['label'] = 'Priority';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['operator'] = 'field_issue_priority_op';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['identifier'] = 'priorities';
  $handler->display->display_options['filters']['field_issue_priority']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_priority']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Category */
  $handler->display->display_options['filters']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['filters']['field_issue_category']['value'] = array();
  $handler->display->display_options['filters']['field_issue_category']['group'] = 1;
  $handler->display->display_options['filters']['field_issue_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator_id'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_issue_category']['expose']['operator'] = 'field_issue_category_op';
  $handler->display->display_options['filters']['field_issue_category']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_issue_category']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_issue_category']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project/issues/user';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'url';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'author';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'url',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  $handler->display->display_options['fields']['author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['author']['bypass_access'] = 0;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'project/issues/user/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-project-user-issues';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'project_issue_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'field_project' => 'field_project',
    'title' => 'field_project',
    'field_issue_status' => 'field_project',
    'field_issue_priority' => 'field_project',
    'field_issue_category' => 'field_project',
    'comment_count' => 'field_project',
    'comment_count_new' => 'field_project',
    'has_new_content' => 'field_project',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_priority' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count_new' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'has_new_content' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['label'] = '';
  $handler->display->display_options['fields']['field_project']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project']['alter']['text'] = '<div class="project-title">[field_project]</div>';
  $handler->display->display_options['fields']['field_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_project']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_project']['bypass_access'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Summary';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['fields']['field_issue_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_issue_status']['alter']['text'] = '<br>[field_issue_status]';
  /* Field: Indexed Node: Priority */
  $handler->display->display_options['fields']['field_issue_priority']['id'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_priority']['field'] = 'field_issue_priority';
  $handler->display->display_options['fields']['field_issue_priority']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_issue_priority']['alter']['text'] = ' | [field_issue_priority]';
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_issue_category']['id'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['field_issue_category']['field'] = 'field_issue_category';
  $handler->display->display_options['fields']['field_issue_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_issue_category']['alter']['text'] = ' | [field_issue_category]';
  /* Field: Indexed Node: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Replies';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<br>[comment_count]';
  $handler->display->display_options['fields']['comment_count']['suffix'] = ' replies';
  $handler->display->display_options['fields']['comment_count']['link_to_entity'] = 0;
  /* Field: Indexed Node: New comment count */
  $handler->display->display_options['fields']['comment_count_new']['id'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['comment_count_new']['field'] = 'comment_count_new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['text'] = ' [comment_count_new] new';
  $handler->display->display_options['fields']['comment_count_new']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['alter']['path'] = '[url]#new';
  $handler->display->display_options['fields']['comment_count_new']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count_new']['link_to_entity'] = 0;
  /* Field: Indexed Node: Has new content */
  $handler->display->display_options['fields']['has_new_content']['id'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['fields']['has_new_content']['field'] = 'has_new_content';
  $handler->display->display_options['fields']['has_new_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['has_new_content']['alter']['text'] = '<span class="marker">[has_new_content]</span>';
  $handler->display->display_options['fields']['has_new_content']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['field_issue_status']['id'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['table'] = 'search_api_index_project_issues';
  $handler->display->display_options['filters']['field_issue_status']['field'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['value'] = array(
    1 => '1',
    13 => '13',
    8 => '8',
    14 => '14',
    15 => '15',
    2 => '2',
    4 => '4',
    16 => '16',
  );
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator_id'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['expose']['operator'] = 'field_issue_status_op';
  $handler->display->display_options['filters']['field_issue_status']['expose']['identifier'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['identifier'] = 'field_issue_status';
  $handler->display->display_options['filters']['field_issue_status']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_issue_status']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $export['project_issue_user_issues_searchapi'] = $view;

  return $export;
}
