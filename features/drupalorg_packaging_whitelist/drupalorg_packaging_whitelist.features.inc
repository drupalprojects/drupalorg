<?php

/**
 * Implementation of hook_node_info().
 */
function drupalorg_packaging_whitelist_node_info() {
  $items = array(
    'packaging_whitelist' => array(
      'name' => t('Packaging Whitelist Entry'),
      'module' => 'features',
      'description' => t('Define white-listed URLs for external code that can be packaged in install profiles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Allowed URLs'),
      'min_word_count' => '0',
      'help' => t('The title should be a human readable identifier for the entry and the body a newline separated list of URLs supporting wildcards.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function drupalorg_packaging_whitelist_views_api() {
  return array(
    'api' => '2',
  );
}
