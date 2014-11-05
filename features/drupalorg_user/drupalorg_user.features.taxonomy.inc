<?php
/**
 * @file
 * drupalorg_user.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalorg_user_taxonomy_default_vocabularies() {
  return array(
    'areas_of_expertise' => array(
      'name' => 'Areas of Expertise',
      'machine_name' => 'areas_of_expertise',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'interests' => array(
      'name' => 'Interests',
      'machine_name' => 'interests',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
