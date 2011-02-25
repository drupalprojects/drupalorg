<?php

/**
 * @file
 * The Drupal handbook pages w/o IA tags view.
 */

$view = new view;
$view->name = 'drupalorg_docs_ia_tags';
$view->description = 'List of pages with IA tagging.';
$view->tag = 'docs';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('relationships', array(
  'bid' => array(
    'label' => 'Book',
    'required' => 0,
    'id' => 'bid',
    'table' => 'book',
    'field' => 'bid',
    'relationship' => 'none',
  ),
));
$handler->override_option('fields', array(
  'title' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
  ),
  'edit_node' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'text' => '',
    'exclude' => 0,
    'id' => 'edit_node',
    'table' => 'node',
    'field' => 'edit_node',
    'relationship' => 'none',
  ),
));
$handler->override_option('sorts', array(
  'title' => array(
    'order' => 'ASC',
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
  ),
));
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'book' => 'book',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'nid' => array(
    'operator' => '=',
    'value' => array(
      'value' => '338057',
      'min' => '',
      'max' => '',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'relationship' => 'bid',
  ),
  'tid' => array(
    'operator' => 'not',
    'value' => array(
      '5734' => '5734',
      '5736' => '5736',
      '5738' => '5738',
      '5740' => '5740',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '40',
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
$handler->override_option('title', 'Theme guide pages without IA tags');
$handler->override_option('items_per_page', 30);
$handler->override_option('use_pager', '1');
$handler->override_option('style_plugin', 'table');
$handler = $view->new_display('page', 'Info types', 'page_1');
$handler->override_option('path', 'community-initiatives/documentation/untagged');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => 'Info type',
  'description' => '',
  'weight' => '0',
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'normal',
  'title' => 'Untagged handbook pages',
  'description' => '',
  'weight' => '0',
));
