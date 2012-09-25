<?php
/**
 * @file
 * drupalorg_change_notice.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalorg_change_notice_user_default_permissions() {
  $permissions = array();

  // Exported permission: create changenotice content.
  $permissions['create changenotice content'] = array(
    'name' => 'create changenotice content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any changenotice content.
  $permissions['edit any changenotice content'] = array(
    'name' => 'edit any changenotice content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own changenotice content.
  $permissions['edit own changenotice content'] = array(
    'name' => 'edit own changenotice content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
