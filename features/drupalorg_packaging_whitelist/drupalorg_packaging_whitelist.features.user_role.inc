<?php
/**
 * @file
 * drupalorg_packaging_whitelist.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalorg_packaging_whitelist_user_default_roles() {
  $roles = array();

  // Exported role: Packaging whitelist maintainer.
  $roles['Packaging whitelist maintainer'] = array(
    'name' => 'Packaging whitelist maintainer',
    'weight' => 0,
  );

  return $roles;
}
