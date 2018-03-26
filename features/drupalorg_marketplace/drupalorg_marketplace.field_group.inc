<?php
/**
 * @file
 * drupalorg_marketplace.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalorg_marketplace_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hosting|node|organization|default';
  $field_group->group_name = 'group_hosting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hosting',
    'weight' => '21',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-hosting field-group-hidden',
      ),
    ),
  );
  $field_groups['group_hosting|node|organization|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hosting|node|organization|form';
  $field_group->group_name = 'group_hosting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hosting',
    'weight' => '14',
    'children' => array(
      0 => 'field_hosting_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-hosting field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_hosting|node|organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hosting|node|organization|teaser';
  $field_group->group_name = 'group_hosting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hosting',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-hosting field-group-hidden',
      ),
    ),
  );
  $field_groups['group_hosting|node|organization|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moderation|node|organization|default';
  $field_group->group_name = 'group_moderation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation',
    'weight' => '20',
    'children' => array(
      0 => 'field_organization_list_rule',
      1 => 'field_organization_training_list',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-moderation field-group-hidden',
      ),
    ),
  );
  $field_groups['group_moderation|node|organization|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moderation|node|organization|form';
  $field_group->group_name = 'group_moderation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation',
    'weight' => '15',
    'children' => array(
      0 => 'field_organization_list_rule',
      1 => 'field_organization_training_list',
      2 => 'field_organization_technologies',
      3 => 'field_organization_support',
      4 => 'field_short_description',
      5 => 'field_org_services_issue',
      6 => 'field_org_train_issue',
      7 => '_add_existing_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-moderation field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_moderation|node|organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moderation|node|organization|teaser';
  $field_group->group_name = 'group_moderation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderation',
    'weight' => '21',
    'children' => array(
      0 => 'field_organization_list_rule',
      1 => 'field_organization_training_list',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-moderation field-group-hidden',
      ),
    ),
  );
  $field_groups['group_moderation|node|organization|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training|node|organization|default';
  $field_group->group_name = 'group_training';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Training',
    'weight' => '11',
    'children' => array(
      0 => 'field_organization_training_desc',
      1 => 'field_organization_training_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-training field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_training|node|organization|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training|node|organization|form';
  $field_group->group_name = 'group_training';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Training',
    'weight' => '13',
    'children' => array(
      0 => 'field_org_training_request',
      1 => 'field_organization_training_desc',
      2 => 'field_organization_training_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-training field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_training|node|organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training|node|organization|teaser';
  $field_group->group_name = 'group_training';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Training',
    'weight' => '19',
    'children' => array(
      0 => 'field_org_training_request',
      1 => 'field_organization_training_desc',
      2 => 'field_organization_training_url',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-training field-group-hidden',
      ),
    ),
  );
  $field_groups['group_training|node|organization|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hosting');
  t('Moderation');
  t('Training');

  return $field_groups;
}
