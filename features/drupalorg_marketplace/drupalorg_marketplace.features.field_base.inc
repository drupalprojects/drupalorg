<?php
/**
 * @file
 * drupalorg_marketplace.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalorg_marketplace_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'comment_body'.
  $field_bases['comment_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'comment',
    ),
    'field_name' => 'comment_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_budget'.
  $field_bases['field_budget'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_budget',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => 255,
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_contributions'.
  $field_bases['field_contributions'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contributions',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'text_processing' => 1,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_hosting_type'.
  $field_bases['field_hosting_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hosting_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'shared' => 'Shared',
        'managed' => 'Managed/Enterprise',
        'cloud' => 'Cloud',
        'vps' => 'VPS',
        'dedicated' => 'Dedicated',
        'reseller' => 'Reseller',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_link'.
  $field_bases['field_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_logo'.
  $field_bases['field_logo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => NULL,
      'description_field' => 0,
      'list_default' => 1,
      'list_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_org_issue_credit_count'.
  $field_bases['field_org_issue_credit_count'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_org_issue_credit_count',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_org_marketplace_request'.
  $field_bases['field_org_marketplace_request'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_org_marketplace_request',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No request',
        1 => 'Request listing in the Drupal services section',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_org_training_issue'.
  $field_bases['field_org_training_issue'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_org_training_issue',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'book' => 0,
        'casestudy' => 0,
        'changenotice' => 0,
        'forum' => 0,
        'image' => 0,
        'organization' => 0,
        'packaging_whitelist' => 0,
        'page' => 0,
        'project_issue' => 'project_issue',
        'project_project' => 0,
        'project_release' => 0,
        'story' => 0,
      ),
      'view' => array(
        'args' => array(
          0 => '',
        ),
        'display_name' => 'default',
        'view_name' => '--',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_org_training_request'.
  $field_bases['field_org_training_request'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_org_training_request',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No request',
        1 => 'Request listing in the Training section',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_organization_headquarters'.
  $field_bases['field_organization_headquarters'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_headquarters',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => 255,
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_organization_issue'.
  $field_bases['field_organization_issue'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_issue',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'book' => 0,
        'book_listing' => 0,
        'casestudy' => 0,
        'changenotice' => 0,
        'forum' => 0,
        'organization' => 0,
        'packaging_whitelist' => 0,
        'page' => 0,
        'project' => 0,
        'project_core' => 0,
        'project_distribution' => 0,
        'project_drupalorg' => 0,
        'project_issue' => 'project_issue',
        'project_module' => 0,
        'project_release' => 0,
        'project_theme' => 0,
        'project_theme_engine' => 0,
        'project_translation' => 0,
        'story' => 0,
      ),
      'view' => array(
        'args' => array(
          0 => '',
        ),
        'display_name' => 'default',
        'view_name' => '--',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_organization_list_rule'.
  $field_bases['field_organization_list_rule'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_list_rule',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'never' => 'Do not list',
        'all-providers' => 'All providers',
        'featured' => 'Featured providers',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_organization_security'.
  $field_bases['field_organization_security'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_security',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => 255,
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_organization_technologies'.
  $field_bases['field_organization_technologies'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_technologies',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'off' => 'Do not list',
        'on' => 'List in the Supporting Technologies section',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_organization_training_desc'.
  $field_bases['field_organization_training_desc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_training_desc',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => '',
      'text_processing' => 1,
    ),
    'translatable' => 0,
    'type' => 'text_long',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_organization_training_list'.
  $field_bases['field_organization_training_list'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_training_list',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'off' => 'Do not list',
        'on' => 'List in the Training section',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'organization',
  );

  // Exported field_base: 'field_organization_training_url'.
  $field_bases['field_organization_training_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_training_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
    'type_name' => 'organization',
  );

  // Exported field_base: 'taxonomy_vocabulary_48'.
  $field_bases['taxonomy_vocabulary_48'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxonomy_vocabulary_48',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_48',
          'parent' => 0,
        ),
      ),
      'required' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'taxonomy_vocabulary_50'.
  $field_bases['taxonomy_vocabulary_50'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxonomy_vocabulary_50',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_50',
          'parent' => 0,
        ),
      ),
      'required' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'taxonomy_vocabulary_52'.
  $field_bases['taxonomy_vocabulary_52'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'taxonomy_vocabulary_52',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_52',
          'parent' => 0,
        ),
      ),
      'required' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
