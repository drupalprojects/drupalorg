<?php
/**
 * @file
 * drupalorg_documentation.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function drupalorg_documentation_filter_default_formats() {
  $formats = array();

  // Exported format: Asciidoc Import.
  $formats['asciidoc_import'] = array(
    'format' => 'asciidoc_import',
    'name' => 'Asciidoc Import',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
