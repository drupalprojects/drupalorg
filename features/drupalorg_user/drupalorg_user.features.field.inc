<?php
/**
 * @file
 * drupalorg_user.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function drupalorg_user_field_default_fields() {
  $fields = array();

  // Exported field: 'user-user-field_current_company_org'.
  $fields['user-user-field_current_company_org'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_current_company_org',
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
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_current_company_org',
      'label' => 'Current company or organization(s)',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'user-user-field_user_geolocation'.
  $fields['user-user-field_user_geolocation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_user_geolocation',
      'foreign keys' => array(),
      'indexes' => array(
        'lat' => array(
          0 => 'lat',
        ),
        'lng' => array(
          0 => 'lng',
        ),
      ),
      'locked' => '0',
      'module' => 'geolocation',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'geolocation_latlng',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Your general location may appear on the Drupal.org home page map, and potentially more future uses.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
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
        'weight' => '7',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Current company or organization(s)');
  t('Location');
  t('Your general location may appear on the Drupal.org home page map, and potentially more future uses.');

  return $fields;
}
