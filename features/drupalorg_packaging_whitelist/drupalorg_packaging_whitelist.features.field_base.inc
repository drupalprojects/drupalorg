<?php
/**
 * @file
 * drupalorg_packaging_whitelist.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalorg_packaging_whitelist_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'taxonomy_vocabulary_58'.
  $field_bases['taxonomy_vocabulary_58'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxonomy_vocabulary_58',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_58',
          'parent' => 0,
        ),
      ),
      'required' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
