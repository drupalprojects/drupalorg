<?php
/**
 * @file
 * drupalorg_documentation.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalorg_documentation_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_documentation_changes'.
  $field_bases['field_documentation_changes'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_documentation_changes',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'nodechanges',
    'settings' => array(
      'hide_core_revision_log' => 1,
      'properties' => array(
        'author' => 0,
        'created' => 0,
        'title' => 'title',
      ),
      'revision_comment_field' => 'comment_body',
    ),
    'translatable' => 0,
    'type' => 'nodechanges_revision_diff',
  );

  // Exported field_base: 'field_related_content'.
  $field_bases['field_related_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_content',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
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
          'type' => 'none',
        ),
        'target_bundles' => array(
          'changenotice' => 'changenotice',
          'documentation' => 'documentation',
          'guide' => 'guide',
          'page' => 'page',
          'post' => 'post',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_documentation_status'.
  $field_bases['field_documentation_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_documentation_status',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Incomplete' => 'Incomplete',
        'Out of date' => 'Out of date',
        'Deprecated' => 'Deprecated',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_guide_changes'.
  $field_bases['field_guide_changes'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_guide_changes',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'nodechanges',
    'settings' => array(
      'hide_core_revision_log' => 1,
      'properties' => array(
        'author' => 0,
        'created' => 0,
        'title' => 'title',
      ),
      'revision_comment_field' => 'comment_body',
    ),
    'translatable' => 0,
    'type' => 'nodechanges_revision_diff',
  );

  // Exported field_base: 'field_guide_status'.
  $field_bases['field_guide_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_guide_status',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Seeking co-maintainer(s)' => 'Seeking co-maintainer(s)',
        'Needs maintainers' => 'Needs maintainers',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_summary'.
  $field_bases['field_summary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_summary',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 140,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'og_group_ref_documentation'.
  $field_bases['og_group_ref_documentation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'og_group_ref_documentation',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'og',
      'handler_settings' => array(
        'behaviors' => array(
          'og_behavior' => array(
            'status' => TRUE,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'membership_type' => 'og_membership_type_default',
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'guide' => 'guide',
        ),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
