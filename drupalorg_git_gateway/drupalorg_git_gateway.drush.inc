<?php

/**
 * @file
 *
 * Provides drupalorg-specific git gateway drush commands.
 */

/**
 * Implementation of hook_drush_command().
 */
function drupalorg_git_gateway_drush_command() {
  $commands = array();
  $commands['drupalorg-vcs-auth-check-user-pass'] = array(
    'aliases' => array('dvcup'),
    'description' => 'Check to see if a password matches a Git username.',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'arguments' => array(
      'username' => 'The Git username to check.',
      'password' => 'The password to match.',
    ),
  );
  $commands['drupalorg-ssh-user-key'] = array(
    'aliases' => array('dsck'),
    'description' => 'Check to see if a key fingerprint matches a Git username.',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'arguments' => array(
      'username' => 'The Git username to check.',
      'fingerprint' => 'The fingerprint to lookup.',
    ),
  );
  $commands['drupalorg-sshkey-check'] = array(
    'aliases' => array('dvsk'),
    'description' => 'Check key fingerprint is known and attached to a valid user account.',
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'arguments' => array(
      'fingerprint' => 'The fingerprint to lookup.',
    ),
  );
  return $commands;
}

/**
 * Returns 'true' if a the username and passowrd match
 *
 * @todo: We could do this just via DRUPAL_BOOTSTRAP_DATABASE and a direct
 * query on {users} instead of a full bootstrap and user_load().
 */
function drush_drupalorg_git_gateway_drupalorg_vcs_auth_check_user_pass($username = '', $password = '') {
  $account = user_load(array('git_username' => $username));
  if (!empty($account) && md5($password) == $account->pass) {
    drush_print('true');
  }
  else {
    drush_print('false');
  }
}

/**
 * Returns 'true' if a fingerprint is known
 */
function drush_drupalorg_git_gateway_drupalorg_ssh_user_key($username = '', $fingerprint = '') {
  if ($key = sshkey_load_by_fingerprint($fingerprint)) {
    if ($username == user_load($key->entity_id)->git_username) {
      drush_print('true');
      return;
    }
  }
  drush_print('false');
}

/**
 * Returns 'true' if a fingerprint is known and attached to a valid, active
 * account.
 */
function drush_drupalorg_git_gateway_drupalorg_sshkey_check($fingerprint = '') {
  if ($key = sshkey_load_by_fingerprint($fingerprint)) {
    $user = user_load($key->entity_id);
    if (in_array(DRUPALORG_GIT_GATEWAY_RID, $user->roles)) {
      drush_print('true');
      return;
    }
  }
  drush_print('false');
}
