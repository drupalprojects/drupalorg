<?php
/**
 * @file
 * drupalorg_issues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_issues_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'drupalorg_user_organizations';
  $view->description = 'A user\'s current organizations';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Drupal.org user organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_organization_reference_field_collection_item']['id'] = 'reverse_field_organization_reference_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_organization_reference_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_organization_reference_field_collection_item']['field'] = 'reverse_field_organization_reference_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_organization_reference_field_collection_item']['required'] = TRUE;
  /* Relationship: Field collection item: Entity with the Organizations (field_organizations) */
  $handler->display->display_options['relationships']['field_organizations_user']['id'] = 'field_organizations_user';
  $handler->display->display_options['relationships']['field_organizations_user']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_organizations_user']['field'] = 'field_organizations_user';
  $handler->display->display_options['relationships']['field_organizations_user']['relationship'] = 'reverse_field_organization_reference_field_collection_item';
  $handler->display->display_options['relationships']['field_organizations_user']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'organization' => 'organization',
  );
  /* Filter criterion: Field collection item: Current (field_current) */
  $handler->display->display_options['filters']['field_current_value']['id'] = 'field_current_value';
  $handler->display->display_options['filters']['field_current_value']['table'] = 'field_data_field_current';
  $handler->display->display_options['filters']['field_current_value']['field'] = 'field_current_value';
  $handler->display->display_options['filters']['field_current_value']['relationship'] = 'reverse_field_organization_reference_field_collection_item';
  $handler->display->display_options['filters']['field_current_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_organizations_user';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['drupalorg_user_organizations'] = $view;

  return $export;
}
