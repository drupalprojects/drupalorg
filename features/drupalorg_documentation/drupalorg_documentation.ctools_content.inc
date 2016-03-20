<?php
/**
 * @file
 * drupalorg_documentation.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function drupalorg_documentation_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'documentation_copyright';
  $content->admin_title = 'Documentation copyright statement';
  $content->admin_description = 'Documentation copyright statement displayed at the bottom of documentation guides and pages.';
  $content->category = 'Drupal.org Project';
  $content->settings = array(
    'admin_title' => 'Documentation copyright statement',
    'title' => '',
    'title_heading' => 'h2',
    'body' => 'Drupal’s online documentation is &copy; 2000-2016 by the individual contributors and can be used in accordance with the <a href="/node/14307">Creative Commons License, Attribution-ShareAlike 2.0</a>. PHP code is distributed under the <a href="http://www.gnu.org/licenses/old-licenses/gpl-2.0.html">GNU General Public License</a>.',
    'format' => '1',
    'substitute' => 0,
  );
  $export['documentation_copyright'] = $content;

  return $export;
}
