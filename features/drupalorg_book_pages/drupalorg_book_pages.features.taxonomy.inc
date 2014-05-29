<?php
/**
 * @file
 * drupalorg_book_pages.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalorg_book_pages_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_31' => array(
      'name' => 'Page status',
      'machine_name' => 'vocabulary_31',
      'description' => 'A designation indicating the status of a handbook page.',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '3',
    ),
  );
}
