<?php

/**
 * @file
 * The Drupal Community Spotlight view.
 */

$view = new view;
$view->name = 'drupalorg_community_spotlight';
$view->description = 'Community Spotlight';
$view->tag = 'drupalorg';
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
$handler->override_option('filters', array(
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
  'tid' => array(
    'operator' => 'or',
    'value' => array(
      '0' => '13854',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => 'tid_op',
      'label' => 'Taxonomy: Term',
      'use_operator' => FALSE,
      'identifier' => 'tid',
      'remember' => FALSE,
      'single' => TRUE,
      'optional' => TRUE,
      'reduce' => FALSE,
    ),
    'type' => 'textfield',
    'limit' => TRUE,
    'vid' => '1',
    'id' => 'tid',
    'table' => 'term_node',
    'field' => 'tid',
    'hierarchy' => 0,
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'Community Spotlight');
$handler->override_option('header', 'We love open source because it means anyone can get involved, making the community vibrant and the web full of inspirational sites. See why we love Drupal and how we got involved: ');
$handler->override_option('header_format', '1');
$handler->override_option('header_empty', 1);
$handler->override_option('offset', 1);
$handler->override_option('row_plugin', 'node');
$handler->override_option('row_options', array(
  'relationship' => 'none',
  'build_mode' => 'teaser',
  'links' => 1,
  'comments' => 0,
));
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'community-spotlight');
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
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->override_option('items_per_page', 1);
$handler->override_option('offset', 0);
$handler->override_option('use_more', 1);
$handler->override_option('use_more_always', 0);
$handler->override_option('use_more_text', 'View more community spotlights');
$handler->override_option('block_description', 'Community Spotlight');
$handler->override_option('block_caching', -1);
