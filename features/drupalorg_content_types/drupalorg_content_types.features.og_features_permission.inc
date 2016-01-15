<?php
/**
 * @file
 * drupalorg_content_types.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function drupalorg_content_types_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:section:add user'
  $permissions['node:section:add user'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:administer group'
  $permissions['node:section:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer og menu'
  $permissions['node:section:administer og menu'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:administer panelizer node page choice'
  $permissions['node:section:administer panelizer node page choice'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node page content'
  $permissions['node:section:administer panelizer node page content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:administer panelizer node page context'
  $permissions['node:section:administer panelizer node page context'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node page defaults'
  $permissions['node:section:administer panelizer node page defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node page layout'
  $permissions['node:section:administer panelizer node page layout'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node page overview'
  $permissions['node:section:administer panelizer node page overview'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node page settings'
  $permissions['node:section:administer panelizer node page settings'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer og_group content'
  $permissions['node:section:administer panelizer og_group content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:administer panelizer og_group context'
  $permissions['node:section:administer panelizer og_group context'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer og_group defaults'
  $permissions['node:section:administer panelizer og_group defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer og_group layout'
  $permissions['node:section:administer panelizer og_group layout'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer og_group overview'
  $permissions['node:section:administer panelizer og_group overview'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer og_group settings'
  $permissions['node:section:administer panelizer og_group settings'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:approve and deny subscription'
  $permissions['node:section:approve and deny subscription'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:create page content'
  $permissions['node:section:create page content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:create post content'
  $permissions['node:section:create post content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:delete any page content'
  $permissions['node:section:delete any page content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:delete any post content'
  $permissions['node:section:delete any post content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:delete own page content'
  $permissions['node:section:delete own page content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:delete own post content'
  $permissions['node:section:delete own post content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:manage members'
  $permissions['node:section:manage members'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:manage permissions'
  $permissions['node:section:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:manage roles'
  $permissions['node:section:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:subscribe'
  $permissions['node:section:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:section:subscribe without approval'
  $permissions['node:section:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:unsubscribe'
  $permissions['node:section:unsubscribe'] = array(
    'roles' => array(
      'editor' => 'editor',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update any page content'
  $permissions['node:section:update any page content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:update any post content'
  $permissions['node:section:update any post content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:update group'
  $permissions['node:section:update group'] = array(
    'roles' => array(
      'editor' => 'editor',
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:update own page content'
  $permissions['node:section:update own page content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:section:update own post content'
  $permissions['node:section:update own post content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'maintainer' => 'maintainer',
    ),
  );

  return $permissions;
}
