<?php
/**
 * @file
 * drupalorg_home_support.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_home_support_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'drupalorg_commit_map';
  $view->description = 'Homepage map pins for recent commits';
  $view->tag = 'default';
  $view->base_table = 'versioncontrol_operations';
  $view->human_name = 'Drupal.org commit map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'commit';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: VersionControl Operations: User */
  $handler->display->display_options['relationships']['committer_uid']['id'] = 'committer_uid';
  $handler->display->display_options['relationships']['committer_uid']['table'] = 'versioncontrol_operations';
  $handler->display->display_options['relationships']['committer_uid']['field'] = 'committer_uid';
  $handler->display->display_options['relationships']['committer_uid']['required'] = TRUE;
  /* Field: VersionControl Operations: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'versioncontrol_operations';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['label'] = '';
  $handler->display->display_options['fields']['message']['exclude'] = TRUE;
  $handler->display->display_options['fields']['message']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['message']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message']['issue_tracker_url'] = '/node/%issue_id';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'committer_uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: message */
  $handler->display->display_options['fields']['vc_op_id']['id'] = 'vc_op_id';
  $handler->display->display_options['fields']['vc_op_id']['table'] = 'versioncontrol_operations';
  $handler->display->display_options['fields']['vc_op_id']['field'] = 'vc_op_id';
  $handler->display->display_options['fields']['vc_op_id']['ui_name'] = 'message';
  $handler->display->display_options['fields']['vc_op_id']['label'] = '';
  $handler->display->display_options['fields']['vc_op_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['vc_op_id']['alter']['text'] = '[name] committed [message]';
  $handler->display->display_options['fields']['vc_op_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vc_op_id']['separator'] = '';
  /* Field: latitude */
  $handler->display->display_options['fields']['field_user_geolocation']['id'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['field'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['relationship'] = 'committer_uid';
  $handler->display->display_options['fields']['field_user_geolocation']['ui_name'] = 'latitude';
  $handler->display->display_options['fields']['field_user_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_user_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_geolocation']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_user_geolocation']['type'] = 'geolocation_latitude';
  /* Field: longitude */
  $handler->display->display_options['fields']['field_user_geolocation_1']['id'] = 'field_user_geolocation_1';
  $handler->display->display_options['fields']['field_user_geolocation_1']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation_1']['field'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation_1']['relationship'] = 'committer_uid';
  $handler->display->display_options['fields']['field_user_geolocation_1']['ui_name'] = 'longitude';
  $handler->display->display_options['fields']['field_user_geolocation_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_geolocation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_geolocation_1']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_user_geolocation_1']['type'] = 'geolocation_longitude';
  /* Sort criterion: VersionControl Operations: Operation ID */
  $handler->display->display_options['sorts']['vc_op_id']['id'] = 'vc_op_id';
  $handler->display->display_options['sorts']['vc_op_id']['table'] = 'versioncontrol_operations';
  $handler->display->display_options['sorts']['vc_op_id']['field'] = 'vc_op_id';
  $handler->display->display_options['sorts']['vc_op_id']['order'] = 'DESC';
  /* Filter criterion: VersionControl Operations: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'versioncontrol_operations';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: User: Location (field_user_geolocation:lat) */
  $handler->display->display_options['filters']['field_user_geolocation_lat']['id'] = 'field_user_geolocation_lat';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['field'] = 'field_user_geolocation_lat';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['relationship'] = 'committer_uid';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['operator'] = 'not empty';
  /* Filter criterion: User: Location (field_user_geolocation:lng) */
  $handler->display->display_options['filters']['field_user_geolocation_lng']['id'] = 'field_user_geolocation_lng';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['field'] = 'field_user_geolocation_lng';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['relationship'] = 'committer_uid';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['operator'] = 'not empty';
  $export['drupalorg_commit_map'] = $view;

  $view = new view();
  $view->name = 'drupalorg_forum_map';
  $view->description = 'Homepage map pins for recent forum posts';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Drupal.org forum map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'forum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: message */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'message';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[name] posted [title]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: latitude */
  $handler->display->display_options['fields']['field_user_geolocation']['id'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['field'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_geolocation']['ui_name'] = 'latitude';
  $handler->display->display_options['fields']['field_user_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_user_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_geolocation']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_user_geolocation']['type'] = 'geolocation_latitude';
  /* Field: longitude */
  $handler->display->display_options['fields']['field_user_geolocation_1']['id'] = 'field_user_geolocation_1';
  $handler->display->display_options['fields']['field_user_geolocation_1']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation_1']['field'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_geolocation_1']['ui_name'] = 'longitude';
  $handler->display->display_options['fields']['field_user_geolocation_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_geolocation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_geolocation_1']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_user_geolocation_1']['type'] = 'geolocation_longitude';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'forum' => 'forum',
  );
  /* Filter criterion: User: Location (field_user_geolocation:lat) */
  $handler->display->display_options['filters']['field_user_geolocation_lat']['id'] = 'field_user_geolocation_lat';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['field'] = 'field_user_geolocation_lat';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['operator'] = 'not empty';
  /* Filter criterion: User: Location (field_user_geolocation:lng) */
  $handler->display->display_options['filters']['field_user_geolocation_lng']['id'] = 'field_user_geolocation_lng';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['field'] = 'field_user_geolocation_lng';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['operator'] = 'not empty';
  $export['drupalorg_forum_map'] = $view;

  $view = new view();
  $view->name = 'drupalorg_handbook_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Drupal.org handbook map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'doc';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: message */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'message';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[name] updated [title]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: latitude */
  $handler->display->display_options['fields']['field_user_geolocation']['id'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['field'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_geolocation']['ui_name'] = 'latitude';
  $handler->display->display_options['fields']['field_user_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_user_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_geolocation']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_user_geolocation']['type'] = 'geolocation_latitude';
  /* Field: longitude */
  $handler->display->display_options['fields']['field_user_geolocation_1']['id'] = 'field_user_geolocation_1';
  $handler->display->display_options['fields']['field_user_geolocation_1']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation_1']['field'] = 'field_user_geolocation';
  $handler->display->display_options['fields']['field_user_geolocation_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_geolocation_1']['ui_name'] = 'longitude';
  $handler->display->display_options['fields']['field_user_geolocation_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_geolocation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_geolocation_1']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_user_geolocation_1']['type'] = 'geolocation_longitude';
  /* Sort criterion: Content revision: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Book: Depth */
  $handler->display->display_options['filters']['depth']['id'] = 'depth';
  $handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['filters']['depth']['field'] = 'depth';
  $handler->display->display_options['filters']['depth']['operator'] = '>';
  $handler->display->display_options['filters']['depth']['value']['value'] = '0';
  /* Filter criterion: User: Location (field_user_geolocation:lat) */
  $handler->display->display_options['filters']['field_user_geolocation_lat']['id'] = 'field_user_geolocation_lat';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['field'] = 'field_user_geolocation_lat';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_geolocation_lat']['operator'] = 'not empty';
  /* Filter criterion: User: Location (field_user_geolocation:lng) */
  $handler->display->display_options['filters']['field_user_geolocation_lng']['id'] = 'field_user_geolocation_lng';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['table'] = 'field_data_field_user_geolocation';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['field'] = 'field_user_geolocation_lng';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_geolocation_lng']['operator'] = 'not empty';
  $export['drupalorg_handbook_map'] = $view;

  return $export;
}
