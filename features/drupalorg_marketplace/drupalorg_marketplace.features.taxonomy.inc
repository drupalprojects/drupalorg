<?php
/**
 * @file
 * drupalorg_marketplace.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalorg_marketplace_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_48' => array(
      'name' => 'Services',
      'machine_name' => 'vocabulary_48',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -2,
    ),
    'vocabulary_50' => array(
      'name' => 'Sectors',
      'machine_name' => 'vocabulary_50',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -1,
    ),
    'vocabulary_52' => array(
      'name' => 'Locations',
      'machine_name' => 'vocabulary_52',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
