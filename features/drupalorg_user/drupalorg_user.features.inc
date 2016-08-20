<?php
/**
 * @file
 * drupalorg_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_user_ctools_plugin_api($module = NULL, $api = NULL) {
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
function drupalorg_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drupalorg_user_image_default_styles() {
  $styles = array();

  // Exported image style: drupalorg_user_picture.
  $styles['drupalorg_user_picture'] = array(
    'label' => 'Drupal.org user picture',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: drupalorg_user_picture_large.
  $styles['drupalorg_user_picture_large'] = array(
    'label' => 'Drupal.org large user picture (120x120)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
