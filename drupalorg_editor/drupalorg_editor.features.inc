<?php
/**
 * @file
 * drupalorg_editor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_editor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == 'entity_embed' && $api == 'default_entity_embed_configurations') {
    return array('version' => 1);
  }
}
