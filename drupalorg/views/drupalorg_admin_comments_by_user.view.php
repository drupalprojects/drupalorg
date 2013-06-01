<?php

/**
 * @file
 * Administrative view for cleaning up spam comments per user.
 */

$view = new view;
$view->name = 'drupalorg_admin_comments_by_user';
$view->description = 'Administrative view of all comments by a user';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'comments';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('relationships', array(
  'nid' => array(
    'label' => 'Node',
    'required' => 0,
    'id' => 'nid',
    'table' => 'comments',
    'field' => 'nid',
    'relationship' => 'none',
  ),
  'uid' => array(
    'label' => 'User',
    'required' => 0,
    'id' => 'uid',
    'table' => 'comments',
    'field' => 'uid',
    'relationship' => 'none',
  ),
));
$handler->override_option('fields', array(
  'title' => array(
    'label' => 'Node title',
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
    'relationship' => 'nid',
  ),
  'subject' => array(
    'id' => 'subject',
    'table' => 'comments',
    'field' => 'subject',
  ),
  'comment' => array(
    'label' => 'Comment',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 1,
      'max_length' => '200',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'comment',
    'table' => 'comments',
    'field' => 'comment',
    'relationship' => 'none',
  ),
  'timestamp' => array(
    'id' => 'timestamp',
    'table' => 'comments',
    'field' => 'timestamp',
  ),
  'delete_comment' => array(
    'label' => 'Operations',
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
    'id' => 'delete_comment',
    'table' => 'comments',
    'field' => 'delete_comment',
    'relationship' => 'none',
  ),
  'edit_comment' => array(
    'id' => 'edit_comment',
    'table' => 'comments',
    'field' => 'edit_comment',
  ),
  'status' => array(
    'label' => 'Published',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'type' => 'yes-no',
    'not' => 1,
    'exclude' => 0,
    'id' => 'status',
    'table' => 'comments',
    'field' => 'status',
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'uid' => array(
    'default_action' => 'not found',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => 'Comments by %1',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'user',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'uid',
    'validate_user_argument_type' => 'either',
    'validate_user_roles' => array(
      '2' => 0,
      '3' => 0,
      '6' => 0,
      '8' => 0,
      '5' => 0,
      '12' => 0,
      '4' => 0,
      '7' => 0,
    ),
    'default_options_div_prefix' => '',
    'default_argument_user' => 0,
    'default_argument_fixed' => '',
    'validate_argument_node_type' => array(
      'image' => 0,
      'forum' => 0,
      'project_project' => 0,
      'project_release' => 0,
      'project_issue' => 0,
      'book' => 0,
      'page' => 0,
      'story' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '1' => 0,
      '40' => 0,
      '42' => 0,
      '38' => 0,
      '6' => 0,
      '9' => 0,
      '4' => 0,
      '3' => 0,
      '7' => 0,
      '2' => 0,
      '5' => 0,
      '31' => 0,
      '32' => 0,
      '33' => 0,
      '34' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_project_term_vocabulary' => array(
      '3' => 0,
    ),
    'validate_argument_project_term_argument_type' => 'tid',
    'validate_argument_project_term_argument_action_top_without' => 'pass',
    'validate_argument_project_term_argument_action_top_with' => 'pass',
    'validate_argument_project_term_argument_action_child' => 'pass',
  ),
));
$handler->override_option('access', array(
  'type' => 'role',
  'role' => array(
    '3' => 3,
    '4' => 4,
    '7' => 7,
  ),
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('items_per_page', 50);
$handler->override_option('use_pager', '1');
$handler->override_option('style_plugin', 'bulk');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 0,
  'order' => 'desc',
  'columns' => array(
    'title' => 'title',
    'subject' => 'subject',
    'timestamp' => 'timestamp',
    'delete_comment' => 'delete_comment',
    'edit_comment' => 'delete_comment',
    'status' => 'status',
  ),
  'info' => array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'subject' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'timestamp' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'delete_comment' => array(
      'separator' => ' | ',
    ),
    'edit_comment' => array(
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  ),
  'default' => 'timestamp',
  'execution_type' => '2',
  'display_type' => '1',
  'hide_select_all' => 0,
  'display_result' => 1,
  'merge_single_action' => 0,
  'operations' => array(
    'views_bulk_operations_delete_comment_action' => array(
      'selected' => TRUE,
      'skip_confirmation' => 0,
    ),
    'comment_unpublish_action' => array(
      'selected' => TRUE,
      'skip_confirmation' => 0,
    ),
  ),
));
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'user/%/admin-comments');
$handler->override_option('menu', array(
  'type' => 'tab',
  'title' => 'Administer comments',
  'description' => '',
  'weight' => '10',
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
));
