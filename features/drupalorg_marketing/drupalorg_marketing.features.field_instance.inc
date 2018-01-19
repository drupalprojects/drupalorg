<?php
/**
 * @file
 * drupalorg_marketing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalorg_marketing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-cta-field_cta_background'.
  $field_instances['fieldable_panels_pane-cta-field_cta_background'] = array(
    'bundle' => 'cta',
    'deleted' => 0,
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_cta_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'cta/background',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '480x240',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'grid-1-2x',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-cta-field_cta_body'.
  $field_instances['fieldable_panels_pane-cta-field_cta_body'] = array(
    'bundle' => 'cta',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Try to keep this between 50 - 150 characters. Wide CTAs will look better at the upper end; card styles will look better towards the lower end.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_cta_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-cta-field_cta_graphic'.
  $field_instances['fieldable_panels_pane-cta-field_cta_graphic'] = array(
    'bundle' => 'cta',
    'deleted' => 0,
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_cta_graphic',
    'label' => 'Graphic',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'cta/graphic',
      'file_extensions' => 'png gif jpg jpeg svg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-cta-field_cta_link'.
  $field_instances['fieldable_panels_pane-cta-field_cta_link'] = array(
    'bundle' => 'cta',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Title is used as text for the Call to Action link. Remember to include any campaign tracking tags in the URL.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_cta_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 75,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-cta-field_cta_secondary_style'.
  $field_instances['fieldable_panels_pane-cta-field_cta_secondary_style'] = array(
    'bundle' => 'cta',
    'default_value' => array(
      0 => array(
        'value' => 'dark',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_cta_secondary_style',
    'label' => 'Secondary style',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-cta-field_cta_style'.
  $field_instances['fieldable_panels_pane-cta-field_cta_style'] = array(
    'bundle' => 'cta',
    'default_value' => array(
      0 => array(
        'value' => 'full original',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_cta_style',
    'label' => 'Style',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background');
  t('Body');
  t('Graphic');
  t('Link');
  t('Secondary style');
  t('Style');
  t('Title is used as text for the Call to Action link. Remember to include any campaign tracking tags in the URL.');
  t('Try to keep this between 50 - 150 characters. Wide CTAs will look better at the upper end; card styles will look better towards the lower end.');

  return $field_instances;
}
