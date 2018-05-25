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
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h2> <h3> <h4> <h5> <h6> <em> <strong> <pre> <code> <del> <img> <blockquote> <q> <cite> <sup> <sub> <s> <p> <br> <ul> <ol> <li> <dl> <dt> <dd> <a> <b> <u> <i> <table> <tr> <td> <th> <tbody> <thead> <tfoot> <colgroup> <caption> <hr> <div> <iframe> <!-->',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html_image_secure' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
