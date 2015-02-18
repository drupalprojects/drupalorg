<?php
/**
 * @file
 * drupalorg_spam.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function drupalorg_spam_flag_default_flags() {
  $flags = array();
  // Exported flag: "Report spam".
  $flags['report_spam_nodes'] = array(
    'content_type' => 'node',
    'title' => 'Report spam',
    'global' => 0,
    'types' => array(
      0 => 'book',
      1 => 'changenotice',
      2 => 'forum',
      3 => 'project_issue',
      4 => 'project_module',
      5 => 'organization',
      6 => 'project_theme',
      7 => 'project_translation',
    ),
    'flag_short' => 'Report as spam',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Mark as not spam',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'drupalorg_spam',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
