<?php
/**
 * @file
 * drupalorg_issues.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalorg_issues_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_project_issue';
  $strongarm->value = '0';
  $export['comment_anonymous_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_project_issue';
  $strongarm->value = '3';
  $export['comment_controls_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_project_issue';
  $strongarm->value = 1;
  $export['comment_default_mode_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_project_issue';
  $strongarm->value = '2';
  $export['comment_default_order_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_project_issue';
  $strongarm->value = '300';
  $export['comment_default_per_page_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_project_issue';
  $strongarm->value = 0;
  $export['comment_form_location_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_project_issue';
  $strongarm->value = '1';
  $export['comment_preview_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_project_issue';
  $strongarm->value = '2';
  $export['comment_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_project_issue';
  $strongarm->value = 0;
  $export['comment_subject_field_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__project_issue';
  $strongarm->value = array(
    'view_modes' => array(
      'diff_standard' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'nodechanges' => array(
        'custom_settings' => TRUE,
      ),
      'issuemetadata' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'related_content' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'nodechanges_comment_body' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'nodechanges_comment' => array(
          'weight' => '1',
        ),
        'mollom' => array(
          'weight' => '99',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(
        'update_link' => array(
          'issuemetadata' => array(
            'weight' => '100',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
          'nodechanges' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
          'diff_standard' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
          'related_content' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'follow_link' => array(
          'issuemetadata' => array(
            'weight' => '110',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'nodechanges' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'diff_standard' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
          'related_content' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'jump_link' => array(
          'issuemetadata' => array(
            'weight' => '110',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'nodechanges' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'diff_standard' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
        ),
        'jump_links' => array(
          'default' => array(
            'weight' => '120',
            'visible' => FALSE,
          ),
          'issuemetadata' => array(
            'weight' => '120',
            'visible' => TRUE,
          ),
          'nodechanges' => array(
            'weight' => '120',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '120',
            'visible' => FALSE,
          ),
          'diff_standard' => array(
            'weight' => '120',
            'visible' => FALSE,
          ),
          'related_content' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'project_issue_created_by' => array(
          'default' => array(
            'weight' => '60',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '60',
            'visible' => FALSE,
          ),
          'nodechanges' => array(
            'weight' => '60',
            'visible' => FALSE,
          ),
          'diff_standard' => array(
            'weight' => '60',
            'visible' => FALSE,
          ),
          'related_content' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'project_issue_created' => array(
          'default' => array(
            'weight' => '80',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '80',
            'visible' => FALSE,
          ),
          'nodechanges' => array(
            'weight' => '80',
            'visible' => FALSE,
          ),
          'diff_standard' => array(
            'weight' => '80',
            'visible' => FALSE,
          ),
          'related_content' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'project_issue_updated' => array(
          'default' => array(
            'weight' => '90',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '90',
            'visible' => FALSE,
          ),
          'nodechanges' => array(
            'weight' => '90',
            'visible' => FALSE,
          ),
          'diff_standard' => array(
            'weight' => '90',
            'visible' => FALSE,
          ),
          'related_content' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_project_issue';
  $strongarm->value = array();
  $export['menu_options_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_project_issue';
  $strongarm->value = 'navigation:0';
  $export['menu_parent_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_project_issue';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_project_issue';
  $strongarm->value = '1';
  $export['node_preview_project_issue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_project_issue';
  $strongarm->value = 0;
  $export['node_submitted_project_issue'] = $strongarm;

  return $export;
}
