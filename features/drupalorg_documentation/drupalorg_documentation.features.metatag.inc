<?php
/**
 * @file
 * drupalorg_documentation.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drupalorg_documentation_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:documentation.
  $config['node:documentation'] = array(
    'instance' => 'node:documentation',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [node:drupalorg-top-guide:title] guide on [site:name]',
      ),
      'description' => array(
        'value' => '[node:field_summary]',
      ),
    ),
  );

  // Exported Metatag config instance: node:guide.
  $config['node:guide'] = array(
    'instance' => 'node:guide',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [node:drupalorg-top-guide:title] guide on [site:name]',
      ),
      'description' => array(
        'value' => '[node:field_summary]',
      ),
    ),
  );

  return $config;
}
