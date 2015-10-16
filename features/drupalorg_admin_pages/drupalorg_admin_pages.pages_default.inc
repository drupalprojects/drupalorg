<?php
/**
 * @file
 * drupalorg_admin_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalorg_admin_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'administer_user_content';
  $page->task = 'page';
  $page->admin_title = 'Administer User Content';
  $page->admin_description = '';
  $page->path = 'user/%user/admin-content';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Administer content',
    'name' => 'navigation',
    'weight' => '9',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_administer_user_content__panel';
  $handler->task = 'page';
  $handler->subtask = 'administer_user_content';
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
  $display->uuid = '689873c2-2723-4409-be42-64a281a6c424';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b8b631a3-8caf-42fc-93de-2c0cd9d32c5a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalorg_admin_node_by_user-admin_node_by_user_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'uid' => '%user:uid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b8b631a3-8caf-42fc-93de-2c0cd9d32c5a';
    $display->content['new-b8b631a3-8caf-42fc-93de-2c0cd9d32c5a'] = $pane;
    $display->panels['middle'][0] = 'new-b8b631a3-8caf-42fc-93de-2c0cd9d32c5a';
    $pane = new stdClass();
    $pane->pid = 'new-68489d25-6d5e-4fa2-be38-241dc5076f5f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalorg_admin_comments_by_user-admin_comments_by_user_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'uid' => '%user:uid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '68489d25-6d5e-4fa2-be38-241dc5076f5f';
    $display->content['new-68489d25-6d5e-4fa2-be38-241dc5076f5f'] = $pane;
    $display->panels['middle'][1] = 'new-68489d25-6d5e-4fa2-be38-241dc5076f5f';
    $pane = new stdClass();
    $pane->pid = 'new-08b90301-9876-42e0-b8bc-84896f083b0a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'drupalorg_admin_noderev_by_user-admin_noderev_by_user_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'uid' => '%user:uid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '08b90301-9876-42e0-b8bc-84896f083b0a';
    $display->content['new-08b90301-9876-42e0-b8bc-84896f083b0a'] = $pane;
    $display->panels['middle'][2] = 'new-08b90301-9876-42e0-b8bc-84896f083b0a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['administer_user_content'] = $page;

  return $pages;

}
