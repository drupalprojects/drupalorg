<?php
/**
 * @file
 * drupalorg_supporters.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupalorg_supporters_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drupalorg_supporters_image_default_styles() {
  $styles = array();

  // Exported image style: supporters-large.
  $styles['supporters-large'] = array(
    'label' => 'supporters-large',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 275,
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: supporters-small.
  $styles['supporters-small'] = array(
    'label' => 'supporters-small',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 140,
          'height' => 80,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
