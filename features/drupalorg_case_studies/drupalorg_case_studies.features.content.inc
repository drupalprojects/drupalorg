<?php

/**
 * Implementation of hook_content_default_fields().
 */
function drupalorg_case_studies_content_default_fields() {
  $fields = array();

  // Exported field: field_community
  $fields['casestudy-field_community'] = array(
    'field_name' => 'field_community',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_community][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Community contributions',
      'weight' => '4',
      'description' => 'Community contributions are what make Drupal great. Highlight any contributions made back into the community as a result of this project. Include patches, modules, themes, documentation, new community members, and anything else of benefit to the Drupal community.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_developed
  $fields['casestudy-field_developed'] = array(
    'field_name' => 'field_developed',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_developed][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project team',
      'weight' => '7',
      'description' => 'Use this text area to record organizations or team members not registered with Drupal.org. You can also use this field to explain how many developers, designers, project managers, etc. were involved with the project and how they contributed to the outcome.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_developed_org
  $fields['casestudy-field_developed_org'] = array(
    'field_name' => 'field_developed_org',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'organization' => 'organization',
      'book_listing' => 0,
      'book' => 0,
      'casestudy' => 0,
      'changenotice' => 0,
      'forum' => 0,
      'image' => 0,
      'project_issue' => 0,
      'packaging_whitelist' => 0,
      'page' => 0,
      'project_project' => 0,
      'project_release' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'starts_with',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_developed_org][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Organizations involved',
      'weight' => '5',
      'description' => 'Include the organizations that contributed to this project. Use the autocomplete widget if they exist on Drupal.org as organization nodes; otherwise, use the Project team text field below.

',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_goals
  $fields['casestudy-field_goals'] = array(
    'field_name' => 'field_goals',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_goals][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Describe the project (goals, requirements and outcome)',
      'weight' => '2',
      'description' => 'Discuss the project\'s goals and requirements, timeline and major milestones. What makes your project special? What project management approach you used? What was the outcome of the project? What business problems were solved? What results were achieved (e.g., increased traffic, better performance, etc.) as a result of using Drupal for this project?<br /><br />',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_images
  $fields['casestudy-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'grid-8_default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '1800x1800',
      'min_resolution' => '620x440',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Additional screenshots',
      'weight' => '8',
      'description' => 'Upload 2-3 additional screenshots of different pages or significant site features. Please include alternate text (for search engines and accessibility reasons).
<br />
Preferred file format - PNG.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_link
  $fields['casestudy-field_link'] = array(
    'field_name' => 'field_link',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '1',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => '',
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Completed Drupal site or project URL',
      'weight' => 0,
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_mainimage
  $fields['casestudy-field_mainimage'] = array(
    'field_name' => 'field_mainimage',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      '4' => array(
        'format' => 'case588x306_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'grid-3_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'grid-8_default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '620x440',
      'min_resolution' => '620x440',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Primary screenshot',
      'weight' => '-4',
      'description' => 'Use the homepage unless you can provide a strong case not to. Preferred format: PNG. No drop shadow or whitespace on the edges.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_module
  $fields['casestudy-field_module'] = array(
    'field_name' => 'field_module',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_modules',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project_project' => 'project_project',
      'book_listing' => 0,
      'book' => 0,
      'casestudy' => 0,
      'changenotice' => 0,
      'forum' => 0,
      'image' => 0,
      'project_issue' => 0,
      'organization' => 0,
      'packaging_whitelist' => 0,
      'page' => 0,
      'project_release' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'starts_with',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_module][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Key modules/theme/distribution used',
      'weight' => '4',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_module_selection
  $fields['casestudy-field_module_selection'] = array(
    'field_name' => 'field_module_selection',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_modules',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_module_selection][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Why these modules/theme/distribution were chosen',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_overview
  $fields['casestudy-field_overview'] = array(
    'field_name' => 'field_overview',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'trimmed',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '6',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_overview][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Why Drupal was chosen',
      'weight' => '1',
      'description' => 'Describe which CMSs/frameworks you\'ve considered and why you\'ve chosen Drupal. How Drupal met your project\'s specific needs.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profiles
  $fields['casestudy-field_profiles'] = array(
    'field_name' => 'field_profiles',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '3' => 0,
      '34' => 0,
      '32' => 0,
      '16' => 0,
      '30' => 0,
      '22' => 0,
      '20' => 0,
      '24' => 0,
      '12' => 0,
      '36' => 0,
      '28' => 0,
      '26' => 0,
      '4' => 0,
      '14' => 0,
      '7' => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'starts_with',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_profiles][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Team members',
      'weight' => '6',
      'description' => 'Use the autocomplete widget if team members or significant contributors are Drupal.org users; otherwise, use the Project team text field below.',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_status
  $fields['casestudy-field_status'] = array(
    'field_name' => 'field_status',
    'type_name' => 'casestudy',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Community
Featured
Hidden',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Community',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '10',
      'description' => 'Choose "Featured" to promote case study to "Featured showcase" section.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional screenshots');
  t('Community contributions');
  t('Completed Drupal site or project URL');
  t('Describe the project (goals, requirements and outcome)');
  t('Key modules/theme/distribution used');
  t('Organizations involved');
  t('Primary screenshot');
  t('Project team');
  t('Status');
  t('Team members');
  t('Why Drupal was chosen');
  t('Why these modules/theme/distribution were chosen');

  return $fields;
}
