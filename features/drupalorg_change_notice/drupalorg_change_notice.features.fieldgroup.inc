<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function drupalorg_change_notice_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_recorded
  $groups['changenotice-group_recorded'] = array(
    'group_type' => 'standard',
    'type_name' => 'changenotice',
    'group_name' => 'group_recorded',
    'label' => 'Updates Done (doc team, etc.)',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Record information here about what updates need to be made to documentation and code that are not part of the committed patch. Use the Details field at the bottom to be specific about the needed updates, and the Progress field to record progress in making the updates.',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
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
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_online_recorded',
      '1' => 'field_theme_recorded',
      '2' => 'field_module_recorded',
      '3' => 'field_examples_recorded',
      '4' => 'field_coder_recorded',
      '5' => 'field_coder_update_recorded',
      '6' => 'field_other_recorded',
      '7' => 'field_other_details',
      '8' => 'field_update_progress',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Updates Done (doc team, etc.)');

  return $groups;
}
