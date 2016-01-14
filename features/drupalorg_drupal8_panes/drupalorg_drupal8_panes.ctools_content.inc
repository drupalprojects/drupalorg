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
    'body' => '<div class="drupal8-sponsor"><span class="intro">Drupal.org is brought to you in part by the generous support of sponsors like:</span>
<div class="sponsor">
<a href="https://www.drupal.org/news/drupalorg-migrates-content-and-file-delivery-to-fastly"><img src="/files/styles/grid-3/public/project-images/fastly_logo-01 (1)_0.png" /></a>
<div class="text">
<p>We’re the only CDN that offers complete control over your content and real-time access to performance analytics, and are proud to help Drupal.org provide great experiences across the world. <br /><br />
<a class="button" href="https://www.drupal.org/news/drupalorg-migrates-content-and-file-delivery-to-fastly">Learn why Drupal.org chose Fastly</a>
</div>
</div>
</div>',
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
    'body' => '<span class="button"><a href="/try-drupal">Try a hosted Drupal demo</a></span>',
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
    'body' => '<ol>
 <li><a href="/documentation/install">Learn how to install Drupal</a></li>
 <li><a href="/project/project_module">Extend Drupal to do more</a></li>
<li><a href="/training">Get training</a></li>
<li><a href="/case-studies">Check out what others built</a></li>
</ol>',
    'format' => '1',
    'substitute' => 1,
  );
  $export['drupalorg_whatsnext_core'] = $content;

  return $export;
}
