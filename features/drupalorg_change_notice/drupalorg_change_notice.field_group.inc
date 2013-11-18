<?php
/**
 * @file
 * drupalorg_change_notice.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalorg_change_notice_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recorded|node|changenotice|default';
  $field_group->group_name = 'group_recorded';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'changenotice';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Updates Done (doc team, etc.)',
    'weight' => '7',
    'children' => array(
      0 => 'field_coder_recorded',
      1 => 'field_coder_update_recorded',
      2 => 'field_examples_recorded',
      3 => 'field_module_recorded',
      4 => 'field_online_recorded',
      5 => 'field_other_details',
      6 => 'field_other_recorded',
      7 => 'field_theme_recorded',
      8 => 'field_update_progress',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Updates Done (doc team, etc.)',
      'instance_settings' => array(
        'classes' => ' group-recorded field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_recorded|node|changenotice|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recorded|node|changenotice|form';
  $field_group->group_name = 'group_recorded';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'changenotice';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Updates Done (doc team, etc.)',
    'weight' => '7',
    'children' => array(
      0 => 'field_coder_recorded',
      1 => 'field_coder_update_recorded',
      2 => 'field_examples_recorded',
      3 => 'field_module_recorded',
      4 => 'field_online_recorded',
      5 => 'field_other_details',
      6 => 'field_other_recorded',
      7 => 'field_theme_recorded',
      8 => 'field_update_progress',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-recorded field-group-fieldset',
      ),
    ),
  );
  $export['group_recorded|node|changenotice|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recorded|node|changenotice|teaser';
  $field_group->group_name = 'group_recorded';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'changenotice';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Updates Done (doc team, etc.)',
    'weight' => '7',
    'children' => array(
      0 => 'field_coder_recorded',
      1 => 'field_coder_update_recorded',
      2 => 'field_examples_recorded',
      3 => 'field_module_recorded',
      4 => 'field_online_recorded',
      5 => 'field_other_details',
      6 => 'field_other_recorded',
      7 => 'field_theme_recorded',
      8 => 'field_update_progress',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-recorded field-group-hidden',
      ),
    ),
  );
  $export['group_recorded|node|changenotice|teaser'] = $field_group;

  return $export;
}
