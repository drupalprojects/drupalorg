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
      'identifier' => 'Node from Node (on Node: Groups audience [og_group_ref])',
      'keyword' => 'group',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => '0',
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
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e8ca66aa-6ae1-478e-8297-b0d4a6bb116c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0058af26-bbf1-472f-8ce3-969e59a88c67';
    $pane->panel = 'left';
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
    $pane->uuid = '0058af26-bbf1-472f-8ce3-969e59a88c67';
    $display->content['new-0058af26-bbf1-472f-8ce3-969e59a88c67'] = $pane;
    $display->panels['left'][0] = 'new-0058af26-bbf1-472f-8ce3-969e59a88c67';
    $pane = new stdClass();
    $pane->pid = 'new-61c7d8a6-aed8-456f-9171-20750b6f0401';
    $pane->panel = 'left';
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
    $pane->uuid = '61c7d8a6-aed8-456f-9171-20750b6f0401';
    $display->content['new-61c7d8a6-aed8-456f-9171-20750b6f0401'] = $pane;
    $display->panels['left'][1] = 'new-61c7d8a6-aed8-456f-9171-20750b6f0401';
    $pane = new stdClass();
    $pane->pid = 'new-2ecdd7cc-146e-4bc8-a193-202d3272cfd4';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'og_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'relationship_entity_from_field:og_group_ref-node-node_1.nid',
      ),
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
    $pane->uuid = '2ecdd7cc-146e-4bc8-a193-202d3272cfd4';
    $display->content['new-2ecdd7cc-146e-4bc8-a193-202d3272cfd4'] = $pane;
    $display->panels['right'][0] = 'new-2ecdd7cc-146e-4bc8-a193-202d3272cfd4';
    $pane = new stdClass();
    $pane->pid = 'new-222a0202-ecf9-4daf-95b3-496499341a50';
    $pane->panel = 'right';
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
    $pane->uuid = '222a0202-ecf9-4daf-95b3-496499341a50';
    $display->content['new-222a0202-ecf9-4daf-95b3-496499341a50'] = $pane;
    $display->panels['right'][1] = 'new-222a0202-ecf9-4daf-95b3-496499341a50';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0058af26-bbf1-472f-8ce3-969e59a88c67';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

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
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%group:title',
    'panels_breadcrumbs_paths' => '%group:url',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1492d9ef-2304-4dce-a265-aa2081c0632a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-83fa093f-798b-44fc-97cc-7003b633e670';
    $pane->panel = 'left';
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
    $pane->uuid = '83fa093f-798b-44fc-97cc-7003b633e670';
    $display->content['new-83fa093f-798b-44fc-97cc-7003b633e670'] = $pane;
    $display->panels['left'][0] = 'new-83fa093f-798b-44fc-97cc-7003b633e670';
    $pane = new stdClass();
    $pane->pid = 'new-87e381ec-ff73-4765-b030-fa59a8716f3e';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_menu-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
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
    $pane->uuid = '87e381ec-ff73-4765-b030-fa59a8716f3e';
    $display->content['new-87e381ec-ff73-4765-b030-fa59a8716f3e'] = $pane;
    $display->panels['right'][0] = 'new-87e381ec-ff73-4765-b030-fa59a8716f3e';
    $pane = new stdClass();
    $pane->pid = 'new-896bbff7-b48a-42c5-8665-16c2caf39354';
    $pane->panel = 'right';
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
    $pane->uuid = '896bbff7-b48a-42c5-8665-16c2caf39354';
    $display->content['new-896bbff7-b48a-42c5-8665-16c2caf39354'] = $pane;
    $display->panels['right'][1] = 'new-896bbff7-b48a-42c5-8665-16c2caf39354';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:section:default:default'] = $panelizer;

  return $export;
}
