<?php

$plugin = [
  'title' => t('What’s next (Drupal Core)'),
  'single' => TRUE,
  'category' => t('Drupal.org'),
  'render callback' => 'drupalorg_release_core_whats_next',
  'required context' => new ctools_context_required(t('Node'), 'node'),
];

/**
 * Run-time rendering of the body of the block (content type).
 *
 * See ctools_plugin_examples for more advanced info.
 */
function drupalorg_release_core_whats_next($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();

  $wrapper = entity_metadata_wrapper('node', $context->data);
  if (empty($wrapper)) {
    return;
  }
  // Bail out if this node is not a release of Drupal core.
  if (empty($wrapper->field_release_project->getIdentifier()) || $wrapper->field_release_project->getIdentifier() != 3060) {
    return;
  }

  // Create a link to the correct installation page.
  $install_path = 'docs/' . $wrapper->field_release_version_major->value() . '/install';
  // If that is not a path alias, then use a default value.
  if (drupal_get_normal_path($install_path) == $install_path) {
    $install_path = 'documentation/install';
  }

  $block->title = t("What’s next?");
  $block->content = t('<ol>
    <li><a href="/@install_path">Learn how to install Drupal</a></li>
    <li><a href="/project/project_module">Extend Drupal to do more</a></li>
    <li><a href="/training">Get training</a></li>
    <li><a href="/case-studies">Check out what others built</a></li>
</ol>',
    ['@install_path' => $install_path]
  );

  return $block;
}
