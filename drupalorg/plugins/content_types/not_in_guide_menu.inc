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
    $wrapper = entity_metadata_wrapper('node', $context->data);
    if ($wrapper->og_group_ref_documentation->value() && ($menus = og_menu_get_group_menus(['node' => [$wrapper->og_group_ref_documentation->value()->nid]]))) {
      $menu_names = [];
      foreach ($menus as $menu) {
        $menu_names[] = $menu['menu_name'];
      }
      // This query comes from menu.modules node_prepare, and is how it does it.
      $in_menu = db_query_range("SELECT 1 FROM {menu_links} WHERE link_path = :path AND module = 'menu' AND menu_name IN (:type_menus)", 0, 1, [
        ':path' => 'node/' . $context->data->nid,
        ':type_menus' => $menu_names,
      ])->fetchField();
      if (!$in_menu) {
        $uri = entity_uri('node', $wrapper->og_group_ref_documentation->value());
        $block->content = '<p class="incomplete">' . t('This !type has not yet been reviewed by !parent maintainer(s) and added to the menu.', [
          '!type' => $context->data->type === 'documentation' ? t('page') : t('guide'),
          '!parent' => l($wrapper->og_group_ref_documentation->title->value(), $uri['path'], $uri['options']),
        ]) . '</p>';
      }
    }
  }
  return $block;
}
