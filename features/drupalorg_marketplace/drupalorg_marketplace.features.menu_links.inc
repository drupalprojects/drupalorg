<?php
/**
 * @file
 * drupalorg_marketplace.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupalorg_marketplace_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-hosting-types-menu:node/2029631
  $menu_links['menu-hosting-types-menu:node/2029631'] = array(
    'menu_name' => 'menu-hosting-types-menu',
    'link_path' => 'node/2029631',
    'router_path' => 'node/%',
    'link_title' => 'Shared Hosting Providers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-hosting-types-menu:node/2029703
  $menu_links['menu-hosting-types-menu:node/2029703'] = array(
    'menu_name' => 'menu-hosting-types-menu',
    'link_path' => 'node/2029703',
    'router_path' => 'node/%',
    'link_title' => 'Managed/Enterprise Hosting Providers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-hosting-types-menu:node/2029743
  $menu_links['menu-hosting-types-menu:node/2029743'] = array(
    'menu_name' => 'menu-hosting-types-menu',
    'link_path' => 'node/2029743',
    'router_path' => 'node/%',
    'link_title' => 'Cloud Hosting Providers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-service-providers:drupal-services/all
  $menu_links['menu-service-providers:drupal-services/all'] = array(
    'menu_name' => 'menu-service-providers',
    'link_path' => 'drupal-services/all',
    'router_path' => 'drupal-services',
    'link_title' => 'All providers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-service-providers:drupal-services/featured
  $menu_links['menu-service-providers:drupal-services/featured'] = array(
    'menu_name' => 'menu-service-providers',
    'link_path' => 'drupal-services/featured',
    'router_path' => 'drupal-services',
    'link_title' => 'Featured providers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All providers');
  t('Cloud Hosting Providers');
  t('Featured providers');
  t('Managed/Enterprise Hosting Providers');
  t('Shared Hosting Providers');


  return $menu_links;
}
