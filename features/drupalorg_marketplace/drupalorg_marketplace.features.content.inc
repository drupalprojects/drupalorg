<?php

/**
 * Implementation of hook_content_default_fields().
 */
function drupalorg_marketplace_content_default_fields() {
  $fields = array();

  // Exported field: field_budget
  $fields['organization-field_budget'] = array(
    'field_name' => 'field_budget',
    'type_name' => 'organization',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_budget][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Usual project budget (optional)',
      'weight' => '4',
      'description' => 'Helps potential clients know what they are getting into.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contributions
  $fields['organization-field_contributions'] = array(
    'field_name' => 'field_contributions',
    'type_name' => 'organization',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_contributions][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Drupal contributions',
      'weight' => '-1',
      'description' => '<p>Self promote! These fields determine eligibility for the Drupal.org marketplace and show the Drupal community how much you\'ve given back. Moderators use this information to respond to issues about community involvement, so it is important to list anything and everything relevant:</p>

<ul>
<li>Contributions to core: Highlight your team. What have you done to make Drupal\'s core amazing?</li>
<li>Contributions to the project:
<ul>
<li>What module(s) or distribution(s) - is your team actively maintaining?</li>
<li>Design contributions in a form of contributed themes or designs for drupal.org.</li>
<li>Documentation - Documentation is vitally important to our project and we value those teams that take time to help move Drupal forward by contributing to the documentation.</li>
<li>Patches to modules, themes, documentation.</li>
</ul>
<li>Support: Does your team hang out in IRC, in the issue queues, or on the forums? That is rocking awesome! Show us your team members that are helping new members ramp into Drupal. We love folks that provide support. It\'s a thankless job.. so let us thank you for it.</li>
<li>Contributions to the community: Are you hosting a meetup, running a camp, or hosting other Drupal events? Speaking at/sponsoring DrupalCon(s), Drupal Business Summits, other events?</li>
<li>Marketing contributions - Published <a href="http://drupal.org/case-studies">case studies</a> on drupal.org? Shared some Drupal brochures with the community? Tell us!</li>
</ul>
',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_link
  $fields['organization-field_link'] = array(
    'field_name' => 'field_link',
    'type_name' => 'organization',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '1',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => '',
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '-4',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_logo
  $fields['organization-field_logo'] = array(
    'field_name' => 'field_logo',
    'type_name' => 'organization',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'grid-3_linked',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'grid-3_default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Logo',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_org_marketplace_request
  $fields['organization-field_org_marketplace_request'] = array(
    'field_name' => 'field_org_marketplace_request',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|No request
1|Request listing in the Drupal services section',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'List in marketplace',
      'weight' => 0,
      'description' => 'If you request a listing, please review <a href="http://drupal.org/node/1735708">Marketplace guidelines</a>. Community webmasters will review your request. If you are not listed, you will still have the page and some features, like your logo replacing company name on profile pages.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_org_training_issue
  $fields['organization-field_org_training_issue'] = array(
    'field_name' => 'field_org_training_issue',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project_issue' => 'project_issue',
      'book' => 0,
      'casestudy' => 0,
      'changenotice' => 0,
      'forum' => 0,
      'image' => 0,
      'organization' => 0,
      'packaging_whitelist' => 0,
      'page' => 0,
      'project_project' => 0,
      'project_release' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_org_training_issue][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Training issue',
      'weight' => '27',
      'description' => '',
      'type' => 'project_issue_nodereference_auto',
      'module' => 'project_issue',
    ),
  );

  // Exported field: field_org_training_request
  $fields['organization-field_org_training_request'] = array(
    'field_name' => 'field_org_training_request',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|No request
1|Request listing in the Training section',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'List in Training section',
      'weight' => '8',
      'description' => 'Before requesting to be listed in the Training section, please review <a href="http://drupal.org/node/1735708">Marketplace guidelines</a>.
',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_organization_headquarters
  $fields['organization-field_organization_headquarters'] = array(
    'field_name' => 'field_organization_headquarters',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_organization_headquarters][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Headquarters',
      'weight' => '2',
      'description' => 'Where is your organization located?',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_organization_hosting_categ
  $fields['organization-field_organization_hosting_categ'] = array(
    'field_name' => 'field_organization_hosting_categ',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Not listed for hosting
Shared
Enterprise & Managed
Platform as a Service',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Not listed for hosting',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hosting category',
      'weight' => '13',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_organization_hosting_level
  $fields['organization-field_organization_hosting_level'] = array(
    'field_name' => 'field_organization_hosting_level',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not listed for hosting
1|Bronze
2|Silver
3|Gold - placeholder only, ads are served via DoubleClick',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hosting level',
      'weight' => '28',
      'description' => 'See the <a href="https://association.drupal.org/advertising/hosting">policy</a>.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_organization_hosting_url
  $fields['organization-field_organization_hosting_url'] = array(
    'field_name' => 'field_organization_hosting_url',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => '',
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hosting URL',
      'weight' => '12',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_organization_issue
  $fields['organization-field_organization_issue'] = array(
    'field_name' => 'field_organization_issue',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project_issue' => 'project_issue',
      'book' => 0,
      'changenotice' => 0,
      'forum' => 0,
      'image' => 0,
      'organization' => 0,
      'packaging_whitelist' => 0,
      'page' => 0,
      'project_project' => 0,
      'project_release' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => NULL,
      'size' => NULL,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_organization_issue][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Issue for review',
      'weight' => '25',
      'description' => '',
      'type' => 'project_issue_nodereference_auto',
      'module' => 'project_issue',
    ),
  );

  // Exported field: field_organization_list_rule
  $fields['organization-field_organization_list_rule'] = array(
    'field_name' => 'field_organization_list_rule',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'never|Do not list
all|All providers
featured|Featured providers',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'never',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Services listing',
      'weight' => '24',
      'description' => 'Make sure to follow <a href="http://drupal.org/node/1735708">Marketplace guidelines</a> and "<a href="http://drupal.org/node/1710338">Review marketplace listings</a>" guide.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_organization_training_desc
  $fields['organization-field_organization_training_desc'] = array(
    'field_name' => 'field_organization_training_desc',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_organization_training_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Training description',
      'weight' => '10',
      'description' => 'Describe your trainings: main topics, audience, locations, cost range etc. This will be shown in the Training listing only.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_organization_training_list
  $fields['organization-field_organization_training_list'] = array(
    'field_name' => 'field_organization_training_list',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'off|Do not list
on|List in the Training section',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'off',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Training listing',
      'weight' => '26',
      'description' => 'Make sure to follow <a href="http://drupal.org/node/1735708">Marketplace guidelines</a> and "<a href="http://drupal.org/node/1735864">Review training listings</a>" guide.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_organization_training_url
  $fields['organization-field_organization_training_url'] = array(
    'field_name' => 'field_organization_training_url',
    'type_name' => 'organization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => '',
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Training url',
      'weight' => '9',
      'description' => 'The url for your trainings landing page (the page specifically for Drupal trainings preferred). This will be shown in the Training listing only.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Drupal contributions');
  t('Headquarters');
  t('Hosting URL');
  t('Hosting category');
  t('Hosting level');
  t('Issue for review');
  t('List in Training section');
  t('List in marketplace');
  t('Logo');
  t('Services listing');
  t('Training description');
  t('Training issue');
  t('Training listing');
  t('Training url');
  t('Usual project budget (optional)');
  t('Website');

  return $fields;
}
