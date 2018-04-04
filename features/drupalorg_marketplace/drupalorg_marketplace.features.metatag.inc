<?php
/**
 * @file
 * drupalorg_marketplace.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drupalorg_marketplace_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:organization.
  $config['node:organization'] = array(
    'instance' => 'node:organization',
    'config' => array(
      'image_src' => array(
        'value' => '[node:field_logo]',
      ),
      'og:image' => array(
        'value' => '[node:field_logo]',
      ),
    ),
  );

  return $config;
}
