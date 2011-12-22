<?php

/**
 * Implementation of hook_node_info().
 */
function drupalorg_packaging_whitelist_node_info() {
  $items = array(
    'packaging_whitelist' => array(
      'name' => t('Packaging whitelist entry'),
      'module' => 'features',
      'description' => t('Define white-listed URLs for external code that can be packaged in install profiles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Allowed URL filters'),
      'min_word_count' => '0',
      'help' => t('<em>Title</em> is a human readable identifier for the whitelist entry. <em>Allowed URL filters</em> is a newline separated list of Perl-compatible regular expressions; all URLs which match these regular expressions are permitted by the packaging script, eg. <em>^http://www\.example\.com/downloads/.+$</em>'),
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
