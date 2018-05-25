<?php
/**
 * @file
 * drupalorg_drupal8_panes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalorg_drupal8_panes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page';
  $strongarm->value = array(
    'status' => 1,
    'help' => '',
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'substitute' => '',
        'default' => 1,
        'choice' => 1,
      ),
      'teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'nodechanges' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'issuemetadata' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page:default_selection';
  $strongarm->value = 'node:page:default:default';
  $export['panelizer_node:page:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:19:"panelizer_node:page";s:23:"allowed_layout_settings";a:24:{s:11:"omega:siren";b:0;s:10:"omega:hero";b:0;s:16:"omega:off-canvas";b:0;s:12:"omega:simple";b:0;s:12:"omega:divine";b:0;s:8:"flexible";b:0;s:17:"threecol_33_34_33";b:0;s:13:"twocol_bricks";b:0;s:6:"onecol";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:6:"twocol";b:0;s:5:"hydra";b:1;s:6:"golden";b:0;s:5:"naked";b:0;s:8:"mondrian";b:0;s:6:"grid-2";b:0;s:6:"grid-3";b:0;s:6:"portal";b:1;s:6:"alcove";b:1;s:9:"capricorn";b:1;s:6:"cygnus";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:page_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_types';
  $strongarm->value = array(
    'cookie_consent_reset-cookie_consent_reset' => TRUE,
    'custom-custom' => TRUE,
    'custom-d8_landing_page_ad_1' => TRUE,
    'custom-d8_landing_page_ad_2' => TRUE,
    'custom-d8_landing_page_ad_3' => TRUE,
    'custom-d8_sponsor_header' => TRUE,
    'custom-roadmap_view_roadmap' => TRUE,
    'custom-roadmap_criteria_learn_more' => TRUE,
    'custom-roadmap_volunteer_learn_more' => TRUE,
    'custom-roadmap_community_learn_more' => TRUE,
    'custom-roadmap_sidebar_footer' => TRUE,
    'custom-drupalorg_d8_ad' => TRUE,
    'custom-drupalorg_section_notice' => TRUE,
    'custom-d8_top_sponsor' => TRUE,
    'custom-d8_sub_sponsor' => TRUE,
    'custom-lingotek_multilingual_ad' => TRUE,
    'custom-drupalorg_trydrupal_button' => TRUE,
    'fieldable_panels_pane-case_study' => TRUE,
    'fieldable_panels_pane-cta' => TRUE,
    'fieldable_panels_pane-cta_multiple' => TRUE,
    'fieldable_panels_pane-fpid:446' => TRUE,
    'views_panes-drupalorg_casestudies-panel_pane_1' => TRUE,
    'views_panes-drupalorg_organizations-panel_pane_1' => TRUE,
    'views_panes-drupalorg_organizations-panel_pane_2' => TRUE,
    'views_panes-drupalorg_organizations-panel_pane_3' => TRUE,
    'views_panes-drupalorg_logos-panel_pane_1' => TRUE,
    'views_panes-drupalorg_logos-panel_pane_2' => TRUE,
    'views_panes-drupalorg_logos-panel_pane_3' => TRUE,
    'views_panes-drupalorg_logos-panel_pane_4' => TRUE,
    'views_panes-redesign_2018_case_studies-panel_pane_1' => TRUE,
  );
  $export['panelizer_node:page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:page_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_default';
  $strongarm->value = array(
    'custom' => 'custom',
    'token' => 0,
    'entity_form_field' => 0,
    'entity_field' => 0,
    'entity_field_extra' => 0,
    'block' => 0,
    'entity_view' => 0,
    'fieldable_panels_pane' => 0,
    'flag_link' => 0,
    'panels_mini' => 0,
    'views' => 0,
    'views_panes' => 0,
    'other' => 0,
  );
  $export['panelizer_node:page_default'] = $strongarm;

  return $export;
}
