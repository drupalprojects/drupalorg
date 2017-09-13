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
    if ($version = _project_composer_format_version($context->data, $wrapper->field_release_project->value())) {
      switch ($wrapper->field_release_project->value()->type) {
        case 'project_module':
        case 'project_theme':
          $block->content = '<strong>Install with Composer:</strong> <code class="language-bash">' . t('$ composer require \'drupal/@project:@version\'</code><br><small><a href="/docs/develop/using-composer/using-composer-to-manage-drupal-site-dependencies">Using Composer to manage Drupal site dependencies</a></small>', [
            '@project' => $wrapper->field_release_project->field_project_machine_name->value(),
            '@version' => ('dev-' === substr($version, 0, 4)) ? substr($version, 4) . '-dev' : $version,
          ]) . '</code>';
          break;
      }
    }
  }
  return $block;
}
