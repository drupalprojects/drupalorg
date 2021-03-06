<?php

$plugin = [
  'title' => t('Guide maintainer information'),
  'single' => TRUE,
  'category' => t('Drupal.org'),
  'render callback' => 'drupalorg_guide_maintainer_info',
  'required context' => new ctools_context_required(t('Node'), 'node'),
];

/**
 * Add information about becoming a guide maintainer.
 */
function drupalorg_guide_maintainer_info($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();
  if (isset($context->keyword) && $context->keyword === 'node' && isset($context->data) && $context->data->type === 'guide' && isset($context->data->field_guide_status[LANGUAGE_NONE][0]['value']) && drupalorg_user_is_confirmed($GLOBALS['user'])) {
    switch ($context->data->field_guide_status[LANGUAGE_NONE][0]['value']) {
      case 'Seeking co-maintainer(s)':
        $block->content = t('This guide needs co-maintainers. <a href="!learn">Learn more</a>.', ['!learn' => url('drupalorg/docs/content/documentation', ['fragment' => 'maintain'])]);
        break;

      case 'Needs maintainers':
        $block->content = t('This guide needs maintainers. <a href="!learn">Learn more</a> or <a href="!discuss">become maintainer</a>.', ['!learn' => url('drupalorg/docs/content/documentation', ['fragment' => 'maintain']), '!discuss' => url('node/' . $context->data->nid . '/discuss', ['query' => ['become-maintainer' => TRUE]])]);
        break;
    }
  }
  return $block;
}
