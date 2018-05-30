<?php
/**
 * @file
 * drupalorg_admin_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_admin_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_content_drupalorg';
  $view->description = 'Emulates the Drupal content administration page.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'admin_content_drupalorg';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'timestamp' => 'timestamp',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'created' => 'created',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
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
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'status' => array(
      'sortable' => 0,
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
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'There are no objects satisfying the filter settings. Try changing them to get some results.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 1,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::akismet_action_unpublish_node' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => 0,
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['group'] = 1;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Body';
  $handler->display->display_options['filters']['body_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => 0,
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
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
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = 'All';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  $handler->display->display_options['filters']['promote']['exposed'] = TRUE;
  $handler->display->display_options['filters']['promote']['expose']['label'] = 'Promoted';
  $handler->display->display_options['filters']['promote']['expose']['identifier'] = 'promote';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = 'All';
  $handler->display->display_options['filters']['sticky']['group'] = 1;
  $handler->display->display_options['filters']['sticky']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sticky']['expose']['label'] = 'Sticky';
  $handler->display->display_options['filters']['sticky']['expose']['identifier'] = 'sticky';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content';
  $translatables['admin_content_drupalorg'] = array(
    t('Default'),
    t('Content'),
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
    t('Displaying @start - @end of @total'),
    t('There are no objects satisfying the filter settings. Try changing them to get some results.'),
    t('author'),
    t('- Choose an operation -'),
    t('Title'),
    t('New?'),
    t('Type'),
    t('Author'),
    t('Published'),
    t('Post date'),
    t('Updated date'),
    t('Edit'),
    t('Body'),
    t('Promoted'),
    t('Sticky'),
    t('Page'),
  );
  $export['admin_content_drupalorg'] = $view;

  $view = new view();
  $view->name = 'admin_users_drupalorg';
  $view->description = 'Emulates the Drupal user administration page.';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = 'admin_users_drupalorg';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Default */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'mail' => 'mail',
    'field_job_title' => 'field_job_title',
    'field_organization_name' => 'field_organization_name',
    'title' => 'title',
    'field_link' => 'field_link',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_name' => array(
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
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: User: Organizations (field_organizations) */
  $handler->display->display_options['relationships']['field_organizations_value']['id'] = 'field_organizations_value';
  $handler->display->display_options['relationships']['field_organizations_value']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['relationships']['field_organizations_value']['field'] = 'field_organizations_value';
  $handler->display->display_options['relationships']['field_organizations_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['id'] = 'field_organization_reference_target_id';
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['table'] = 'field_data_field_organization_reference';
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['field'] = 'field_organization_reference_target_id';
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['relationship'] = 'field_organizations_value';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 1,
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['type'] = 'ul';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member for';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time span';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Username contains';
  $handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail contains';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'status' => 'status',
    'rid' => 'rid',
    'created' => 'created',
    'access' => 'access',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['path'] = 'admin/people/advanced';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Advanced';
  $handler->display->display_options['menu']['weight'] = '-2';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Organization People */
  $handler = $view->new_display('page', 'Organization People', 'page_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'mail' => 'mail',
    'field_job_title' => 'field_job_title',
    'field_organization_name' => 'field_organization_name',
    'title' => 'title',
    'field_link' => 'field_link',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_name' => array(
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
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  $handler->display->display_options['relationships']['field_organization_reference_target_id']['label'] = 'Organization';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 1,
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* Field: User: First or given name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = 'First Name';
  /* Field: User: Last name or surname */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Last Name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: Field collection item: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_organizations_value';
  /* Field: Field collection item: Organization */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['relationship'] = 'field_organizations_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_organization_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Org Profile';
  /* Field: Field: Cta */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'field_organization_reference_target_id';
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member for';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time span';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Username contains';
  $handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail contains';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Job Title (field_job_title) */
  $handler->display->display_options['filters']['field_job_title_value']['id'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['filters']['field_job_title_value']['field'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['filters']['field_job_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_job_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_job_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value']['expose']['operator_id'] = 'field_job_title_value_op';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value']['expose']['operator'] = 'field_job_title_value_op';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['identifier'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_job_title_value']['group_info']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_job_title_value']['group_info']['identifier'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_job_title_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Field collection item: Organization (field_organization_name) */
  $handler->display->display_options['filters']['field_organization_name_value']['id'] = 'field_organization_name_value';
  $handler->display->display_options['filters']['field_organization_name_value']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['filters']['field_organization_name_value']['field'] = 'field_organization_name_value';
  $handler->display->display_options['filters']['field_organization_name_value']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['filters']['field_organization_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_organization_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['operator_id'] = 'field_organization_name_value_op';
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['operator'] = 'field_organization_name_value_op';
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['identifier'] = 'field_organization_name_value';
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Current (field_current) */
  $handler->display->display_options['filters']['field_current_value']['id'] = 'field_current_value';
  $handler->display->display_options['filters']['field_current_value']['table'] = 'field_data_field_current';
  $handler->display->display_options['filters']['field_current_value']['field'] = 'field_current_value';
  $handler->display->display_options['filters']['field_current_value']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['filters']['field_current_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_current_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_current_value']['expose']['operator_id'] = 'field_current_value_op';
  $handler->display->display_options['filters']['field_current_value']['expose']['label'] = 'Current';
  $handler->display->display_options['filters']['field_current_value']['expose']['operator'] = 'field_current_value_op';
  $handler->display->display_options['filters']['field_current_value']['expose']['identifier'] = 'field_current_value';
  $handler->display->display_options['filters']['field_current_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  /* Filter criterion: User: Created date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'users';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'User created date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Organization (field_organization_name) */
  $handler->display->display_options['filters']['field_organization_name_value_1']['id'] = 'field_organization_name_value_1';
  $handler->display->display_options['filters']['field_organization_name_value_1']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['filters']['field_organization_name_value_1']['field'] = 'field_organization_name_value';
  $handler->display->display_options['filters']['field_organization_name_value_1']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['filters']['field_organization_name_value_1']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_organization_name_value_1']['value'] = '0';
  $handler->display->display_options['path'] = 'admin/people/organization';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Users by Org & Job';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Org Profiles */
  $handler = $view->new_display('page', 'Org Profiles', 'page_3');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_organization_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Org Profile';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Username contains';
  $handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
  );
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail contains';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    39 => 0,
    36 => 0,
    7 => 0,
    34 => 0,
    32 => 0,
    16 => 0,
    30 => 0,
    22 => 0,
    20 => 0,
    24 => 0,
    12 => 0,
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field collection item: Job Title (field_job_title) */
  $handler->display->display_options['filters']['field_job_title_value']['id'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['filters']['field_job_title_value']['field'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['relationship'] = 'field_organizations_value';
  $handler->display->display_options['filters']['field_job_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_job_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value']['expose']['operator_id'] = 'field_job_title_value_op';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value']['expose']['operator'] = 'field_job_title_value_op';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['identifier'] = 'field_job_title_value';
  $handler->display->display_options['filters']['field_job_title_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_organization_reference_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
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
  $handler->display->display_options['path'] = 'admin/people/org-profiles';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Org Profiles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['admin_users_drupalorg'] = array(
    t('Default'),
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
    t('Displaying @start - @end of @total'),
    t('field collection item from field_organizations'),
    t('Content entity referenced from field_organization_reference'),
    t('User'),
    t('- Choose an operation -'),
    t('Username'),
    t('Active'),
    t('Roles'),
    t('Member for'),
    t('Last access'),
    t('Operations'),
    t('Username contains'),
    t('Name'),
    t('E-mail contains'),
    t('Role'),
    t('Page'),
    t('Organization People'),
    t('Organization'),
    t('First Name'),
    t('Last Name'),
    t('E-mail'),
    t('Job Title'),
    t('Org Profile'),
    t('Cta'),
    t('Current'),
    t('User created date'),
    t('Org Profiles'),
  );
  $export['admin_users_drupalorg'] = $view;

  $view = new view();
  $view->name = 'administer_organizations';
  $view->description = 'List of organizations with profiles on Drupal.org';
  $view->tag = 'marketplace';
  $view->base_table = 'node';
  $view->human_name = 'Administer Organizations';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Administer Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    41 => '41',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter results';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_link' => 'field_link',
    'created' => 'created',
    'name' => 'name',
    'changed' => 'changed',
    'field_organization_support' => 'field_organization_support',
    'delta' => 'delta',
    'field_org_training_request' => 'field_org_training_request',
    'field_organization_training_list' => 'field_organization_training_list',
    'field_org_marketplace_request' => 'field_org_marketplace_request',
    'field_organization_list_rule' => 'field_organization_list_rule',
    'field_org_contribution_rank' => 'field_org_contribution_rank',
    'field_org_issue_credit_count' => 'field_org_issue_credit_count',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link' => array(
      'sortable' => 0,
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
    'name' => array(
      'sortable' => 0,
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
    'field_organization_support' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'delta' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_org_training_request' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_organization_training_list' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_org_marketplace_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_organization_list_rule' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_org_contribution_rank' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_org_issue_credit_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
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
  $handler->display->display_options['header']['result']['content'] = '<p>Displaying @start to @end of @total organizations.</p>';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::akismet_action_unpublish_node' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Field: Cta */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['group_column'] = 'entity_id';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Owner';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Drupal Association supporting program */
  $handler->display->display_options['fields']['field_organization_support']['id'] = 'field_organization_support';
  $handler->display->display_options['fields']['field_organization_support']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['fields']['field_organization_support']['field'] = 'field_organization_support';
  $handler->display->display_options['fields']['field_organization_support']['label'] = 'Supporter';
  $handler->display->display_options['fields']['field_organization_support']['delta_offset'] = '0';
  /* Field: COUNT(Content: Offices in (taxonomy_vocabulary_52:delta)) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_taxonomy_vocabulary_52';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['group_type'] = 'count';
  $handler->display->display_options['fields']['delta']['label'] = '# of locations';
  /* Field: Content: List in Training section */
  $handler->display->display_options['fields']['field_org_training_request']['id'] = 'field_org_training_request';
  $handler->display->display_options['fields']['field_org_training_request']['table'] = 'field_data_field_org_training_request';
  $handler->display->display_options['fields']['field_org_training_request']['field'] = 'field_org_training_request';
  $handler->display->display_options['fields']['field_org_training_request']['label'] = 'Requested Training Listing';
  $handler->display->display_options['fields']['field_org_training_request']['type'] = 'list_key';
  /* Field: Content: Training listing */
  $handler->display->display_options['fields']['field_organization_training_list']['id'] = 'field_organization_training_list';
  $handler->display->display_options['fields']['field_organization_training_list']['table'] = 'field_data_field_organization_training_list';
  $handler->display->display_options['fields']['field_organization_training_list']['field'] = 'field_organization_training_list';
  $handler->display->display_options['fields']['field_organization_training_list']['label'] = 'Training';
  /* Field: Content: List in marketplace */
  $handler->display->display_options['fields']['field_org_marketplace_request']['id'] = 'field_org_marketplace_request';
  $handler->display->display_options['fields']['field_org_marketplace_request']['table'] = 'field_data_field_org_marketplace_request';
  $handler->display->display_options['fields']['field_org_marketplace_request']['field'] = 'field_org_marketplace_request';
  $handler->display->display_options['fields']['field_org_marketplace_request']['label'] = 'Requested Services Listing';
  $handler->display->display_options['fields']['field_org_marketplace_request']['type'] = 'list_key';
  /* Field: Content: Services listing */
  $handler->display->display_options['fields']['field_organization_list_rule']['id'] = 'field_organization_list_rule';
  $handler->display->display_options['fields']['field_organization_list_rule']['table'] = 'field_data_field_organization_list_rule';
  $handler->display->display_options['fields']['field_organization_list_rule']['field'] = 'field_organization_list_rule';
  $handler->display->display_options['fields']['field_organization_list_rule']['label'] = 'Services';
  /* Field: Content: Org contribution rank */
  $handler->display->display_options['fields']['field_org_contribution_rank']['id'] = 'field_org_contribution_rank';
  $handler->display->display_options['fields']['field_org_contribution_rank']['table'] = 'field_data_field_org_contribution_rank';
  $handler->display->display_options['fields']['field_org_contribution_rank']['field'] = 'field_org_contribution_rank';
  $handler->display->display_options['fields']['field_org_contribution_rank']['label'] = 'Contribution rank';
  $handler->display->display_options['fields']['field_org_contribution_rank']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Org issue credit count */
  $handler->display->display_options['fields']['field_org_issue_credit_count']['id'] = 'field_org_issue_credit_count';
  $handler->display->display_options['fields']['field_org_issue_credit_count']['table'] = 'field_data_field_org_issue_credit_count';
  $handler->display->display_options['fields']['field_org_issue_credit_count']['field'] = 'field_org_issue_credit_count';
  $handler->display->display_options['fields']['field_org_issue_credit_count']['label'] = 'Issue credits (90 days)';
  $handler->display->display_options['fields']['field_org_issue_credit_count']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
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
  $handler->display->display_options['arguments']['name']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
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
  /* Filter criterion: Content: Drupal Association supporting program (field_organization_support) */
  $handler->display->display_options['filters']['field_organization_support_value']['id'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['table'] = 'field_data_field_organization_support';
  $handler->display->display_options['filters']['field_organization_support_value']['field'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_support_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_support_value']['expose']['operator_id'] = 'field_organization_support_value_op';
  $handler->display->display_options['filters']['field_organization_support_value']['expose']['label'] = 'Supporter';
  $handler->display->display_options['filters']['field_organization_support_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_organization_support_value']['expose']['operator'] = 'field_organization_support_value_op';
  $handler->display->display_options['filters']['field_organization_support_value']['expose']['identifier'] = 'field_organization_support_value';
  $handler->display->display_options['filters']['field_organization_support_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_organization_support_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Hosting type (field_hosting_type) */
  $handler->display->display_options['filters']['field_hosting_type_value']['id'] = 'field_hosting_type_value';
  $handler->display->display_options['filters']['field_hosting_type_value']['table'] = 'field_data_field_hosting_type';
  $handler->display->display_options['filters']['field_hosting_type_value']['field'] = 'field_hosting_type_value';
  $handler->display->display_options['filters']['field_hosting_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_hosting_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hosting_type_value']['expose']['operator_id'] = 'field_hosting_type_value_op';
  $handler->display->display_options['filters']['field_hosting_type_value']['expose']['label'] = 'Hosting';
  $handler->display->display_options['filters']['field_hosting_type_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_hosting_type_value']['expose']['operator'] = 'field_hosting_type_value_op';
  $handler->display->display_options['filters']['field_hosting_type_value']['expose']['identifier'] = 'field_hosting_type_value';
  $handler->display->display_options['filters']['field_hosting_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_hosting_type_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Sectors (taxonomy_vocabulary_50) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['id'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['table'] = 'field_data_taxonomy_vocabulary_50';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['field'] = 'taxonomy_vocabulary_50_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['label'] = 'Sectors';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['operator'] = 'taxonomy_vocabulary_50_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['expose']['identifier'] = 'taxonomy_vocabulary_50_tid';
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
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['vocabulary'] = 'vocabulary_50';
  $handler->display->display_options['filters']['taxonomy_vocabulary_50_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Owner\'s username contains';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: List in marketplace (field_org_marketplace_request) */
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['id'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['table'] = 'field_data_field_org_marketplace_request';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['field'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['group'] = 1;
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['operator_id'] = 'field_org_marketplace_request_value_op';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['label'] = 'Request services?';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['operator'] = 'field_org_marketplace_request_value_op';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['identifier'] = 'field_org_marketplace_request_value';
  $handler->display->display_options['filters']['field_org_marketplace_request_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Services listing (field_organization_list_rule) */
  $handler->display->display_options['filters']['field_organization_list_rule_value']['id'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['table'] = 'field_data_field_organization_list_rule';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['field'] = 'field_organization_list_rule_value';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_list_rule_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['operator_id'] = 'field_organization_list_rule_value_op';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['operator'] = 'field_organization_list_rule_value_op';
  $handler->display->display_options['filters']['field_organization_list_rule_value']['expose']['identifier'] = 'field_organization_list_rule_value';
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
    28 => 0,
    26 => 0,
    14 => 0,
    38 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: List in Training section (field_org_training_request) */
  $handler->display->display_options['filters']['field_org_training_request_value']['id'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['table'] = 'field_data_field_org_training_request';
  $handler->display->display_options['filters']['field_org_training_request_value']['field'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['group'] = 1;
  $handler->display->display_options['filters']['field_org_training_request_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['operator_id'] = 'field_org_training_request_value_op';
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['label'] = 'Request training';
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['operator'] = 'field_org_training_request_value_op';
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['identifier'] = 'field_org_training_request_value';
  $handler->display->display_options['filters']['field_org_training_request_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Training listing (field_organization_training_list) */
  $handler->display->display_options['filters']['field_organization_training_list_value']['id'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['table'] = 'field_data_field_organization_training_list';
  $handler->display->display_options['filters']['field_organization_training_list_value']['field'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_training_list_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['operator_id'] = 'field_organization_training_list_value_op';
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['label'] = 'Training';
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['operator'] = 'field_organization_training_list_value_op';
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['identifier'] = 'field_organization_training_list_value';
  $handler->display->display_options['filters']['field_organization_training_list_value']['expose']['remember_roles'] = array(
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

  /* Display: Administer Organizations */
  $handler = $view->new_display('page', 'Administer Organizations', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/organizations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Organizations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['administer_organizations'] = array(
    t('Defaults'),
    t('Administer Organizations'),
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
    t('<p>Displaying @start to @end of @total organizations.</p>'),
    t('author'),
    t('term'),
    t('- Choose an operation -'),
    t('Title'),
    t('Cta'),
    t('Created'),
    t('Owner'),
    t('Updated date'),
    t('Supporter'),
    t('# of locations'),
    t('.'),
    t(','),
    t('Requested Training Listing'),
    t('Training'),
    t('Requested Services Listing'),
    t('Services'),
    t('Contribution rank'),
    t('Issue credits (90 days)'),
    t('Published'),
    t('Edit'),
    t('All'),
    t('Organization name contains'),
    t('Hosting'),
    t('Sectors'),
    t('Owner\'s username contains'),
    t('Request services?'),
    t('Request training'),
  );
  $export['administer_organizations'] = $view;

  $view = new view();
  $view->name = 'drupalorg_admin_comments_by_user';
  $view->description = 'Administrative view of all comments by a user (Administer Content on profile)';
  $view->tag = '';
  $view->base_table = 'comment';
  $view->human_name = 'drupalorg_admin_comments_by_user';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer comments';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'comment' => 'comment',
    'timestamp' => 'timestamp',
    'type' => 'type',
    'status' => 'status',
    'edit_comment' => 'edit_comment',
    'delete_comment' => 'edit_comment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'comment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'type' => array(
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
    'edit_comment' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_comment' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'Node';
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'User';
  /* Field: Bulk operations: Comment */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_comment';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 1,
      ),
    ),
    'action::comment_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::akismet_action_unpublish_comment' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::comment_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Node title';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['comment']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment']['type'] = 'text_plain';
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'comment';
  $handler->display->display_options['fields']['timestamp']['field'] = 'changed';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'nid';
  /* Field: Comment: Approved */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'comment';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Comment: Edit link */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_comment']['text'] = 'Edit';
  /* Field: Comment: Delete link */
  $handler->display->display_options['fields']['delete_comment']['id'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['delete_comment']['field'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_comment']['text'] = 'Delete';
  /* Sort criterion: Comment: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'comment';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Comments by %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'admin_comments_by_user_pane');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'User has not posted any comments.';
  $handler->display->display_options['empty']['area']['format'] = '1';
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
  $translatables['drupalorg_admin_comments_by_user'] = array(
    t('Defaults'),
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
    t('Node'),
    t('User'),
    t('- Choose an operation -'),
    t('Node title'),
    t('Comment'),
    t('Updated date'),
    t('Type'),
    t('Published'),
    t('Operations'),
    t('Edit'),
    t('Delete'),
    t('All'),
    t('Comments by %1'),
    t('Content pane'),
    t('User has not posted any comments.'),
    t('View panes'),
  );
  $export['drupalorg_admin_comments_by_user'] = $view;

  $view = new view();
  $view->name = 'drupalorg_admin_node_by_user';
  $view->description = 'Administrative view of all nodes by a user (Admin content on user profile)';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'drupalorg_admin_node_by_user';
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
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'created' => 'created',
    'type' => 'type',
    'body_1' => 'body_1',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'User does not currently have any nodes associated with their account..';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 1,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::akismet_action_unpublish_node' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Nodes by %1';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'admin_node_by_user_pane');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Removing spam on Drupal.org.
1) Confirm that reported node is spam
2) Block author of spam node
3) If not already there, goto spammer\'s profile and click Administer Content
4) Check all spam node boxes and "Report to akismet and unpublish"
5) Pay attention for spam node edits, make sure to only delete the spam revision, and not the entire node (if applicable)
6) Delete all spam nodes

Thank you for helping us fight spam on Drupal.org!';
  $handler->display->display_options['header']['area']['format'] = '1';
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
  $translatables['drupalorg_admin_node_by_user'] = array(
    t('Defaults'),
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
    t('User does not currently have any nodes associated with their account..'),
    t('author'),
    t('Content'),
    t('- Choose an operation -'),
    t('Title'),
    t('Body'),
    t('Post date'),
    t('Type'),
    t('Published'),
    t('Operations'),
    t('Edit'),
    t('Delete'),
    t('All'),
    t('Nodes by %1'),
    t('Content pane'),
    t('Removing spam on Drupal.org.
1) Confirm that reported node is spam
2) Block author of spam node
3) If not already there, goto spammer\'s profile and click Administer Content
4) Check all spam node boxes and "Report to akismet and unpublish"
5) Pay attention for spam node edits, make sure to only delete the spam revision, and not the entire node (if applicable)
6) Delete all spam nodes

Thank you for helping us fight spam on Drupal.org!'),
    t('View panes'),
  );
  $export['drupalorg_admin_node_by_user'] = $view;

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
  $handler->display->display_options['relationships']['vid']['label'] = 'Get the actual content from a content revision';
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
    'guide' => 'guide',
    'documentation' => 'documentation',
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
  $translatables['drupalorg_admin_noderev_by_user'] = array(
    t('Defaults'),
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
    t('Get the actual content from a content revision'),
    t('revision user'),
    t('author'),
    t('Title'),
    t('Log message'),
    t('Updated date'),
    t('Type'),
    t('Published'),
    t('Operations'),
    t('Edit'),
    t('All'),
    t('Nodes Edited by %1'),
    t('Content pane'),
    t('View panes'),
  );
  $export['drupalorg_admin_noderev_by_user'] = $view;

  return $export;
}
