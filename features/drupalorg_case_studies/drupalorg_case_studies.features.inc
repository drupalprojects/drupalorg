<?php
/**
 * @file
 * drupalorg_case_studies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_case_studies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_case_studies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drupalorg_case_studies_image_default_styles() {
  $styles = array();

  // Exported image style: case198.
  $styles['case198'] = array(
    'name' => 'case198',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 300,
          'height' => 198,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'case198',
  );

  // Exported image style: case588x306.
  $styles['case588x306'] = array(
    'name' => 'case588x306',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 588,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      4 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 588,
          'height' => 306,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'case588x306',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function drupalorg_case_studies_node_info() {
  $items = array(
    'casestudy' => array(
      'name' => t('Case study'),
      'base' => 'node_content',
      'description' => t('Case studies used to feature well-built and well-designed Drupal sites.'),
      'has_title' => '1',
      'title_label' => t('Project name'),
      'help' => t('Refer to the <a href="/case-studies/guidelines">Case study guidelines</a> for info on how to write a case study, <a href="/style-guide">Drupal.org Style Guide</a> for formatting and editorial tips. <br />Field-by-field guidance is provided above or below each section of this form.
<br /><br />
<strong>Project name field</strong>: Use only the title of the site/project you are writing about. Do not use your company name or words "case study," "success story," and the like. Maximum length - 40 characters.'),
    ),
  );
  return $items;
}
