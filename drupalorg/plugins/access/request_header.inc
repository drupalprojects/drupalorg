<?php

/**
 * @file
 * Access plugin defining HTTP request header based rules.
 *
 * Based on https://www.drupal.org/project/ctools_header_plugins, which is
 * limited to specific headers.
 */

$plugin = [
  'title' => t('HTTP request header'),
  'description' => t('Control access by request header values.'),
  'callback' => 'drupalorg_request_header_ctools_access_check',
  'settings form' => 'drupalorg_request_header_ctools_access_settings',
  'summary' => 'drupalorg_request_header_ctools_access_summary',
];

/**
 * Settings form for the “HTTP request header” access plugin.
 */
function drupalorg_request_header_ctools_access_settings($form, &$form_state, $conf) {
  $form['settings']['header'] = [
    '#type' => 'textfield',
    '#title' => t('Header'),
    '#default_value' => isset($conf['header']) ? $conf['header'] : '',
    '#description' => t('Such as “Accept”, “GeoIP-continent”, or “GeoIP-country”. See <a href="https://docs.fastly.com/guides/vcl/geoip-related-vcl-features">Fastly GeoIP documentation</a>.'),
  ];

  $form['settings']['pattern'] = [
    '#type' => 'textfield',
    '#title' => t('Match pattern'),
    '#default_value' => isset($conf['pattern']) ? $conf['pattern'] : '/^$/',
    '#description' => t('<a href="http://www.php.net/manual/en/pcre.pattern.php">Regular expression</a> pattern that should be matched for selected header element, i.e. “/Mozilla/” or “/EU/”'),
  ];

  return $form;
}

/**
 * Check for access.
 */
function drupalorg_request_header_ctools_access_check($conf, $context) {
  $header = 'HTTP_' . str_replace('-', '_', drupal_strtoupper($conf['header']));
  if (isset($_SERVER[$header])) {
    drupal_add_http_header('X-Vary-' . $conf['header'], $_SERVER[$header]);
    return preg_match($conf['pattern'], $_SERVER[$header]);
  }
  drupal_add_http_header('X-Vary-' . $conf['header'], '');
  return FALSE;
}

/**
 * Provide a summary description based upon the header values.
 */
function drupalorg_request_header_ctools_access_summary($conf, $context) {
  return t('Header @element matches @pattern.', ['@element' => $conf['header'], '@pattern' => $conf['pattern']]);
}
