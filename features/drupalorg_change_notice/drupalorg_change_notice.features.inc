<?php

/**
 * Implementation of hook_node_info().
 */
function drupalorg_change_notice_node_info() {
  $items = array(
    'changenotice' => array(
      'name' => t('Change record'),
      'module' => 'features',
      'description' => t('Used to record a change in a project, such as an API change'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function drupalorg_change_notice_views_api() {
  return array(
    'api' => '2',
  );
}
