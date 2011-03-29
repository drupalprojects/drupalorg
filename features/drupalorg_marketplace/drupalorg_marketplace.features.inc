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
      'title_label' => t('Organization name'),
      'has_body' => '1',
      'body_label' => t('Organization description'),
      'min_word_count' => '0',
      'help' => t('<p>Review <a href="http://drupal.org/node/1108710">the policy</a> for organization listings.</p>

<p>People with a "current company or organization" matching this name will be shown on your page.</p>'),
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
