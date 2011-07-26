<?php

/**
 * Implementation of hook_node_info().
 */
function drupalorg_marketplace_node_info() {
  $items = array(
    'organization' => array(
      'name' => t('Organization'),
      'module' => 'features',
      'description' => t('Listings for the marketplace section of the site.'),
      'has_title' => '1',
      'title_label' => t('Organization name'),
      'has_body' => '1',
      'body_label' => t('Organization description'),
      'min_word_count' => '0',
      'help' => t('Review the <a href="http://drupal.org/node/1108710">organization listings policy</a> first.
<br />Request improvements to vocabularies by <a href="http://drupal.org/project/webmasters">filing an issue</a>.
<br />People with your organization name in the user profile field "current company or organization" will be shown on your organization page.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function drupalorg_marketplace_views_api() {
  return array(
    'api' => '2',
  );
}
