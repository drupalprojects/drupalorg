<?php

$plugin = [
  'title' => t('Section contents from OG menu'),
  'single' => TRUE,
  'category' => t('Drupal.org'),
  'render callback' => 'drupalorg_section_contents',
  'required context' => new ctools_context_required(t('Node'), 'node'),
];

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function drupalorg_section_contents($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();
  $block->content = '';
  if (isset($context->keyword) && $context->keyword === 'node' && isset($context->data) && (list($og_menu) = og_menu_get_group_menus(['node' => [$context->data->nid]]))) {
    if ($menu = menu_tree($og_menu['menu_name'])) {
      // Find nodes in the menu.
      $nids = [];
      foreach (element_children($menu) as $key) {
        if ($menu[$key]['#original_link']['router_path'] === 'node/%') {
          $nids[] = preg_replace('#^node/#', '', $menu[$key]['#original_link']['link_path']);
        }
      }

      // Render those nodes.
      if (!empty($nids)) {
        foreach (node_load_multiple($nids) as $node) {
          $wrapper = entity_metadata_wrapper('node', $node);
          $uri = entity_uri('node', $node);
          $block->content .= '<section><h2>' . l($node->title, $uri['path'], $uri['options']) . '</h2><p>' . check_plain($wrapper->field_summary->value()) . '</p></section>';
        }
      }
    }
  }
  return $block;
}
