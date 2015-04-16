<?php
/**
 * @file
 * drupalorg_supporters.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalorg_supporters_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_organization_support'
  $field_bases['field_organization_support'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_support',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'supporting_premium' => 'Premium Supporting Partner',
        'supporting' => 'Supporting Partner',
        'technology_premium' => 'Premium Technology Supporter',
        'technology' => 'Technology Supporter',
        'hosting_premium' => 'Premium Hosting Supporter',
        'hosting' => 'Hosting Supporter',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_short_description'
  $field_bases['field_short_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_short_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 45,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
