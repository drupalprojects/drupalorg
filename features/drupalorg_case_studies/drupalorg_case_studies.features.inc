<?php

/**
 * Implementation of hook_node_info().
 */
function drupalorg_case_studies_node_info() {
  $items = array(
    'casestudy' => array(
      'name' => t('Case study'),
      'module' => 'features',
      'description' => t('The Case studies will be used to feature well-built and well-designed Drupal sites.'),
      'has_title' => '1',
      'title_label' => t('Project name'),
      'has_body' => '1',
      'body_label' => t('Brief overview'),
      'min_word_count' => '0',
      'help' => t('Refer to the <a href="http://drupal.org/style-guide">Drupal.org Style Guide</a> for formatting and editorial tips.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function drupalorg_case_studies_views_api() {
  return array(
    'api' => '2',
  );
}
