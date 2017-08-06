<?php
/**
 * @file
 * drupalorg_security_advisories.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_security_advisories_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupalorg_security_advisories_node_info() {
  $items = array(
    'sa' => array(
      'name' => t('Security advisory'),
      'base' => 'node_content',
      'description' => t('Managed by the Drupal Security Team. Announcements of new security releases and public service announcements.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
