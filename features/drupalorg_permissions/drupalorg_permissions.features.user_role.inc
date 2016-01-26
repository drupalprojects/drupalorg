<?php
/**
 * @file
 * drupalorg_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalorg_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Documentation moderator.
  $roles['Documentation moderator'] = array(
    'name' => 'Documentation moderator',
    'weight' => 7,
  );

  // Exported role: Full HTML user.
  $roles['Full HTML user'] = array(
    'name' => 'Full HTML user',
    'weight' => 9,
  );

  // Exported role: Git administrator.
  $roles['Git administrator'] = array(
    'name' => 'Git administrator',
    'weight' => 10,
  );

  // Exported role: Git user.
  $roles['Git user'] = array(
    'name' => 'Git user',
    'weight' => 11,
  );

  // Exported role: Git vetted user.
  $roles['Git vetted user'] = array(
    'name' => 'Git vetted user',
    'weight' => 12,
  );

  // Exported role: Packaging whitelist maintainer.
  $roles['Packaging whitelist maintainer'] = array(
    'name' => 'Packaging whitelist maintainer',
    'weight' => 14,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 0,
  );

  // Exported role: community.
  $roles['community'] = array(
    'name' => 'community',
    'weight' => 5,
  );

  // Exported role: confirmed.
  $roles['confirmed'] = array(
    'name' => 'confirmed',
    'weight' => 4,
  );

  // Exported role: content moderator.
  $roles['content moderator'] = array(
    'name' => 'content moderator',
    'weight' => 6,
  );

  // Exported role: email unverified.
  $roles['email unverified'] = array(
    'name' => 'email unverified',
    'weight' => 2,
  );

  // Exported role: security team.
  $roles['security team'] = array(
    'name' => 'security team',
    'weight' => 15,
  );

  // Exported role: testing administrator.
  $roles['testing administrator'] = array(
    'name' => 'testing administrator',
    'weight' => 16,
  );

  // Exported role: user administrator.
  $roles['user administrator'] = array(
    'name' => 'user administrator',
    'weight' => 17,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 18,
  );

  return $roles;
}
