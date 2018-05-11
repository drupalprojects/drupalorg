<?php
/**
 * @file
 * drupalorg_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalorg_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_organizations-field_current'.
  $field_instances['field_collection_item-field_organizations-field_current'] = array(
    'bundle' => 'field_organizations',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_current',
    'label' => 'Current',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_organizations-field_job_title'.
  $field_instances['field_collection_item-field_organizations-field_job_title'] = array(
    'bundle' => 'field_organizations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_job_title',
    'label' => 'Job Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_organizations-field_organization_name'.
  $field_instances['field_collection_item-field_organizations-field_organization_name'] = array(
    'bundle' => 'field_organizations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_organization_name',
    'label' => 'Organization',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_organizations-field_organization_reference'.
  $field_instances['field_collection_item-field_organizations-field_organization_reference'] = array(
    'bundle' => 'field_organizations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_organization_reference',
    'label' => 'Organization reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(),
      'type' => 'field_extrawidgets_hidden',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'user-user-field_areas_of_expertise'.
  $field_instances['user-user-field_areas_of_expertise'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide a comma-separated list of your areas of Drupal expertise, e.g. module development, theming, site building, marketing, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_areas_of_expertise',
    'label' => 'Areas of Expertise',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'user-user-field_bio'.
  $field_instances['user-user-field_bio'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please include a short blurb about yourself to let us know who you are outside of Drupal.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_bio',
    'label' => 'Bio',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'user-user-field_contributed'.
  $field_instances['user-user-field_contributed'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_contributed',
    'label' => 'My contributions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_country'.
  $field_instances['user-user-field_country'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_demographics'.
  $field_instances['user-user-field_demographics'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'We have chosen these categories based on the <a href="http://www.isdnetwork.org/what-is-diversity.html" target="_blank">Big 8</a>, which is a list of cultural identifiers.  <a href="/drupalorg/docs/user-accounts/demographic-information" target="_blank">Learn more about why we collect this type of data</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_demographics',
    'label' => 'Underrepresented communities',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_ip_prob'.
  $field_instances['user-user-field_distil_ip_prob'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_ip_prob',
    'label' => 'Reported bad IP probability score',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 108,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_ip_prob_country'.
  $field_instances['user-user-field_distil_ip_prob_country'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_ip_prob_country',
    'label' => 'Reported bad IP probability country',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_reg_botscore'.
  $field_instances['user-user-field_distil_reg_botscore'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_reg_botscore',
    'label' => 'Distil Botscore',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 102,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_reg_flagged'.
  $field_instances['user-user-field_distil_reg_flagged'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_reg_flagged',
    'label' => 'Distil Suspicious User',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 106,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_reg_iid'.
  $field_instances['user-user-field_distil_reg_iid'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_reg_iid',
    'label' => 'Distil iid',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_reg_reported_ip'.
  $field_instances['user-user-field_distil_reg_reported_ip'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_reg_reported_ip',
    'label' => 'Reported Account Creation IP',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 104,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_reg_reported_ua'.
  $field_instances['user-user-field_distil_reg_reported_ua'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_reg_reported_ua',
    'label' => 'Reported Account Creation User-Agent',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 107,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_reg_sid_ip'.
  $field_instances['user-user-field_distil_reg_sid_ip'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_reg_sid_ip',
    'label' => 'Distil Initial IP',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 103,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_reg_uid'.
  $field_instances['user-user-field_distil_reg_uid'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_reg_uid',
    'label' => 'Distil D_UID Cookie value',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 105,
    ),
  );

  // Exported field_instance: 'user-user-field_distil_reg_zid'.
  $field_instances['user-user-field_distil_reg_zid'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_distil_reg_zid',
    'label' => 'Distil zid',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'user-user-field_drupal_contributions'.
  $field_instances['user-user-field_drupal_contributions'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide an overview of your Drupal contributions.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_drupal_contributions',
    'label' => 'Drupal Contributions',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_events_attended'.
  $field_instances['user-user-field_events_attended'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select Drupal events you attended or are planning to attend.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_events_attended',
    'label' => 'Drupal Events',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'user-user-field_first_name'.
  $field_instances['user-user-field_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_first_name',
    'label' => 'First or given name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'user-user-field_gender'.
  $field_instances['user-user-field_gender'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_gender',
    'label' => 'Gender',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_industries_worked_in'.
  $field_instances['user-user-field_industries_worked_in'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_industries_worked_in',
    'label' => 'Industries Worked In',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'user-user-field_irc_nick'.
  $field_instances['user-user-field_irc_nick'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The nickname you use on various channels of irc.freenode.net',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_irc_nick',
    'label' => 'IRC',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'user-user-field_languages'.
  $field_instances['user-user-field_languages'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select one or more languages you speak.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_languages',
    'label' => 'Languages spoken',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_last_name'.
  $field_instances['user-user-field_last_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_last_name',
    'label' => 'Last name or surname',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'user-user-field_mentors'.
  $field_instances['user-user-field_mentors'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Give credit to community members (Drupal.org usernames) who have significantly influenced your contributions to Drupal. For example, people who mentored you in the issue queue, IRC, user groups, sprints, Core contribution mentoring hours, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'drupalorg',
        'settings' => array(),
        'type' => 'user_pictures',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_mentors',
    'label' => 'My mentors',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'STARTS_WITH',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'user-user-field_notes'.
  $field_instances['user-user-field_notes'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Admin-only notes.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_organizations'.
  $field_instances['user-user-field_organizations'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List companies or institutions you have worked for or are working for now.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organizations',
    'label' => 'Organizations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'user-user-field_social_links'.
  $field_instances['user-user-field_social_links'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link to your profile pages on Twitter, LinkedIn, Facebook, Google, Drupal Answers, GitHub, Gratipay, and any others you would like to include.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'url',
        'settings' => array(
          'nofollow' => 1,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_social_links',
    'label' => 'Social links',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 0,
      'title_field' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_subscribe_to'.
  $field_instances['user-user-field_subscribe_to'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => FALSE,
        'interest_groups' => array(
          '8d99874622' => array(
            '22e1b642b7' => 0,
            '53d7f4209a' => 0,
            '3374b1dd84' => 0,
            '60985452cc' => 0,
            'a0d7a1c02b' => 0,
            'b3d670a22d' => 0,
            'dc0ad3fd6d' => 0,
            'faceb9a270' => 0,
          ),
          'f99166c398' => array(
            '8e538016f8' => 0,
            '8f497df2ac' => 0,
            '12e0adb9c2' => 0,
            '6471b579b9' => 0,
            '7178f4ed23' => 0,
            '8052a9eec6' => 0,
            'b5eae4f409' => 0,
            'c0d1826013' => 0,
            'c2c6d438b4' => 0,
            'da2686313a' => 0,
            'f0dc5eecf2' => 0,
            'f235b3d5e5' => 0,
          ),
        ),
        'is_default' => TRUE,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_subscribe_to',
    'label' => 'Subscribe to',
    'required' => 0,
    'settings' => array(
      'hide_subscribe_checkbox' => 1,
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'ACCTCREATE' => '[user:created:custom:Y-m-d]',
        'BUSINESS' => '',
        'CIVI_ID' => '',
        'COMPANY' => '',
        'COUNTRY' => '',
        'DCEVENT' => '',
        'DRUPNAME' => '[user:name]',
        'EMAIL' => '[user:mail]',
        'FNAME' => '[user:name]',
        'FULLNAME' => '',
        'JOBTITLE' => '',
        'LNAME' => '[user:field-last-name]',
        'MEMENDIND' => '',
        'MEMENDORG' => '',
        'MEMSINCEIN' => '',
        'MEMSINCEOR' => '',
        'MMERGE16' => '',
        'MMERGE18' => '',
        'MMERGE19' => '',
        'MMERGE24' => '',
        'MMERGE25' => '',
        'MMERGE26' => '',
        'ORG' => '',
        'RECENTGCUR' => '',
        'RECENTGIFT' => '',
        'SFID' => '',
        'SIGNUP' => '',
        'SKILLLEVEL' => '',
        'advanced' => 1,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 1,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'user-user-field_terms_of_service'.
  $field_instances['user-user-field_terms_of_service'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_terms_of_service',
    'label' => 'Terms of Service',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_user_geolocation'.
  $field_instances['user-user-field_user_geolocation'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your general location may appear on the Drupal.org home page map, and potentially more future uses.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_geolocation',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'geolocation_html5',
      'settings' => array(),
      'type' => 'geolocation_html5_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_websites'.
  $field_instances['user-user-field_websites'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_url',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_websites',
    'label' => 'Website(s)',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => 0,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'user-user-og_user_node'.
  $field_instances['user-user-og_user_node'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'og_user_node',
    'label' => 'Group membership',
    'required' => FALSE,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 100,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin-only notes.');
  t('Areas of Expertise');
  t('Bio');
  t('Country');
  t('Current');
  t('Distil Botscore');
  t('Distil D_UID Cookie value');
  t('Distil Initial IP');
  t('Distil Suspicious User');
  t('Distil iid');
  t('Distil zid');
  t('Drupal Contributions');
  t('Drupal Events');
  t('First or given name');
  t('Gender');
  t('Give credit to community members (Drupal.org usernames) who have significantly influenced your contributions to Drupal. For example, people who mentored you in the issue queue, IRC, user groups, sprints, Core contribution mentoring hours, etc.');
  t('Group membership');
  t('IRC');
  t('Industries Worked In');
  t('Job Title');
  t('Languages spoken');
  t('Last name or surname');
  t('Link to your profile pages on Twitter, LinkedIn, Facebook, Google, Drupal Answers, GitHub, Gratipay, and any others you would like to include.');
  t('List companies or institutions you have worked for or are working for now.');
  t('Location');
  t('My contributions');
  t('My mentors');
  t('Notes');
  t('Organization');
  t('Organization reference');
  t('Organizations');
  t('Please include a short blurb about yourself to let us know who you are outside of Drupal.');
  t('Please provide a comma-separated list of your areas of Drupal expertise, e.g. module development, theming, site building, marketing, etc.');
  t('Provide an overview of your Drupal contributions.');
  t('Reported Account Creation IP');
  t('Reported Account Creation User-Agent');
  t('Reported bad IP probability country');
  t('Reported bad IP probability score');
  t('Select Drupal events you attended or are planning to attend.');
  t('Select one or more languages you speak.');
  t('Social links');
  t('Subscribe to');
  t('Terms of Service');
  t('The nickname you use on various channels of irc.freenode.net');
  t('Underrepresented communities');
  t('We have chosen these categories based on the <a href="http://www.isdnetwork.org/what-is-diversity.html" target="_blank">Big 8</a>, which is a list of cultural identifiers.  <a href="/drupalorg/docs/user-accounts/demographic-information" target="_blank">Learn more about why we collect this type of data</a>.');
  t('Website(s)');
  t('Your general location may appear on the Drupal.org home page map, and potentially more future uses.');

  return $field_instances;
}
