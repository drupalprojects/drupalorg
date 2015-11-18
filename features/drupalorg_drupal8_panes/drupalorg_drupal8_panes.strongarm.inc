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
  $strongarm->name = 'panelizer_node:page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:19:"panelizer_node:page";s:23:"allowed_layout_settings";a:25:{s:11:"omega:siren";b:0;s:10:"omega:hero";b:0;s:16:"omega:off-canvas";b:0;s:12:"omega:simple";b:0;s:12:"omega:divine";b:0;s:8:"flexible";b:0;s:17:"threecol_33_34_33";b:0;s:13:"twocol_bricks";b:0;s:6:"onecol";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:6:"twocol";b:0;s:6:"taurus";b:1;s:6:"gemini";b:1;s:5:"hydra";b:1;s:5:"orion";b:1;s:6:"cygnus";b:1;s:6:"golden";b:0;s:5:"naked";b:0;s:8:"mondrian";b:0;s:6:"grid-2";b:0;s:6:"grid-3";b:0;s:6:"portal";b:1;}s:10:"form_state";N;}';
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
  $strongarm->name = 'panelizer_node:page_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:page_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_default';
  $strongarm->value = array(
    'block' => 'block',
    'custom' => 'custom',
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'entity_view' => 'entity_view',
    'flag_link' => 'flag_link',
    'panels_mini' => 'panels_mini',
    'views_panes' => 'views_panes',
    'views' => 'views',
    'other' => 'other',
  );
  $export['panelizer_node:page_default'] = $strongarm;

  return $export;
}