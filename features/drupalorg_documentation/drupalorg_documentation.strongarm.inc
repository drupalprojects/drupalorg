<?php
/**
 * @file
 * drupalorg_documentation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalorg_documentation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_documentation';
  $strongarm->value = 0;
  $export['comment_anonymous_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_guide';
  $strongarm->value = 0;
  $export['comment_anonymous_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_documentation';
  $strongarm->value = 1;
  $export['comment_default_mode_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_guide';
  $strongarm->value = 1;
  $export['comment_default_mode_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_documentation';
  $strongarm->value = '50';
  $export['comment_default_per_page_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_guide';
  $strongarm->value = '50';
  $export['comment_default_per_page_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_documentation';
  $strongarm->value = '2';
  $export['comment_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_documentation';
  $strongarm->value = 1;
  $export['comment_form_location_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_guide';
  $strongarm->value = 1;
  $export['comment_form_location_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_guide';
  $strongarm->value = '1';
  $export['comment_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_documentation';
  $strongarm->value = '1';
  $export['comment_preview_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_guide';
  $strongarm->value = '1';
  $export['comment_preview_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_documentation';
  $strongarm->value = 0;
  $export['comment_subject_field_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_guide';
  $strongarm->value = 1;
  $export['comment_subject_field_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__documentation';
  $strongarm->value = array(
    'view_modes' => array(
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__guide';
  $strongarm->value = array(
    'view_modes' => array(
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'og_menu' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_tracker_show_followers_documentation';
  $strongarm->value = 0;
  $export['flag_tracker_show_followers_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_tracker_track_flag_documentation';
  $strongarm->value = 'project_issue_follow';
  $export['flag_tracker_track_flag_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_documentation';
  $strongarm->value = '0';
  $export['language_content_type_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_guide';
  $strongarm->value = '0';
  $export['language_content_type_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_documentation';
  $strongarm->value = array();
  $export['menu_options_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_guide';
  $strongarm->value = array();
  $export['menu_options_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_documentation';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_guide';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_follow_comment_message_documentation';
  $strongarm->value = 'comment_notification';
  $export['message_follow_comment_message_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_follow_flag_documentation';
  $strongarm->value = 'project_issue_follow';
  $export['message_follow_flag_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_documentation';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_guide';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_documentation';
  $strongarm->value = '1';
  $export['node_preview_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_guide';
  $strongarm->value = '1';
  $export['node_preview_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_documentation';
  $strongarm->value = 1;
  $export['node_submitted_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_guide';
  $strongarm->value = 0;
  $export['node_submitted_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_manager_default_rids_node_guide';
  $strongarm->value = array(
    13 => '13',
  );
  $export['og_group_manager_default_rids_node_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_documentation';
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
  $export['panelizer_defaults_node_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_guide';
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
  $export['panelizer_defaults_node_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:documentation:default_selection';
  $strongarm->value = 'node:documentation:default:default';
  $export['panelizer_node:documentation:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:documentation_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:28:"panelizer_node:documentation";s:23:"allowed_layout_settings";a:26:{s:11:"omega:siren";b:0;s:10:"omega:hero";b:0;s:16:"omega:off-canvas";b:0;s:12:"omega:simple";b:0;s:12:"omega:divine";b:0;s:8:"flexible";b:0;s:17:"threecol_33_34_33";b:0;s:13:"twocol_bricks";b:0;s:6:"onecol";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:6:"twocol";b:0;s:6:"taurus";b:1;s:6:"gemini";b:1;s:5:"hydra";b:1;s:5:"orion";b:1;s:6:"cygnus";b:1;s:6:"golden";b:0;s:5:"naked";b:0;s:8:"mondrian";b:0;s:6:"grid-2";b:0;s:6:"grid-3";b:0;s:6:"portal";b:0;s:6:"alcove";b:0;}s:10:"form_state";N;}';
  $export['panelizer_node:documentation_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:documentation_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:documentation_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:documentation_allowed_types';
  $strongarm->value = array(
    'block-message_follow-follow' => TRUE,
    'block-og_menu-og_single_menu_block' => TRUE,
    'block-og_menu-og_multi_menu_block' => TRUE,
    'custom-custom' => TRUE,
    'custom-documentation_copyright' => TRUE,
    'custom-d8_landing_page_ad_1' => FALSE,
    'custom-d8_landing_page_ad_2' => FALSE,
    'custom-d8_landing_page_ad_3' => FALSE,
    'custom-d8_sponsor_header' => FALSE,
    'custom-roadmap_view_roadmap' => FALSE,
    'custom-roadmap_criteria_learn_more' => FALSE,
    'custom-roadmap_volunteer_learn_more' => FALSE,
    'custom-roadmap_community_learn_more' => FALSE,
    'custom-roadmap_sidebar_footer' => FALSE,
    'custom-drupalorg_d8_ad' => FALSE,
    'custom-drupalorg_trydrupal_button' => FALSE,
    'custom-drupalorg_whatsnext_core' => FALSE,
    'node_comments-node_comments' => TRUE,
    'node_comment_wrapper-node_comment_wrapper' => TRUE,
    'node_title-node_title' => TRUE,
    'node_comment_form-node_comment_form' => TRUE,
    'node_author-node_author' => TRUE,
    'node_content-node_content' => TRUE,
    'node_created-node_created' => TRUE,
    'node_attachments-node_attachments' => TRUE,
    'node_body-node_body' => TRUE,
    'node_terms-node_terms' => TRUE,
    'node_links-node_links' => TRUE,
    'node_type_desc-node_type_desc' => TRUE,
    'node_updated-node_updated' => TRUE,
    'page_title-page_title' => TRUE,
    'page_tabs-page_tabs' => TRUE,
    'page_breadcrumb-page_breadcrumb' => TRUE,
    'node-node' => TRUE,
    'node_form_author-node_form_author' => TRUE,
    'message_render-message_render' => TRUE,
    'node_create_links-node_create_links' => TRUE,
    'section_contents-section_contents' => TRUE,
    'entity_field-node:body' => TRUE,
    'entity_field-node:upload' => TRUE,
    'entity_field-node:group_group' => TRUE,
    'entity_field-node:field_summary' => TRUE,
    'entity_field-node:field_tags' => TRUE,
    'entity_field-node:field_related_content' => TRUE,
    'entity_field-node:og_group_ref' => TRUE,
    'entity_field-user:field_subscribe_to' => TRUE,
    'entity_field-user:og_user_node' => TRUE,
    'views_panes-group_maintainers-panel_pane_1' => TRUE,
    'views_panes-documentation_guide-panel_pane_1' => TRUE,
    'views_panes-og_members-panel_pane_1' => TRUE,
    'views_panes-og_nodes-panel_pane_1' => TRUE,
    'views-group_maintainers' => TRUE,
    'views-og_members' => TRUE,
    'views-og_nodes' => TRUE,
  );
  $export['panelizer_node:documentation_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:documentation_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:documentation_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:documentation_default';
  $strongarm->value = array(
    'custom' => 'custom',
    'block' => 0,
    'token' => 0,
    'entity_form_field' => 0,
    'entity_field' => 0,
    'entity_field_extra' => 0,
    'entity_view' => 0,
    'flag_link' => 0,
    'panels_mini' => 0,
    'views_panes' => 0,
    'views' => 0,
    'other' => 0,
  );
  $export['panelizer_node:documentation_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:guide:default_selection';
  $strongarm->value = 'node:guide:default:default';
  $export['panelizer_node:guide:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:guide_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:20:"panelizer_node:guide";s:23:"allowed_layout_settings";a:26:{s:11:"omega:siren";b:0;s:10:"omega:hero";b:0;s:16:"omega:off-canvas";b:0;s:12:"omega:simple";b:0;s:12:"omega:divine";b:0;s:8:"flexible";b:0;s:17:"threecol_33_34_33";b:0;s:13:"twocol_bricks";b:0;s:6:"onecol";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:6:"twocol";b:0;s:6:"taurus";b:1;s:6:"gemini";b:1;s:5:"hydra";b:1;s:5:"orion";b:1;s:6:"cygnus";b:1;s:6:"golden";b:0;s:5:"naked";b:0;s:8:"mondrian";b:0;s:6:"grid-2";b:0;s:6:"grid-3";b:0;s:6:"portal";b:0;s:6:"alcove";b:0;}s:10:"form_state";N;}';
  $export['panelizer_node:guide_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:guide_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:guide_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:guide_allowed_types';
  $strongarm->value = array(
    'block-message_follow-follow' => TRUE,
    'block-og_menu-og_single_menu_block' => TRUE,
    'block-og_menu-og_multi_menu_block' => TRUE,
    'custom-custom' => TRUE,
    'custom-documentation_copyright' => TRUE,
    'custom-d8_landing_page_ad_1' => FALSE,
    'custom-d8_landing_page_ad_2' => FALSE,
    'custom-d8_landing_page_ad_3' => FALSE,
    'custom-d8_sponsor_header' => FALSE,
    'custom-roadmap_view_roadmap' => FALSE,
    'custom-roadmap_criteria_learn_more' => FALSE,
    'custom-roadmap_volunteer_learn_more' => FALSE,
    'custom-roadmap_community_learn_more' => FALSE,
    'custom-roadmap_sidebar_footer' => FALSE,
    'custom-drupalorg_d8_ad' => FALSE,
    'custom-drupalorg_trydrupal_button' => FALSE,
    'custom-drupalorg_whatsnext_core' => FALSE,
    'node_comments-node_comments' => TRUE,
    'node_comment_wrapper-node_comment_wrapper' => TRUE,
    'node_title-node_title' => TRUE,
    'node_comment_form-node_comment_form' => TRUE,
    'node_author-node_author' => TRUE,
    'node_content-node_content' => TRUE,
    'node_created-node_created' => TRUE,
    'node_attachments-node_attachments' => TRUE,
    'node_body-node_body' => TRUE,
    'node_terms-node_terms' => TRUE,
    'node_links-node_links' => TRUE,
    'node_type_desc-node_type_desc' => TRUE,
    'node_updated-node_updated' => TRUE,
    'page_title-page_title' => TRUE,
    'page_breadcrumb-page_breadcrumb' => TRUE,
    'node-node' => TRUE,
    'node_form_author-node_form_author' => TRUE,
    'message_render-message_render' => TRUE,
    'node_create_links-node_create_links' => TRUE,
    'section_contents-section_contents' => TRUE,
    'entity_field-node:body' => TRUE,
    'entity_field-node:upload' => TRUE,
    'entity_field-node:group_group' => TRUE,
    'entity_field-node:field_summary' => TRUE,
    'entity_field-node:field_tags' => TRUE,
    'entity_field-node:field_related_content' => TRUE,
    'entity_field-node:og_group_ref' => TRUE,
    'entity_field-node:field_parent_section' => TRUE,
    'entity_field-user:field_subscribe_to' => TRUE,
    'entity_field-user:og_user_node' => TRUE,
    'views_panes-group_maintainers-panel_pane_1' => TRUE,
    'views_panes-documentation_guide-panel_pane_1' => TRUE,
    'views_panes-og_members-panel_pane_1' => TRUE,
    'views_panes-og_nodes-panel_pane_1' => TRUE,
    'views-group_maintainers' => TRUE,
    'views-og_members' => TRUE,
    'views-og_nodes' => TRUE,
  );
  $export['panelizer_node:guide_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:guide_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:guide_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:guide_default';
  $strongarm->value = array(
    'custom' => 'custom',
    'block' => 0,
    'token' => 0,
    'entity_form_field' => 0,
    'entity_field' => 0,
    'entity_field_extra' => 0,
    'entity_view' => 0,
    'flag_link' => 0,
    'panels_mini' => 0,
    'views_panes' => 0,
    'views' => 0,
    'other' => 0,
  );
  $export['panelizer_node:guide_default'] = $strongarm;

  return $export;
}
