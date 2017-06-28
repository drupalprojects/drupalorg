<?php
/**
 * @file
 * drupalorg_case_studies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalorg_case_studies_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modules|node|casestudy|default';
  $field_group->group_name = 'group_modules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'casestudy';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modules/Themes/Distributions',
    'weight' => '5',
    'children' => array(
      0 => 'field_module_selection',
      1 => 'taxonomy_vocabulary_5',
      2 => 'field_projects',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Modules/Themes/Distributions',
      'instance_settings' => array(
        'classes' => ' group-modules field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_modules|node|casestudy|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modules|node|casestudy|form';
  $field_group->group_name = 'group_modules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'casestudy';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modules/Themes/Distributions',
    'weight' => '8',
    'children' => array(
      0 => 'field_module_selection',
      1 => 'taxonomy_vocabulary_5',
      2 => 'field_projects',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Modules/Themes/Distributions',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-modules field-group-fieldset',
        'description' => 'Use the autocomplete widget to select significant contributed projects used, and expand on their use in the text area that follows. The reader will benefit from a greater understanding of what other developers and themers selected and why. This also rewards those who contribute to modules, themes and distributions. 
<br /><br />
Specify at least 4 key contributed projects.
<br /><br />',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_modules|node|casestudy|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modules|node|casestudy|teaser';
  $field_group->group_name = 'group_modules';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'casestudy';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modules/Themes/Distributions',
    'weight' => '3',
    'children' => array(
      0 => 'field_module_selection',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-modules field-group-hidden',
      ),
    ),
  );
  $field_groups['group_modules|node|casestudy|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Modules/Themes/Distributions');

  return $field_groups;
}
