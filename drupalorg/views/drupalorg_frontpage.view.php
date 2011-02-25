<?php

/**
 * @file
 * The Drupal frontpage view.
 */

$view = new view;
$view->name = 'drupalorg_frontpage';
$view->description = 'Posts from the frontpage vocabulary.';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('sorts', array(
  'created' => array(
    'order' => 'DESC',
    'granularity' => 'second',
    'id' => 'created',
    'table' => 'node',
    'field' => 'created',
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'tid' => array(
    'default_action' => 'ignore',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => 'Drupal.org front page for %1',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'taxonomy_term',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'add_table' => 0,
    'require_value' => 0,
    'reduce_duplicates' => 0,
    'set_breadcrumb' => 0,
    'id' => 'tid',
    'table' => 'term_node',
    'field' => 'tid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_user' => 0,
    'default_argument_fixed' => '',
    'validate_argument_node_type' => array(),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '34' => 34,
    ),
    'validate_argument_type' => 'tid',
    'validate_user_restrict_roles' => 0,
    'validate_argument_project_term_vocabulary' => array(),
    'validate_argument_project_term_argument_type' => 'tid',
    'validate_argument_project_term_argument_action_top_without' => 'pass',
    'validate_argument_project_term_argument_action_top_with' => 'pass',
    'validate_argument_project_term_argument_action_child' => 'pass',
  ),
));
$handler->override_option('filters', array(
  'status' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'status',
    'table' => 'node',
    'field' => 'status',
    'relationship' => 'none',
  ),
  'promote' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'promote',
    'table' => 'node',
    'field' => 'promote',
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'time',
  'results_lifespan' => '1800',
  'output_lifespan' => '1800',
));
$handler->override_option('title', 'Drupal.org front page posts for Drupal planet');
$handler->override_option('empty', 'There are currently no posts in this category.');
$handler->override_option('empty_format', '1');
$handler->override_option('use_pager', '1');
$handler->override_option('row_plugin', 'node');
$handler->override_option('row_options', array(
  'teaser' => 1,
  'links' => 1,
  'comments' => 0,
));
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->override_option('style_plugin', 'rss');
$handler->override_option('style_options', array(
  'mission_description' => FALSE,
  'description' => '',
));
$handler->override_option('row_plugin', 'node_rss');
$handler->override_option('row_options', array(
  'item_length' => 'default',
));
$handler->override_option('path', 'taxonomy/term/%/frontpage/feed');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('displays', array());
$handler->override_option('sitename_title', 0);
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'taxonomy/term/%/frontpage');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
