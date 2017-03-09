<?php
/**
 * @file
 * drupalorg_documentation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_documentation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'doc_guide_per_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Doc guide per user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    36 => '36',
  );
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
    'og_group_ref_documentation' => 'og_group_ref_documentation',
    'title' => 'title',
    'changed' => 'changed',
    'comment_count' => 'comment_count',
    'new_comments' => 'comment_count',
    'name' => 'name',
    'view_node' => 'view_node',
    'nid' => 'view_node',
    'nothing' => 'view_node',
    'nothing_1' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'og_group_ref_documentation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'new_comments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['id'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['field'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['relationship'] = 'og_membership_rel';
  /* Field: Content: Guide */
  $handler->display->display_options['fields']['og_group_ref_documentation']['id'] = 'og_group_ref_documentation';
  $handler->display->display_options['fields']['og_group_ref_documentation']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_documentation']['field'] = 'og_group_ref_documentation';
  $handler->display->display_options['fields']['og_group_ref_documentation']['label'] = 'Parent guide';
  $handler->display->display_options['fields']['og_group_ref_documentation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref_documentation']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Page';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['label'] = '';
  $handler->display->display_options['fields']['new_comments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['alter']['text'] = '<strong>[new_comments] new</strong>';
  $handler->display->display_options['fields']['new_comments']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Admin';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/group';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_documentation_status']['id'] = 'field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['table'] = 'field_data_field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['field'] = 'field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['etid']['validate_options']['type'] = 'either';
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
    'guide' => 'guide',
  );

  /* Display: Doc Guides Header */
  $handler = $view->new_display('attachment', 'Doc Guides Header', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documentation guides';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'og_group_ref_documentation' => 'og_group_ref_documentation',
    'changed' => 'changed',
    'comment_count' => 'comment_count',
    'new_comments' => 'comment_count',
    'view_node' => 'view_node',
    'nid' => 'view_node',
    'nothing' => 'view_node',
    'nothing_3' => 'view_node',
    'nothing_1' => 'view_node',
    'nothing_2' => 'view_node',
    'field_documentation_status' => 'field_documentation_status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref_documentation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'new_comments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_documentation_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Documentation guides</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No documentation guides found';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['id'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['field'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['relationship'] = 'og_membership_rel';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Guide';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Guide */
  $handler->display->display_options['fields']['og_group_ref_documentation']['id'] = 'og_group_ref_documentation';
  $handler->display->display_options['fields']['og_group_ref_documentation']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_documentation']['field'] = 'og_group_ref_documentation';
  $handler->display->display_options['fields']['og_group_ref_documentation']['label'] = 'Parent guide';
  $handler->display->display_options['fields']['og_group_ref_documentation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref_documentation']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['label'] = '';
  $handler->display->display_options['fields']['new_comments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['alter']['text'] = '<strong>[new_comments] new</strong>';
  $handler->display->display_options['fields']['new_comments']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Links';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Discuss';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Discuss';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'node/[nid]/discuss';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Admin';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Admin';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/group';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Add page';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add page';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'node/add/documentation?og_group_ref_documentation=[nid]&destination=node/[nid]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_documentation_status']['id'] = 'field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['table'] = 'field_data_field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['field'] = 'field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documentation_status']['element_label_colon'] = FALSE;
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
    'guide' => 'guide',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'per_user_docs_page' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Doc Pages Body Page */
  $handler = $view->new_display('page', 'Doc Pages Body Page', 'per_user_docs_page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'og_group_ref_documentation' => 'og_group_ref_documentation',
    'field_documentation_status' => 'field_documentation_status',
    'changed' => 'changed',
    'comment_count' => 'comment_count',
    'new_comments' => 'comment_count',
    'name' => 'name',
    'view_node' => 'view_node',
    'nid' => 'view_node',
    'nothing' => 'view_node',
    'nothing_1' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref_documentation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_documentation_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'new_comments' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'doc_guide_per_user:attachment_1';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Documentation pages</h2>';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No documentation pages found';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['id'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['field'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['relationships']['og_group_ref_documentation_target_id']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Page';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Guide */
  $handler->display->display_options['fields']['og_group_ref_documentation']['id'] = 'og_group_ref_documentation';
  $handler->display->display_options['fields']['og_group_ref_documentation']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_documentation']['field'] = 'og_group_ref_documentation';
  $handler->display->display_options['fields']['og_group_ref_documentation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref_documentation']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_documentation_status']['id'] = 'field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['table'] = 'field_data_field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['field'] = 'field_documentation_status';
  $handler->display->display_options['fields']['field_documentation_status']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['label'] = '';
  $handler->display->display_options['fields']['new_comments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['alter']['text'] = '<strong>[new_comments] new</strong>';
  $handler->display->display_options['fields']['new_comments']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['new_comments']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Links';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Discuss';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/discuss';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
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
    'documentation' => 'documentation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search by page title';
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
    41 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Status (field_documentation_status) */
  $handler->display->display_options['filters']['field_documentation_status_value']['id'] = 'field_documentation_status_value';
  $handler->display->display_options['filters']['field_documentation_status_value']['table'] = 'field_data_field_documentation_status';
  $handler->display->display_options['filters']['field_documentation_status_value']['field'] = 'field_documentation_status_value';
  $handler->display->display_options['filters']['field_documentation_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_documentation_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_documentation_status_value']['expose']['operator_id'] = 'field_documentation_status_value_op';
  $handler->display->display_options['filters']['field_documentation_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_documentation_status_value']['expose']['operator'] = 'field_documentation_status_value_op';
  $handler->display->display_options['filters']['field_documentation_status_value']['expose']['identifier'] = 'field_documentation_status_value';
  $handler->display->display_options['filters']['field_documentation_status_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_documentation_status_value']['group_info']['label'] = 'Status (field_documentation_status)';
  $handler->display->display_options['filters']['field_documentation_status_value']['group_info']['identifier'] = 'field_documentation_status_value';
  $handler->display->display_options['filters']['field_documentation_status_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_documentation_status_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'user/%/documentation';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Your Guides';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Doc guides profile block */
  $handler = $view->new_display('block', 'Doc guides profile block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documentation guides';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'og_group_ref_documentation' => 'og_group_ref_documentation',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Guide */
  $handler->display->display_options['fields']['og_group_ref_documentation']['id'] = 'og_group_ref_documentation';
  $handler->display->display_options['fields']['og_group_ref_documentation']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_documentation']['field'] = 'og_group_ref_documentation';
  $handler->display->display_options['fields']['og_group_ref_documentation']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref_documentation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref_documentation']['alter']['text'] = '[og_group_ref_documentation] - ';
  $handler->display->display_options['fields']['og_group_ref_documentation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref_documentation']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Guide (og_group_ref_documentation) */
  $handler->display->display_options['sorts']['og_group_ref_documentation_target_id']['id'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['sorts']['og_group_ref_documentation_target_id']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['og_group_ref_documentation_target_id']['field'] = 'og_group_ref_documentation_target_id';
  $handler->display->display_options['sorts']['og_group_ref_documentation_target_id']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['block_description'] = 'Doc Guides Block';
  $translatables['doc_guide_per_user'] = array(
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
    t('OG membership from node'),
    t('author'),
    t('OG membership from node group'),
    t('Content entity referenced from og_group_ref_documentation'),
    t('Parent guide'),
    t('Page'),
    t('Last updated'),
    t('Comments'),
    t('.'),
    t(','),
    t('<strong>[new_comments] new</strong>'),
    t('View'),
    t('Edit'),
    t('Admin'),
    t('Status'),
    t('All'),
    t('Doc Guides Header'),
    t('Documentation guides'),
    t('<h2>Documentation guides</h2>'),
    t('No documentation guides found'),
    t('Guide'),
    t('Links'),
    t('Discuss'),
    t('Add page'),
    t('Type'),
    t('Doc Pages Body Page'),
    t('Search'),
    t('<h2>Documentation pages</h2>'),
    t('No documentation pages found'),
    t('Search by page title'),
    t('Status (field_documentation_status)'),
    t('Doc guides profile block'),
    t('[og_group_ref_documentation] - '),
    t('Doc Guides Block'),
  );
  $export['doc_guide_per_user'] = $view;

  $view = new view();
  $view->name = 'documentation_project_documentation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documentation-Project Documentation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related projects';
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
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_earliest_applicable_versio' => 'field_earliest_applicable_versio',
    'field_latest_applicable_version' => 'field_latest_applicable_version',
  );
  /* Relationship: Content: Project documentation (field_project_docs) */
  $handler->display->display_options['relationships']['field_project_docs_value']['id'] = 'field_project_docs_value';
  $handler->display->display_options['relationships']['field_project_docs_value']['table'] = 'field_data_field_project_docs';
  $handler->display->display_options['relationships']['field_project_docs_value']['field'] = 'field_project_docs_value';
  $handler->display->display_options['relationships']['field_project_docs_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_project_docs_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_doc_guide_name_target_id']['id'] = 'field_project_doc_guide_name_target_id';
  $handler->display->display_options['relationships']['field_project_doc_guide_name_target_id']['table'] = 'field_data_field_project_doc_guide_name';
  $handler->display->display_options['relationships']['field_project_doc_guide_name_target_id']['field'] = 'field_project_doc_guide_name_target_id';
  $handler->display->display_options['relationships']['field_project_doc_guide_name_target_id']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['relationships']['field_project_doc_guide_name_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Applicable from */
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['id'] = 'field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['table'] = 'field_data_field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['field'] = 'field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['label'] = '';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Applicable up to */
  $handler->display->display_options['fields']['field_latest_applicable_version']['id'] = 'field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['table'] = 'field_data_field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['field'] = 'field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_latest_applicable_version']['label'] = '';
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['text'] = ' - [field_latest_applicable_version] ';
  $handler->display->display_options['fields']['field_latest_applicable_version']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['type'] = 'text_plain';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_doc_guide_name_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'documentation' => 'documentation',
    'guide' => 'guide',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'project_documentation_pane');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['documentation_project_documentation'] = array(
    t('Master'),
    t('Related projects'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field collection item from field_project_docs'),
    t('Content entity referenced from field_project_doc_guide_name'),
    t(' - [field_latest_applicable_version] '),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['documentation_project_documentation'] = $view;

  $view = new view();
  $view->name = 'documentation_project_page_doc_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documentation-project page doc list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documentation';
  $handler->display->display_options['css_class'] = 'node-project-module';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'links';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  /* Relationship: Content: Project documentation (field_project_docs) */
  $handler->display->display_options['relationships']['field_project_docs_value']['id'] = 'field_project_docs_value';
  $handler->display->display_options['relationships']['field_project_docs_value']['table'] = 'field_data_field_project_docs';
  $handler->display->display_options['relationships']['field_project_docs_value']['field'] = 'field_project_docs_value';
  $handler->display->display_options['relationships']['field_project_docs_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_project_docs_value']['delta'] = '-1';
  /* Field: Field collection item: Documentation guide */
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['id'] = 'field_project_doc_guide_name_1';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['table'] = 'field_data_field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['field'] = 'field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['label'] = 'Doc Guide URL';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Applicable from */
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['id'] = 'field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['table'] = 'field_data_field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['field'] = 'field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['label'] = '';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['alter']['text'] = '[field_earliest_applicable_versio-value]';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['alter']['path'] = 'node/[field_project_doc_guide_name_1]';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['type'] = 'text_plain';
  /* Field: Field collection item: Applicable up to */
  $handler->display->display_options['fields']['field_latest_applicable_version']['id'] = 'field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['table'] = 'field_data_field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['field'] = 'field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_latest_applicable_version']['label'] = '';
  $handler->display->display_options['fields']['field_latest_applicable_version']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['text'] = '-[field_latest_applicable_version]';
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['path'] = 'node/[field_project_doc_guide_name_1]';
  $handler->display->display_options['fields']['field_latest_applicable_version']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['hide_empty'] = TRUE;
  /* Field: Field collection item: Documentation guide */
  $handler->display->display_options['fields']['field_project_doc_guide_name']['id'] = 'field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['table'] = 'field_data_field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['field'] = 'field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['label'] = '';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_doc_guide_name']['alter']['text'] = '[field_project_doc_guide_name] [field_earliest_applicable_versio][field_latest_applicable_version]';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_doc_guide_name']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Documentation */
  $handler->display->display_options['fields']['field_project_documentation']['id'] = 'field_project_documentation';
  $handler->display->display_options['fields']['field_project_documentation']['table'] = 'field_data_field_project_documentation';
  $handler->display->display_options['fields']['field_project_documentation']['field'] = 'field_project_documentation';
  $handler->display->display_options['fields']['field_project_documentation']['label'] = '';
  $handler->display->display_options['fields']['field_project_documentation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_documentation']['alter']['text'] = 'External documentation';
  $handler->display->display_options['fields']['field_project_documentation']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_documentation']['alter']['path'] = '[field_project_documentation]';
  $handler->display->display_options['fields']['field_project_documentation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_documentation']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'page' => 'page',
    'documentation' => 'documentation',
    'guide' => 'guide',
    'project_core' => 'project_core',
    'project_distribution' => 'project_distribution',
    'project_drupalorg' => 'project_drupalorg',
    'project_module' => 'project_module',
    'project_theme' => 'project_theme',
    'project_theme_engine' => 'project_theme_engine',
    'project_translation' => 'project_translation',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'project_documentation_block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'documentation_project_page_doc_list:panel_pane_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Documentation guide */
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['id'] = 'field_project_doc_guide_name_1';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['table'] = 'field_data_field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['field'] = 'field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['label'] = 'Doc Guide URL';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_project_doc_guide_name_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Applicable from */
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['id'] = 'field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['table'] = 'field_data_field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['field'] = 'field_earliest_applicable_versio';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['label'] = '';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['alter']['text'] = '[field_earliest_applicable_versio-value]';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['alter']['path'] = 'node/[field_project_doc_guide_name_1]';
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_earliest_applicable_versio']['type'] = 'text_plain';
  /* Field: Field collection item: Applicable up to */
  $handler->display->display_options['fields']['field_latest_applicable_version']['id'] = 'field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['table'] = 'field_data_field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['field'] = 'field_latest_applicable_version';
  $handler->display->display_options['fields']['field_latest_applicable_version']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_latest_applicable_version']['label'] = '';
  $handler->display->display_options['fields']['field_latest_applicable_version']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['text'] = '-[field_latest_applicable_version]';
  $handler->display->display_options['fields']['field_latest_applicable_version']['alter']['path'] = 'node/[field_project_doc_guide_name_1]';
  $handler->display->display_options['fields']['field_latest_applicable_version']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_latest_applicable_version']['hide_empty'] = TRUE;
  /* Field: Field collection item: Documentation guide */
  $handler->display->display_options['fields']['field_project_doc_guide_name']['id'] = 'field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['table'] = 'field_data_field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['field'] = 'field_project_doc_guide_name';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['relationship'] = 'field_project_docs_value';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['label'] = '';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_doc_guide_name']['alter']['text'] = '<a href="/node/[field_project_doc_guide_name_1]">[field_project_doc_guide_name] [field_earliest_applicable_versio][field_latest_applicable_version]</a>';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_doc_guide_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_project_doc_guide_name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_project_doc_guide_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_doc_guide_name']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['block_description'] = 'Project Documentation';

  /* Display: Project doc block footer */
  $handler = $view->new_display('panel_pane', 'Project doc block footer', 'panel_pane_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Documentation */
  $handler->display->display_options['fields']['field_project_documentation']['id'] = 'field_project_documentation';
  $handler->display->display_options['fields']['field_project_documentation']['table'] = 'field_data_field_project_documentation';
  $handler->display->display_options['fields']['field_project_documentation']['field'] = 'field_project_documentation';
  $handler->display->display_options['fields']['field_project_documentation']['label'] = '';
  $handler->display->display_options['fields']['field_project_documentation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_documentation']['alter']['text'] = 'External documentation';
  $handler->display->display_options['fields']['field_project_documentation']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_documentation']['alter']['path'] = '[field_project_documentation]';
  $handler->display->display_options['fields']['field_project_documentation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_documentation']['click_sort_column'] = 'url';
  $translatables['documentation_project_page_doc_list'] = array(
    t('Master'),
    t('Documentation'),
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
    t('field collection item from field_project_docs'),
    t('Doc Guide URL'),
    t('[field_earliest_applicable_versio-value]'),
    t('-[field_latest_applicable_version]'),
    t('[field_project_doc_guide_name] [field_earliest_applicable_versio][field_latest_applicable_version]'),
    t('External documentation'),
    t('All'),
    t('Block'),
    t('<a href="/node/[field_project_doc_guide_name_1]">[field_project_doc_guide_name] [field_earliest_applicable_versio][field_latest_applicable_version]</a>'),
    t('Project Documentation'),
    t('Project doc block footer'),
    t('View panes'),
  );
  $export['documentation_project_page_doc_list'] = $view;

  $view = new view();
  $view->name = 'documentation_related_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documentation Related Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Content';
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
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_related_content_target_id';
  $handler->display->display_options['row_options']['view_mode'] = 'related_content';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_content_target_id']['id'] = 'field_related_content_target_id';
  $handler->display->display_options['relationships']['field_related_content_target_id']['table'] = 'field_data_field_related_content';
  $handler->display->display_options['relationships']['field_related_content_target_id']['field'] = 'field_related_content_target_id';
  $handler->display->display_options['relationships']['field_related_content_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_content_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'related_content_pane');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['documentation_related_content'] = array(
    t('Master'),
    t('Related Content'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_related_content'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['documentation_related_content'] = $view;

  $view = new view();
  $view->name = 'group_maintainers';
  $view->description = 'A view of maintainers of a group: documentation guide, section.';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Group maintainers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Group maintainers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['path'] = '/user/[uid]';
  $handler->display->display_options['fields']['picture']['alter']['alt'] = 'View [name]\'s profile';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'drupalorg_user_picture';
  /* Sort criterion: User: Last access */
  $handler->display->display_options['sorts']['access']['id'] = 'access';
  $handler->display->display_options['sorts']['access']['table'] = 'users';
  $handler->display->display_options['sorts']['access']['field'] = 'access';
  $handler->display->display_options['sorts']['access']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '180064',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group maintainers';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['pane_title'] = 'Group: maintainers user pictures';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $translatables['group_maintainers'] = array(
    t('Master'),
    t('Group maintainers'),
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
    t('OG membership from user'),
    t('Name'),
    t('Uid'),
    t('View [name]\'s profile'),
    t('All'),
    t('Content pane'),
    t('Group: maintainers user pictures'),
    t('View panes'),
  );
  $export['group_maintainers'] = $view;

  return $export;
}
