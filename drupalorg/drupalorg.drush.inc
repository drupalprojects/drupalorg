<?php

/**
 * Implementation of hook_drush_help().
 */
function drupalorg_drush_help($section) {
  switch ($section) {
    case 'drupalorg:rebuild-stats':
      return dt('Update home page stats.');
  }
}

/**
 * Implementation of hook_drush_command();
 */
function drupalorg_drush_command() {
  return array(
    'rebuild-stats' => array(
      'description' => 'Update home page stats.',
    ),
  );
}

function drush_drupalorg_rebuild_stats() {
  drupalorg_get_activity(TRUE);
}

/**
 * Implements drush_hook_post_COMMAND().
 */
function drush_drupalorg_post_association_members() {
  // Get the trusted role ID.
  $rid = variable_get('drupalorg_crosssite_trusted_role', 36);

  // Find users who are individual Association members, and do not have the
  // trusted role.
  $query = db_select('users', 'u');
  $query->join('drupalorg_crosssite_ind_civimembership', 'ic', 'ic.user_name = u.name');
  $query->leftJoin('users_roles', 'ur', 'ur.uid = u.uid AND ur.rid = :rid', array(':rid' => $rid));
  $query
    ->fields('u', array('uid'))
    ->condition('u.status', 1)
    ->isNull('ur.rid');
  $result = $query->execute();

  // Give those accounts the trusted role.
  user_multiple_role_edit($result->fetchCol(), 'add_role', $rid);
}
