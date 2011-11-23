<?php

/**
 * Implementation of hook_views_default_views().
 */
function association_drupalcon_sponsorship_store_views_default_views() {
  $views = array();

  // Exported view: association_sponsor_node_list
  $view = new view;
  $view->name = 'association_sponsor_node_list';
  $view->description = 'List of a sponsor\'s sponsorships';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'field_assoc_sponsorship_level_nid' => array(
      'label' => 'Level',
      'required' => 1,
      'delta' => -1,
      'id' => 'field_assoc_sponsorship_level_nid',
      'table' => 'node_data_field_assoc_sponsorship_level',
      'field' => 'field_assoc_sponsorship_level_nid',
      'relationship' => 'none',
    ),
    'field_assoc_sponsorship_sponsor_nid' => array(
      'label' => 'Sponsor',
      'required' => 1,
      'delta' => -1,
      'id' => 'field_assoc_sponsorship_sponsor_nid',
      'table' => 'node_data_field_assoc_sponsorship_sponsor',
      'field' => 'field_assoc_sponsorship_sponsor_nid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'field_assoc_level_conference_value' => array(
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
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_level_conference_value',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
    ),
    'field_assoc_level_value' => array(
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
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
    ),
    'field_assoc_level_extra_value' => array(
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
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_level_extra_value',
      'table' => 'node_data_field_assoc_level_extra',
      'field' => 'field_assoc_level_extra_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
    ),
    'field_assoc_level_badge_fid' => array(
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
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'image_plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_level_badge_fid',
      'table' => 'node_data_field_assoc_level_badge',
      'field' => 'field_assoc_level_badge_fid',
      'relationship' => 'field_assoc_sponsorship_level_nid',
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
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => 'Edit sponsorship information, including web ad',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'node',
      'default_argument' => '',
      'validate_type' => 'node',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        3 => 0,
        6 => 0,
        5 => 0,
        10 => 0,
        12 => 0,
        16 => 0,
        14 => 0,
        19 => 0,
      ),
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'association_sponsor' => 'association_sponsor',
        'blog' => 0,
        'association_sponsorship' => 0,
        'association_membership_benefit' => 0,
        'product' => 0,
        'association_sponsorship_level' => 0,
        'book' => 0,
        'case' => 0,
        'job_posting' => 0,
        'page' => 0,
        'story' => 0,
        'webform' => 0,
      ),
      'validate_argument_node_access' => 1,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        4 => 0,
        8 => 0,
        2 => 0,
        6 => 0,
        13 => 0,
        12 => 0,
        1 => 0,
        3 => 0,
        10 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
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
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship' => 'association_sponsorship',
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
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Sponsorships');
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('row_options', array(
    'inline' => array(
      'field_assoc_level_conference_value' => 'field_assoc_level_conference_value',
      'field_assoc_level_value' => 'field_assoc_level_value',
      'field_assoc_level_extra_value' => 'field_assoc_level_extra_value',
    ),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: association_sponsors_admin
  $view = new view;
  $view->name = 'association_sponsors_admin';
  $view->description = 'Admin view of sponsorships';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'field_assoc_sponsorship_level_nid' => array(
      'label' => 'Level',
      'required' => 1,
      'delta' => -1,
      'id' => 'field_assoc_sponsorship_level_nid',
      'table' => 'node_data_field_assoc_sponsorship_level',
      'field' => 'field_assoc_sponsorship_level_nid',
      'relationship' => 'none',
    ),
    'field_assoc_sponsorship_sponsor_nid' => array(
      'label' => 'Sponsor',
      'required' => 1,
      'delta' => -1,
      'id' => 'field_assoc_sponsorship_sponsor_nid',
      'table' => 'node_data_field_assoc_sponsorship_sponsor',
      'field' => 'field_assoc_sponsorship_sponsor_nid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'nid' => array(
      'label' => 'Nid',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 1,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => 'Sponsor',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
    ),
    'field_assoc_level_value' => array(
      'label' => 'Level',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => 'node/[nid]/edit',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
    ),
    'field_assoc_level_extra_value' => array(
      'label' => 'Extra',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_level_extra_value',
      'table' => 'node_data_field_assoc_level_extra',
      'field' => 'field_assoc_level_extra_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
    ),
    'field_assoc_sponsorship_booth_value' => array(
      'label' => 'Booth',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_sponsorship_booth_value',
      'table' => 'node_data_field_assoc_sponsorship_booth',
      'field' => 'field_assoc_sponsorship_booth_value',
      'relationship' => 'none',
    ),
    'field_assoc_sponsor_users_uid' => array(
      'label' => 'Authorized users',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_sponsor_users_uid',
      'table' => 'node_data_field_assoc_sponsor_users',
      'field' => 'field_assoc_sponsor_users_uid',
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
    ),
    'field_assoc_sponsor_logo_fid' => array(
      'id' => 'field_assoc_sponsor_logo_fid',
      'table' => 'node_data_field_assoc_sponsor_logo',
      'field' => 'field_assoc_sponsor_logo_fid',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_assoc_level_value' => array(
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
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
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship' => 'association_sponsorship',
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
    'field_assoc_level_conference_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        11 => '11',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_assoc_level_conference_value_many_to_one_op',
        'identifier' => 'field_assoc_level_conference_value_many_to_one',
        'label' => 'Conference',
        'bef_filter_description' => '',
        'bef_format' => 'default',
        'optional' => 0,
        'single' => 1,
        'remember' => 1,
        'reduce' => 0,
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
      ),
      'id' => 'field_assoc_level_conference_value_many_to_one',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value_many_to_one',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      3 => 3,
      14 => 14,
      19 => 19,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'nid' => 'nid',
      'title' => 'title',
      'field_assoc_level_value' => 'field_assoc_level_value',
      'field_assoc_level_extra_value' => 'field_assoc_level_extra_value',
      'field_assoc_sponsorship_booth_value' => 'field_assoc_sponsorship_booth_value',
      'field_assoc_sponsor_users_uid' => 'field_assoc_sponsor_users_uid',
    ),
    'info' => array(
      'nid' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_assoc_level_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_assoc_level_extra_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_assoc_sponsorship_booth_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_assoc_sponsor_users_uid' => array(
        'separator' => '',
      ),
    ),
    'default' => 'title',
  ));
  $handler = $view->new_display('page', 'Admin table', 'page_1');
  $handler->override_option('path', 'admin/reports/sponsors');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Sponsors',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'Denver 2012 logo page', 'page_2');
  $handler->override_option('fields', array(
    'nid' => array(
      'label' => 'Nid',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 1,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'none',
    ),
    'field_assoc_level_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => 'node/[nid]/edit',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsorship_booth_value' => array(
      'label' => 'Booth',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_sponsorship_booth_value',
      'table' => 'node_data_field_assoc_sponsorship_booth',
      'field' => 'field_assoc_sponsorship_booth_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsor_users_uid' => array(
      'label' => 'Authorized users',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_sponsor_users_uid',
      'table' => 'node_data_field_assoc_sponsor_users',
      'field' => 'field_assoc_sponsor_users_uid',
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'path' => array(
      'label' => 'Path',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'absolute' => 1,
      'exclude' => 1,
      'id' => 'path',
      'table' => 'node',
      'field' => 'path',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
    ),
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
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 1,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsor_logo_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<a href="[path]"><img src="[field_assoc_sponsor_logo_fid]" alt="[title]" /></a>',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => '300x200_url',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_sponsor_logo_fid',
      'table' => 'node_data_field_assoc_sponsor_logo',
      'field' => 'field_assoc_sponsor_logo_fid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
    ),
    'field_assoc_level_extra_value' => array(
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
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_level_extra_value',
      'table' => 'node_data_field_assoc_level_extra',
      'field' => 'field_assoc_level_extra_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'field_assoc_level_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_level_nid',
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
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship' => 'association_sponsorship',
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
    'field_assoc_level_conference_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        11 => '11',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_assoc_level_conference_value_many_to_one_op',
        'label' => 'Conference',
        'use_operator' => 0,
        'identifier' => 'field_assoc_level_conference_value_many_to_one',
        'bef_filter_description' => '',
        'bef_format' => 'default',
        'optional' => 0,
        'single' => 1,
        'remember' => 1,
        'reduce' => 0,
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
      ),
      'id' => 'field_assoc_level_conference_value_many_to_one',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value_many_to_one',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_level_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        0 => '0',
        4 => '4',
        6 => '6',
        8 => '8',
        16 => '16',
        20 => '20',
        22 => '22',
        24 => '24',
        28 => '28',
        32 => '32',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_assoc_level_value_many_to_one',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'grouping' => 'field_assoc_level_value',
    'type' => 'ul',
  ));
  $handler->override_option('path', 'admin/reports/sponsors/denver2012-logos');
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
  $handler = $view->new_display('page', 'Denver 2012 diamond logos', 'page_3');
  $handler->override_option('fields', array(
    'nid' => array(
      'label' => 'Nid',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 1,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'none',
    ),
    'field_assoc_level_value' => array(
      'label' => 'Level',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => 'node/[nid]/edit',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_level_extra_value' => array(
      'label' => 'Extra',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_level_extra_value',
      'table' => 'node_data_field_assoc_level_extra',
      'field' => 'field_assoc_level_extra_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsorship_booth_value' => array(
      'label' => 'Booth',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_sponsorship_booth_value',
      'table' => 'node_data_field_assoc_sponsorship_booth',
      'field' => 'field_assoc_sponsorship_booth_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsor_users_uid' => array(
      'label' => 'Authorized users',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_sponsor_users_uid',
      'table' => 'node_data_field_assoc_sponsor_users',
      'field' => 'field_assoc_sponsor_users_uid',
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'path' => array(
      'label' => 'Path',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'absolute' => 1,
      'exclude' => 1,
      'id' => 'path',
      'table' => 'node',
      'field' => 'path',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
    ),
    'title' => array(
      'label' => 'Sponsor',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 1,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsor_logo_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<a href="[path]"><img src="[field_assoc_sponsor_logo_fid]" alt="[title]" /></a>',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => '200x120_url',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_sponsor_logo_fid',
      'table' => 'node_data_field_assoc_sponsor_logo',
      'field' => 'field_assoc_sponsor_logo_fid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
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
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship' => 'association_sponsorship',
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
    'field_assoc_level_conference_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        11 => '11',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_assoc_level_conference_value_many_to_one_op',
        'label' => 'Conference',
        'use_operator' => 0,
        'identifier' => 'field_assoc_level_conference_value_many_to_one',
        'bef_filter_description' => '',
        'bef_format' => 'default',
        'optional' => 0,
        'single' => 1,
        'remember' => 1,
        'reduce' => 0,
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
      ),
      'id' => 'field_assoc_level_conference_value_many_to_one',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value_many_to_one',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_level_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_assoc_level_value_many_to_one',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'type' => 'ul',
  ));
  $handler->override_option('path', 'admin/reports/sponsors/denver2012-diamond-logos');
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
  $handler = $view->new_display('page', 'Denver 2012 platinum logos', 'page_4');
  $handler->override_option('fields', array(
    'nid' => array(
      'label' => 'Nid',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 1,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'none',
    ),
    'field_assoc_level_value' => array(
      'label' => 'Level',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => 'node/[nid]/edit',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_level_extra_value' => array(
      'label' => 'Extra',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_level_extra_value',
      'table' => 'node_data_field_assoc_level_extra',
      'field' => 'field_assoc_level_extra_value',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsorship_booth_value' => array(
      'label' => 'Booth',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_sponsorship_booth_value',
      'table' => 'node_data_field_assoc_sponsorship_booth',
      'field' => 'field_assoc_sponsorship_booth_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsor_users_uid' => array(
      'label' => 'Authorized users',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 1,
      'id' => 'field_assoc_sponsor_users_uid',
      'table' => 'node_data_field_assoc_sponsor_users',
      'field' => 'field_assoc_sponsor_users_uid',
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'path' => array(
      'label' => 'Path',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'absolute' => 1,
      'exclude' => 1,
      'id' => 'path',
      'table' => 'node',
      'field' => 'path',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
    ),
    'title' => array(
      'label' => 'Sponsor',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 1,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_sponsor_logo_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<a href="[path]"><img src="[field_assoc_sponsor_logo_fid]" alt="[title]" /></a>',
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
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => '200x120_url',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_assoc_sponsor_logo_fid',
      'table' => 'node_data_field_assoc_sponsor_logo',
      'field' => 'field_assoc_sponsor_logo_fid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_sponsor_nid',
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
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship' => 'association_sponsorship',
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
    'field_assoc_level_conference_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        11 => '11',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_assoc_level_conference_value_many_to_one_op',
        'label' => 'Conference',
        'use_operator' => 0,
        'identifier' => 'field_assoc_level_conference_value_many_to_one',
        'bef_filter_description' => '',
        'bef_format' => 'default',
        'optional' => 0,
        'single' => 1,
        'remember' => 1,
        'reduce' => 0,
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
      ),
      'id' => 'field_assoc_level_conference_value_many_to_one',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value_many_to_one',
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_assoc_level_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        4 => '4',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_assoc_level_value_many_to_one',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_assoc_sponsorship_level_nid',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'type' => 'ul',
  ));
  $handler->override_option('path', 'admin/reports/sponsors/denver2012-platinum-logos');
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

  $views[$view->name] = $view;

  // Exported view: association_store_con_sponsor
  $view = new view;
  $view->name = 'association_store_con_sponsor';
  $view->description = 'DrupalCon sponsorship store';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('sorts', array(
    'field_assoc_level_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
      'relationship' => 'none',
    ),
    'sell_price' => array(
      'order' => 'DESC',
      'id' => 'sell_price',
      'table' => 'uc_products',
      'field' => 'sell_price',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
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
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship_level' => 'association_sponsorship_level',
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
    'field_assoc_level_conference_value_many_to_one' => array(
      'id' => 'field_assoc_level_conference_value_many_to_one',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value_many_to_one',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('css_class', 'drupalorg-3col-grid');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'grid');
  $handler->override_option('style_options', array(
    'columns' => '3',
    'alignment' => 'horizontal',
    'fill_single_line' => 1,
  ));
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser',
    'links' => 0,
    'comments' => 0,
  ));
  $handler = $view->new_display('page', 'Denver 2012', 'page_1');
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
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship_level' => 'association_sponsorship_level',
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
    'field_assoc_level_conference_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        11 => '11',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_assoc_level_conference_value_many_to_one',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('title', 'Sponsor DrupalCon Denver 2012');
  $handler->override_option('header', '<div class="clear-block">
<div class="grid-6 alpha"><h2>What is DrupalCon?</h2>
<p>DrupalCon is an international event that brings together the people who use, develop, design, and support the Drupal platform. More than just another trade show or industry conference, it’s a shared experience that seeks to inspire and engage. DrupalCon Denver 2012 will feature dozens of curated sessions and panels from some of the most influential people and brightest minds within the Drupal community and beyond, as well as countless opportunities for networking, code sprints, informal conversations, and more. Whether you’re new to the community, have been around a while, or are just curious to see what all the fuss is about, we have a place for you.</p>
<p><strong>March, 20 - 22, 2012</strong> at the<br />
<strong>Colorado Convention Center</strong> in <strong>Denver, Colorado</strong></p>

<h2>Why Sponsor at DrupalCon?</h2>
<p>Sponsoring DrupalCon is not only a great way to get your message before a targeted audience of Drupal users, developers, businesspeople, and other Web professionals, it’s also a great way to increase the equity of your brand as a company or organization that supports one of the fastest- growing open source software communities in the world.</p>
</div>

<div class="grid-6 omega">
<h2>DrupalCon by the Numbers</h2>
<p>The Drupal community is a diverse group, with a variety of interests, that span the globe. Thousands of these Drupal enthusiasts will be in attendance at DrupalCon Denver.</p>
<p><strong>Attendees by Job Position</strong> (based on San Francisco DrupalCon)</p>
<table><tbody>
<tr class="even"><th>25%</th> <th>19%</th> <th>14%</th> <th>11%</th> <th>31%</th></tr>
<tr class="even"><td>Corporate Leadership</td> <td>Project Managers</td> <td>Themers</td> <td>Designers</td> <td>Developers</td></tr>
</tbody></table>

<div class="grid-3 alpha"><table><tbody>
<tr class="even"><td><em>3,500</em></td><td>Denver 2012 <em>estimated</em></td></tr>
<tr class="odd"> <td>2,900</td><td>Chicago 2011</td></tr>
<tr class="even"><td>3,000</td><td>San Francisco 2010</td></tr>
<tr class="odd"> <td>1,400</td><td>Washington, D.C. 2009</td></tr>
<tr class="even"><td>800</td><td>Boston 2008</td></tr>
<tr class="odd"> <td>300</td><td>Sunnyvale 2007</td></tr>
<tr class="even"><td>150</td><td>Vancouver 2006</td></tr>
</tbody></table></div>

<div class="grid-3 omega"><table><tbody>
<tr class="even"><td>1,800</td><td>London 2011</td></tr>
<tr class="odd"> <td>1,200</td><td>Copenhagen 2010</td></tr>
<tr class="even"><td>750</td><td>Paris 2009</td></tr>
<tr class="odd"> <td>550</td><td>Szeged 2008</td></tr>
<tr class="even"><td>400</td><td>Barcelona 2007</td></tr>
<tr class="odd"> <td>25</td><td>Antwerp 2005</td></tr>
</tbody></table></div>

</div>
</div>

<p><br /></p>
<table>
<thead><tr>      <td></td>                                                               <th>Diamond</th>           <th>Platinum</th>          <th>Gold</th>              <th>Silver</th>            <th>Bronze</th></tr></thead>
<tbody>
<tr class="odd"> <th>Price</th>                                                          <td>$45,000</td>           <td>$25,000</td>           <td>$12,500</td>           <td>$7,500</td>            <td>$4,000</td></tr>
<tr class="even"><th>Quantities</th>                                                     <td>2</td>                 <td>6</td>                 <td>12</td>                <td>22</td>                <td>20</td></tr>
<tr class="odd"> <th>Conference passes</th>                                              <td>20</td>                <td>16</td>                <td>8</td>                 <td>5</td>                 <td>2</td></tr>
<tr class="even"><th>Exhibit hall</th>                                                   <td>20\'W × 8\'H × 10\'D</td> <td>20\'W × 8\'H × 10\'D</td> <td>10\'W × 8\'H × 10\'D</td> <td>10\'W × 8\'H × 10\'D</td> <td>10\'W × 8\'H × 10\'D</td></tr>
<tr class="odd"> <th>Premium event site placement</th>                                   <td>Yes</td>               <td>Yes</td>               <td></td>                  <td></td>                  <td></td></tr>
<tr class="even"><th>Event site: company logo, link, and description</th>                <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td></tr>
<tr class="odd"> <th>Logo on plenary screen</th>                                         <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td></tr>
<tr class="even"><th>Logo on program badge *</th>                                        <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Acknowledgement</td>   <td>Acknowledgement</td></tr>
<tr class="odd"> <th>Event web site ad †</th>                                            <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td></td></tr>
<tr class="even"><th>Registration desk handout</th>                                      <td>Yes</td>               <td>Yes</td>               <td></td>                  <td></td>                  <td></td></tr>
<tr class="odd"> <th>Value-add booklet ‡</th>                                            <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td></td></tr>
<tr class="even"><th>Named room</th>                                                     <td>Yes</td>               <td>Yes</td>               <td></td>                  <td></td>                  <td></td></tr>
<tr class="odd"> <th>Drupal Association panel and cocktail table</th>                    <td>4 tickets</td>         <td>2 tickets</td>         <td>2 tickets</td>         <td></td>                  <td></td></tr>
<tr class="even"><th>Jobs posting: bulletin board</th>                                   <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td></tr>
<tr class="odd"> <th>Special offer posting</th>                                          <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td></tr>
<tr class="even"><th>Keynote introdruction</th>                                          <td>Yes</td>               <td></td>                  <td></td>                  <td></td>                  <td></td></tr>
<tr class="odd"> <th>Day stage speaking opportunity</th>                                 <td>One 50 minute session on the Day Stage during Drupal Means Business Exhibit Hall Day</td> <td>One 50 minute Day Stage session on Tuesday or Wednesday;<br />or one 25 minute session on Thursday (limited availability)</td> <td>Participate in a panel or lightning talk</td> <td></td> <td></td></tr>
<tr class="even"><th>Drupal Means Business §</th>                                        <td>20 tickets</td>        <td>10 tickets</td>        <td>5 tickets</td>         <td>2 tickets</td>         <td>2 tickets</td></tr>
<tr class="odd"> <th><a href="http://twitter.com/#!/drupalcon">@drupalcon</a> tweet</th> <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td>               <td>Yes</td></tr>
<tr class="even"><th>Logo/link on event emails</th>                                      <td>Yes</td>               <td>Yes</td>               <td></td>                  <td></td>                  <td></td></tr>
<tr class="odd"> <th>Logo on main signage</th>                                           <td>Yes</td>               <td>Yes</td>               <td></td>                  <td></td>                  <td></td></tr>
</tbody>
</table>

<div class="clear-block"><div class="grid-4 alpha">
<p><small>* <strong>Program badge</strong>: The program badge replaces the traditional program guide. It is a printed piece that is easier to use and hooks on to your lanyard. It is smaller in size than the program guide, so there is only room for sponsor logos.</small></p>
<p><small>† <strong>Web ads</strong>: Diamond sponsors’ ads will be weighted 50% more than Platinum ads, which will be weighted 50% more than Gold sponsor ads, which will be weighted 50% more than Silver sponsor ads.</small></p>
</div><div class="grid-4">
<p><small>‡ <strong>Value-add booklet</strong>: This is a printed piece that goes in attendee tote bags. Sponsors who receive this benefit will provide an ad promoting something of value to attendees such as a special offer or a discount. This is a green solution to tote bag inserts and saves sponsors’ print budget as well as creates a way to draw traffic to booths and websites.</small></p>
</div><div class="grid-4 omega">
<p><small>§ <strong>Drupal Means Business</strong>: Drupal Business evaluators can buy a one day pass for about $50, to enter the sponsor fair on Thursday during DrupalCon. The Day Stage is located in the Sponsor Fair and all content that day will target this audience (case studies, best practices, etc.). Sponsor packages include a set number of Drupal Means Business passes, so you can invite your potential clients and use this day as a sales tool. The content will help you demonstrate that Drupal is the CMS platform of choice.</small></p>
</div>');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 1);
  $handler->override_option('path', 'sponsor/denver2012');
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

  $views[$view->name] = $view;

  // Exported view: association_store_sponsors
  $view = new view;
  $view->name = 'association_store_sponsors';
  $view->description = 'List of all published sponsors';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
    ),
  ));
  $handler->override_option('sorts', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
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
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsor' => 'association_sponsor',
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
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Sponsors');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'type' => 'ul',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
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
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('path', 'sponsor/sponsors');
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

  $views[$view->name] = $view;

  // Exported view: association_trainings
  $view = new view;
  $view->name = 'association_trainings';
  $view->description = 'Trainings';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'field_training_trainers_value' => array(
      'label' => 'Trainers',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_training_trainers_value',
      'table' => 'node_data_field_training_trainers',
      'field' => 'field_training_trainers_value',
      'relationship' => 'none',
    ),
    'field_training_link_url' => array(
      'label' => 'Full description',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'short',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_training_link_url',
      'table' => 'node_data_field_training_link',
      'field' => 'field_training_link_url',
      'relationship' => 'none',
    ),
    'sell_price' => array(
      'label' => 'Price',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'set_precision' => 0,
      'precision' => '0',
      'decimal' => '.',
      'separator' => ',',
      'format_plural' => 0,
      'format_plural_singular' => '1',
      'format_plural_plural' => '@count',
      'prefix' => '',
      'suffix' => '',
      'format' => 'uc_price',
      'revision' => 'themed',
      'exclude' => 0,
      'id' => 'sell_price',
      'table' => 'uc_products',
      'field' => 'sell_price',
      'relationship' => 'none',
    ),
    'stock' => array(
      'label' => 'Open seats',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'format_plural' => 0,
      'format_plural_singular' => '1',
      'format_plural_plural' => '@count',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'stock',
      'table' => 'uc_product_stock',
      'field' => 'stock',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_training' => 'association_training',
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
    'field_training_conference_nid' => array(
      'operator' => 'or',
      'value' => array(
        1484 => '1484',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'conference',
        'identifier' => 'conference',
        'label' => 'Conference',
        'optional' => 0,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_training_conference_nid',
      'table' => 'node_data_field_training_conference',
      'field' => 'field_training_conference_nid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
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
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'summary' => '',
    'columns' => array(
      'stock' => 'stock',
    ),
    'info' => array(
      'stock' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Admin', 'page_1');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_training' => 'association_training',
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
    'field_training_conference_nid' => array(
      'operator' => 'or',
      'value' => array(
        1484 => '1484',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'conference',
        'identifier' => 'conference',
        'label' => 'Conference',
        'optional' => 0,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_training_conference_nid',
      'table' => 'node_data_field_training_conference',
      'field' => 'field_training_conference_nid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('path', 'admin/reports/training');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Training',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
