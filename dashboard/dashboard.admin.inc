<?php

function dashboard_settings_form(&$form_state) {
  $form = array();

  $fields = array();
  $result = db_query("SELECT name FROM {profile_fields}");
  while ($field = db_fetch_object($result)) {
    $fields[] = $field->name;
  }
  $form['dashboard_profile_fields'] = array(
    '#type' => 'textarea',
    '#title' => t('Profile widget items'),
    '#default_value' => variable_get('dashboard_profile_fields', ''),
    '#description' => '<p>' . t('One form field name per line. Valid fields are:') . '</p>' . theme('item_list', $fields),
  );

  return system_settings_form($form);
}

function dashboard_settings_form_validate($form, &$form_state) {
  // Get a list of valid profile fields.
  $fields = array();
  $result = db_query("SELECT name FROM {profile_fields}");
  while ($field = db_fetch_object($result)) {
    $fields[$field->name] = TRUE;
  }

  // Check that each profile field is valid.
  foreach (explode('\n', $form_state['values']['dashboard_profile_fields']) as $field) {
    if (!isset($fields[$field])) {
      form_set_error('dashboard_profile_fields', t('%field is not a valid field.', array('%field' => $field)));
    }
  }
}
