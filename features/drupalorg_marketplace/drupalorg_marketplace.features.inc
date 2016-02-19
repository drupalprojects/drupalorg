<?php
/**
 * @file
 * drupalorg_marketplace.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_marketplace_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_marketplace_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalorg_marketplace_node_info() {
  $items = array(
    'organization' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => t('Listings for the marketplace section of the site.'),
      'has_title' => '1',
      'title_label' => t('Organization name'),
      'help' => t('Review <a href="/marketplace/guidelines">Marketplace guidelines</a> first.
<br />People with your organization name in the user profile field "current company or organization" will be shown on your organization page.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
