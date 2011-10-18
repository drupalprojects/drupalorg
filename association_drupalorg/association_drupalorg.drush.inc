<?php

/**
 * @file
 * Drush commands for Association site.
 */

/**
 * Implementation of hook_drush_command().
 */
function association_drupalorg_drush_command() {
  return array(
    'user-data-clean' => array(
      'callback' => 'association_drupalorg_drush_user_data_cleaner',
      'description' => 'Clean out the users.data column of profile fields.',
    ),
    'fulfillment-mail' => array(
      'description' => 'Email fulfillment CSV.',
      'arguments' => array(
        'addresses' => 'Commma-separated list of email addresses.',
      ),
    ),
  );
}

/**
 * Implementation of hook_drush_help().
 */
function association_drupalorg_drush_help($section) {
  switch ($section) {
    case 'drush:user-data-clean':
      return dt('Cleans out the users.data field. This loops over all users, loads the row, modifies, updates it back. Could take a while.');

    case 'error:ASSOCIATION_DRUPALORG_ARG_MISSING':
      return t('Missing argument.');
  }
}

/**
 * Callback for drush command.
 * Removes profile fields from users.data
 */
function association_drupalorg_drush_user_data_cleaner() {
  $max = db_result(db_query("SELECT max(uid) from {users}"));
  for ($i = 1; $i < ($max + 3); $i++) {
    $account = db_fetch_object(db_query("SELECT * FROM {users} WHERE uid = %d", $i));
    if ($account && $account->status == 1) {
      $data = unserialize($account->data);
      unset($data['profile_current_company_organization']);
      unset($data['profile_full_name']);
      unset($data['profile_job']);
      unset($data['profile_role_with_drupal']);
      unset($data['country']);
      unset($data['profile_irc_nick']);
      db_query("UPDATE {users} SET data = '%s' WHERE uid = %d", serialize($data), $i);
    }
  }
}

function drush_association_drupalorg_fulfillment_mail($addresses = '') {
  if (empty($addresses)) {
    drush_set_error('ASSOCIATION_DRUPALORG_ARG_MISSING');
    return;
  }

  drupal_mail('association_drupalorg', 'fulfillment', $addresses, language_default());
}
