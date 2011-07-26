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
      'weight' => '9',
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
      'weight' => '10',
      'description' => '<p>Self promote! These fields determine eligibility for the Drupal.org marketplace and show the Drupal community how much you\'ve given back. Moderators use this information to respond to issues about community involvement, so it is important to list anything and everything relevant:</p>

<ul>
<li>Code contributions, in the form of modules, patches to modules, or patches submitted against core. In the case of companies with multiple developers, or of companies who have sponsored development, please include links to the projects your company has worked on. If your developers want to contribute directly, <a href="http://drupal.org/contribute/development" rel="nofollow">this page</a> provides an overview.</li>
<li>Design firms with contributed themes.</li>
<li>If your contributions include helping in the forums or writing documentation, highlight the areas where you have contributed.</li>
<li>If you have contributed by doing Drupal advocacy and outreach, write up these experiences in the <a href="http://drupal.org/forum" rel="nofollow">Drupal Showcase</a> forum on Drupal.org.</li>
<li>If you have contributed by testing patches, fixing bugs, running unit tests, etc, highlight the projects where this work has occurred.</li>
</ul>',
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
      'class' => 'website',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
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
      'weight' => '6',
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
      'weight' => '7',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
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
      'weight' => '8',
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
    'type' => 'number_decimal',
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
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hosting level',
      'weight' => '26',
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
membership|List if the organization has a current membership, updated on saving this page
always|Always list, regardless of membership',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'membership',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'List in marketplace',
      'weight' => '24',
      'description' => 'Follow the <a href="http://drupal.org/node/1108710">policy</a>.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_organization_marketplace
  $fields['organization-field_organization_marketplace'] = array(
    'field_name' => 'field_organization_marketplace',
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
    'allowed_values' => '0|Unlisted
1|List in Marketplace',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 1,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'List in marketplace',
      'weight' => '23',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Drupal contributions');
  t('Headquarters');
  t('Hosting URL');
  t('Hosting category');
  t('Hosting level');
  t('List in marketplace');
  t('Logo');
  t('Usual project budget (optional)');
  t('Website');

  return $fields;
}
