<?php
/**
 * @file
 * drupalorg_projects.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function drupalorg_projects_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'download_table';
  $mini->category = 'Drupalorg Project';
  $mini->admin_title = 'Download Table';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = 'Downloads';
  $display->uuid = 'df0e54b7-912e-4622-95d2-3bfff9d5199b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-eb365087-1e3b-4f8d-8cd5-ef6feebcf57c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_downloads-recommended';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '%title',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'eb365087-1e3b-4f8d-8cd5-ef6feebcf57c';
  $display->content['new-eb365087-1e3b-4f8d-8cd5-ef6feebcf57c'] = $pane;
  $display->panels['middle'][0] = 'new-eb365087-1e3b-4f8d-8cd5-ef6feebcf57c';
  $pane = new stdClass();
  $pane->pid = 'new-bbace5f0-8ece-4481-8def-952f3624ff25';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_downloads-security';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '%title',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bbace5f0-8ece-4481-8def-952f3624ff25';
  $display->content['new-bbace5f0-8ece-4481-8def-952f3624ff25'] = $pane;
  $display->panels['middle'][1] = 'new-bbace5f0-8ece-4481-8def-952f3624ff25';
  $pane = new stdClass();
  $pane->pid = 'new-0712750e-7ddd-43d5-a928-0020285a2fdb';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_downloads-development';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '%title',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0712750e-7ddd-43d5-a928-0020285a2fdb';
  $display->content['new-0712750e-7ddd-43d5-a928-0020285a2fdb'] = $pane;
  $display->panels['middle'][2] = 'new-0712750e-7ddd-43d5-a928-0020285a2fdb';
  $pane = new stdClass();
  $pane->pid = 'new-3555485c-ebd6-4ef3-8821-89d0a932bbee';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:node',
        'settings' => array(
          'type' => array(
            'project_core' => 'project_core',
          ),
        ),
        'context' => 'requiredcontext_entity:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Drupal 6 Releases',
    'title' => 'Drupal 6 Releases',
    'body' => 'As of February 24, 2016, Drupal 6 has reached end-of-life and will no longer be supported. If you are starting a new Drupal website, you should download a newer version.

The final Drupal 6 <em>security release</em> is <a href="/drupal-6.38-release-notes">Drupal 6.38</a>. Upgrading sites running 6.37 and lower is recommended.',
    'format' => '1',
    'substitute' => 0,
    'title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3555485c-ebd6-4ef3-8821-89d0a932bbee';
  $display->content['new-3555485c-ebd6-4ef3-8821-89d0a932bbee'] = $pane;
  $display->panels['middle'][3] = 'new-3555485c-ebd6-4ef3-8821-89d0a932bbee';
  $pane = new stdClass();
  $pane->pid = 'new-cd086f79-69b4-47cc-8cb3-74b7bbf1a218';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'project_downloads-other';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_entity:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'cd086f79-69b4-47cc-8cb3-74b7bbf1a218';
  $display->content['new-cd086f79-69b4-47cc-8cb3-74b7bbf1a218'] = $pane;
  $display->panels['middle'][4] = 'new-cd086f79-69b4-47cc-8cb3-74b7bbf1a218';
  $pane = new stdClass();
  $pane->pid = 'new-4b053f83-d857-45e1-9ba2-66f62c335cf8';
  $pane->panel = 'middle';
  $pane->type = 'download_releases_link';
  $pane->subtype = 'download_releases_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4b053f83-d857-45e1-9ba2-66f62c335cf8';
  $display->content['new-4b053f83-d857-45e1-9ba2-66f62c335cf8'] = $pane;
  $display->panels['middle'][5] = 'new-4b053f83-d857-45e1-9ba2-66f62c335cf8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['download_table'] = $mini;

  return $export;
}
