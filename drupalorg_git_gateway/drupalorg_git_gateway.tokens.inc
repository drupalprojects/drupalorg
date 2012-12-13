<?php

/**
 * Implements hook_token_info().
 */
function drupalorg_git_gateway_token_info() {
  return array(
    'tokens' => array(
      'user' => array(
        'git-username' => array(
          'name' => t('Git username'),
          'description' => t('The Git username for the user')
        ),
      ),
    ),
  );
}

/**
 * Implements hook_tokens().
 */
function drupalorg_git_gateway_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  if ($type === 'user' && !empty($data['user']) && isset($tokens['git-username'])) {
    $replacements[$tokens['git-username']] = $data['user']->git_username;
  }

  return $replacements;
}
