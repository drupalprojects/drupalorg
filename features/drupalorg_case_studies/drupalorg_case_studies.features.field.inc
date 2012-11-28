<?php
/**
 * @file
 * drupalorg_case_studies.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function drupalorg_case_studies_field_default_fields() {
  $fields = array();

  // Exported field: 'node-casestudy-body'.
  $fields['node-casestudy-body'] = array(
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
      'bundle' => 'casestudy',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The Case studies will be used to feature well-built and well-designed Drupal sites.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'trim_length' => '1400',
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Brief overview',
      'required' => 0,
      'settings' => array(
        'display_summary' => TRUE,
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
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-casestudy-field_community'.
  $fields['node-casestudy-field_community'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_community',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'casestudy',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_community][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => 'Community contributions are what make Drupal great. If this project contributed modules, themes, documentation, patches to core or a contributed module, introduced new community members, gained a sponsor for a Drupal event, or anything else that will benefit the community, share it here.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_community',
      'label' => 'Community contributions',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '4',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-casestudy-field_developed'.
  $fields['node-casestudy-field_developed'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_developed',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'casestudy',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_developed][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => 'Enter the names of organizations and team members that can\'t be referenced in the autocomplete fields above. Also, feel free to add more description about the team.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_developed',
      'label' => 'Project team',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '7',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '7',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-casestudy-field_developed_org'.
  $fields['node-casestudy-field_developed_org'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_developed_org',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_entity' => array(
          0 => 'target_id',
        ),
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'target_bundles' => array(
            'organization' => 'organization',
          ),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_developed_org][0][nid][nid',
        ),
      ),
      'deleted' => '0',
      'description' => 'Include the organizations that contributed to this project. You can reference organizations that appear in <a href="http://drupal.org/marketplace-preview">Marketplace</a>. If the organization is not listed, enter it in the text field below.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '5',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '5',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '5',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '5',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_developed_org',
      'label' => 'Organizations involved',
      'required' => FALSE,
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
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-casestudy-field_goals'.
  $fields['node-casestudy-field_goals'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_goals',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'casestudy',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_goals][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_goals',
      'label' => 'Describe the project (goals, requirements and outcome)',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '2',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '10',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-casestudy-field_images'.
  $fields['node-casestudy-field_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_images',
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
      'module' => 'image',
      'settings' => array(
        'default_image' => NULL,
        'description_field' => '1',
        'list_default' => 1,
        'list_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
      'type_name' => 'casestudy',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => '',
      'deleted' => '0',
      'description' => 'Upload additional screenshots or images. Please include alternate text (for search engines and accessibility reasons).
Preferred file format - PNG.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '8',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '8',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '8',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '8',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_images',
      'label' => 'Additional screenshots',
      'required' => FALSE,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '1800x1800',
        'min_resolution' => '620x440',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'weight' => '8',
      'widget' => array(
        'active' => '1',
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
          'use_default_image' => 0,
        ),
        'type' => 'image_image',
        'weight' => '8',
      ),
      'widget_type' => 'imagefield_widget',
    ),
  );

  // Exported field: 'node-casestudy-field_link'.
  $fields['node-casestudy-field_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
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
      'translatable' => '0',
      'type' => 'link_field',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'url' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_link',
      'label' => 'Completed Drupal site or project URL',
      'required' => FALSE,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => '',
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'weight' => '0',
      'widget' => array(
        'active' => '1',
        'module' => 'link',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'link_field',
        'weight' => '0',
      ),
      'widget_type' => 'link',
    ),
  );

  // Exported field: 'node-casestudy-field_mainimage'.
  $fields['node-casestudy-field_mainimage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_mainimage',
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
      'module' => 'image',
      'settings' => array(
        'default_image' => NULL,
        'description_field' => '0',
        'list_default' => 1,
        'list_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
      'type_name' => 'casestudy',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => '',
      'deleted' => '0',
      'description' => 'Generally, the home page or a visually striking screenshot, with clear labeling/branding, should be used. 
Preferred file format - PNG. 
Height must be equal to at least 70% of image\'s width for screenshots to look good with various imagecache presets we use.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-4',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-4',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-4',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-4',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-4',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-4',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_mainimage',
      'label' => 'Primary screenshot',
      'required' => FALSE,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '1800x1800',
        'min_resolution' => '620x440',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'weight' => '-4',
      'widget' => array(
        'active' => '1',
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
          'use_default_image' => 0,
        ),
        'type' => 'image_image',
        'weight' => '-4',
      ),
      'widget_type' => 'imagefield_widget',
    ),
  );

  // Exported field: 'node-casestudy-field_module'.
  $fields['node-casestudy-field_module'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_module',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_entity' => array(
          0 => 'target_id',
        ),
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'target_bundles' => array(
            'project_project' => 'project_project',
          ),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_module][0][nid][nid',
        ),
      ),
      'deleted' => '0',
      'description' => 'Tell us the key modules, theme or distribution used. In the future, we can use this data in other ways.
',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '4',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '4',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '4',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_module',
      'label' => 'Key modules/theme/distribution used',
      'required' => FALSE,
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
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-casestudy-field_module_selection'.
  $fields['node-casestudy-field_module_selection'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_module_selection',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'casestudy',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_module_selection][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => 'Why did you choose these modules, specific theme or distribution over others available? Were they created for the project? How was each of them an integral to the success of your project?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'full' => array(
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
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_module_selection',
      'label' => 'Why these modules/theme/distribution were chosen',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '5',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '10',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-casestudy-field_overview'.
  $fields['node-casestudy-field_overview'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_overview',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'casestudy',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_overview][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_trimmed',
          'weight' => '-1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_overview',
      'label' => 'Why Drupal was chosen',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '-1',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '4',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '-1',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-casestudy-field_profiles'.
  $fields['node-casestudy-field_profiles'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_profiles',
      'foreign keys' => array(
        'users' => array(
          'columns' => array(
            'target_id' => 'uid',
          ),
          'table' => 'users',
        ),
      ),
      'indexes' => array(
        'target_entity' => array(
          0 => 'target_id',
        ),
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'target_bundles' => array(),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'user',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_profiles][0][uid][uid',
        ),
      ),
      'deleted' => '0',
      'description' => 'Include the Drupal.org profiles of the project team members. If anyone doesn\'t have an account on drupal.org, add them to the text box below.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '6',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '6',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '6',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '6',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => TRUE,
          ),
          'type' => 'entityreference_label',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_profiles',
      'label' => 'Team members',
      'required' => FALSE,
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
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-casestudy-field_status'.
  $fields['node-casestudy-field_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_status',
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
          'Community' => 'Community',
          'Featured' => 'Featured',
          'Hidden' => 'Hidden',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'casestudy',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => array(
        0 => array(
          'value' => 'Community',
        ),
      ),
      'deleted' => '0',
      'description' => 'Choose "Featured" to promote case study to "Featured showcase" section.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '13',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '13',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '13',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '13',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_status',
      'label' => 'Status',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '13',
      'widget' => array(
        'active' => '1',
        'module' => 'options',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'options_buttons',
        'weight' => '13',
      ),
      'widget_type' => 'optionwidgets_buttons',
    ),
  );

  // Exported field: 'node-casestudy-taxonomy_vocabulary_50'.
  $fields['node-casestudy-taxonomy_vocabulary_50'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_50',
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
            'vocabulary' => 'vocabulary_50',
            'parent' => 0,
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'List related sector(s)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_50',
      'label' => 'Sectors',
      'required' => '0',
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-casestudy-upload'.
  $fields['node-casestudy-upload'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'upload',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'default_file' => 0,
        'display_default' => '1',
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'casestudy',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_table',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_table',
          'weight' => 0,
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_table',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => NULL,
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'upload',
      'label' => 'File attachments',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => '',
        'file_extensions' => 'jpg jpeg gif png txt xls pdf ppt pps odt ods odp gz tgz patch diff zip test info po pot psd',
        'max_filesize' => '1 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional screenshots');
  t('Brief overview');
  t('Choose "Featured" to promote case study to "Featured showcase" section.');
  t('Community contributions');
  t('Community contributions are what make Drupal great. If this project contributed modules, themes, documentation, patches to core or a contributed module, introduced new community members, gained a sponsor for a Drupal event, or anything else that will benefit the community, share it here.');
  t('Completed Drupal site or project URL');
  t('Describe the project (goals, requirements and outcome)');
  t('Enter the names of organizations and team members that can\'t be referenced in the autocomplete fields above. Also, feel free to add more description about the team.');
  t('File attachments');
  t('Generally, the home page or a visually striking screenshot, with clear labeling/branding, should be used. 
Preferred file format - PNG. 
Height must be equal to at least 70% of image\'s width for screenshots to look good with various imagecache presets we use.');
  t('Include the Drupal.org profiles of the project team members. If anyone doesn\'t have an account on drupal.org, add them to the text box below.');
  t('Include the organizations that contributed to this project. You can reference organizations that appear in <a href="http://drupal.org/marketplace-preview">Marketplace</a>. If the organization is not listed, enter it in the text field below.');
  t('Key modules/theme/distribution used');
  t('List related sector(s)');
  t('Organizations involved');
  t('Primary screenshot');
  t('Project team');
  t('Sectors');
  t('Status');
  t('Team members');
  t('Tell us the key modules, theme or distribution used. In the future, we can use this data in other ways.
');
  t('The Case studies will be used to feature well-built and well-designed Drupal sites.');
  t('Upload additional screenshots or images. Please include alternate text (for search engines and accessibility reasons).
Preferred file format - PNG.');
  t('Why Drupal was chosen');
  t('Why did you choose these modules, specific theme or distribution over others available? Were they created for the project? How was each of them an integral to the success of your project?');
  t('Why these modules/theme/distribution were chosen');

  return $fields;
}
