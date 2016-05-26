<?php
/**
 * @file
 * drupalorg_documentation.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function drupalorg_documentation_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:guide:maintainer'.
  $roles['node:guide:maintainer'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'guide',
    'name' => 'maintainer',
  );

  return $roles;
}
