<?php
/**
 * @file
 * drupalorg_content_types.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function drupalorg_content_types_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:default';
  $panelizer->title = 'Default';
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
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'hydra';
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
  $pane->pid = 'new-cea72409-263d-4a6e-a23d-c310a6969e31';
  $pane->panel = 'left_content';
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
  $pane->uuid = 'cea72409-263d-4a6e-a23d-c310a6969e31';
  $display->content['new-cea72409-263d-4a6e-a23d-c310a6969e31'] = $pane;
  $display->panels['left_content'][0] = 'new-cea72409-263d-4a6e-a23d-c310a6969e31';
  $pane = new stdClass();
  $pane->pid = 'new-ec966581-0d61-4f4b-b0ad-812d04b0f2b2';
  $pane->panel = 'top_right_content';
  $pane->type = 'block';
  $pane->subtype = 'og_menu-og_single_menu_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = 'ec966581-0d61-4f4b-b0ad-812d04b0f2b2';
  $display->content['new-ec966581-0d61-4f4b-b0ad-812d04b0f2b2'] = $pane;
  $display->panels['top_right_content'][0] = 'new-ec966581-0d61-4f4b-b0ad-812d04b0f2b2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-cea72409-263d-4a6e-a23d-c310a6969e31';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:single_column:default';
  $panelizer->title = 'Single column';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
  $display->title = '%node:title';
  $display->uuid = '9eec492b-caff-457d-a353-ef88f1486930';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f3c40307-5416-4914-bbdd-30f77aaa3a71';
  $pane->panel = 'content';
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
  $pane->uuid = 'f3c40307-5416-4914-bbdd-30f77aaa3a71';
  $display->content['new-f3c40307-5416-4914-bbdd-30f77aaa3a71'] = $pane;
  $display->panels['content'][0] = 'new-f3c40307-5416-4914-bbdd-30f77aaa3a71';
  $pane = new stdClass();
  $pane->pid = 'new-c1bb5834-42ef-4917-962d-dd0eabe60ef3';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:upload';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_table',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c1bb5834-42ef-4917-962d-dd0eabe60ef3';
  $display->content['new-c1bb5834-42ef-4917-962d-dd0eabe60ef3'] = $pane;
  $display->panels['content'][1] = 'new-c1bb5834-42ef-4917-962d-dd0eabe60ef3';
  $pane = new stdClass();
  $pane->pid = 'new-86c9aba3-7c1b-4e77-bd56-9d5145672911';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:og_group_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'og_list_default',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '86c9aba3-7c1b-4e77-bd56-9d5145672911';
  $display->content['new-86c9aba3-7c1b-4e77-bd56-9d5145672911'] = $pane;
  $display->panels['content'][2] = 'new-86c9aba3-7c1b-4e77-bd56-9d5145672911';
  $pane = new stdClass();
  $pane->pid = 'new-8171c62d-5559-4423-90fb-a3dbda8e3522';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_include_in_group_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'hidden',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8171c62d-5559-4423-90fb-a3dbda8e3522';
  $display->content['new-8171c62d-5559-4423-90fb-a3dbda8e3522'] = $pane;
  $display->panels['content'][3] = 'new-8171c62d-5559-4423-90fb-a3dbda8e3522';
  $pane = new stdClass();
  $pane->pid = 'new-ee21dc47-59a8-426a-8f0f-995a75b45020';
  $pane->panel = 'content';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'default',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ee21dc47-59a8-426a-8f0f-995a75b45020';
  $display->content['new-ee21dc47-59a8-426a-8f0f-995a75b45020'] = $pane;
  $display->panels['content'][4] = 'new-ee21dc47-59a8-426a-8f0f-995a75b45020';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f3c40307-5416-4914-bbdd-30f77aaa3a71';
  $panelizer->display = $display;
  $export['node:page:single_column:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:section:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'section';
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
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'hydra';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'left_content' => NULL,
      'top_right_content' => NULL,
      'bottom_right_content' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ad6cee15-f648-4254-820e-58033fc20b8c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-58c3ed81-0f8f-4de1-b41c-4ce909a66101';
  $pane->panel = 'left_content';
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
  $pane->uuid = '58c3ed81-0f8f-4de1-b41c-4ce909a66101';
  $display->content['new-58c3ed81-0f8f-4de1-b41c-4ce909a66101'] = $pane;
  $display->panels['left_content'][0] = 'new-58c3ed81-0f8f-4de1-b41c-4ce909a66101';
  $pane = new stdClass();
  $pane->pid = 'new-13d4d68f-49bd-4649-bf4e-831d8580dde1';
  $pane->panel = 'top_right_content';
  $pane->type = 'block';
  $pane->subtype = 'og_menu-og_single_menu_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '13d4d68f-49bd-4649-bf4e-831d8580dde1';
  $display->content['new-13d4d68f-49bd-4649-bf4e-831d8580dde1'] = $pane;
  $display->panels['top_right_content'][0] = 'new-13d4d68f-49bd-4649-bf4e-831d8580dde1';
  $pane = new stdClass();
  $pane->pid = 'new-c6fa271f-a4ce-4c82-9dca-b14593655497';
  $pane->panel = 'top_right_content';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(),
    'field_name' => 'og_group_ref',
    'context' => 'panelizer',
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
  $pane->uuid = 'c6fa271f-a4ce-4c82-9dca-b14593655497';
  $display->content['new-c6fa271f-a4ce-4c82-9dca-b14593655497'] = $pane;
  $display->panels['top_right_content'][1] = 'new-c6fa271f-a4ce-4c82-9dca-b14593655497';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:section:default:default'] = $panelizer;

  return $export;
}
