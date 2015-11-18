<?php
/**
 * @file
 * drupalorg_drupal8_panes.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function drupalorg_drupal8_panes_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'drupalorg_d8_ad';
  $content->admin_title = 'Drupal 8 Ad';
  $content->admin_description = 'D8 Project Ad';
  $content->category = 'Drupalorg Project';
  $content->settings = array(
    'admin_title' => 'Drupal 8 Ad',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="d8ad">Drupal.org is brought to you in part by the generous support of sponsors like:</div>
<div><img src="/files/styles/grid-3/public/project-images/fastly_logo-01 (1)_0.png?itok=E9tvfNhw" /></div>
<div>Gives businesses complete control over how they serve content, unprecedented access to real-time performance analytics, and the ability to cache frequently changing content at the edge. <br /><br />
Learn more about Fastly</div>
',
    'format' => '1',
    'substitute' => 1,
  );
  $export['drupalorg_d8_ad'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'drupalorg_trydrupal_button';
  $content->admin_title = 'Try drupal button';
  $content->admin_description = '';
  $content->category = 'Drupalorg Project';
  $content->settings = array(
    'admin_title' => 'Try drupal button',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<span class="button"><a href="/trydrupal">Try a hosted Drupal demo</a></span>',
    'format' => '1',
    'substitute' => 1,
  );
  $export['drupalorg_trydrupal_button'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'drupalorg_whatsnext_core';
  $content->admin_title = 'What\'s Next Pane (Drupal Core)';
  $content->admin_description = 'What\'s next block';
  $content->category = 'Drupalorg Project';
  $content->settings = array(
    'admin_title' => 'What\'s Next Pane (Drupal Core)',
    'title' => 'What\'s Next?',
    'title_heading' => 'h2',
    'body' => 'Coming soon....',
    'format' => '1',
    'substitute' => 1,
  );
  $export['drupalorg_whatsnext_core'] = $content;

  return $export;
}
