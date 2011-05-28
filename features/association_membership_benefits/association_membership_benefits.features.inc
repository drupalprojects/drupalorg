<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function association_membership_benefits_imagecache_default_presets() {
  $items = array(
    'grid-2' => array(
      'presetname' => 'grid-2',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '140',
            'height' => '100%',
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
function association_membership_benefits_node_info() {
  $items = array(
    'association_membership_benefit' => array(
      'name' => t('Membership benefit'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company name'),
      'has_body' => '1',
      'body_label' => t('Blurb'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function association_membership_benefits_views_api() {
  return array(
    'api' => '2',
  );
}
