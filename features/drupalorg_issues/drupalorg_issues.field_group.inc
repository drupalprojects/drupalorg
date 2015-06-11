<?php
/**
 * @file
 * drupalorg_issues.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalorg_issues_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_attribution|comment|comment_node_project_issue|form';
  $field_group->group_name = 'group_issue_attribution';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_project_issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attribute this contribution',
    'weight' => '1',
    'children' => array(
      0 => 'field_attribute_contribution_to',
      1 => 'field_for_customer',
      2 => 'field_attribute_as_volunteer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attribute this contribution',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-issue-attribution field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_issue_attribution|comment|comment_node_project_issue|form'] = $field_group;

  return $export;
}
