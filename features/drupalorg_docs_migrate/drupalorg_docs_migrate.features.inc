<?php
/**
 * @file
 * drupalorg_docs_migrate.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function drupalorg_docs_migrate_flag_default_flags() {
  $flags = array();
  // Exported flag: "Migrate".
  $flags['migrate'] = array(
    'entity_type' => 'node',
    'title' => 'Migrate',
    'global' => 1,
    'types' => array(
      0 => 'book',
    ),
    'flag_short' => 'Migrate',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove migrate flag',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
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
    'api_version' => 3,
    'module' => 'drupalorg_docs_migrate',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
