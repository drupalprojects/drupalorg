<?php
/**
 * @file
 * drupalorg_issues.features.inc
 */

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
  return $items;
}
