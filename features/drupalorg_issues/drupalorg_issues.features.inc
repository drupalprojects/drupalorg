<?php
/**
 * @file
 * drupalorg_issues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_issues_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_issues_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalorg_issues_node_info() {
  $items = array(
    'project_issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => t('An issue that can be tracked, such as a bug report, feature request, or task.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Learn <a href="/node/73179">how to report an issue</a>. Use the <a href="/node/1155816">issue summary template</a> to summarize the issue in the Description field below. Others can also change the summary. Editing the summary does not subscribe you to the issue or notify subscribers, so add a comment describing your changes after any significant edit.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
