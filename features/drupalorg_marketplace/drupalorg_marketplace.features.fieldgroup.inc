<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function drupalorg_marketplace_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_hosting
  $groups['organization-group_hosting'] = array(
    'group_type' => 'standard',
    'type_name' => 'organization',
    'group_name' => 'group_hosting',
    'label' => 'Hosting',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'For hosting companies, include a link to your hosting offerings. If possible, provide a Drupal-specific landing page and/or an affiliate link benefitting the Drupal Association. See <a href="https://association.drupal.org/advertising/hosting">How to get listed on drupal.org/hosting</a> for more details and to publish your link.',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
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
        'label' => 'above',
      ),
    ),
    'weight' => '13',
    'fields' => array(
      '0' => 'field_organization_hosting_url',
      '1' => 'field_organization_hosting_categ',
      '2' => 'field_organization_security',
    ),
  );

  // Exported group: group_moderation
  $groups['organization-group_moderation'] = array(
    'group_type' => 'standard',
    'type_name' => 'organization',
    'group_name' => 'group_moderation',
    'label' => 'Moderation',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
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
    'weight' => '15',
    'fields' => array(
      '0' => 'field_organization_list_rule',
      '1' => 'field_organization_issue',
      '2' => 'field_organization_training_list',
      '3' => 'field_org_training_issue',
      '4' => 'field_organization_hosting_level',
    ),
  );

  // Exported group: group_training
  $groups['organization-group_training'] = array(
    'group_type' => 'standard',
    'type_name' => 'organization',
    'group_name' => 'group_training',
    'label' => 'Training',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
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
    'weight' => '7',
    'fields' => array(
      '0' => 'field_org_training_request',
      '1' => 'field_organization_training_url',
      '2' => 'field_organization_training_desc',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Hosting');
  t('Moderation');
  t('Training');

  return $groups;
}
