<?php
/**
 * @file
 * drupalorg_marketplace.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function drupalorg_marketplace_field_default_fields() {
  $fields = array();

  // Exported field: 'comment-comment_node_organization-comment_body'.
  $fields['comment-comment_node_organization-comment_body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'comment',
      ),
      'field_name' => 'comment_body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'comment_node_organization',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'comment',
      'field_name' => 'comment_body',
      'label' => 'Comment',
      'required' => TRUE,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-organization-body'.
  $fields['node-organization-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Describe your organization: who you are, what you do.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '200',
          ),
          'type' => 'text_trimmed',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Organization description',
      'required' => 1,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-organization-field_budget'.
  $fields['node-organization-field_budget'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_budget',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_budget][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => 'Helps potential clients know what they are getting into.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_budget',
      'label' => 'Usual project budget (optional)',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '4',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => 5,
          'size' => '20',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
      'widget_type' => 'text_textfield',
    ),
  );

  // Exported field: 'node-organization-field_contributions'.
  $fields['node-organization-field_contributions'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contributions',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_contributions][0][value',
        ),
      ),
      'deleted' => '0',
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
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contributions',
      'label' => 'Drupal contributions',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '-1',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-organization-field_link'.
  $fields['node-organization-field_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '-4',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '-4',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '-4',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '-4',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '-4',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_url',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_link',
      'label' => 'Website',
      'required' => FALSE,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => '',
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'weight' => '-4',
      'widget' => array(
        'active' => '1',
        'module' => 'link',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'link_field',
        'weight' => '2',
      ),
      'widget_type' => 'link',
    ),
  );

  // Exported field: 'node-organization-field_logo'.
  $fields['node-organization-field_logo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_logo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => NULL,
        'description_field' => '0',
        'list_default' => 1,
        'list_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'grid-3',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_logo',
      'label' => 'Logo',
      'required' => FALSE,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '0',
        'min_resolution' => '0',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'weight' => '-2',
      'widget' => array(
        'active' => '1',
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
          'use_default_image' => 0,
        ),
        'type' => 'image_image',
        'weight' => '1',
      ),
      'widget_type' => 'imagefield_widget',
    ),
  );

  // Exported field: 'node-organization-field_org_marketplace_request'.
  $fields['node-organization-field_org_marketplace_request'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_org_marketplace_request',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No request',
          1 => 'Request listing in the Drupal services section',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'If you request a listing, please review <a href="/marketplace/guidelines">Marketplace guidelines</a>. Volunteer moderators will review your request. If you are not listed, you will still have the page and some features, like your logo replacing company name on profile pages.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_org_marketplace_request',
      'label' => 'List in marketplace',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '0',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '8',
      ),
      'widget_type' => 'optionwidgets_onoff',
    ),
  );

  // Exported field: 'node-organization-field_org_training_request'.
  $fields['node-organization-field_org_training_request'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_org_training_request',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No request',
          1 => 'Request listing in the Training section',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Before requesting to be listed in the Training section, please review <a href="/marketplace/guidelines">Marketplace guidelines</a>.
',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '8',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '8',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '8',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '8',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_org_training_request',
      'label' => 'List in Training section',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '8',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '8',
      ),
      'widget_type' => 'optionwidgets_onoff',
    ),
  );

  // Exported field: 'node-organization-field_organization_headquarters'.
  $fields['node-organization-field_organization_headquarters'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization_headquarters',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_organization_headquarters][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => 'Where is your organization located?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization_headquarters',
      'label' => 'Headquarters',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '2',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => 5,
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
      'widget_type' => 'text_textfield',
    ),
  );

  // Exported field: 'node-organization-field_organization_list_rule'.
  $fields['node-organization-field_organization_list_rule'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization_list_rule',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'never' => 'Do not list',
          'all' => 'All providers',
          'featured' => 'Featured providers',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => 'never',
        ),
      ),
      'deleted' => '0',
      'description' => 'Make sure to follow <a href="/marketplace/guidelines">Marketplace guidelines</a> and "<a href="/node/1710338">Review marketplace listings</a>" guide.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '24',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '24',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '24',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '24',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '24',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization_list_rule',
      'label' => 'Services listing',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '24',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '24',
      ),
      'widget_type' => 'optionwidgets_buttons',
    ),
  );

  // Exported field: 'node-organization-field_organization_security'.
  $fields['node-organization-field_organization_security'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization_security',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => 255,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_organization_security][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => 'Specify the date hosting provider passed security review. Format: \'passed on Month Day, Year\'',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '14',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '14',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '14',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '14',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization_security',
      'label' => 'Security review',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '14',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => 5,
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '14',
      ),
      'widget_type' => 'text_textfield',
    ),
  );

  // Exported field: 'node-organization-field_organization_training_desc'.
  $fields['node-organization-field_organization_training_desc'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization_training_desc',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'max_length' => '',
        'text_processing' => '1',
      ),
      'translatable' => '0',
      'type' => 'text_long',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_organization_training_desc][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => 'Describe your trainings: main topics, audience, locations, cost range etc. This will be shown in the Training listing only.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization_training_desc',
      'label' => 'Training description',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'weight' => '10',
      'widget' => array(
        'active' => '1',
        'module' => 'text',
        'settings' => array(
          'default_value_php' => NULL,
          'rows' => '5',
          'size' => 60,
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
      'widget_type' => 'text_textarea',
    ),
  );

  // Exported field: 'node-organization-field_organization_training_list'.
  $fields['node-organization-field_organization_training_list'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization_training_list',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'off' => 'Do not list',
          'on' => 'List in the Training section',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'value' => 'off',
        ),
      ),
      'deleted' => '0',
      'description' => 'Make sure to follow <a href="/marketplace/guidelines">Marketplace guidelines</a> and "<a href="/node/1735864">Review training listings</a>" guide.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '26',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '26',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '26',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '26',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '26',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization_training_list',
      'label' => 'Training listing',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '26',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '26',
      ),
      'widget_type' => 'optionwidgets_buttons',
    ),
  );

  // Exported field: 'node-organization-field_organization_training_url'.
  $fields['node-organization-field_organization_training_url'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization_training_url',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
      'type_name' => 'organization',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => array(
        0 => array(
          'url' => '',
        ),
      ),
      'deleted' => '0',
      'description' => 'The url for your trainings landing page (the page specifically for Drupal trainings preferred). This will be shown in the Training listing only.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '9',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '9',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '9',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '9',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization_training_url',
      'label' => 'Training url',
      'required' => FALSE,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => '',
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'weight' => '9',
      'widget' => array(
        'active' => '1',
        'module' => 'link',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'link_field',
        'weight' => '9',
      ),
      'widget_type' => 'link',
    ),
  );

  // Exported field: 'node-organization-taxonomy_vocabulary_48'.
  $fields['node-organization-taxonomy_vocabulary_48'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_48',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'vocabulary_48',
            'parent' => 0,
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Such as development, theming, design, training, or hosting.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '2',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_48',
      'label' => 'Services',
      'required' => '0',
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-organization-taxonomy_vocabulary_50'.
  $fields['node-organization-taxonomy_vocabulary_50'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_50',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'vocabulary_50',
            'parent' => 0,
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'List related sector(s)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '3',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_50',
      'label' => 'Sectors',
      'required' => '0',
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-organization-taxonomy_vocabulary_52'.
  $fields['node-organization-taxonomy_vocabulary_52'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_52',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'vocabulary_52',
            'parent' => 0,
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'organization',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Only select countries in which your company has a physical office.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '4',
        ),
        'issuemetadata' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_52',
      'label' => 'Locations',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>Self promote! These fields determine eligibility for the Drupal.org marketplace and show the Drupal community how much you\'ve given back. Moderators use this information to respond to issues about community involvement, so it is important to list anything and everything relevant:</p>

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
');
  t('Before requesting to be listed in the Training section, please review <a href="/marketplace/guidelines">Marketplace guidelines</a>.
');
  t('Comment');
  t('Describe your organization: who you are, what you do.');
  t('Describe your trainings: main topics, audience, locations, cost range etc. This will be shown in the Training listing only.');
  t('Drupal contributions');
  t('Headquarters');
  t('Helps potential clients know what they are getting into.');
  t('If you request a listing, please review <a href="/marketplace/guidelines">Marketplace guidelines</a>. Volunteer moderators will review your request. If you are not listed, you will still have the page and some features, like your logo replacing company name on profile pages.');
  t('List in Training section');
  t('List in marketplace');
  t('List related sector(s)');
  t('Locations');
  t('Logo');
  t('Make sure to follow <a href="/marketplace/guidelines">Marketplace guidelines</a> and "<a href="/node/1710338">Review marketplace listings</a>" guide.');
  t('Make sure to follow <a href="/marketplace/guidelines">Marketplace guidelines</a> and "<a href="/node/1735864">Review training listings</a>" guide.');
  t('Only select countries in which your company has a physical office.');
  t('Organization description');
  t('Sectors');
  t('Security review');
  t('Services');
  t('Services listing');
  t('Specify the date hosting provider passed security review. Format: \'passed on Month Day, Year\'');
  t('Such as development, theming, design, training, or hosting.');
  t('The url for your trainings landing page (the page specifically for Drupal trainings preferred). This will be shown in the Training listing only.');
  t('Training description');
  t('Training listing');
  t('Training url');
  t('Usual project budget (optional)');
  t('Website');
  t('Where is your organization located?');

  return $fields;
}
