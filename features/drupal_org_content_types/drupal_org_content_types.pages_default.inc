<?php
/**
 * @file
 * drupal_org_content_types.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function drupal_org_content_types_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__node_in_an_og';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Node in an OG',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Groups audience [og_group_ref])',
        'keyword' => 'group',
        'name' => 'entity_from_field:og_group_ref-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'node_in_an_og',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group_content',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%group:title',
    'panels_breadcrumbs_paths' => '%group:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'og_menu',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '74.93686868686869',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'og_menu' => array(
        'type' => 'region',
        'title' => 'OG Menu',
        'width' => '25.063131313131315',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'og_menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fee7ba1e-19ac-4f89-aae5-15589f520d14';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b999a13e-9df2-416a-8d4b-fd7268aedb88';
    $pane->panel = 'center';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
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
    $pane->uuid = 'b999a13e-9df2-416a-8d4b-fd7268aedb88';
    $display->content['new-b999a13e-9df2-416a-8d4b-fd7268aedb88'] = $pane;
    $display->panels['center'][0] = 'new-b999a13e-9df2-416a-8d4b-fd7268aedb88';
    $pane = new stdClass();
    $pane->pid = 'new-e14a10bb-d462-419b-94aa-e75e0210330d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = 'e14a10bb-d462-419b-94aa-e75e0210330d';
    $display->content['new-e14a10bb-d462-419b-94aa-e75e0210330d'] = $pane;
    $display->panels['center'][1] = 'new-e14a10bb-d462-419b-94aa-e75e0210330d';
    $pane = new stdClass();
    $pane->pid = 'new-c49f9f9a-e0af-4116-a41a-dc435a200893';
    $pane->panel = 'og_menu';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_menu-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:og_group_ref-node-node_1',
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
    $pane->uuid = 'c49f9f9a-e0af-4116-a41a-dc435a200893';
    $display->content['new-c49f9f9a-e0af-4116-a41a-dc435a200893'] = $pane;
    $display->panels['og_menu'][0] = 'new-c49f9f9a-e0af-4116-a41a-dc435a200893';
    $pane = new stdClass();
    $pane->pid = 'new-ee16dabd-157d-45f0-94b0-fa2a2451d76b';
    $pane->panel = 'og_menu';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
      'context' => 'relationship_entity_from_field:og_group_ref-node-node_1',
      'override_title' => 1,
      'override_title_text' => 'Add content',
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
    $pane->uuid = 'ee16dabd-157d-45f0-94b0-fa2a2451d76b';
    $display->content['new-ee16dabd-157d-45f0-94b0-fa2a2451d76b'] = $pane;
    $display->panels['og_menu'][1] = 'new-ee16dabd-157d-45f0-94b0-fa2a2451d76b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e14a10bb-d462-419b-94aa-e75e0210330d';
  $handler->conf['display'] = $display;
  $export['node_view__node_in_an_og'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__section_panel';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Section panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'section_panel',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'section' => 'section',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '74.94456762749446',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'column',
        'width' => '25.055432372505535',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'meta',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'meta' => array(
        'type' => 'region',
        'title' => 'Section Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'meta' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e78f0385-640e-421b-a81e-afc1e6f9ea18';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-00798993-08fa-4954-850d-4d86dc2a40fa';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '00798993-08fa-4954-850d-4d86dc2a40fa';
    $display->content['new-00798993-08fa-4954-850d-4d86dc2a40fa'] = $pane;
    $display->panels['center'][0] = 'new-00798993-08fa-4954-850d-4d86dc2a40fa';
    $pane = new stdClass();
    $pane->pid = 'new-0d690c55-8fcb-45ae-a0d3-1e57ddc6cd86';
    $pane->panel = 'meta';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_menu-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->uuid = '0d690c55-8fcb-45ae-a0d3-1e57ddc6cd86';
    $display->content['new-0d690c55-8fcb-45ae-a0d3-1e57ddc6cd86'] = $pane;
    $display->panels['meta'][0] = 'new-0d690c55-8fcb-45ae-a0d3-1e57ddc6cd86';
    $pane = new stdClass();
    $pane->pid = 'new-c740bd00-7b48-43ae-9be4-aa211203d9cf';
    $pane->panel = 'meta';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Add content',
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
    $pane->uuid = 'c740bd00-7b48-43ae-9be4-aa211203d9cf';
    $display->content['new-c740bd00-7b48-43ae-9be4-aa211203d9cf'] = $pane;
    $display->panels['meta'][1] = 'new-c740bd00-7b48-43ae-9be4-aa211203d9cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__section_panel'] = $handler;

  return $export;
}
