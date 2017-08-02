<?php
/**
 * @file
 * drupalorg_issues.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalorg_issues_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_project_issue-comment_body'.
  $field_instances['comment-comment_node_project_issue-comment_body'] = array(
    'bueditor_profile' => -1,
    'bundle' => 'comment_node_project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_project_issue-field_attribute_as_volunteer'.
  $field_instances['comment-comment_node_project_issue-field_attribute_as_volunteer'] = array(
    'bundle' => 'comment_node_project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'When this issue is fixed, the project maintainer may assign credit with your attribution. <a href="/node/2451283">Learn more</a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_attribute_as_volunteer',
    'label' => 'Attribute this contribution',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_project_issue-field_attribute_contribution_to'.
  $field_instances['comment-comment_node_project_issue-field_attribute_contribution_to'] = array(
    'bundle' => 'comment_node_project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add organizations on your <a href="/user">user profile</a>.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_attribute_contribution_to',
    'label' => 'Attribute comment at organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_project_issue-field_for_customer'.
  $field_instances['comment-comment_node_project_issue-field_for_customer'] = array(
    'bundle' => 'comment_node_project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_for_customer',
    'label' => 'Attribute comment for customer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'STARTS_WITH',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'comment-comment_node_project_issue-field_issue_changes'.
  $field_instances['comment-comment_node_project_issue-field_issue_changes'] = array(
    'bundle' => 'comment_node_project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'nodechanges',
        'settings' => array(
          'files_display_mode' => 'fieldset_all_but_new',
        ),
        'type' => 'nodechanges_diff_default',
        'weight' => -1,
      ),
      'issuemetadata' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_issue_changes',
    'label' => 'Issue changes',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => 'nodechanges_diff_default',
      ),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-project_issue-body'.
  $field_instances['node-project_issue-body'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'issuemetadata' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'related_content' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 140,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Issue summary',
    'required' => 0,
    'settings' => array(
      'display_summary' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_assigned'.
  $field_instances['node-project_issue-field_issue_assigned'] = array(
    'bundle' => 'project_issue',
    'default_value' => array(
      0 => array(
        'target_id' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'token_formatters',
        'settings' => array(
          'check_access' => 1,
          'link' => '',
          'text' => '[user:project-issue-assignment-link]',
        ),
        'type' => 'token_formatters_entity_reference',
        'weight' => 5,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'token_formatters',
        'settings' => array(
          'check_access' => TRUE,
          'link' => '[entity:url]',
          'text' => '[entity:label]',
        ),
        'type' => 'token_formatters_entity_reference',
        'weight' => 5,
      ),
      'issuemetadata' => array(
        'label' => 'inline',
        'module' => 'token_formatters',
        'settings' => array(
          'check_access' => 1,
          'link' => '',
          'text' => '[user:project-issue-assignment-link]',
        ),
        'type' => 'token_formatters_entity_reference',
        'weight' => 6,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'token_formatters',
        'settings' => array(
          'check_access' => 1,
          'link' => '',
          'text' => '[user:project-issue-assignment-link]',
        ),
        'type' => 'token_formatters_entity_reference',
        'weight' => 3,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_assigned',
    'label' => 'Assigned',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_category'.
  $field_instances['node-project_issue-field_issue_category'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'issuemetadata' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_component'.
  $field_instances['node-project_issue-field_issue_component'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'issuemetadata' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_component',
    'label' => 'Component',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_credit'.
  $field_instances['node-project_issue-field_issue_credit'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'issuemetadata' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'nodechanges' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_credit',
    'label' => 'issue_credit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_files'.
  $field_instances['node-project_issue-field_issue_files'] = array(
    'bundle' => 'project_issue',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'extended_file_field',
        'settings' => array(
          'columns' => array(
            'cid' => 'cid',
            'filename' => 'filename',
            'filesize' => 'filesize',
            'uid' => 'uid',
          ),
          'extensionbehavior' => 'table',
          'extensionfilter' => 'all',
          'extensions' => 'patch,diff',
          'restrictbehavior' => 'toggle',
          'restrictdisplay' => 5,
          'showhidden' => 'table',
          'showuploadlink' => 0,
          'sortby' => 'reverse',
          'sortorder' => 'asc',
          'usedescriptionforfilename' => 1,
          'usefieldset' => 1,
        ),
        'type' => 'extended_file_field',
        'weight' => 50,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'extended_file_field',
        'settings' => array(
          'columns' => array(
            0 => 'filename',
            1 => 'filesize',
            2 => 'uid',
          ),
          'extensionbehavior' => 'exclude',
          'extensionfilter' => 'all',
          'extensions' => 'patch,diff',
          'restrictbehavior' => 'table',
          'restrictdisplay' => -1,
          'showhidden' => 'exclude',
          'showuploadlink' => 0,
          'sortby' => 'default',
          'sortorder' => 'asc',
          'usedescriptionforfilename' => 1,
          'usefieldset' => FALSE,
        ),
        'type' => 'extended_file_field',
        'weight' => 8,
      ),
      'issuemetadata' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 50,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_files',
    'label' => 'Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'issues',
      'file_extensions' => 'jpg jpeg gif png txt xls pdf ppt pps odt fodt ods fods odp fodp gz tgz patch diff zip test info po pot psd yml mov mp4 avi mkv',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'extended_file_field_collapsible' => 1,
        'extended_file_field_hidden_toggle' => 1,
        'extended_file_field_restrict_display' => 1,
        'extended_file_field_reverse_display' => 1,
        'extended_file_field_show_clear_contents' => 1,
        'extended_file_field_show_remove' => 0,
        'extended_file_field_widget_metadata' => array(
          'cid' => 'cid',
          'uid' => 'uid',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_parent'.
  $field_instances['node-project_issue-field_issue_parent'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'project_issue',
        'settings' => array(),
        'type' => 'issue_id',
        'weight' => 2,
      ),
      'issuemetadata' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'project_issue',
        'settings' => array(),
        'type' => 'issue_id',
        'weight' => 31,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_parent',
    'label' => 'Parent issue',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => 0,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_priority'.
  $field_instances['node-project_issue-field_issue_priority'] = array(
    'bundle' => 'project_issue',
    'default_value' => array(
      0 => array(
        'value' => 200,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'issuemetadata' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_priority',
    'label' => 'Priority',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_related'.
  $field_instances['node-project_issue-field_issue_related'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'project_issue',
        'settings' => array(),
        'type' => 'issue_id',
        'weight' => 3,
      ),
      'issuemetadata' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'project_issue',
        'settings' => array(),
        'type' => 'issue_id',
        'weight' => 32,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_related',
    'label' => 'Related issues',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_status'.
  $field_instances['node-project_issue-field_issue_status'] = array(
    'bundle' => 'project_issue',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'issuemetadata' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_issue_version'.
  $field_instances['node-project_issue-field_issue_version'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'issuemetadata' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_version',
    'label' => 'Version',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-project_issue-field_project'.
  $field_instances['node-project_issue-field_project'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'issuemetadata' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entity_types' => array(),
    'field_name' => 'field_project',
    'label' => 'Project',
    'module' => 'entityreference',
    'required' => 1,
    'settings' => array(
      'handler' => 'project_behavior',
      'handler_settings' => array(
        'behavior' => 'project',
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'project_core' => 'project_core',
          'project_distribution' => 'project_distribution',
          'project_drupalorg' => 'project_drupalorg',
          'project_module' => 'project_module',
          'project_theme' => 'project_theme',
          'project_theme_engine' => 'project_theme_engine',
          'project_translation' => 'project_translation',
        ),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'node',
      'user_register_form' => FALSE,
    ),
    'type' => 'entityreference',
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'STARTS_WITH',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-project_issue-taxonomy_vocabulary_9'.
  $field_instances['node-project_issue-taxonomy_vocabulary_9'] = array(
    'bundle' => 'project_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Before adding tags <a href="/node/1023102">read the issue tag guidelines</a>. Do <strong>NOT</strong> use tags for adding random keywords or duplicating any other fields.  Separate terms with a comma, not a space.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'diff_standard' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'issuemetadata' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'nodechanges' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 20,
      ),
      'related_content' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_9',
    'label' => 'Issue tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add organizations on your <a href="/user">user profile</a>.');
  t('Assigned');
  t('Attribute comment at organization');
  t('Attribute comment for customer');
  t('Attribute this contribution');
  t('Before adding tags <a href="/node/1023102">read the issue tag guidelines</a>. Do <strong>NOT</strong> use tags for adding random keywords or duplicating any other fields.  Separate terms with a comma, not a space.');
  t('Category');
  t('Comment');
  t('Component');
  t('Files');
  t('Issue changes');
  t('Issue summary');
  t('Issue tags');
  t('Parent issue');
  t('Priority');
  t('Project');
  t('Related issues');
  t('Status');
  t('Version');
  t('When this issue is fixed, the project maintainer may assign credit with your attribution. <a href="/node/2451283">Learn more</a>');
  t('issue_credit');

  return $field_instances;
}
