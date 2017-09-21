<?php

/**
 * @file
 * Plugin to provide access control/visibility based on specified context string matching user-specified string
 */

$plugin = [
  'title' => t('Drupal Association Organization Membership'),
  'description' => t('Control access by their current organizations’ membership.'),
  'callback' => 'drupalorg_organization_membership_access_check',
  'settings form' => 'drupalorg_organization_membership_access_settings',
  'summary' => 'drupalorg_organization_membership_access_summary',
  'required context' => new ctools_context_required(t('User'), 'user'),
  'defaults' => ['value' => []],
];

/**
 * Settings form.
 */
function drupalorg_organization_membership_access_settings($form, &$form_state, $conf) {
  $form['settings']['value'] = [
    '#type' => 'checkboxes',
    '#title' => t('Organization membership status'),
    '#options' => [
      'New' => t('New'),
      'Current' => t('Current'),
      'Grace Period' => t('Grace Period'),
    ],
    '#default_value' => isset($conf['value']) ? $conf['value'] : [],
  ];

  return $form;
}

/**
 * Check for access.
 */
function drupalorg_organization_membership_access_check($conf, $context) {
  // Check to see if the fields exist:
  if (empty($context) || empty($context->data)) {
    return FALSE;
  }

  // Find the user’s current organizations.
  $wrapper = entity_metadata_wrapper('user', $context->data);
  foreach ($wrapper->field_organizations as $organization) {
    if ($organization->field_current->value() && ($status = $organization->field_organization_reference->field_org_membership_status->value()) && !empty($conf['value'][$status])) {
      return TRUE;
    }
  }

  return FALSE;
}

/**
 * Provide a summary description based upon the specified context.
 */
function drupalorg_organization_membership_access_summary($conf, $context) {
  return t('@identifier’s organizations’ membership is @value', ['@identifier' => $context->identifier, '@value' => implode(', ', array_map('t', array_filter($conf['value'])))]);
}
