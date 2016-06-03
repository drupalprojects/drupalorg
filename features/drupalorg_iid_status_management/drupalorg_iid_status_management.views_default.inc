<?php
/**
 * @file
 * drupalorg_iid_status_management.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_iid_status_management_views_default_views() {
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'manage_button' => 'manage_button',
    'fingerprint' => 'fingerprint',
    'iid_status' => 'iid_status',
    'roles' => 'roles',
    'status' => 'status',
    'fingerprints' => 'fingerprints',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
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
    'roles' => array(
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
  );
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
  /* Field: Distil Registration Data: Roles */
  $handler->display->display_options['fields']['roles']['id'] = 'roles';
  $handler->display->display_options['fields']['roles']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['roles']['field'] = 'roles';
  /* Field: Distil Registration Data: UID Statuses */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Statuses';
  /* Field: Distil Registration Data: Fingerprint Count */
  $handler->display->display_options['fields']['fingerprints']['id'] = 'fingerprints';
  $handler->display->display_options['fields']['fingerprints']['table'] = 'distil_registration';
  $handler->display->display_options['fields']['fingerprints']['field'] = 'fingerprints';
  /* Filter criterion: Distil Registration Data: D_IID Fingerprint */
  $handler->display->display_options['filters']['fingerprint']['id'] = 'fingerprint';
  $handler->display->display_options['filters']['fingerprint']['table'] = 'distil_registration';
  $handler->display->display_options['filters']['fingerprint']['field'] = 'fingerprint';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'iid_status_management');
  $handler->display->display_options['path'] = 'admin/content/iid_status_management';
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
    t('Manage IID Status'),
    t('Fingerprint'),
    t('IID Status'),
    t('Roles'),
    t('Statuses'),
    t('Fingerprint Count'),
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
  $handler->display->display_options['header']['area_1']['content'] = '<a href="/admin/content/iid_status_management">Back to parent view</a>';
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
    t('<a href="/admin/content/iid_status_management">Back to parent view</a>'),
    t('Distil IID: [field_distil_reg_iid]'),
    t('Roles'),
    t('Organizations'),
    t('Bio'),
    t('Distil iid'),
    t('Website(s)'),
    t('Account Block Link (Fasttoggle)'),
    t('All'),
    t('Page'),
  );
  $export['IID_Status_Management_Drilldown'] = $view;

  return $export;
}
