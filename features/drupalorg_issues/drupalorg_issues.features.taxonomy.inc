<?php
/**
 * @file
 * drupalorg_issues.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalorg_issues_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_9' => array(
      'name' => 'Issue tags',
      'machine_name' => 'vocabulary_9',
      'description' => 'Special tags to indicate the type of issue this is.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 7,
    ),
  );
}
