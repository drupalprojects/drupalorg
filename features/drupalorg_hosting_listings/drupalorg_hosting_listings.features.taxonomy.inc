<?php
/**
 * @file
 * drupalorg_hosting_listings.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalorg_hosting_listings_taxonomy_default_vocabularies() {
  return array(
    'hosting_features' => array(
      'name' => 'Hosting features',
      'machine_name' => 'hosting_features',
      'description' => 'Used for hosting listings',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
