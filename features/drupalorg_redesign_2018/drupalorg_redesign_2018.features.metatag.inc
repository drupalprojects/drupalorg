<?php
/**
 * @file
 * drupalorg_redesign_2018.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drupalorg_redesign_2018_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:logo.
  $config['node:logo'] = array(
    'instance' => 'node:logo',
    'config' => array(
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'noimageindex' => 'noimageindex',
          'index' => 0,
          'follow' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'notranslate' => 0,
        ),
      ),
    ),
  );

  return $config;
}
