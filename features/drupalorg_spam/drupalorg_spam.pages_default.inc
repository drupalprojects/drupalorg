<?php
/**
 * @file
 * drupalorg_spam.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalorg_spam_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalorg_admin_comment_spam';
  $page->task = 'page';
  $page->admin_title = 'Admin Comment Spam';
  $page->admin_description = '';
  $page->path = 'admin/content/spam/comment';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer comments',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Comment',
    'name' => 'navigation',
    'weight' => '9',
    'parent' => array(
      'type' => NULL,
      'title' => '',
      'name' => 'menu-developer-links',
      'weight' => '',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalorg_admin_comment_spam__panel_context_4938d4a2-0260-4f55-a62e-680f9b386b96';
  $handler->task = 'page';
  $handler->subtask = 'drupalorg_admin_comment_spam';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e1b83f80-46d8-4117-a734-819af13a19b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-38639653-550b-4846-9199-6fc7f3d3a2a9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalorg_comment_spam-drupalorg_comment_spam_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '38639653-550b-4846-9199-6fc7f3d3a2a9';
    $display->content['new-38639653-550b-4846-9199-6fc7f3d3a2a9'] = $pane;
    $display->panels['middle'][0] = 'new-38639653-550b-4846-9199-6fc7f3d3a2a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalorg_admin_comment_spam'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalorg_admin_node_spam';
  $page->task = 'page';
  $page->admin_title = 'Admin Node Spam';
  $page->admin_description = '';
  $page->path = 'admin/content/spam/node';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer nodes',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Content',
    'name' => 'navigation',
    'weight' => '-9',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Spam',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalorg_admin_node_spam__panel';
  $handler->task = 'page';
  $handler->subtask = 'drupalorg_admin_node_spam';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e1b83f80-46d8-4117-a734-819af13a19b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2df549b3-a63f-4618-ae6c-f98a591a69a5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalorg_node_spam-drupalorg_node_spam_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2df549b3-a63f-4618-ae6c-f98a591a69a5';
    $display->content['new-2df549b3-a63f-4618-ae6c-f98a591a69a5'] = $pane;
    $display->panels['middle'][0] = 'new-2df549b3-a63f-4618-ae6c-f98a591a69a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalorg_admin_node_spam'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drupalorg_admin_spammers';
  $page->task = 'page';
  $page->admin_title = 'Admin Spammers';
  $page->admin_description = '';
  $page->path = 'admin/people/spammers';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer users',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Spammers',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => NULL,
      'title' => '',
      'name' => 'menu-developer-links',
      'weight' => '',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drupalorg_admin_spammers__panel_context_96f0d0e1-2e18-4eba-bfff-e4f97c604c19';
  $handler->task = 'page';
  $handler->subtask = 'drupalorg_admin_spammers';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e1b83f80-46d8-4117-a734-819af13a19b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-38639653-550b-4846-9199-6fc7f3d3a2a9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalorg_spammers-spammers_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '38639653-550b-4846-9199-6fc7f3d3a2a9';
    $display->content['new-38639653-550b-4846-9199-6fc7f3d3a2a9'] = $pane;
    $display->panels['middle'][0] = 'new-38639653-550b-4846-9199-6fc7f3d3a2a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drupalorg_admin_spammers'] = $page;

  return $pages;

}
