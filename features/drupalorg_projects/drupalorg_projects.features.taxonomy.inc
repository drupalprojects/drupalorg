<?php
/**
 * @file
 * drupalorg_projects.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalorg_projects_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_3' => array(
      'name' => 'Module categories',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'project',
      'weight' => -3,
    ),
    'vocabulary_44' => array(
      'name' => 'Maintenance status',
      'machine_name' => 'vocabulary_44',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -5,
    ),
    'vocabulary_46' => array(
      'name' => 'Development status',
      'machine_name' => 'vocabulary_46',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
    ),
    'vocabulary_6' => array(
      'name' => 'Core compatibility',
      'machine_name' => 'vocabulary_6',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'project_release',
      'weight' => -7,
    ),
    'vocabulary_7' => array(
      'name' => 'Release type',
      'machine_name' => 'vocabulary_7',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
    ),
  );
}
