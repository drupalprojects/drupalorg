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
  $field_group->identifier = 'group_drupal|user|user|form';
  $field_group->group_name = 'group_drupal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Drupal',
    'weight' => '3',
    'children' => array(
      0 => 'field_areas_of_expertise',
      1 => 'field_contributed',
      2 => 'field_events_attended',
      3 => 'field_mentors',
      4 => 'field_drupal_contributions',
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
  $export['group_drupal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|user|user|form';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Welcome left',
    'weight' => '12',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Welcome left',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|user|user|form';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_personal';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '11',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-name',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_name|user|user|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_contributed',
      1 => 'field_mentors',
      2 => 'drupalorg_membership',
    ),
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
    'weight' => '0',
    'children' => array(
      0 => 'field_organizations',
      1 => 'field_irc_nick',
      2 => 'field_websites',
      3 => 'field_country',
      4 => 'field_social_links',
      5 => 'group_profile_personal',
      6 => 'group_profile_professional',
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
    'weight' => '1',
    'children' => array(
      0 => 'field_bio',
      1 => 'field_areas_of_expertise',
      2 => 'field_events_attended',
      3 => 'field_drupal_contributions',
      4 => 'summary',
      5 => 'versioncontrol_project_user_commits',
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
  $field_group->identifier = 'group_profile_personal|user|user|default';
  $field_group->group_name = 'group_profile_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_contact';
  $field_group->data = array(
    'label' => 'Personal Info',
    'weight' => '15',
    'children' => array(
      0 => 'field_gender',
      1 => 'field_languages',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personal Info',
      'instance_settings' => array(
        'classes' => 'group-profile-personal field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_personal|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_professional|user|user|default';
  $field_group->group_name = 'group_profile_professional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_contact';
  $field_group->data = array(
    'label' => 'Professional Info',
    'weight' => '13',
    'children' => array(
      0 => 'field_industries_worked_in',
      1 => 'drupalorg_companies_worked_for',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Professional Info',
      'instance_settings' => array(
        'classes' => 'group-profile-professional field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_professional|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|user|user|form';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Welcome right',
    'weight' => '13',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Welcome right',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|user|user|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_user_geolocation',
      1 => 'field_bio',
      2 => 'field_irc_nick',
      3 => 'field_websites',
      4 => 'field_country',
      5 => 'field_gender',
      6 => 'field_languages',
      7 => 'field_social_links',
      8 => 'picture',
      9 => 'group_name',
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
      0 => 'field_industries_worked_in',
      1 => 'field_organizations',
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
  $export['group_user_work|user|user|form'] = $field_group;

  return $export;
}
