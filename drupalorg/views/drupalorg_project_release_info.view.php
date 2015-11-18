<?php

$view = new view();
$view->name = 'project_release_info';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'project_release_info';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Release info';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Created by';
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created on';
$handler->display->display_options['fields']['created']['date_format'] = 'medium';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Last updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'medium';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: Content: Core compatibility */
$handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
$handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
$handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
$handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_type'] = 'span';
/* Field: Content: Release type */
$handler->display->display_options['fields']['taxonomy_vocabulary_7']['id'] = 'taxonomy_vocabulary_7';
$handler->display->display_options['fields']['taxonomy_vocabulary_7']['table'] = 'field_data_taxonomy_vocabulary_7';
$handler->display->display_options['fields']['taxonomy_vocabulary_7']['field'] = 'taxonomy_vocabulary_7';
$handler->display->display_options['fields']['taxonomy_vocabulary_7']['element_type'] = 'span';
$handler->display->display_options['fields']['taxonomy_vocabulary_7']['delta_offset'] = '0';
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
$handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
  'project_release' => 'project_release',
);
$handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'project_release' => 'project_release',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'release_info_pane');
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
  'nid' => array(
    'type' => 'context',
    'context' => 'entity:node.nid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
);
$translatables['project_release_info'] = array(
  t('Master'),
  t('Release info'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('author'),
  t('Official release from tag'),
  t('Created by'),
  t('Created on'),
  t('Last updated'),
  t('Core compatibility'),
  t('Release type'),
  t('All'),
  t('Content pane'),
  t('View panes'),
);
