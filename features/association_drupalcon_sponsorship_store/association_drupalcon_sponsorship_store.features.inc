<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function association_drupalcon_sponsorship_store_imagecache_default_presets() {
  $items = array(
    '200x120' => array(
      'presetname' => '200x120',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    '300x200' => array(
      'presetname' => '300x200',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '200',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function association_drupalcon_sponsorship_store_node_info() {
  $items = array(
    'association_sponsor' => array(
      'name' => t('Sponsor'),
      'module' => 'features',
      'description' => t('Company sponsoring the Drupal Association.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'association_sponsorship' => array(
      'name' => t('Sponsorship'),
      'module' => 'features',
      'description' => t('A sponsor and sponsorship level. Created automatically when bought through the store.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_uc_product_default_classes().
 */
function association_drupalcon_sponsorship_store_uc_product_default_classes() {
  $items = array(
    'association_sponsorship_level' => array(
      'name' => t('Sponsorship level'),
      'module' => 'uc_product',
      'description' => t('A DrupalCon sponsorship.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'product' => array(
      'name' => t('Product'),
      'module' => 'uc_product',
      'description' => t('This node displays the representation of a product for sale on the website. It includes all the unique information that can be attributed to a specific model number.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function association_drupalcon_sponsorship_store_views_api() {
  return array(
    'api' => '2',
  );
}
