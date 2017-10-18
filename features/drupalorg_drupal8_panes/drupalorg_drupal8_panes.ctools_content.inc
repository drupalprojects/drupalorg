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
  $content->admin_title = 'D8 Download Page Ad (A2)';
  $content->admin_description = 'Download experience Drupal Core Ad';
  $content->category = 'Drupal.org';
  $content->settings = array(
    'admin_title' => 'Drupal 8 Ad',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="drupal8-sponsor">Drupal.org is brought to you in part by the generous support of sponsors like:
<div class="sponsor">
<a href="https://www.acquia.com/resources/collateral/ultimate-guide-drupal-8?cid=701a0000002d33YAAQ&ct=online-advertising&ls=drupalorg&lls=PRO_US_OLA_DrupalDownload_042017"><img src="https://www.drupal.org/files/Acquia_Logo.jpg"></a>
<div class="text">
<p>Get expert Drupal 8 advice. Thanks to the hard work of the Drupal community, D8 features improved frontend and backend experiences and more. Checkout this guide to see what\'s new in D8</p>
<p><a class="button" href="https://www.acquia.com/resources/collateral/ultimate-guide-drupal-8?cid=701a0000002d33YAAQ&ct=online-advertising&ls=drupalorg&lls=PRO_US_OLA_DrupalDownload_042017">Get the Free Guide Today!</a>
</p></div>
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

  return $export;
}
