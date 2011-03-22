<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function drupalorg_marketplace_imagecache_default_presets() {
  $items = array(
    'grid-3' => array(
      'presetname' => 'grid-3',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '220',
            'height' => '220',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

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
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('<p>Drupal Association membership is encouraged, the person who holds the membership should be filling out this form.</p>

<p>People with a "current company or organization" matching this name will be shown on your page.</p>'),
    ),
  );
  return $items;
}
