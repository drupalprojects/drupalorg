<?php
/**
 * @file
 * drupalorg_drupal8_panes.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drupalorg_drupal8_panes_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:d8_layout:default';
  $panelizer->title = 'D8 layout';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Groups audience [og_group_ref]',
      'keyword' => 'og_group_ref',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = 'd8';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'portal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'preface' => NULL,
      'left_content' => NULL,
      'top_right_content' => NULL,
      'bottom_right_content' => NULL,
      'footer' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c5038462-854c-47ce-af74-3306cd267308';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8dd67865-743e-4c55-bc0f-c8aab581d7ff';
  $pane->panel = 'denary';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'lebr8D8',
    'title' => '#celebr8D8',
    'body' => '<blockquote class="twitter-tweet" lang="en"><p lang="en" dir="ltr">Planning a <a href="https://twitter.com/hashtag/Drupal8?src=hash">#Drupal8</a> Release Party? Tell the world here <a href="https://t.co/D0Du3tAHxs">https://t.co/D0Du3tAHxs</a> and use <a href="https://twitter.com/hashtag/celebr8D8?src=hash">#celebr8D8</a> - we&#39;ll shout out for you!</p>&mdash; Celebrate Drupal 8 (@celebr8d8) <a href="https://twitter.com/celebr8d8/status/660222587386077184">October 30, 2015</a></blockquote>
<script async src="//platform.twitter.com/widgets.js" charset="utf-8"></script>

<a href="http://www.drupical.com" class="button">Find a Party</a>',
    'format' => '3',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8dd67865-743e-4c55-bc0f-c8aab581d7ff';
  $display->content['new-8dd67865-743e-4c55-bc0f-c8aab581d7ff'] = $pane;
  $display->panels['denary'][0] = 'new-8dd67865-743e-4c55-bc0f-c8aab581d7ff';
  $pane = new stdClass();
  $pane->pid = 'new-78c558a1-bd03-40d6-a938-dbeb3a50cf61';
  $pane->panel = 'footer';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Contributed Modules',
    'title' => '',
    'body' => '<a href="/about" class="button">Learn More</a><span class="cta"> about contributed modules.</span>',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '78c558a1-bd03-40d6-a938-dbeb3a50cf61';
  $display->content['new-78c558a1-bd03-40d6-a938-dbeb3a50cf61'] = $pane;
  $display->panels['footer'][0] = 'new-78c558a1-bd03-40d6-a938-dbeb3a50cf61';
  $pane = new stdClass();
  $pane->pid = 'new-bb1cf0de-49a7-4c04-ae8f-961fa2de6a4b';
  $pane->panel = 'header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Build something amazing.',
    'title' => 'Build something amazing.',
    'body' => '<h3>With over 200 new features and improvements.<h3>
<p>The world’s leading open source content management platform just got better. Drupal 8 is the new standard for creating incredible digital experiences—from small non-profits, to global enterprises.</p>
<a class="button">Download</a><a class="button-secondary">Demo</a>',
    'format' => '1',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bb1cf0de-49a7-4c04-ae8f-961fa2de6a4b';
  $display->content['new-bb1cf0de-49a7-4c04-ae8f-961fa2de6a4b'] = $pane;
  $display->panels['header'][0] = 'new-bb1cf0de-49a7-4c04-ae8f-961fa2de6a4b';
  $pane = new stdClass();
  $pane->pid = 'new-db8b73b0-078f-4c96-a173-c79362cce9f9';
  $pane->panel = 'nonary_first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Contributors',
    'title' => '',
    'body' => '<a href="#">3,290 contributors</a>',
    'format' => '1',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db8b73b0-078f-4c96-a173-c79362cce9f9';
  $display->content['new-db8b73b0-078f-4c96-a173-c79362cce9f9'] = $pane;
  $display->panels['nonary_first'][0] = 'new-db8b73b0-078f-4c96-a173-c79362cce9f9';
  $pane = new stdClass();
  $pane->pid = 'new-bd0500d1-89c6-4478-9789-03efcc008c1b';
  $pane->panel = 'nonary_footer';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Tweet',
    'title' => '',
    'body' => '<span class="cta">Did you help build Drupal 8?</span> <a href="Twitter" class="button">Tweet it!</a>',
    'format' => '1',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bd0500d1-89c6-4478-9789-03efcc008c1b';
  $display->content['new-bd0500d1-89c6-4478-9789-03efcc008c1b'] = $pane;
  $display->panels['nonary_footer'][0] = 'new-bd0500d1-89c6-4478-9789-03efcc008c1b';
  $pane = new stdClass();
  $pane->pid = 'new-6b0d859d-651e-42c2-8072-b9cacab054f3';
  $pane->panel = 'nonary_header';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Built by',
    'title' => '',
    'body' => '<h2>Drupal 8—built by</h2>',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6b0d859d-651e-42c2-8072-b9cacab054f3';
  $display->content['new-6b0d859d-651e-42c2-8072-b9cacab054f3'] = $pane;
  $display->panels['nonary_header'][0] = 'new-6b0d859d-651e-42c2-8072-b9cacab054f3';
  $pane = new stdClass();
  $pane->pid = 'new-9ed05895-2ec2-40ff-bdd6-67e771d034b8';
  $pane->panel = 'nonary_second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Companies',
    'title' => '',
    'body' => '<a href="#">1,228 companies</a>',
    'format' => '1',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9ed05895-2ec2-40ff-bdd6-67e771d034b8';
  $display->content['new-9ed05895-2ec2-40ff-bdd6-67e771d034b8'] = $pane;
  $display->panels['nonary_second'][0] = 'new-9ed05895-2ec2-40ff-bdd6-67e771d034b8';
  $pane = new stdClass();
  $pane->pid = 'new-13d95091-27c2-4da1-b149-249de82573b7';
  $pane->panel = 'nonary_third';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Community',
    'title' => '',
    'body' => '<a href="#">1 giant community</a>',
    'format' => '1',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '13d95091-27c2-4da1-b149-249de82573b7';
  $display->content['new-13d95091-27c2-4da1-b149-249de82573b7'] = $pane;
  $display->panels['nonary_third'][0] = 'new-13d95091-27c2-4da1-b149-249de82573b7';
  $pane = new stdClass();
  $pane->pid = 'new-716b77de-9d17-4ba1-bb81-2818c512c356';
  $pane->panel = 'octonary';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Demo CTA',
    'title' => '',
    'body' => '<span class="cta">Give Drupal a test drive: </span><a href="/try-drupal" class="button">Try Drupal 8</a>',
    'format' => '3',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '716b77de-9d17-4ba1-bb81-2818c512c356';
  $display->content['new-716b77de-9d17-4ba1-bb81-2818c512c356'] = $pane;
  $display->panels['octonary'][0] = 'new-716b77de-9d17-4ba1-bb81-2818c512c356';
  $pane = new stdClass();
  $pane->pid = 'new-e2041086-c2a2-465d-b5db-a14b16903a46';
  $pane->panel = 'quaternary';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Harmony in deployment',
    'title' => 'Harmony in deployment',
    'body' => 'Fine-tune your configuration management with an all-new system. It\'s now much easier to move configuration changes between environments. That means better deployments and more sophisticated maintenance are at your fingertips. Build with precise control over the integrity of views, content types, user roles, and more. Store configuration data consistently, in a central place. The power to unleash it all is now a standard Drupal feature.',
    'format' => '1',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2041086-c2a2-465d-b5db-a14b16903a46';
  $display->content['new-e2041086-c2a2-465d-b5db-a14b16903a46'] = $pane;
  $display->panels['quaternary'][0] = 'new-e2041086-c2a2-465d-b5db-a14b16903a46';
  $pane = new stdClass();
  $pane->pid = 'new-1462fb1d-0c87-4a6f-b4fd-d6d9dbcb3671';
  $pane->panel = 'quinary';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Languages for anyone',
    'title' => 'Languages for anyone',
    'body' => 'Choose any one of a hundred languages at the first step of installation. Translate any component of the software—taxonomy, comments, configuration, image styles, and more. Enjoy better browser language detection, easier right-to-left styling, and built-in transliteration support. You can build unique, customized localizations. And you can use them to create amazing internationalized experiences.',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1462fb1d-0c87-4a6f-b4fd-d6d9dbcb3671';
  $display->content['new-1462fb1d-0c87-4a6f-b4fd-d6d9dbcb3671'] = $pane;
  $display->panels['quinary'][0] = 'new-1462fb1d-0c87-4a6f-b4fd-d6d9dbcb3671';
  $pane = new stdClass();
  $pane->pid = 'new-82f939b7-1a98-41ed-bd5e-9a0473403bcc';
  $pane->panel = 'secondary';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Tools for systems',
    'title' => 'Tools for systems',
    'body' => 'Meet Drupal 8, a powerful new suite of tools, and the strongest link in your new content supply chain. Interact with countless applications, thanks to REST-first native web services. Use progressive decoupling to break free from back-end restrictions without sacrificing security and accessibility. Deliver faster, with enhanced entity caching and better integration with CDNs and reverse proxies. With Drupal 8, you can build almost any integrated experience you can imagine.
',
    'format' => '1',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '82f939b7-1a98-41ed-bd5e-9a0473403bcc';
  $display->content['new-82f939b7-1a98-41ed-bd5e-9a0473403bcc'] = $pane;
  $display->panels['secondary'][0] = 'new-82f939b7-1a98-41ed-bd5e-9a0473403bcc';
  $pane = new stdClass();
  $pane->pid = 'new-2f84838b-9540-49ed-a354-4c0e42061888';
  $pane->panel = 'senary';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Use Case 7',
    'title' => 'Proudly found elsewhere',
    'body' => 'Maximize Drupal’s flexibility with object-oriented code and the latest PHP standards. Some of the best-known technologies are now part of Drupal 8. It depends on dozens of external libraries—like Composer, Guzzle, and Symfony2—so you can write and debug code faster, with more confidence. Say goodbye to PHPTemplate; rely on much more readable code when theming with Twig. And use simpler, more unified APIs to add power to your modules and themes.',
    'format' => '1',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f84838b-9540-49ed-a354-4c0e42061888';
  $display->content['new-2f84838b-9540-49ed-a354-4c0e42061888'] = $pane;
  $display->panels['senary'][0] = 'new-2f84838b-9540-49ed-a354-4c0e42061888';
  $pane = new stdClass();
  $pane->pid = 'new-9b829a26-ef1a-49e5-97cd-3ab971b75a60';
  $pane->panel = 'septenary';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Download CTA',
    'title' => '',
    'body' => '<span class="cta">Build something amazing: </span><a href="/8/download" class="button">Download Drupal 8</a>',
    'format' => '3',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9b829a26-ef1a-49e5-97cd-3ab971b75a60';
  $display->content['new-9b829a26-ef1a-49e5-97cd-3ab971b75a60'] = $pane;
  $display->panels['septenary'][0] = 'new-9b829a26-ef1a-49e5-97cd-3ab971b75a60';
  $pane = new stdClass();
  $pane->pid = 'new-c02a700f-53fd-476e-8e19-b9e752033952';
  $pane->panel = 'tertiary_first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Simplicity for editors',
    'title' => 'Simplicity for editors',
    'body' => 'Turn great ideas into great experiences. Leave your desktop behind and create compelling content on more modern devices than ever. Work efficiently with better previews and drag-and-drop image uploads. And when you need to make quick changes, choose in-context editing and use only the tools you need.',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c02a700f-53fd-476e-8e19-b9e752033952';
  $display->content['new-c02a700f-53fd-476e-8e19-b9e752033952'] = $pane;
  $display->panels['tertiary_first'][0] = 'new-c02a700f-53fd-476e-8e19-b9e752033952';
  $pane = new stdClass();
  $pane->pid = 'new-01e95054-6096-40be-a2c2-d6aae920adc1';
  $pane->panel = 'tertiary_second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Power for administrators',
    'title' => 'Power for administrators',
    'body' => 'It\'s easier to customize components—views, lists, blocks, admin tools, and more—than ever before. Control how data is displayed without using a single line of code. Structure content with more field types, and add SEO-friendly meaning with native Schema.org markup. Make creating and managing content a great experience too.',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '01e95054-6096-40be-a2c2-d6aae920adc1';
  $display->content['new-01e95054-6096-40be-a2c2-d6aae920adc1'] = $pane;
  $display->panels['tertiary_second'][0] = 'new-01e95054-6096-40be-a2c2-d6aae920adc1';
  $pane = new stdClass();
  $pane->pid = 'new-a004108e-a73c-4062-98a4-5af26b6fffbd';
  $pane->panel = 'tertiary_third';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Accessibility for everyone',
    'title' => 'Accessibility for everyone',
    'body' => 'Drupal 8 ships with extensive support for accessibility standards, and not only for color contrast and font sizes. Semantic HTML5 helps you create interactions—even ones with dynamic content—that are more usable. Plus, Drupal now adopts more WAI-ARIA practices. You can make content structures easier to understand for people with disabilities.',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a004108e-a73c-4062-98a4-5af26b6fffbd';
  $display->content['new-a004108e-a73c-4062-98a4-5af26b6fffbd'] = $pane;
  $display->panels['tertiary_third'][0] = 'new-a004108e-a73c-4062-98a4-5af26b6fffbd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:d8_layout:default'] = $panelizer;

  return $export;
}
