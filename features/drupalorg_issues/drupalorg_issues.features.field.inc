<?php
/**
 * @file
 * drupalorg_issues.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function drupalorg_issues_field_default_fields() {
  $fields = array();

  // Exported field: 'node-project_issue-body'.
  $fields['node-project_issue-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'diff_standard' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'trim_length' => '1400',
          'type' => 'text_summary_or_trimmed',
          'weight' => '5',
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
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_assigned'.
  $fields['node-project_issue-field_issue_assigned'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_assigned',
      'foreign keys' => array(
        'users' => array(
          'columns' => array(
            'target_id' => 'uid',
          ),
          'table' => 'users',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'assigned',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'project_field' => 'field_project',
          'sort' => array(
            'direction' => 'ASC',
            'field' => 'none',
            'property' => 'name',
            'type' => 'property',
          ),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'user',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => array(
        0 => array(
          'target_id' => '0',
        ),
      ),
      'deleted' => '0',
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
          'weight' => '5',
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
          'weight' => '6',
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
          'weight' => '3',
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
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_category'.
  $fields['node-project_issue-field_issue_category'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_category',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Bug report',
          2 => 'Task',
          3 => 'Feature request',
          4 => 'Support request',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
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
          'weight' => '5',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
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
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_component'.
  $fields['node-project_issue-field_issue_component'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_component',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => 'dereference_list_allowed_list_values',
        'dereferenced_field' => 'field_project_components',
        'entityreference_field' => 'field_project',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
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
          'weight' => '3',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
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
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_files'.
  $fields['node-project_issue-field_issue_files'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_files',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'extended_file_field',
          'settings' => array(
            'columns' => array(
              0 => 'cid',
              1 => 'filename',
              2 => 'filesize',
              3 => 'uid',
            ),
            'extensionbehavior' => 'table',
            'extensionfilter' => 'all',
            'extensions' => 'patch,diff',
            'restrictbehavior' => 'toggle',
            'restrictdisplay' => 5,
            'showhidden' => 'table',
            'showuploadlink' => 1,
            'sortby' => 'reverse',
            'sortorder' => 'asc',
            'usedescriptionforfilename' => 1,
            'usefieldset' => TRUE,
          ),
          'type' => 'extended_file_field',
          'weight' => '50',
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
          'weight' => '50',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '50',
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
        'file_extensions' => 'jpg jpeg gif png txt xls pdf ppt pps odt ods odp gz tgz patch diff zip test info po pot psd yml mov mp4 avi mkv',
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
            'pift_message' => 'pift_message',
            'uid' => 'uid',
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '50',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_parent'.
  $fields['node-project_issue-field_issue_parent'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_parent',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'issues',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
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
          'weight' => '0',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'project_issue',
          'settings' => array(),
          'type' => 'issue_id',
          'weight' => '31',
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
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_priority'.
  $fields['node-project_issue-field_issue_priority'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_priority',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          400 => 'Critical',
          300 => 'Major',
          200 => 'Normal',
          100 => 'Minor',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => array(
        0 => array(
          'value' => '200',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
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
          'weight' => '4',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '5',
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
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_related'.
  $fields['node-project_issue-field_issue_related'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_related',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'issues',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
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
          'weight' => '0',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'project_issue',
          'settings' => array(),
          'type' => 'issue_id',
          'weight' => '32',
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
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_status'.
  $fields['node-project_issue-field_issue_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Active',
          13 => 'Needs work',
          8 => 'Needs review',
          14 => 'Reviewed & tested by the community',
          15 => 'Patch (to be ported)',
          2 => 'Fixed',
          4 => 'Postponed',
          16 => 'Postponed (maintainer needs more info)',
          3 => 'Closed (duplicate)',
          5 => 'Closed (won\'t fix)',
          6 => 'Closed (works as designed)',
          18 => 'Closed (cannot reproduce)',
          7 => 'Closed (fixed)',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
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
          'weight' => '0',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '6',
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
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_issue_version'.
  $fields['node-project_issue-field_issue_version'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_issue_version',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => 'project_release_version_allowed_values',
        'entityreference_field' => 'field_project',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
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
          'weight' => '2',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
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
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-project_issue-field_project'.
  $fields['node-project_issue-field_project'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_project',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'property' => 'title',
            'type' => 'property',
          ),
          'target_bundles' => array(
            'project' => 'project',
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
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '0',
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
          'weight' => '1',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '0',
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
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-project_issue-taxonomy_vocabulary_9'.
  $fields['node-project_issue-taxonomy_vocabulary_9'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_9',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'vocabulary_9',
            'parent' => 0,
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'project_issue',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Before adding tags <a href="/node/1023102">read the issue tag guidelines</a>. Do <strong>NOT</strong> use tags for adding random keywords or duplicating any other fields.  Separate terms with a comma, not a space.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
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
          'weight' => '7',
        ),
        'nodechanges' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '20',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_9',
      'label' => 'Issue tags',
      'required' => '0',
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
        'weight' => '0',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Assigned');
  t('Before adding tags <a href="/node/1023102">read the issue tag guidelines</a>. Do <strong>NOT</strong> use tags for adding random keywords or duplicating any other fields.  Separate terms with a comma, not a space.');
  t('Category');
  t('Component');
  t('Files');
  t('Issue summary');
  t('Issue tags');
  t('Parent issue');
  t('Priority');
  t('Project');
  t('Related issues');
  t('Status');
  t('Version');

  return $fields;
}
