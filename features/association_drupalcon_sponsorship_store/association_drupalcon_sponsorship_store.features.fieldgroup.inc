<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function association_drupalcon_sponsorship_store_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_sponsorship_conference
  $groups['association_sponsorship-group_sponsorship_conference'] = array(
    'group_type' => 'standard',
    'type_name' => 'association_sponsorship',
    'group_name' => 'group_sponsorship_conference',
    'label' => 'Conference',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '8',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '8',
    'fields' => array(
      '0' => 'field_assoc_sponsorship_sponsor',
      '1' => 'field_assoc_sponsorship_level',
      '2' => 'field_assoc_sponsorship_booth',
    ),
  );

  // Exported group: group_sponsorship_web_ad
  $groups['association_sponsorship-group_sponsorship_web_ad'] = array(
    'group_type' => 'standard',
    'type_name' => 'association_sponsorship',
    'group_name' => 'group_sponsorship_web_ad',
    'label' => 'Web ad',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '9',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '9',
    'fields' => array(
      '0' => 'field_sponsorship_web_image',
      '1' => 'field_sponsorship_web_url',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Conference');
  t('Web ad');

  return $groups;
}
