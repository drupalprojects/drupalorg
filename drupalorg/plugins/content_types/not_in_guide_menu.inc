<?php

$plugin = [
  'title' => t('Not in guide menu notice'),
  'single' => TRUE,
  'category' => t('Drupal.org'),
  'render callback' => 'drupalorg_not_in_guide_menu',
  'required context' => new ctools_context_required(t('Node'), 'node'),
];

/**
 * Add information about becoming a guide maintainer.
 */
function drupalorg_not_in_guide_menu($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();
  if (isset($context->keyword) && $context->keyword === 'node' && isset($context->data) && in_array($context->data->type, ['guide', 'documentation'])) {
    og_menu_node_prepare($context->data);
    if (!isset($context->data->menu)) {
      $wrapper = entity_metadata_wrapper('node', $context->data);
      $uri = entity_uri('node', $wrapper->og_group_ref_documentation->value());
      $block->content = '<p class="incomplete">' . t('This !type has not yet been reviewed by !parent maintainer(s) and added to the menu.', [
        '!type' => $context->data->type === 'documentation' ? t('page') : t('guide'),
        '!parent' => l($wrapper->og_group_ref_documentation->title->value(), $uri['path'], $uri['options']),
      ]) . '</p>';
    }
  }
  return $block;
}
