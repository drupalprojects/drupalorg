<?php

/**
 * Views field handler for making a link to drupalorg_ham().
 */
class drupalorg_handler_security_coverage extends views_handler_field_entity {
  function render($values) {
    if ($node_wrapper = entity_metadata_wrapper('node', $this->get_value($values))) {
      // Non-full releases, with a version extra value like 'dev' or 'alpha42'
      // do not have security team coverage.
      if ($node_wrapper->field_release_version_extra->value()) {
        return '';
      }

      // D6 and earlier do not have security team coverage.
      if ($node_wrapper->{'taxonomy_' . taxonomy_vocabulary_load(variable_get('project_release_api_vocabulary'))->machine_name}->value()->name <= 6) {
        return '';
      }

      // The release is covered.
      return '<img src="' . url(drupal_get_path('module', 'drupalorg') . '/images/shield-icon.svg') . '" alt="' . t('Full release covered by the Drupal Security Team') . '" title="' . t('Full release covered by the Drupal Security Team') . '">';
    }
  }
}
