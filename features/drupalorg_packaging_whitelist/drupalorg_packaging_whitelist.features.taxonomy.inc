<?php
/**
 * @file
 * drupalorg_packaging_whitelist.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalorg_packaging_whitelist_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_58' => array(
      'name' => 'License',
      'machine_name' => 'vocabulary_58',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'features_license',
      'weight' => 0,
    ),
  );
}
