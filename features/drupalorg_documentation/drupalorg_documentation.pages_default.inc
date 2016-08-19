<?php
/**
 * @file
 * drupalorg_documentation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalorg_documentation_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'discuss';
  $page->task = 'page';
  $page->admin_title = 'Discuss';
  $page->admin_description = '';
  $page->path = 'node/%node/discuss';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'documentation' => 'documentation',
            'guide' => 'guide',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'view',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'node_comment',
        'settings' => NULL,
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
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
    'title' => 'Discuss',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
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
  $handler->name = 'page_discuss__panel_context_1e2768d2-5836-4129-8b55-94123ccdc7ab';
  $handler->task = 'page';
  $handler->subtask = 'discuss';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'cygnus';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Discuss <em>%node:title</em>';
  $display->uuid = 'ef07149a-91a0-4ac7-bd29-ac42cfccdfa2';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3c66644f-3038-4873-a643-d6749c8e17bc';
  $pane->panel = 'content';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '0',
    'comments_per_page' => '300',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3c66644f-3038-4873-a643-d6749c8e17bc';
  $display->content['new-3c66644f-3038-4873-a643-d6749c8e17bc'] = $pane;
  $display->panels['content'][0] = 'new-3c66644f-3038-4873-a643-d6749c8e17bc';
  $pane = new stdClass();
  $pane->pid = 'new-2f1eef76-4fc2-4747-b5fc-58f86981e78a';
  $pane->panel = 'preface';
  $pane->type = 'nodechanges_edit';
  $pane->subtype = 'nodechanges_edit';
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
  $pane->uuid = '2f1eef76-4fc2-4747-b5fc-58f86981e78a';
  $display->content['new-2f1eef76-4fc2-4747-b5fc-58f86981e78a'] = $pane;
  $display->panels['preface'][0] = 'new-2f1eef76-4fc2-4747-b5fc-58f86981e78a';
  $pane = new stdClass();
  $pane->pid = 'new-299b77e6-2c58-4285-b0f2-f630a76defee';
  $pane->panel = 'preface';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'update',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '299b77e6-2c58-4285-b0f2-f630a76defee';
  $display->content['new-299b77e6-2c58-4285-b0f2-f630a76defee'] = $pane;
  $display->panels['preface'][1] = 'new-299b77e6-2c58-4285-b0f2-f630a76defee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['discuss'] = $page;

  return $pages;

}
