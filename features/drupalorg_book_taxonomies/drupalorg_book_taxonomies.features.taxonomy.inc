<?php
/**
 * @file
 * drupalorg_book_taxonomies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalorg_book_taxonomies_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_38' => array(
      'name' => 'Audience',
      'machine_name' => 'vocabulary_38',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'vocabulary_5' => array(
      'name' => 'Drupal version',
      'machine_name' => 'vocabulary_5',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
    ),
    'vocabulary_54' => array(
      'name' => 'Keywords',
      'machine_name' => 'vocabulary_54',
      'description' => 'Keywords describing the content of the page.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'vocabulary_56' => array(
      'name' => 'Level',
      'machine_name' => 'vocabulary_56',
      'description' => 'The skill level for the page.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'vocabulary_60' => array(
      'name' => 'Book availability',
      'machine_name' => 'vocabulary_60',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'features_book_listing_status',
      'weight' => '0',
    ),
    'vocabulary_62' => array(
      'name' => 'Book format',
      'machine_name' => 'vocabulary_62',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'features_book_format',
      'weight' => '0',
    ),
  );
}
