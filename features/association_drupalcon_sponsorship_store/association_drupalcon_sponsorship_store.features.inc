<?php

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
    'association_sponsorship_level' => array(
      'name' => t('Sponsorship level'),
      'module' => 'features',
      'description' => t('A DrupalCon sponsorship.'),
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
