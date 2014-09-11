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
    'weight' => 0,
  );

  // Exported role: Full HTML user.
  $roles['Full HTML user'] = array(
    'name' => 'Full HTML user',
    'weight' => 0,
  );

  // Exported role: Git administrator.
  $roles['Git administrator'] = array(
    'name' => 'Git administrator',
    'weight' => 0,
  );

  // Exported role: Git user.
  $roles['Git user'] = array(
    'name' => 'Git user',
    'weight' => 0,
  );

  // Exported role: Git vetted user.
  $roles['Git vetted user'] = array(
    'name' => 'Git vetted user',
    'weight' => 0,
  );

  // Exported role: Not a spammer.
  $roles['Not a spammer'] = array(
    'name' => 'Not a spammer',
    'weight' => 0,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 0,
  );

  // Exported role: content moderator.
  $roles['content moderator'] = array(
    'name' => 'content moderator',
    'weight' => 0,
  );

  // Exported role: drupal.org issue queue squad.
  $roles['drupal.org issue queue squad'] = array(
    'name' => 'drupal.org issue queue squad',
    'weight' => 0,
  );

  // Exported role: list maintainer.
  $roles['list maintainer'] = array(
    'name' => 'list maintainer',
    'weight' => 0,
  );

  // Exported role: security team.
  $roles['security team'] = array(
    'name' => 'security team',
    'weight' => 0,
  );

  // Exported role: spam fighter.
  $roles['spam fighter'] = array(
    'name' => 'spam fighter',
    'weight' => 0,
  );

  // Exported role: testing administrator.
  $roles['testing administrator'] = array(
    'name' => 'testing administrator',
    'weight' => 0,
  );

  // Exported role: user administrator.
  $roles['user administrator'] = array(
    'name' => 'user administrator',
    'weight' => 0,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 0,
  );

  return $roles;
}
