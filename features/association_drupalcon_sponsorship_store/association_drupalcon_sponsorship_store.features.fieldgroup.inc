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
    'weight' => '-2',
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
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_sponsorship_web_image',
      '1' => 'field_sponsorship_web_url',
    ),
  );

  // Exported group: group_assoc_level_coupon1
  $groups['association_sponsorship_level-group_assoc_level_coupon1'] = array(
    'group_type' => 'standard',
    'type_name' => 'association_sponsorship_level',
    'group_name' => 'group_assoc_level_coupon1',
    'label' => 'Coupon 1',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '15',
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '15',
    'fields' => array(
      '0' => 'field_assoc_level_coupon1_count',
      '1' => 'field_assoc_level_coupon1_prod',
      '2' => 'field_assoc_level_coupon1_value',
      '3' => 'field_assoc_level_coupon1_expire',
    ),
  );

  // Exported group: group_assoc_level_coupon2
  $groups['association_sponsorship_level-group_assoc_level_coupon2'] = array(
    'group_type' => 'standard',
    'type_name' => 'association_sponsorship_level',
    'group_name' => 'group_assoc_level_coupon2',
    'label' => 'Coupon 2',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '16',
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '16',
    'fields' => array(
      '0' => 'field_assoc_level_coupon2_count',
      '1' => 'field_assoc_level_coupon2_prod',
      '2' => 'field_assoc_level_coupon2_value',
      '3' => 'field_assoc_level_coupon2_expire',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Conference');
  t('Coupon 1');
  t('Coupon 2');
  t('Web ad');

  return $groups;
}
