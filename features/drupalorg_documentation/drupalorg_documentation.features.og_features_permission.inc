<?php
/**
 * @file
 * drupalorg_documentation.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function drupalorg_documentation_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:guide:add user'
  $permissions['node:guide:add user'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:administer group'
  $permissions['node:guide:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer og menu'
  $permissions['node:guide:administer og menu'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:administer panelizer node guide choice'
  $permissions['node:guide:administer panelizer node guide choice'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node guide content'
  $permissions['node:guide:administer panelizer node guide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node guide context'
  $permissions['node:guide:administer panelizer node guide context'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node guide defaults'
  $permissions['node:guide:administer panelizer node guide defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node guide layout'
  $permissions['node:guide:administer panelizer node guide layout'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node guide overview'
  $permissions['node:guide:administer panelizer node guide overview'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node guide settings'
  $permissions['node:guide:administer panelizer node guide settings'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node page choice'
  $permissions['node:guide:administer panelizer node page choice'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node page content'
  $permissions['node:guide:administer panelizer node page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node page context'
  $permissions['node:guide:administer panelizer node page context'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node page defaults'
  $permissions['node:guide:administer panelizer node page defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node page layout'
  $permissions['node:guide:administer panelizer node page layout'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node page overview'
  $permissions['node:guide:administer panelizer node page overview'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node page settings'
  $permissions['node:guide:administer panelizer node page settings'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer node post defaults'
  $permissions['node:guide:administer panelizer node post defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer og_group content'
  $permissions['node:guide:administer panelizer og_group content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer og_group context'
  $permissions['node:guide:administer panelizer og_group context'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer og_group defaults'
  $permissions['node:guide:administer panelizer og_group defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer og_group layout'
  $permissions['node:guide:administer panelizer og_group layout'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer og_group overview'
  $permissions['node:guide:administer panelizer og_group overview'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:administer panelizer og_group settings'
  $permissions['node:guide:administer panelizer og_group settings'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:approve and deny subscription'
  $permissions['node:guide:approve and deny subscription'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:create documentation content'
  $permissions['node:guide:create documentation content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:guide:create guide content'
  $permissions['node:guide:create guide content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:create page content'
  $permissions['node:guide:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:create post content'
  $permissions['node:guide:create post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:delete any documentation content'
  $permissions['node:guide:delete any documentation content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:delete any guide content'
  $permissions['node:guide:delete any guide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:delete any page content'
  $permissions['node:guide:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:delete any post content'
  $permissions['node:guide:delete any post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:delete own documentation content'
  $permissions['node:guide:delete own documentation content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:delete own guide content'
  $permissions['node:guide:delete own guide content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:delete own page content'
  $permissions['node:guide:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:delete own post content'
  $permissions['node:guide:delete own post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:manage members'
  $permissions['node:guide:manage members'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:manage permissions'
  $permissions['node:guide:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:manage roles'
  $permissions['node:guide:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:subscribe'
  $permissions['node:guide:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:subscribe without approval'
  $permissions['node:guide:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:unsubscribe'
  $permissions['node:guide:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:update any documentation content'
  $permissions['node:guide:update any documentation content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:guide:update any guide content'
  $permissions['node:guide:update any guide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:update any page content'
  $permissions['node:guide:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:update any post content'
  $permissions['node:guide:update any post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:update group'
  $permissions['node:guide:update group'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:update own documentation content'
  $permissions['node:guide:update own documentation content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:update own guide content'
  $permissions['node:guide:update own guide content'] = array(
    'roles' => array(
      'maintainer' => 'maintainer',
    ),
  );

  // Exported og permission: 'node:guide:update own page content'
  $permissions['node:guide:update own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:guide:update own post content'
  $permissions['node:guide:update own post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node guide choice'
  $permissions['node:section:administer panelizer node guide choice'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node guide content'
  $permissions['node:section:administer panelizer node guide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node guide context'
  $permissions['node:section:administer panelizer node guide context'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node guide defaults'
  $permissions['node:section:administer panelizer node guide defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node guide layout'
  $permissions['node:section:administer panelizer node guide layout'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node guide overview'
  $permissions['node:section:administer panelizer node guide overview'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node guide settings'
  $permissions['node:section:administer panelizer node guide settings'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer panelizer node post defaults'
  $permissions['node:section:administer panelizer node post defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:create documentation content'
  $permissions['node:section:create documentation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:create guide content'
  $permissions['node:section:create guide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:delete any documentation content'
  $permissions['node:section:delete any documentation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:delete any guide content'
  $permissions['node:section:delete any guide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:delete own documentation content'
  $permissions['node:section:delete own documentation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:delete own guide content'
  $permissions['node:section:delete own guide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:update any documentation content'
  $permissions['node:section:update any documentation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:update any guide content'
  $permissions['node:section:update any guide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:update own documentation content'
  $permissions['node:section:update own documentation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:update own guide content'
  $permissions['node:section:update own guide content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
