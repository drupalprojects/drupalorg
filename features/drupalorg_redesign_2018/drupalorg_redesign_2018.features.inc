<?php
/**
 * @file
 * drupalorg_redesign_2018.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_redesign_2018_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_redesign_2018_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drupalorg_redesign_2018_image_default_styles() {
  $styles = array();

  // Exported image style: case_studies_frontpage.
  $styles['case_studies_frontpage'] = array(
    'label' => 'Case studies - frontpage (600x410)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 410,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function drupalorg_redesign_2018_node_info() {
  $items = array(
    'logo' => array(
      'name' => t('Logo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
