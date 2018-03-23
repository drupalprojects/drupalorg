<?php
/**
 * @file
 * drupalorg_redesign_2018.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function drupalorg_redesign_2018_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'cta_multiple';
  $fieldable_panels_pane_type->title = 'CTA - multiple';
  $fieldable_panels_pane_type->description = '';
  $export['cta_multiple'] = $fieldable_panels_pane_type;

  return $export;
}
