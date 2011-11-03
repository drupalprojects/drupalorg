<?php

/**
 * Implementation of hook_content_default_fields().
 */
function association_projects_content_default_fields() {
  $fields = array();

  // Exported field: field_assoc_mission
  $fields['project-field_assoc_mission'] = array(
    'field_name' => 'field_assoc_mission',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'mission_1|Maintaining Hardware/Software
mission_2|Empowering the Drupal Community
mission_3|Protecting GPL Source Code
mission_4|Protecting Drupal & Community
mission_5|Organizing/Promoting Events
mission_6|Communicating Benefits of Drupal
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mission Statement',
      'weight' => '5',
      'description' => 'Mission Statement:
The Drupal Association fosters and supports the Drupal software project, the community and its growth.

The Drupal Association does this by:
<ol><li>Maintaining the hardware and software infrastructure of Drupal.org and other community sites.</li>
<li>Empowering the Drupal community to participate in and contribute to the project.</li>
<li>Protecting the GPL source code of the Drupal project and its community contributions.</li>
<li>Protecting the Drupal project and community through legal work and advocacy.</li>
<li>Organizing and promoting worldwide events.</li>
<li>Communicating the benefits of the Drupal software.</li>',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_assoc_project_image
  $fields['project-field_assoc_project_image'] = array(
    'field_name' => 'field_assoc_project_image',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'grid-4_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'grid-8_default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-4',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Mission Statement');

  return $fields;
}
