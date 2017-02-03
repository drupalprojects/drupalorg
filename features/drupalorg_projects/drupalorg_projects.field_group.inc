<?php
/**
 * @file
 * drupalorg_projects.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalorg_projects_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_documentation|node|project_distribution|form';
  $field_group->group_name = 'group_project_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_distribution';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project documentation',
    'weight' => '45',
    'children' => array(
      0 => 'field_project_docs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project documentation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_project_documentation|node|project_distribution|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_documentation|node|project_drupalorg|form';
  $field_group->group_name = 'group_project_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_drupalorg';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project documentation',
    'weight' => '10',
    'children' => array(
      0 => 'field_project_docs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_project_documentation|node|project_drupalorg|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_documentation|node|project_module|form';
  $field_group->group_name = 'group_project_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_module';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project documentation',
    'weight' => '10',
    'children' => array(
      0 => 'field_project_docs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project documentation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_project_documentation|node|project_module|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_documentation|node|project_theme_engine|form';
  $field_group->group_name = 'group_project_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_theme_engine';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project documentation',
    'weight' => '10',
    'children' => array(
      0 => 'field_project_docs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project documentation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_project_documentation|node|project_theme_engine|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_documentation|node|project_theme|form';
  $field_group->group_name = 'group_project_documentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_theme';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project documentation',
    'weight' => '10',
    'children' => array(
      0 => 'field_project_docs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project documentation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_project_documentation|node|project_theme|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Project documentation');

  return $field_groups;
}
