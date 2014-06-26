<?php
/**
 * @file
 * drupalorg_supporters.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalorg_supporters_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-organization-field_organization_support'
  $field_instances['node-organization-field_organization_support'] = array(
    'bundle' => 'organization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'issuemetadata' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'nodechanges' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organization_support',
    'label' => 'Drupal Association supporting program',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 29,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Drupal Association supporting program');

  return $field_instances;
}
