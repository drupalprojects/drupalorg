<?php
/**
 * @file
 * drupalorg_spam.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_spam_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'IID_Status_Management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'distil_registration';
  $view->human_name = 'IID Status Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IID Status Management';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'manage distil status';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'manage_button' => 'manage_button',
    'fingerprint' => 'fingerprint',
    'iid_status' => 'iid_status',
    'zid_fingerprint' => 'zid_fingerprint',
    'status' => 'status',
    'fingerprints' => 'fingerprints',
    'roles' => 'roles',
    'names' => 'names',
    'forum_post_titles' => 'forum_post_titles',
    'first_seen' => 'first_seen',
    'last_seen' => 'last_seen',
    'fingerprint_age' => 'fingerprint_age',
  );
  $handler->display->display_options['style_options']['default'] = 'last_seen';
  $handler->display->display_options['style_options']['info'] = array(
    'manage_button' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fingerprint' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'iid_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'zid_fingerprint' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fingerprints' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'roles' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'names' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'forum_post_titles' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'first_seen' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_seen' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fingerprint_age' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Useful related links';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Support links:
Email whitelisting: <a href="admin/config/people/user-restrictions/add" target="_blank">User Restrictions</a>
DBLog (filter by distil_registration): <a href="/admin/reports/dblog" target="_blank">DBLog</a>';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Field: Distil Registration Data: Manage IID Status */
  $handler->display->display_options['fields']['manage_button']['id'] = 'manage_button';
  $handler->display->display_options['fields']['manage_button']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['manage_button']['field'] = 'manage_button';
  /* Field: Distil Registration Data: D_IID Fingerprint */
  $handler->display->display_options['fields']['fingerprint']['id'] = 'fingerprint';
  $handler->display->display_options['fields']['fingerprint']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['fingerprint']['field'] = 'fingerprint';
  $handler->display->display_options['fields']['fingerprint']['label'] = 'Fingerprint';
  $handler->display->display_options['fields']['fingerprint']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['fingerprint']['alter']['path'] = 'admin/content/iid_status_management/drilldown/[fingerprint]';
  $handler->display->display_options['fields']['fingerprint']['element_label_colon'] = FALSE;
  /* Field: Distil Registration Data: IID Status */
  $handler->display->display_options['fields']['iid_status']['id'] = 'iid_status';
  $handler->display->display_options['fields']['iid_status']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['iid_status']['field'] = 'iid_status';
  /* Field: Distil Registration Data: D_ZID Fingerprint */
  $handler->display->display_options['fields']['zid_fingerprint']['id'] = 'zid_fingerprint';
  $handler->display->display_options['fields']['zid_fingerprint']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['zid_fingerprint']['field'] = 'zid_fingerprint';
  /* Field: Distil Registration Data: UID Statuses */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Statuses';
  /* Field: Distil Registration Data: Fingerprint Count */
  $handler->display->display_options['fields']['fingerprints']['id'] = 'fingerprints';
  $handler->display->display_options['fields']['fingerprints']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['fingerprints']['field'] = 'fingerprints';
  /* Field: Distil Registration Data: Roles */
  $handler->display->display_options['fields']['roles']['id'] = 'roles';
  $handler->display->display_options['fields']['roles']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['roles']['field'] = 'roles';
  /* Field: Distil Registration Data: Usernames */
  $handler->display->display_options['fields']['names']['id'] = 'names';
  $handler->display->display_options['fields']['names']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['names']['field'] = 'names';
  /* Field: Distil Registration Data: Forum Titles */
  $handler->display->display_options['fields']['forum_post_titles']['id'] = 'forum_post_titles';
  $handler->display->display_options['fields']['forum_post_titles']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['forum_post_titles']['field'] = 'forum_post_titles';
  /* Field: Distil Registration Data: First Seen */
  $handler->display->display_options['fields']['first_seen']['id'] = 'first_seen';
  $handler->display->display_options['fields']['first_seen']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['first_seen']['field'] = 'first_seen';
  /* Field: Distil Registration Data: Last Seen */
  $handler->display->display_options['fields']['last_seen']['id'] = 'last_seen';
  $handler->display->display_options['fields']['last_seen']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['last_seen']['field'] = 'last_seen';
  /* Field: Distil Registration Data: Fingerprint Age */
  $handler->display->display_options['fields']['fingerprint_age']['id'] = 'fingerprint_age';
  $handler->display->display_options['fields']['fingerprint_age']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['fingerprint_age']['field'] = 'fingerprint_age';
  /* Filter criterion: Distil Registration Data: D_IID Fingerprint */
  $handler->display->display_options['filters']['fingerprint']['id'] = 'fingerprint';
  $handler->display->display_options['filters']['fingerprint']['table'] = 'distil_registration';
  $handler->display->display_options['filters']['fingerprint']['field'] = 'fingerprint';
  $handler->display->display_options['filters']['fingerprint']['group'] = 1;
  $handler->display->display_options['filters']['fingerprint']['exposed'] = TRUE;
  $handler->display->display_options['filters']['fingerprint']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['fingerprint']['expose']['label'] = 'D_IID Fingerprint';
  $handler->display->display_options['filters']['fingerprint']['expose']['operator'] = 'fingerprint_op';
  $handler->display->display_options['filters']['fingerprint']['expose']['identifier'] = 'fingerprint';
  $handler->display->display_options['filters']['fingerprint']['expose']['remember_roles'] = array(
    2 => 0,
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
  /* Filter criterion: Distil Registration Data: IID Status */
  $handler->display->display_options['filters']['iid_status']['id'] = 'iid_status';
  $handler->display->display_options['filters']['iid_status']['table'] = 'distil_registration';
  $handler->display->display_options['filters']['iid_status']['field'] = 'iid_status';
  $handler->display->display_options['filters']['iid_status']['value'] = array(
    'all' => 'all',
    'unsure' => 'unsure',
    'blacklist' => 'blacklist',
    'whitelist' => 'whitelist',
  );
  $handler->display->display_options['filters']['iid_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['iid_status']['expose']['operator_id'] = 'iid_status_op';
  $handler->display->display_options['filters']['iid_status']['expose']['label'] = 'IID Status';
  $handler->display->display_options['filters']['iid_status']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['iid_status']['expose']['operator'] = 'iid_status_op';
  $handler->display->display_options['filters']['iid_status']['expose']['identifier'] = 'iid_status';
  $handler->display->display_options['filters']['iid_status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['iid_status']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['iid_status']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['iid_status']['group_info']['label'] = 'IID Status';
  $handler->display->display_options['filters']['iid_status']['group_info']['identifier'] = 'iid_status';
  $handler->display->display_options['filters']['iid_status']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => array(
        'all' => 'all',
      ),
    ),
    2 => array(
      'title' => 'Unsure',
      'operator' => 'or',
      'value' => array(
        'unsure' => 'unsure',
      ),
    ),
    3 => array(
      'title' => 'Blacklisted',
      'operator' => 'or',
      'value' => array(
        'blacklist' => 'blacklist',
      ),
    ),
    4 => array(
      'title' => 'Whitelisted',
      'operator' => 'or',
      'value' => array(
        'whitelist' => 'whitelist',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'iid_status_management');
  $handler->display->display_options['path'] = 'admin/content/iid_status_management';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Distil';
  $handler->display->display_options['menu']['description'] = 'Manage IID Fingerprints';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['IID_Status_Management'] = array(
    t('Master'),
    t('IID Status Management'),
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
    t('Useful related links'),
    t('Support links:
Email whitelisting: <a href="admin/config/people/user-restrictions/add" target="_blank">User Restrictions</a>
DBLog (filter by distil_registration): <a href="/admin/reports/dblog" target="_blank">DBLog</a>'),
    t('Manage IID Status'),
    t('Fingerprint'),
    t('IID Status'),
    t('D_ZID Fingerprint'),
    t('Statuses'),
    t('Fingerprint Count'),
    t('Roles'),
    t('Usernames'),
    t('Forum Titles'),
    t('First Seen'),
    t('Last Seen'),
    t('Fingerprint Age'),
    t('D_IID Fingerprint'),
    t('Page'),
  );
  $export['IID_Status_Management'] = $view;

  $view = new view();
  $view->name = 'IID_Status_Management_Drilldown';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'IID Status Management Drilldown';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'manage distil status';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'rid' => 'rid',
    'field_organizations' => 'field_organizations',
    'field_bio' => 'field_bio',
    'field_distil_reg_iid' => 'field_distil_reg_iid',
    'field_websites' => 'field_websites',
    'fasttoggle_block_user' => 'fasttoggle_block_user',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
    'field_organizations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_distil_reg_iid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_websites' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fasttoggle_block_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['label'] = 'parent view link';
  $handler->display->display_options['header']['area_1']['content'] = 'Support links:
Email whitelisting: <a href="admin/config/people/user-restrictions/add" target="_blank">User Restrictions</a>
DBLog (filter by distil_registration): <a href="/admin/reports/dblog" target="_blank">DBLog</a>

<a href="/admin/content/iid_status_management">Back to parent view</a>';
  $handler->display->display_options['header']['area_1']['format'] = '1';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Distil IID: [field_distil_reg_iid]';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Organizations */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_organizations']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  /* Field: User: Bio */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  /* Field: User: Distil iid */
  $handler->display->display_options['fields']['field_distil_reg_iid']['id'] = 'field_distil_reg_iid';
  $handler->display->display_options['fields']['field_distil_reg_iid']['table'] = 'field_data_field_distil_reg_iid';
  $handler->display->display_options['fields']['field_distil_reg_iid']['field'] = 'field_distil_reg_iid';
  $handler->display->display_options['fields']['field_distil_reg_iid']['exclude'] = TRUE;
  /* Field: User: Distil zid */
  $handler->display->display_options['fields']['field_distil_reg_zid']['id'] = 'field_distil_reg_zid';
  $handler->display->display_options['fields']['field_distil_reg_zid']['table'] = 'field_data_field_distil_reg_zid';
  $handler->display->display_options['fields']['field_distil_reg_zid']['field'] = 'field_distil_reg_zid';
  /* Field: User: Website(s) */
  $handler->display->display_options['fields']['field_websites']['id'] = 'field_websites';
  $handler->display->display_options['fields']['field_websites']['table'] = 'field_data_field_websites';
  $handler->display->display_options['fields']['field_websites']['field'] = 'field_websites';
  $handler->display->display_options['fields']['field_websites']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_websites']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_websites']['delta_offset'] = '0';
  /* Field: User: Block Link (Fasttoggle) */
  $handler->display->display_options['fields']['fasttoggle_block_user']['id'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['table'] = 'users';
  $handler->display->display_options['fields']['fasttoggle_block_user']['field'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['label'] = 'Account Block Link (Fasttoggle)';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Distil iid (field_distil_reg_iid) */
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['id'] = 'field_distil_reg_iid_value';
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['table'] = 'field_data_field_distil_reg_iid';
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['field'] = 'field_distil_reg_iid_value';
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_distil_reg_iid_value']['limit'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'iid_status_management_subview');
  $handler->display->display_options['path'] = 'admin/content/iid_status_management/drilldown/%';
  $translatables['IID_Status_Management_Drilldown'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('parent view link'),
    t('Support links:
Email whitelisting: <a href="admin/config/people/user-restrictions/add" target="_blank">User Restrictions</a>
DBLog (filter by distil_registration): <a href="/admin/reports/dblog" target="_blank">DBLog</a>

<a href="/admin/content/iid_status_management">Back to parent view</a>'),
    t('Distil IID: [field_distil_reg_iid]'),
    t('Roles'),
    t('Organizations'),
    t('Bio'),
    t('Distil iid'),
    t('Distil zid'),
    t('Website(s)'),
    t('Account Block Link (Fasttoggle)'),
    t('All'),
    t('Page'),
  );
  $export['IID_Status_Management_Drilldown'] = $view;

  $view = new view();
  $view->name = 'drupalorg_comment_spam';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Spam Comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer comments';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'type' => 'type',
    'count' => 'count',
    'subject' => 'subject',
    'comment_body' => 'comment_body',
    'changed' => 'changed',
    'name' => 'name',
    'drupalorg_not_spam' => 'nothing',
    'nothing' => 'nothing',
    'fasttoggle_block_user' => 'nothing',
    'count_1' => 'count_1',
    'name_1' => 'name_1',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = 'count';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
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
    'count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subject' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_body' => array(
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'drupalorg_not_spam' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'fasttoggle_block_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 1,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Flags: drupalorg_comment_spam */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'comment';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'drupalorg_comment_spam';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: drupalorg_comment_spam counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'comment';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'drupalorg_comment_spam';
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  /* Field: Comment: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'comment';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'nid';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Reports';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Comment: Remove spam flags */
  $handler->display->display_options['fields']['drupalorg_not_spam']['id'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['table'] = 'views_entity_comment';
  $handler->display->display_options['fields']['drupalorg_not_spam']['field'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['label'] = '';
  $handler->display->display_options['fields']['drupalorg_not_spam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/user/[uid]/admin-content">Administer content</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Block Link (Fasttoggle) */
  $handler->display->display_options['fields']['fasttoggle_block_user']['id'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['table'] = 'users';
  $handler->display->display_options['fields']['fasttoggle_block_user']['field'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['relationship'] = 'uid';
  $handler->display->display_options['fields']['fasttoggle_block_user']['label'] = '';
  $handler->display->display_options['fields']['fasttoggle_block_user']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Flagger(s)';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';
  $handler->display->display_options['sorts']['count']['expose']['label'] = 'Flag counter';
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'drupalorg_comment_spam_pane');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently not spam comments reported.  Thanks for checking!';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Flags: drupalorg_comment_spam */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'comment';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'drupalorg_comment_spam';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: drupalorg_comment_spam counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'comment';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'drupalorg_comment_spam';
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  /* Relationship: Flags: drupalorg_comment_spam counter */
  $handler->display->display_options['relationships']['flag_count_rel_1']['id'] = 'flag_count_rel_1';
  $handler->display->display_options['relationships']['flag_count_rel_1']['table'] = 'comment';
  $handler->display->display_options['relationships']['flag_count_rel_1']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel_1']['flag'] = 'drupalorg_comment_spam';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Comment: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'comment';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'nid';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Reports';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Comment: View link */
  $handler->display->display_options['fields']['view_comment']['id'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['view_comment']['field'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['exclude'] = TRUE;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = 'Comment link';
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['path'] = '[view_comment]';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['subject']['empty'] = '[view_comment]';
  $handler->display->display_options['fields']['subject']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['subject']['link_to_node'] = TRUE;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject_1']['id'] = 'subject_1';
  $handler->display->display_options['fields']['subject_1']['table'] = 'comment';
  $handler->display->display_options['fields']['subject_1']['field'] = 'subject';
  $handler->display->display_options['fields']['subject_1']['link_to_comment'] = FALSE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Comment: Remove spam flags */
  $handler->display->display_options['fields']['drupalorg_not_spam']['id'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['table'] = 'views_entity_comment';
  $handler->display->display_options['fields']['drupalorg_not_spam']['field'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['label'] = '';
  $handler->display->display_options['fields']['drupalorg_not_spam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/user/[uid]/admin-content">Administer content</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Block Link (Fasttoggle) */
  $handler->display->display_options['fields']['fasttoggle_block_user']['id'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['table'] = 'users';
  $handler->display->display_options['fields']['fasttoggle_block_user']['field'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['relationship'] = 'uid';
  $handler->display->display_options['fields']['fasttoggle_block_user']['label'] = '';
  $handler->display->display_options['fields']['fasttoggle_block_user']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count_1']['id'] = 'count_1';
  $handler->display->display_options['fields']['count_1']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count_1']['field'] = 'count';
  $handler->display->display_options['fields']['count_1']['relationship'] = 'flag_count_rel';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'First flagger';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $translatables['drupalorg_comment_spam'] = array(
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
    t('Content'),
    t('flag'),
    t('counter'),
    t('author'),
    t('Flag user'),
    t('Type'),
    t('Reports'),
    t('.'),
    t('Title'),
    t('Comment'),
    t('Updated'),
    t('Author'),
    t('Operations'),
    t('<a href="/user/[uid]/admin-content">Administer content</a>'),
    t('Flag counter'),
    t(','),
    t('Flagger(s)'),
    t('Post date'),
    t('Content pane'),
    t('There are currently not spam comments reported.  Thanks for checking!'),
    t('View link'),
    t('Comment link'),
    t('View'),
    t('[view_comment]'),
    t('First flagger'),
    t('View panes'),
  );
  $export['drupalorg_comment_spam'] = $view;

  $view = new view();
  $view->name = 'drupalorg_node_spam';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spam Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'count' => 'count',
    'title' => 'title',
    'body' => 'body',
    'changed' => 'changed',
    'name' => 'name',
    'drupalorg_not_spam' => 'drupalorg_not_spam',
    'uid_1' => 'drupalorg_not_spam',
    'fasttoggle_block_user' => 'drupalorg_not_spam',
  );
  $handler->display->display_options['style_options']['default'] = 'count';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 1,
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
    'body' => array(
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'drupalorg_not_spam' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'uid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fasttoggle_block_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Flags: drupalorg_node_spam */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'drupalorg_node_spam';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: drupalorg_node_spam counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'drupalorg_node_spam';
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Relationship: Drupalorg comment nid: Drupalorg comment deleted - nid */
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['id'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['field'] = 'drupalorg_comment_deleted_rel';
  /* Relationship: Drupalorg comment uid: Drupalorg comment deleted rel - uid */
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['id'] = 'drupalorg_comment_deleted_rel_1';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['table'] = 'users';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['field'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['relationship'] = 'uid_1';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Reports';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Drupalorg comment deleted.: Body of spam node. */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'drupalorg_comment_deleted';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'drupalorg_comment_deleted_rel';
  /* Field: Drupalorg comment deleted.: Subject/title of spam node. */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'drupalorg_comment_deleted';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['relationship'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['fields']['subject']['label'] = 'Subject of spam node.';
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  /* Field: Content: Remove spam flags */
  $handler->display->display_options['fields']['drupalorg_not_spam']['id'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['drupalorg_not_spam']['field'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['label'] = '';
  $handler->display->display_options['fields']['drupalorg_not_spam']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['label'] = 'Administer content';
  $handler->display->display_options['fields']['uid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['alter']['text'] = 'Administer content';
  $handler->display->display_options['fields']['uid_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['alter']['path'] = 'user/[uid_1]/admin-content';
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  /* Field: User: Block Link (Fasttoggle) */
  $handler->display->display_options['fields']['fasttoggle_block_user']['id'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['table'] = 'users';
  $handler->display->display_options['fields']['fasttoggle_block_user']['field'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['fasttoggle_block_user']['label'] = '';
  $handler->display->display_options['fields']['fasttoggle_block_user']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Flags: Flag counter */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'flag_counts';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['sorts']['count']['order'] = 'DESC';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'drupalorg_node_spam_pane');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Removing spam on Drupal.org.
1) Confirm that reported node is spam
2) Block author of spam node
3) Head to spammer\'s profile and click Administer Content
4) Check all spam node boxes and "Report to akismet and unpublish"
5) Pay attention for spam node edits, make sure to only delete the spam revision, and not the entire node (if applicable)
6) Delete all spam nodes

Thank you for helping us fight spam on Drupal.org!';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no spam nodes reported.  Thanks for checking!';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $translatables['drupalorg_node_spam'] = array(
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
    t('flag'),
    t('counter'),
    t('revision user'),
    t('Drupalorg comment deleted nid rel.'),
    t('Drupalorg comment deleted rel - uid'),
    t('Type'),
    t('Reports'),
    t('.'),
    t('Title'),
    t('Summary'),
    t('Updated'),
    t('Author'),
    t('Body of spam node.'),
    t('Subject of spam node.'),
    t('Administer content'),
    t('Content pane'),
    t('Removing spam on Drupal.org.
1) Confirm that reported node is spam
2) Block author of spam node
3) Head to spammer\'s profile and click Administer Content
4) Check all spam node boxes and "Report to akismet and unpublish"
5) Pay attention for spam node edits, make sure to only delete the spam revision, and not the entire node (if applicable)
6) Delete all spam nodes

Thank you for helping us fight spam on Drupal.org!'),
    t('There are currently no spam nodes reported.  Thanks for checking!'),
    t('View panes'),
  );
  $export['drupalorg_node_spam'] = $view;

  $view = new view();
  $view->name = 'drupalorg_spammers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Spammers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
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
    'uid' => 'uid',
    'name' => 'name',
    'count' => 'count',
    'created' => 'created',
    'mail' => 'mail',
    'drupalorg_not_spam' => 'fasttoggle_block_user',
    'nothing' => 'fasttoggle_block_user',
    'fasttoggle_block_user' => 'fasttoggle_block_user',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'count' => array(
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
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'drupalorg_not_spam' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fasttoggle_block_user' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Includes users with content marked as spam. If a user can not be marked as ham, check <a href="/admin/content/spam">content spam</a>.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Flags: drupalorg_user_spam */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'drupalorg_user_spam';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: drupalorg_user_spam counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'drupalorg_user_spam';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: drupalorg_node_spam */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'node-flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'drupalorg_node_spam';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: Drupalorg comment uid: Drupalorg comment deleted rel - uid */
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['id'] = 'drupalorg_comment_deleted_rel_1';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['table'] = 'users';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['field'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['label'] = 'Drupalorg comment deleted.';
  /* Relationship: Drupalorg comment nid: Drupalorg comment deleted - nid */
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['id'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['field'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['label'] = 'Drupalorg comment deleted.';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Reports';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'short';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'long';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Remove spam flags */
  $handler->display->display_options['fields']['drupalorg_not_spam']['id'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['drupalorg_not_spam']['field'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['label'] = '';
  $handler->display->display_options['fields']['drupalorg_not_spam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/user/[uid]/admin-content">Administer content</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Block Link (Fasttoggle) */
  $handler->display->display_options['fields']['fasttoggle_block_user']['id'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['table'] = 'users';
  $handler->display->display_options['fields']['fasttoggle_block_user']['field'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['label'] = 'Operations';
  /* Field: Drupalorg comment deleted.: Body of spam node. */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'drupalorg_comment_deleted';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'drupalorg_comment_deleted_rel_1';
  /* Field: Flags: Time last flagged */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'short';
  $handler->display->display_options['fields']['last_updated']['second_date_format'] = 'long';
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'flag_content_rel';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 2;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_1']['id'] = 'flagged_1';
  $handler->display->display_options['filters']['flagged_1']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged_1']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['filters']['flagged_1']['value'] = '1';
  $handler->display->display_options['filters']['flagged_1']['group'] = 2;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'spammers_pane');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name' => 'name',
    'count' => 'count',
    'created' => 'created',
    'login' => 'login',
    'mail' => 'mail',
    'drupalorg_not_spam' => 'fasttoggle_block_user',
    'nothing' => 'fasttoggle_block_user',
    'fasttoggle_block_user' => 'fasttoggle_block_user',
    'comment_body' => 'comment_body',
    'last_updated' => 'last_updated',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['style_options']['default'] = 'login';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'count' => array(
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
    'login' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'drupalorg_not_spam' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fasttoggle_block_user' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'comment_body' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_updated' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: drupalorg_user_spam */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'drupalorg_user_spam';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: drupalorg_user_spam counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'drupalorg_user_spam';
  /* Relationship: User: Content authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: drupalorg_node_spam */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'node-flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'drupalorg_node_spam';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: Drupalorg comment uid: Drupalorg comment deleted rel - uid */
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['id'] = 'drupalorg_comment_deleted_rel_1';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['table'] = 'users';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['field'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel_1']['label'] = 'Drupalorg comment deleted.';
  /* Relationship: Drupalorg comment nid: Drupalorg comment deleted - nid */
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['id'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['field'] = 'drupalorg_comment_deleted_rel';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['drupalorg_comment_deleted_rel']['label'] = 'Drupalorg comment deleted.';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['uid_1']['label'] = '(node-flag)Flag user';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_2']['id'] = 'uid_2';
  $handler->display->display_options['relationships']['uid_2']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_2']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_2']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid_2']['label'] = '(flag)Flag user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Reports';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'short';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'long';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Remove spam flags */
  $handler->display->display_options['fields']['drupalorg_not_spam']['id'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['drupalorg_not_spam']['field'] = 'drupalorg_not_spam';
  $handler->display->display_options['fields']['drupalorg_not_spam']['label'] = '';
  $handler->display->display_options['fields']['drupalorg_not_spam']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/user/[uid]/admin-content">Administer content</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: User: Block Link (Fasttoggle) */
  $handler->display->display_options['fields']['fasttoggle_block_user']['id'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['table'] = 'users';
  $handler->display->display_options['fields']['fasttoggle_block_user']['field'] = 'fasttoggle_block_user';
  $handler->display->display_options['fields']['fasttoggle_block_user']['label'] = 'Operations';
  /* Field: Drupalorg comment deleted.: Body of spam node. */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'drupalorg_comment_deleted';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'drupalorg_comment_deleted_rel_1';
  /* Field: Flags: Time last flagged */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'short';
  $handler->display->display_options['fields']['last_updated']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_2';
  $handler->display->display_options['fields']['name_1']['label'] = 'Flagger';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid_2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 2;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_1']['id'] = 'flagged_1';
  $handler->display->display_options['filters']['flagged_1']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged_1']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['filters']['flagged_1']['value'] = '1';
  $handler->display->display_options['filters']['flagged_1']['group'] = 2;
  $translatables['drupalorg_spammers'] = array(
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
    t('Includes users with content marked as spam. If a user can not be marked as ham, check <a href="/admin/content/spam">content spam</a>.'),
    t('flag'),
    t('counter'),
    t('nodes'),
    t('node-flag'),
    t('Drupalorg comment deleted.'),
    t('Flag user'),
    t('Username'),
    t('Reports'),
    t('.'),
    t('Created date'),
    t('Last login'),
    t('E-mail'),
    t('Operations'),
    t('<a href="/user/[uid]/admin-content">Administer content</a>'),
    t('Body of spam node.'),
    t('Time last flagged'),
    t('User uid'),
    t('Content pane'),
    t('(node-flag)Flag user'),
    t('(flag)Flag user'),
    t('Flagger'),
    t('View panes'),
  );
  $export['drupalorg_spammers'] = $view;

  return $export;
}
