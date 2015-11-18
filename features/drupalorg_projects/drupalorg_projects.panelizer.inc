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

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:project_release:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project_release';
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f0fd6694-ace0-4a8e-aab5-fbd3ede237dc';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-18e72925-657a-46ea-a616-e4953c2b5709';
  $pane->panel = 'bottom_right_content';
  $pane->type = 'project_components';
  $pane->subtype = 'project_components';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer projects',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Components',
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
  $pane->uuid = '18e72925-657a-46ea-a616-e4953c2b5709';
  $display->content['new-18e72925-657a-46ea-a616-e4953c2b5709'] = $pane;
  $display->panels['bottom_right_content'][0] = 'new-18e72925-657a-46ea-a616-e4953c2b5709';
  $pane = new stdClass();
  $pane->pid = 'new-c719bc17-0b0a-48ce-8aa1-5b413c9eadf6';
  $pane->panel = 'bottom_right_content';
  $pane->type = 'project_dependencies';
  $pane->subtype = 'project_dependencies';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer projects',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Dependencies',
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
  $pane->uuid = 'c719bc17-0b0a-48ce-8aa1-5b413c9eadf6';
  $display->content['new-c719bc17-0b0a-48ce-8aa1-5b413c9eadf6'] = $pane;
  $display->panels['bottom_right_content'][1] = 'new-c719bc17-0b0a-48ce-8aa1-5b413c9eadf6';
  $pane = new stdClass();
  $pane->pid = 'new-b265c08b-16ca-420f-8f85-2058b9e72966';
  $pane->panel = 'left_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_release_files-release_files_pane';
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
  $pane->uuid = 'b265c08b-16ca-420f-8f85-2058b9e72966';
  $display->content['new-b265c08b-16ca-420f-8f85-2058b9e72966'] = $pane;
  $display->panels['left_content'][0] = 'new-b265c08b-16ca-420f-8f85-2058b9e72966';
  $pane = new stdClass();
  $pane->pid = 'new-30eef2e9-7098-4079-ba0e-a60a3ee3a373';
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
    'override_title' => 1,
    'override_title_text' => 'Release notes',
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
  $pane->uuid = '30eef2e9-7098-4079-ba0e-a60a3ee3a373';
  $display->content['new-30eef2e9-7098-4079-ba0e-a60a3ee3a373'] = $pane;
  $display->panels['left_content'][1] = 'new-30eef2e9-7098-4079-ba0e-a60a3ee3a373';
  $pane = new stdClass();
  $pane->pid = 'new-010613f9-e7e6-4342-9999-33c75e6b05a1';
  $pane->panel = 'left_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_package_local_items-local_items_pane';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:node',
        'settings' => array(
          'type' => array(
            'project_distribution' => 'project_distribution',
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 1,
    'override_title_text' => 'In this package',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '010613f9-e7e6-4342-9999-33c75e6b05a1';
  $display->content['new-010613f9-e7e6-4342-9999-33c75e6b05a1'] = $pane;
  $display->panels['left_content'][2] = 'new-010613f9-e7e6-4342-9999-33c75e6b05a1';
  $pane = new stdClass();
  $pane->pid = 'new-2cb25f83-c930-4ef5-befb-339dda720f2d';
  $pane->panel = 'left_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_package_local_patches-local_patches_pane';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:node',
        'settings' => array(
          'type' => array(
            'project_distribution' => 'project_distribution',
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 1,
    'override_title_text' => 'Patches applied in this package',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2cb25f83-c930-4ef5-befb-339dda720f2d';
  $display->content['new-2cb25f83-c930-4ef5-befb-339dda720f2d'] = $pane;
  $display->panels['left_content'][3] = 'new-2cb25f83-c930-4ef5-befb-339dda720f2d';
  $pane = new stdClass();
  $pane->pid = 'new-ec4d2a11-425f-4f4d-9b70-4fb6c30453f9';
  $pane->panel = 'left_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_package_remote_items-remote_items_pane';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:node',
        'settings' => array(
          'type' => array(
            'project_distribution' => 'project_distribution',
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 1,
    'override_title_text' => 'External code in this package',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ec4d2a11-425f-4f4d-9b70-4fb6c30453f9';
  $display->content['new-ec4d2a11-425f-4f4d-9b70-4fb6c30453f9'] = $pane;
  $display->panels['left_content'][4] = 'new-ec4d2a11-425f-4f4d-9b70-4fb6c30453f9';
  $pane = new stdClass();
  $pane->pid = 'new-88e9ba76-896a-4baa-85fc-eaf29b1a1681';
  $pane->panel = 'left_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_package_remote_patches-remote_patches_pane';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:node',
        'settings' => array(
          'type' => array(
            'project_distribution' => 'project_distribution',
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 1,
    'override_title_text' => 'Patches applied to external code in this package',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '88e9ba76-896a-4baa-85fc-eaf29b1a1681';
  $display->content['new-88e9ba76-896a-4baa-85fc-eaf29b1a1681'] = $pane;
  $display->panels['left_content'][5] = 'new-88e9ba76-896a-4baa-85fc-eaf29b1a1681';
  $pane = new stdClass();
  $pane->pid = 'new-d7f384c3-978e-4731-bea5-1deaac1dd47d';
  $pane->panel = 'top_right_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_release_info-release_info_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 1,
    'override_title_text' => 'Release info',
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
  $pane->uuid = 'd7f384c3-978e-4731-bea5-1deaac1dd47d';
  $display->content['new-d7f384c3-978e-4731-bea5-1deaac1dd47d'] = $pane;
  $display->panels['top_right_content'][0] = 'new-d7f384c3-978e-4731-bea5-1deaac1dd47d';
  $pane = new stdClass();
  $pane->pid = 'new-0d9411da-862a-4776-8746-d95076aebf01';
  $pane->panel = 'top_right_content';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0d9411da-862a-4776-8746-d95076aebf01';
  $display->content['new-0d9411da-862a-4776-8746-d95076aebf01'] = $pane;
  $display->panels['top_right_content'][1] = 'new-0d9411da-862a-4776-8746-d95076aebf01';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:project_release:default:default'] = $panelizer;

  return $export;
}
