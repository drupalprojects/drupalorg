<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function drupalorg_case_studies_imagecache_default_presets() {
  $items = array(
    'case198' => array(
      'presetname' => 'case198',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '300',
            'height' => '198',
            'xoffset' => 'left',
            'yoffset' => 'top',
          ),
        ),
      ),
    ),
    'case588x306' => array(
      'presetname' => 'case588x306',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '588',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '588',
            'height' => '306',
            'xoffset' => 'left',
            'yoffset' => 'top',
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
function drupalorg_case_studies_node_info() {
  $items = array(
    'casestudy' => array(
      'name' => t('Case study'),
      'module' => 'features',
      'description' => t('The Case studies will be used to feature well-built and well-designed Drupal sites.'),
      'has_title' => '1',
      'title_label' => t('Project name'),
      'has_body' => '1',
      'body_label' => t('Brief overview'),
      'min_word_count' => '0',
      'help' => t('Refer to the <a href="/case-studies/guidelines">Case study guidelines</a> for info on how to write a case study, <a href="/style-guide">Drupal.org Style Guide</a> for formatting and editorial tips. <br />Field-by-field guidance is provided above or below each section of this form.
<br /><br />
<strong>Project name field</strong>: Use only the title of the site/project you are writing about. Do not use your company name or words "case study," "success story," and the like. Maximum length - 40 characters.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function drupalorg_case_studies_views_api() {
  return array(
    'api' => '2',
  );
}
