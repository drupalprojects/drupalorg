<?php

/**
 * Implementation of hook_content_default_fields().
 */
function drupalorg_change_notice_content_default_fields() {
  $fields = array();

  // Exported field: field_change_to
  $fields['changenotice-field_change_to'] = array(
    'field_name' => 'field_change_to',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_change_to][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Introduced in version',
      'weight' => '-2',
      'description' => 'Enter the version this change was first applied in. Examples: 8.0.0-ALPHA3, 7.5, 7.x-3.2',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_change_to_branch
  $fields['changenotice-field_change_to_branch'] = array(
    'field_name' => 'field_change_to_branch',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_change_to_branch][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Introduced in branch',
      'weight' => '-3',
      'description' => 'Enter the branch this change was first applied in. Examples: 8.0.x, 7.x-3.x',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_coder_recorded
  $fields['changenotice-field_coder_recorded'] = array(
    'field_name' => 'field_coder_recorded',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not done
1|Coder review done',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Coder Review',
      'weight' => '16',
      'description' => 'Review expressions in the <a href="http://drupal.org/project/coder">Coder Review module</a>.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_coder_update_recorded
  $fields['changenotice-field_coder_update_recorded'] = array(
    'field_name' => 'field_coder_update_recorded',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '17',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not done
1|Coder upgrade done',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Coder Upgrade',
      'weight' => '17',
      'description' => 'Upgrade routines in the <a href="http://drupal.org/project/coder">Coder Upgrade module</a>',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_description
  $fields['changenotice-field_description'] = array(
    'field_name' => 'field_description',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
          '_error_element' => 'default_value_widget][field_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Description',
      'weight' => 0,
      'description' => 'Describe the change, and its impact on site users, site builders, themers, and module developers. If appropriate, give before/after code samples. Good examples: <a href="http://drupal.org/update/modules/6/7#drupal_set_title">6/7 module update guide section</a>, <a href="http://drupal.org/update/themes/6/7#search-result-headings">6/7 theme update guide section</a> (though it is not necessary to link to the issue).',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_examples_recorded
  $fields['changenotice-field_examples_recorded'] = array(
    'field_name' => 'field_examples_recorded',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not done
1|Examples for developers done',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Examples project',
      'weight' => '15',
      'description' => 'Example modules in the <a href="http://drupal.org/project/examples">Examples for Developers project</a>',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_impacts
  $fields['changenotice-field_impacts'] = array(
    'field_name' => 'field_impacts',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '1',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '1|Site builders, administrators, editors
2|Module developers
3|Themers',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Impacts',
      'weight' => '1',
      'description' => 'Check all that apply - who does this change impact?',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_issues
  $fields['changenotice-field_issues'] = array(
    'field_name' => 'field_issues',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'issue_id',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'issue_id',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
      'project_issue' => 'project_issue',
      'book' => 0,
      'changenotice' => 0,
      'forum' => 0,
      'image' => 0,
      'organization' => 0,
      'packaging_whitelist' => 0,
      'page' => 0,
      'project_project' => 0,
      'project_release' => 0,
      'showcase' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_issues][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Issues',
      'weight' => '-1',
      'description' => 'Enter all issues related to this change.',
      'type' => 'project_issue_nodereference_auto',
      'module' => 'project_issue',
    ),
  );

  // Exported field: field_module_recorded
  $fields['changenotice-field_module_recorded'] = array(
    'field_name' => 'field_module_recorded',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not done
1|Module developer documentation done',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Module developer documentation',
      'weight' => '14',
      'description' => 'Pages within the <a href="http://drupal.org/developing/modules">Module Developer\'s Guide</a>, <a href="http://drupal.org/node/326">Working with the Drupal API</a>, and other sections of <a href="http://drupal.org/documentation/develop">Develop for Drupal</a>.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_online_recorded
  $fields['changenotice-field_online_recorded'] = array(
    'field_name' => 'field_online_recorded',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not done
1|Generic online documentation done',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Online documentation',
      'weight' => '12',
      'description' => 'Individual module documentation pages (drupal.org/documentation/modules/[module_name]), and other pages within the <a href="http://drupal.org/documentation/administer">Administration Guide</a>, <a href="http://drupal.org/documentation/install">Installation Guide</a>, <a href="http://drupal.org/documentation/structure">Structure Guide</a>, and <a href="http://drupal.org/documentation/build">Site Builders Guide</a>.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_other_details
  $fields['changenotice-field_other_details'] = array(
    'field_name' => 'field_other_details',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '19',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
          '_error_element' => 'default_value_widget][field_other_details][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Details',
      'weight' => '19',
      'description' => 'Enter details of any needed updates (URLs of specific pages to be updated, what the coder routines or examples should contain, etc.).',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_other_recorded
  $fields['changenotice-field_other_recorded'] = array(
    'field_name' => 'field_other_recorded',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '18',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not done
1|Other updates done',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 1,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Other',
      'weight' => '18',
      'description' => 'Anything not included in categories above. Add details to the Details field below.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_project
  $fields['changenotice-field_project'] = array(
    'field_name' => 'field_project',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project_project' => 'project_project',
      'book' => 0,
      'changenotice' => 0,
      'forum' => 0,
      'image' => 0,
      'project_issue' => 0,
      'organization' => 0,
      'packaging_whitelist' => 0,
      'page' => 0,
      'project_release' => 0,
      'showcase' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => '3060',
          '_error_element' => 'default_value_widget][field_project][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project',
      'weight' => '-4',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_theme_recorded
  $fields['changenotice-field_theme_recorded'] = array(
    'field_name' => 'field_theme_recorded',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not done
1|Theming guide done',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Theming guide',
      'weight' => '13',
      'description' => 'Pages within the <a href="http://drupal.org/documentation/theme">Theming Guide</a>.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_update_progress
  $fields['changenotice-field_update_progress'] = array(
    'field_name' => 'field_update_progress',
    'type_name' => 'changenotice',
    'display_settings' => array(
      'weight' => '20',
      'parent' => 'group_recorded',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_update_progress][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Progress',
      'weight' => '20',
      'description' => 'Use this field to record progress on making the needed updates.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Coder Review');
  t('Coder Upgrade');
  t('Description');
  t('Details');
  t('Examples project');
  t('Impacts');
  t('Introduced in branch');
  t('Introduced in version');
  t('Issues');
  t('Module developer documentation');
  t('Online documentation');
  t('Other');
  t('Progress');
  t('Project');
  t('Theming guide');

  return $fields;
}
