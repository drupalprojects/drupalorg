<?php
/**
 * @file
 * drupalorg_case_studies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalorg_case_studies_field_group_info() {
  $export = array();

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
    'weight' => '3',
    'children' => array(
      0 => 'field_module',
      1 => 'field_module_selection',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_modules|node|casestudy|default'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_module',
      1 => 'field_module_selection',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_modules|node|casestudy|form'] = $field_group;

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
      0 => 'field_module',
      1 => 'field_module_selection',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_modules|node|casestudy|teaser'] = $field_group;

  return $export;
}
