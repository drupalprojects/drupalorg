<?php
/**
 * @file
 * drupalorg_spam.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_spam_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_spam_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function drupalorg_spam_flag_default_flags() {
  $flags = array();
  // Exported flag: "Comment Spam".
  $flags['drupalorg_comment_spam'] = array(
    'entity_type' => 'comment',
    'title' => 'Comment Spam',
    'global' => 0,
    'types' => array(
      0 => 'comment_node_book_listing',
      1 => 'comment_node_book',
      2 => 'comment_node_casestudy',
      3 => 'comment_node_changenotice',
      4 => 'comment_node_guide',
      5 => 'comment_node_documentation',
      6 => 'comment_node_forum',
      7 => 'comment_node_project_issue',
      8 => 'comment_node_page',
      9 => 'comment_node_post',
    ),
    'flag_short' => 'report as spam',
    'flag_long' => 'flag this content as (potential) spam',
    'flag_message' => '',
    'unflag_short' => 'undo report as spam',
    'unflag_long' => 'mark content as not spam',
    'unflag_message' => '',
    'unflag_denied_text' => 'comment marked as spam',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'drupalorg_spam',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Node Spam".
  $flags['drupalorg_node_spam'] = array(
    'entity_type' => 'node',
    'title' => 'Node Spam',
    'global' => 0,
    'types' => array(
      0 => 'book',
      1 => 'casestudy',
      2 => 'changenotice',
      3 => 'project_distribution',
      4 => 'guide',
      5 => 'documentation',
      6 => 'project_drupalorg',
      7 => 'forum',
      8 => 'project_issue',
      9 => 'project_module',
      10 => 'organization',
      11 => 'project_theme_engine',
      12 => 'project_theme',
      13 => 'project_translation',
    ),
    'flag_short' => 'Report as spam',
    'flag_long' => 'flag this content as (potential) spam',
    'flag_message' => '',
    'unflag_short' => 'Undo report as spam',
    'unflag_long' => 'mark content as not spam',
    'unflag_message' => '',
    'unflag_denied_text' => 'content marked as spam',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'rss' => 0,
      'print' => 0,
      'nodechanges' => 0,
      'token' => 0,
      'diff_standard' => 0,
      'issuemetadata' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'drupalorg_spam',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "User Spam".
  $flags['drupalorg_user_spam'] = array(
    'entity_type' => 'user',
    'title' => 'User Spam',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Report as spammer',
    'flag_long' => 'flag this user as a potential spammer',
    'flag_message' => '',
    'unflag_short' => 'Unmark as spammer',
    'unflag_long' => 'mark user as not a spammer',
    'unflag_message' => '',
    'unflag_denied_text' => 'user marked as spammer',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 0,
      'diff_standard' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 0,
    'access_uid' => 'others',
    'module' => 'drupalorg_spam',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
