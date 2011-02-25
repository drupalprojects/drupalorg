<?php

function _drupalorg_git_gateway_user_page($account) {
  global $user;

  ctools_include('form');
  // Pre-populate the form state with account information.
  $form_state = array(
    'account' => $account,
  );

  // Show one form if we're the user who owns this account
  if ($user->uid == $account->uid) {
    return ctools_build_form('drupalorg_git_gateway_user_form', $form_state);
  }
  // But show an entirely different form if we're another user (an admin).
  else if (user_access('administer users') || user_access('administer version control systems')) {
    return ctools_build_form('drupalorg_git_gateway_admin_user_form', $form_state);
  }
  else {
    // Or deny access.
    return drupal_access_denied();
  }
}

function drupalorg_git_gateway_user_form(&$form_state) {
  $form = array();
  $account = $form_state['account'];
  $form['#submit'][] = 'drupalorg_git_gateway_user_form_submit';

  // Fork off to the confirm form for the username before anything else.
  if (!empty($form_state['storage']['chosen_username'])) {
    return drupalorg_git_gateway_confirm_username($form, $form_state, $account);
  }

  $form['#validate'] = array('drupalorg_git_gateway_user_form_base_validate');
  $form['submit'] = array('#type' => 'submit', '#value' => t('Save'), '#weight' => 30);

  // This is somewhat naughty.
  $show_messages = empty($form_state['post']);

  // Warn the user if their account has been suspended.
  if ($show_messages && !empty($account->git_disabled)) {
    drupal_set_message(t('Your Git access has been suspended by a Drupal.org administrator. See !handbook for information about reinstating your account.', array('!handbook' => l('the handbook', 'node/1042972'))), 'error');
  }

  // Both 'Git administrator' and 'User administrator' roles get admin powers here.
  if (user_access('administer users') || user_access('administer version control systems')) {
    $form['git_administration'] = _drupalorg_git_gateway_user_admin($account);
    // Tack on the submit handler for the admin portion of the form.
    array_unshift($form['#submit'], 'drupalorg_git_gateway_admin_user_form_submit');
  }

  // If everything's set in the expected state, change the button text to make
  // clear what submitting the form does, and show configuration helper text.
  if (!empty($account->git_consent) && !empty($account->git_username)) {
    $form['submit']['#value'] = t('Update Git access agreement');
    $form['git_config'] = _drupalorg_git_gateway_user_config($account);
  }

  if (!isset($account->git_username)) {
    $form['username'] = _drupalorg_git_gateway_username_set($account);
    if ($show_messages) {
      drupal_set_message(t('You will not be able to use Git until you have selected a Git username. A suggestion has been provided for you, based on your username. <strong>Note that once chosen, your Git username cannot be changed.</strong>'), 'warning');
    }
  }
  else {
    $form['username'] = _drupalorg_git_gateway_username_display($account);
  }

  $form['git_tos'] = _drupalorg_git_gateway_user_tos($account);
  if (empty($account->git_consent)) {
    if ($show_messages) {
      drupal_set_message(t('You will not be able to use Git unless the checkbox consenting to the terms of service is checked.'), 'warning');
    }
    // If we're just showing the ToS, make the fieldset unhide-able.
    $form['git_tos']['#collapsible'] = FALSE;
    $form['git_tos']['#collapsed'] = FALSE;
    return $form;
  }

  return $form;
}

function drupalorg_git_gateway_admin_user_form(&$form_state) {
  $form = array();
  $account = $form_state['account'];
  $form['user_info'] = array(
    '#type' => 'fieldset',
    '#title' => t("%username's Git information", array('%username' => $account->name)),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#weight' => -20,
  );
  if (!empty($account->git_username)) {
    $form['user_info']['username'] = array(
      '#type' => 'item',
      '#title' => t('Git username'),
      '#disabled' => TRUE,
      '#value' => $account->git_username,
      '#weight' => -20,
    );
  }
  else {
    $form['user_info']['username'] = array(
      '#type' => 'item',
      '#title' => t('Git username'),
      '#disabled' => TRUE,
      '#value' => t('(User has not yet chosen a Git username)'),
      '#weight' => -20,
    );
  }

  $form['user_info']['consent'] = array(
    '#type' => 'item',
    '#title' => t('Git access agreement'),
    '#value' => empty($account->git_consent) ? t('User has <strong>not</strong> consented to the Git agreement.') : t('User has consented to the Git agreement.'),
  );

  $form['git_administration'] = _drupalorg_git_gateway_user_admin($account, FALSE);

  // Attach both the base and admin form submit handlers.
  $form['#submit'] = array(
    'drupalorg_git_gateway_admin_user_form_submit',
    'drupalorg_git_gateway_user_form_submit',
  );

  $form['submit'] = array('#type' => 'submit', '#value' => t('Save'), '#weight' => 30);
  return $form;
}

function _drupalorg_git_gateway_user_tos($account) {
  $form = array(
    '#type' => 'fieldset',
    '#title' => t('Git access agreement'),
    '#collapsible' => TRUE ,
    '#collapsed' => !empty($account->git_consent),
    '#weight' => 10,
  );

  $form['terms'] = array(
    '#type' => 'item',
    '#title' => t("To use Drupal's version control systems you must agree to the following"),
    '#value' => theme('item_list', array(
      t('I will only commit !link code and resources to Drupal code repositories.', array('!link' => l('GPL V2+-licensed', 'licensing/faq', array('alias' => TRUE)))),
      t('I will only commit code and resources that I own or am permitted to distribute.'),
      t('I will cooperate with the !link as needed.', array('!link' => l('Drupal Security Team', 'security-team', array('alias' => TRUE)))),
      t('I have read and will adhere to the !link.', array('!link' => l('Drupal Code of Conduct', 'dcoc', array('alias' => TRUE)))),
      t('I agree to the !link.', array('!link' => l('Drupal Code Repository Terms of Service', 'node/1001544'))),
    )),
  );

  $form['git_consent'] = array(
    '#type' => 'checkbox',
    '#title' => t('I agree to these terms'),
    '#default_value' => $account->git_consent,
  );

  global $user;
  if ($user->uid != $account->uid) {
    // Even admins should never be able to change the state of whether someone
    // consented to our terms of service or not.
    $form['git_consent']['#disabled'] = TRUE;
    $form['git_consent']['#description'] = t('Only the account owner may opt in or out of the Git access agreement.');
  }

  return $form;
}

function _drupalorg_git_gateway_username_display($account) {
  return array(
    '#type' => 'item',
    '#title' => t('Your Git username'),
    '#disabled' => TRUE,
    '#value' => $account->git_username,
    '#description' => t('You use this as your SSH username when authenticating with Git to Drupal.org. Drupal.org uses this username to generate your personalized sandbox URIs.'),
    '#weight' => -20,
  );
}

function _drupalorg_git_gateway_username_set($account) {
  $form = array(
    '#type' => 'fieldset',
    '#title' => t('Git username'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#weight' => -20,
  );

  $form['#description'] = t('Choose a username to use for Git. This will be your SSH user when authenticating to Drupal.org with Git, and Drupal.org will use it to generate your personalized sandbox URIs. <strong>Once chosen, your Git username cannot be changed.</strong>');
  $form['git_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Desired Git username'),
    '#maxlength' => 64,
    '#default_value' => drupalorg_git_gateway_suggest_git_username($account->name),
    '#description' => t('Acceptable characters are ANSI alphanumerics (A-Z, a-z, 0-9), periods, underscores, or dashes. A suggested username is provided, based on the acceptable characters in your Drupal username and the availability of Git usernames.'),
  );
  return $form;
}

function _drupalorg_git_gateway_user_config($account) {
  $form = array(
    '#type' => 'fieldset',
    '#title' => t('Git configuration'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#weight' => 15,
  );

  $user_config = t('You will not be credited in commit statistics or listings unless you set the Git e-mail address to either an !multiemailadmin or the anonymized e-mail provided below. Read !handbook for a full discussion of identifying yourself to Git. We recommend:', (array('!handbook' => l('the handbook', 'node/1022156'), '!multiemailadmin' => l('address associated with your account', "user/$account->uid/edit/email-addresses")))) . "\n";
  $git_config_name = empty($account->profile_full_name) ? $account->name : $account->profile_full_name;
  $user_config .= '<div class="codeblock"><code>';
  $user_config .= "git config --global user.name \"$git_config_name\"<br/>";
  $user_config .= "git config --global user.email $account->mail<br/>";
  $user_config .= '</code></div>';
  $user_config .= 'E-mail addresses in Drupal Git repositories are never shown in a web browser, but they can be accessed by anyone looking directly at the Git repository logs. It is generally considered appropriate to use a real, public-facing e-mail for Git. If you prefer to use an anonymized address, use: ';
  $anon_address = "{$account->git_username}@{$account->uid}.no-reply.drupal.org";
  $user_config .= "<div class=\"codeblock\"><code>git config --global user.email $anon_address</code></div>";

  $form['user_config'] = array(
    '#type' => 'item',
    '#title' => t('Git user configuration'),
    '#value' => $user_config,
  );

  return $form;
}

function _drupalorg_git_gateway_user_admin($account) {
  $form = array(
    '#type' => 'fieldset',
    '#title' => t('Git account administration'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#weight' => 20,
  );

  $form['git_disabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable Git access for this user'),
    '#default_value' => $account->git_disabled,
    '#description' => t('Globally disable Git access for this user across all of Drupal.org.'),
  );

  $form['git_disabled_msg'] = array(
    '#type' => 'textarea',
    '#title' => t('Git access disabled e-mail'),
    '#default_value' => variable_get('project_git_gateway_disabled_msg', DRUPALORG_GIT_DISABLE_MSG),
    '#description' => t('Message to send to a user when disabling their Git push access.'),
    '#rows' => 10,
  );

  // Since we don't send an e-mail when enabling hide for disabled users.
  if ($account->git_disabled) {
    $form['git_disabled_msg']['#access'] = FALSE;
  }

  $form['git_vetted'] = array(
    '#type' => 'checkbox',
    '#title' => t('Is a vetted user'),
    '#description' => t('If checked, this user will be granted "vetted" status. Vetted users create full projects and promote existing experimental sandboxes.'),
    '#default_value' => $account->git_vetted,
  );

  return $form;
}

function drupalorg_git_gateway_confirm_username($form, &$form_state, $account) {
  // Copy out the original settings so we have them when actually submitting.
  $form_state['storage']['base_form_values'] = $form_state['values'];

  $form['confirm_username'] = array(
    '#type' => 'item',
    '#title' => t('Are you sure you want "%username" for your Git username?', array('%username' => $form_state['storage']['chosen_username'])),
    '#description' => t('Once chosen, your Git username can <em>never</em> be changed!'),
  );

  $form['confirm'] = array(
    '#type' => 'submit',
    '#value' => t('Confirm'),
  );
  $form['cancel'] = array(
    '#type' => 'submit',
    '#value' => t('Cancel'),
    // '#button_type' => 'cancel',
    '#executes_submit_callback' => FALSE,
  );

  $form['#validate'] = array('drupalorg_git_gateway_confirm_username_validate');

  return $form;
}

function drupalorg_git_gateway_user_form_base_validate($form, &$form_state) {
  global $user;

  // Validation checks related to admin users editing normal users.
  if (($user->uid != $form_state['account']->uid)) {
    if ($form_state['values']['git_consent'] != $form_state['account']->git_consent) {
      // Even admins should never be able to change the state of whether someone
      // consented to our terms of service or not.
      form_set_error('git_consent', 'Only the account\'s owner can toggle their consent to the Git Terms of Service.');
      $form_state['git_consent'] = $form_state['account']->git_consent;
    }
  }

  // If the git_username field is present, do some validation.
  if (isset($form['username']['git_username'])) {
    // Ensure the requested ID isn't taken.
    if ($uid = db_result(db_query("SELECT uid FROM {users} WHERE git_username = '%s' AND uid <> %d", $form_state['values']['git_username'], $form_state['account']->uid))) {
      form_set_error('git_username', t('The requested Git username is already taken.'));
    }
    else if (preg_match('/[^A-Za-z0-9\._-]/', $form_state['values']['git_username'])) {
      form_set_error('git_username', t('The requested username contains invalid characters.'));
    }
    else if (empty($form_state['account']->git_username)) {
      $form_state['rebuild'] = TRUE;
      $form_state['storage']['chosen_username'] = $form_state['values']['git_username'];
    }
  }
}

function drupalorg_git_gateway_confirm_username_validate($form, &$form_state) {
  // Copy the stored base form values into place for the main submit handler.
  $form_state['values'] += $form_state['storage']['base_form_values'];
  // Confirm or cancel, form processing should complete; ensure that happens.
  unset($form_state['storage'], $form_state['rebuild']);
  $form_state['submitted'] = TRUE;

  if (empty($form_state['clicked_button']) || $form_state['clicked_button']['#value'] != t('Confirm')) {
    // Unset the git username so it isn't processed.
    unset($form_state['values']['git_username']);
  }
}

/**
 * Perform arbitration to determine if the user should be allocated the
 * all-important 'Git user' role.
 */
function drupalorg_git_gateway_user_form_submit($form, &$form_state) {
  $edit = &$form_state['values'];
  $account = $form_state['account'];

  // User has changed the state of their consent to the Git ToS. Log the change.
  if (isset($edit['git_consent']) && ($edit['git_consent'] != $account->git_consent)) {
    $values = array($account->uid, time(), $edit['git_consent']);
    db_query('INSERT INTO {drupalorg_git_consent_log} (uid, timestamp, action) VALUES (%d, %d, %d) ', $values);
  }

  // Munge edited values into place on the account for unified checking.
  $fields = array();
  $dirty = FALSE;
  foreach (array('git_disabled', 'git_username', 'git_consent', 'git_vetted') as $field) {
    if (isset($edit[$field]) && $account->$field != $edit[$field]) {
      $fields[$field] = $edit[$field];
      $dirty = TRUE;
    }
  }
  if ($dirty) {
    user_save($account, $fields, 'git');
  }
}

/**
 * Handle administrative aspects of the Git user form - enabling/disabling the
 * account, and adding the vetted user status.
 */
function drupalorg_git_gateway_admin_user_form_submit($form, &$form_state) {
  $edit = &$form_state['values'];
  $account = $form_state['account'];
  global $user;

  // Admin has changed the enabled/disabled state of this git account. Log the change.
  if (isset($edit['git_disabled']) && ($edit['git_disabled'] != $account->git_disabled)) {
    $values = array($account->uid, $user->uid, time(), $edit['git_disabled']);
    if ($edit['git_disabled'] == 1) {
      $body = t($edit['git_disabled_msg'], array('@user_name' => $account->name, '@admin_name' => $user->name));
      drupal_mail('drupalorg_git_gateway', 'disabled', $account->mail, user_preferred_language($account), array('body' => $body));
      $values[] = $body;
      db_query("INSERT INTO {drupalorg_git_disable_log} (uid, admin_uid, timestamp, action, email) VALUES (%d, %d, %d, %d, '%s') ", $values);
    }
    else {
      db_query("INSERT INTO {drupalorg_git_disable_log} (uid, admin_uid, timestamp, action, email) VALUES (%d, %d, %d, %d, '') ", $values);
    }
  }
}
