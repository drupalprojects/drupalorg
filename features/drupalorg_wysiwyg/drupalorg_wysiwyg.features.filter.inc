<?php
/**
 * @file
 * drupalorg_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function drupalorg_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats[1] = array(
    'format' => 1,
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -1,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'codefilter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'nowrap_expand' => 0,
          'codefilter_prism' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h2> <h3> <h4> <h5> <h6> <em> <strong> <pre> <code> <del> <img> <blockquote> <q> <cite> <sup> <sub> <p> <br>  <ul> <ol> <li> <dl> <dt> <dd> <a> <b> <u> <i> <table> <tr> <td> <th> <tbody> <thead> <tfoot> <colgroup> <caption> <hr> <div> <!-->',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_project_issue_link' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
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

  // Exported format: Full HTML.
  $formats[3] = array(
    'format' => 3,
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'codefilter' => array(
        'weight' => 9,
        'status' => 1,
        'settings' => array(
          'nowrap_expand' => 0,
          'codefilter_prism' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_project_issue_link' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 11,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
