<?php

$plugin = [
  'title' => t('Release Composer information'),
  'single' => TRUE,
  'category' => t('Drupal.org'),
  'render callback' => 'drupalorg_release_composer_info',
  'required context' => new ctools_context_required(t('Node'), 'node'),
];

/**
 * Install with Composer information.
 */
function drupalorg_release_composer_info($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();
  if (isset($context->keyword) && $context->keyword === 'node' && isset($context->data) && project_release_node_is_release($context->data)) {
    $wrapper = entity_metadata_wrapper('node', $context->data);
    // Only D7 or later releases.
    if ($wrapper->{'taxonomy_' . taxonomy_vocabulary_load(variable_get('project_release_api_vocabulary', 0))->machine_name}->value()->name >= 7) {
      switch ($wrapper->field_release_project->value()->type) {
        case 'project_module':
        case 'project_theme':
          if ($wrapper->field_release_build_type->value() === 'dynamic') {
            $version = $wrapper->field_release_version_major->value() . '.x-dev';
          }
          else {
            $version = '^' . $wrapper->field_release_version_major->value() . '.' . $wrapper->field_release_version_patch->value();
          }
          $block->content = '<strong>Install with Composer:</strong> <code class="language-bash">' . t('$ composer require \'drupal/@project:@version\'</code><br><small><a href="/docs/develop/using-composer/using-composer-to-manage-drupal-site-dependencies">Using Composer to manage Drupal site dependencies</a></small>', [
            '@project' => $wrapper->field_release_project->field_project_machine_name->value(),
            '@version' => $version,
          ]) . '</code>';
          break;
      }
    }
  }
  return $block;
}
