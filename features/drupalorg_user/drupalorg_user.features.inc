<?php
/**
 * @file
 * drupalorg_user.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function drupalorg_user_image_default_styles() {
  $styles = array();

  // Exported image style: drupalorg_user_picture.
  $styles['drupalorg_user_picture'] = array(
    'name' => 'drupalorg_user_picture',
    'label' => 'Drupal.org user picture',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '80',
          'height' => '80',
          'upscale' => 0,
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
