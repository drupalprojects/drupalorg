<?php
/**
 * @file
 * drupalorg_drupal8_panes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_drupal8_panes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
