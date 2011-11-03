<?php

/**
 * Implementation of hook_node_info().
 */
function association_projects_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'module' => 'features',
      'description' => t('Drupal Association Projects are the events, grants, initiatives, etc that the DA helps make happen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function association_projects_views_api() {
  return array(
    'api' => '2',
  );
}
