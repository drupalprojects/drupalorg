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
  $content->name = 'drupalorg_documentation_copyright';
  $content->admin_title = 'Documentation copyright block';
  $content->admin_description = 'Block on every documentation page with the copyright info.';
  $content->category = 'Drupal.org';
  $content->settings = array(
    'admin_title' => 'Documentation copyright block',
    'title' => '',
    'title_heading' => 'h2',
    'body' => 'Drupal’s online documentation is © 2000-2016 by the individual contributors and can be used in accordance with the <a href="/node/14307">Creative Commons License, Attribution-ShareAlike 2.0</a>. PHP code is distributed under the <a href="http://www.gnu.org/licenses/old-licenses/gpl-2.0.html">GNU General Public License</a>. Comments on documentation pages are used to improve content and then deleted.',
    'format' => '1',
    'substitute' => 1,
  );
  $export['drupalorg_documentation_copyright'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'drupalorg_documentation_core_lock';
  $content->admin_title = 'Documentation pages core lock info';
  $content->admin_description = 'Lock info on Documentation pages locked by core process.';
  $content->category = 'Drupal.org';
  $content->settings = array(
    'admin_title' => 'Documentation pages core lock info',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="warning">
<h3>Locked</h3>
This page should not be edited without first discussing the changes in a <a href="/node/add/project-issue/drupal">Drupal Core issue</a> as the requirements for each version of Drupal are decided upon by the Drupal Core developers.</strong></div>',
    'format' => '3',
    'substitute' => 1,
  );
  $export['drupalorg_documentation_core_lock'] = $content;

  return $export;
}
