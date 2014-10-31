<?php
/**
 * @file
 * drupalorg_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalorg_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_org_inline|field_collection_item|field_organizations|form';
  $field_group->group_name = 'group_org_inline';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_organizations';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '37',
    'children' => array(
      0 => 'field_current',
      1 => 'field_job_title',
      2 => 'field_organization_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'container-inline',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_org_inline|field_collection_item|field_organizations|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_aside|user|user|default';
  $field_group->group_name = 'group_profile_aside';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Aside',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Aside',
      'instance_settings' => array(
        'classes' => 'aside',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_aside|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_contact|user|user|default';
  $field_group->group_name = 'group_profile_contact';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '2',
    'children' => array(
      0 => 'field_industries_worked_in',
      1 => 'field_organizations',
      2 => 'field_irc_nick',
      3 => 'field_websites',
      4 => 'field_country',
      5 => 'field_gender',
      6 => 'field_github_profile',
      7 => 'drupalorg_companies_worked_for',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'contact',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_contact|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_main|user|user|default';
  $field_group->group_name = 'group_profile_main';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'field_bio',
      1 => 'summary',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main',
      'instance_settings' => array(
        'classes' => 'main',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_main|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_personal|user|user|form';
  $field_group->group_name = 'group_user_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal information',
    'weight' => '3',
    'children' => array(
      0 => 'field_bio',
      1 => 'field_irc_nick',
      2 => 'field_country',
      3 => 'field_gender',
      4 => 'field_github_profile',
      5 => 'field_websites',
      6 => 'field_interests',
      7 => 'field_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-user-personal field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_personal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_work|user|user|form';
  $field_group->group_name = 'group_user_work';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Work',
    'weight' => '4',
    'children' => array(
      0 => 'field_current_company_org',
      1 => 'field_industries_worked_in',
      2 => 'field_organizations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-user-work field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_work|user|user|form'] = $field_group;

  return $export;
}
