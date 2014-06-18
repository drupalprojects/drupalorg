<?php
/**
 * @file
 * drupalorg_packaging_whitelist.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalorg_packaging_whitelist_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create packaging_whitelist content'.
  $permissions['create packaging_whitelist content'] = array(
    'name' => 'create packaging_whitelist content',
    'roles' => array(
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any packaging_whitelist content'.
  $permissions['delete any packaging_whitelist content'] = array(
    'name' => 'delete any packaging_whitelist content',
    'roles' => array(
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any packaging_whitelist content'.
  $permissions['edit any packaging_whitelist content'] = array(
    'name' => 'edit any packaging_whitelist content',
    'roles' => array(
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
