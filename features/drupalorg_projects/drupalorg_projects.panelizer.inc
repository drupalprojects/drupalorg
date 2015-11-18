<?php
/**
 * @file
 * drupalorg_projects.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drupalorg_projects_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project_core:core_project_page:default';
  $panelizer->title = 'Core Project Page';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project_core';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3bd2a0e7-3dbb-4444-9f22-9c5bdf9a2210';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d3ec6efd-45c4-41f1-9f0f-709c9ec1062a';
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
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd3ec6efd-45c4-41f1-9f0f-709c9ec1062a';
  $display->content['new-d3ec6efd-45c4-41f1-9f0f-709c9ec1062a'] = $pane;
  $display->panels['center'][0] = 'new-d3ec6efd-45c4-41f1-9f0f-709c9ec1062a';
  $pane = new stdClass();
  $pane->pid = 'new-e013a629-dd73-45ea-a0ae-2fb24bc26e15';
  $pane->panel = 'center';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 1,
    'context' => 'panelizer',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e013a629-dd73-45ea-a0ae-2fb24bc26e15';
  $display->content['new-e013a629-dd73-45ea-a0ae-2fb24bc26e15'] = $pane;
  $display->panels['center'][1] = 'new-e013a629-dd73-45ea-a0ae-2fb24bc26e15';
  $pane = new stdClass();
  $pane->pid = 'new-23a3f19c-4971-4efb-8f7f-82a588ab8075';
  $pane->panel = 'center';
  $pane->type = 'panels_mini';
  $pane->subtype = 'download_table';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '23a3f19c-4971-4efb-8f7f-82a588ab8075';
  $display->content['new-23a3f19c-4971-4efb-8f7f-82a588ab8075'] = $pane;
  $display->panels['center'][2] = 'new-23a3f19c-4971-4efb-8f7f-82a588ab8075';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:project_core:core_project_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project_core:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project_core';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3bd2a0e7-3dbb-4444-9f22-9c5bdf9a2210';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d3ec6efd-45c4-41f1-9f0f-709c9ec1062a';
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
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd3ec6efd-45c4-41f1-9f0f-709c9ec1062a';
  $display->content['new-d3ec6efd-45c4-41f1-9f0f-709c9ec1062a'] = $pane;
  $display->panels['center'][0] = 'new-d3ec6efd-45c4-41f1-9f0f-709c9ec1062a';
  $pane = new stdClass();
  $pane->pid = 'new-e013a629-dd73-45ea-a0ae-2fb24bc26e15';
  $pane->panel = 'center';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 1,
    'context' => 'panelizer',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e013a629-dd73-45ea-a0ae-2fb24bc26e15';
  $display->content['new-e013a629-dd73-45ea-a0ae-2fb24bc26e15'] = $pane;
  $display->panels['center'][1] = 'new-e013a629-dd73-45ea-a0ae-2fb24bc26e15';
  $pane = new stdClass();
  $pane->pid = 'new-23a3f19c-4971-4efb-8f7f-82a588ab8075';
  $pane->panel = 'center';
  $pane->type = 'panels_mini';
  $pane->subtype = 'download_table';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '23a3f19c-4971-4efb-8f7f-82a588ab8075';
  $display->content['new-23a3f19c-4971-4efb-8f7f-82a588ab8075'] = $pane;
  $display->panels['center'][2] = 'new-23a3f19c-4971-4efb-8f7f-82a588ab8075';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:project_core:default:default'] = $panelizer;

  return $export;
}
