<?php
/**
 * @file
 * drupalorg_case_studies.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function drupalorg_case_studies_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'case_study';
  $fieldable_panels_pane_type->title = 'Case study';
  $fieldable_panels_pane_type->description = '';
  $export['case_study'] = $fieldable_panels_pane_type;

  return $export;
}
