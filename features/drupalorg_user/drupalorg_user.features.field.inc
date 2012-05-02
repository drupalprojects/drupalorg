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

  // Exported field: 'user-user-field_user_geolocation'
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
          'module' => 'geolocation',
          'settings' => array(),
          'type' => 'geolocation_text',
          'weight' => 0,
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
  t('Location');
  t('Your general location may appear on the Drupal.org home page map, and potentially more future uses.');

  return $fields;
}
