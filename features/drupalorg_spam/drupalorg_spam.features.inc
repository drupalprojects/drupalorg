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
  // Exported flag: "Report spam comments".
  $flags['report_spam_comments'] = array(
    'content_type' => 'comment',
    'title' => 'Report spam comments',
    'global' => 0,
    'types' => array(
      0 => 'comment_node_book_listing',
      1 => 'comment_node_book',
      2 => 'comment_node_casestudy',
      3 => 'comment_node_changenotice',
      4 => 'comment_node_project_distribution',
      5 => 'comment_node_project_core',
      6 => 'comment_node_project_drupalorg',
      7 => 'comment_node_forum',
      8 => 'comment_node_project_issue',
      9 => 'comment_node_project_module',
      10 => 'comment_node_organization',
      11 => 'comment_node_packaging_whitelist',
      12 => 'comment_node_page',
      13 => 'comment_node_project_release',
      14 => 'comment_node_story',
      15 => 'comment_node_project_theme_engine',
      16 => 'comment_node_project_theme',
      17 => 'comment_node_project_translation',
    ),
    'flag_short' => 'Report as spam',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Mark as not spam',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
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
    'show_on_comment' => 1,
    'api_version' => 2,
    'module' => 'drupalorg_spam',
    'locked' => array(
      0 => 'name',
    ),
  );
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
    'module' => 'drupalorg_spam',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Report spam".
  $flags['report_spam_users'] = array(
    'content_type' => 'user',
    'title' => 'Report spam',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Add to shortlist',
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
    'show_on_entity' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 2,
    'module' => 'drupalorg_spam',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
