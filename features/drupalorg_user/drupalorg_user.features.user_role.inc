<?php
/**
 * @file
 * drupalorg_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalorg_user_user_default_roles() {
  $roles = array();

  // Exported role: Shared account user.
  $roles['Shared account user'] = array(
    'name' => 'Shared account user',
    'weight' => 19,
  );

  return $roles;
}
