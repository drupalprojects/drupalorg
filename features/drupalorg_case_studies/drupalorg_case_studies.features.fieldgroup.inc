<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function drupalorg_case_studies_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_modules
  $groups['casestudy-group_modules'] = array(
    'group_type' => 'standard',
    'type_name' => 'casestudy',
    'group_name' => 'group_modules',
    'label' => 'Modules/Themes/Distributions',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'Use the autocomplete widget to select significant contributed projects used, and expand on their use in the text area that follows. The reader will benefit from a greater understanding of what other developers and themers selected and why. This also rewards those who contribute to modules, themes and distributions. 
<br /><br />
Specify at least 4 key contributed projects.
<br /><br />',
      ),
      'display' => array(
        'weight' => '3',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_module',
      '1' => 'field_module_selection',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Modules/Themes/Distributions');

  return $groups;
}
