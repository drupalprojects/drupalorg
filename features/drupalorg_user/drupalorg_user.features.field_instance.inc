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

  // Exported field_instance: 'field_collection_item-field_organizations-field_current'
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

  // Exported field_instance: 'field_collection_item-field_organizations-field_job_title'
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

  // Exported field_instance: 'field_collection_item-field_organizations-field_organization_name'
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

  // Exported field_instance: 'user-user-field_areas_of_expertise'
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
        'type' => 'taxonomy_term_reference_link',
        'weight' => 19,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_bio'
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
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'user-user-field_contributions'
  $field_instances['user-user-field_contributions'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide an overview of your Drupal contributions. These could be modules that you have created or maintain, user groups that you organize, volunteering at events, or other contributions.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_contributions',
    'label' => 'Drupal contributions',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_country'
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
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'user-user-field_gender'
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
        'weight' => 16,
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
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'user-user-field_github_profile'
  $field_instances['user-user-field_github_profile'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the URL of your GitHub profile, if you have one.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_github_profile',
    'label' => 'GitHub Profile',
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
        'size' => 58,
      ),
      'type' => 'url_external',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'user-user-field_industries_worked_in'
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

  // Exported field_instance: 'user-user-field_interests'
  $field_instances['user-user-field_interests'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_interests',
    'label' => 'Interests',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'user-user-field_irc_nick'
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
        'weight' => 13,
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
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'user-user-field_languages'
  $field_instances['user-user-field_languages'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select one or more languages you speak.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'user-user-field_organizations'
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
        'weight' => 10,
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

  // Exported field_instance: 'user-user-field_user_geolocation'
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'user-user-field_websites'
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
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
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
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Areas of Expertise');
  t('Bio');
  t('Country');
  t('Current');
  t('Drupal contributions');
  t('Enter the URL of your GitHub profile, if you have one.');
  t('Gender');
  t('GitHub Profile');
  t('IRC');
  t('Industries Worked In');
  t('Interests');
  t('Job Title');
  t('Languages spoken');
  t('List companies or institutions you have worked for or are working for now.');
  t('Location');
  t('Organization');
  t('Organizations');
  t('Please include a short blurb about yourself to let us know who you are outside of Drupal.');
  t('Please provide a comma-separated list of your areas of Drupal expertise, e.g. module development, theming, site building, marketing, etc.');
  t('Please provide an overview of your Drupal contributions. These could be modules that you have created or maintain, user groups that you organize, volunteering at events, or other contributions.');
  t('Select one or more languages you speak.');
  t('The nickname you use on various channels of irc.freenode.net');
  t('Website(s)');
  t('Your general location may appear on the Drupal.org home page map, and potentially more future uses.');

  return $field_instances;
}
