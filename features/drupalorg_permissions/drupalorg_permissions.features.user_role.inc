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

  // Exported role: content moderator.
  $roles['content moderator'] = array(
    'name' => 'content moderator',
    'weight' => 6,
  );

  // Exported role: drupal.org issue queue squad.
  $roles['drupal.org issue queue squad'] = array(
    'name' => 'drupal.org issue queue squad',
    'weight' => 8,
  );

  // Exported role: email unverified.
  $roles['email unverified'] = array(
    'name' => 'email unverified',
    'weight' => 2,
  );

  // Exported role: list maintainer.
  $roles['list maintainer'] = array(
    'name' => 'list maintainer',
    'weight' => 13,
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

  // Exported role: trusted.
  $roles['trusted'] = array(
    'name' => 'trusted',
    'weight' => 4,
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
