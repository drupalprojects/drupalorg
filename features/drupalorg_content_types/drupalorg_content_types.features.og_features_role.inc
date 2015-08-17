<?php
/**
 * @file
 * drupalorg_content_types.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function drupalorg_content_types_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:section:editor'.
  $roles['node:section:editor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'section',
    'name' => 'editor',
  );

  // Exported OG Role: 'node:section:maintainer'.
  $roles['node:section:maintainer'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'section',
    'name' => 'maintainer',
  );

  return $roles;
}
