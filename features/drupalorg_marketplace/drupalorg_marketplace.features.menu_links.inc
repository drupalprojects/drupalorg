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

  // Exported menu link: menu-hosting-types-menu:hosting/enterprise
  $menu_links['menu-hosting-types-menu:hosting/enterprise'] = array(
    'menu_name' => 'menu-hosting-types-menu',
    'link_path' => 'hosting/enterprise',
    'router_path' => 'hosting/enterprise',
    'link_title' => 'Enterprise & Managed',
    'options' => array(
      'attributes' => array(
        'title' => 'Enterprise & Managed hosting',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-hosting-types-menu:hosting/paas
  $menu_links['menu-hosting-types-menu:hosting/paas'] = array(
    'menu_name' => 'menu-hosting-types-menu',
    'link_path' => 'hosting/paas',
    'router_path' => 'hosting/paas',
    'link_title' => 'Platform as a Service',
    'options' => array(
      'attributes' => array(
        'title' => 'Platform as a Service hosting',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-hosting-types-menu:hosting/shared
  $menu_links['menu-hosting-types-menu:hosting/shared'] = array(
    'menu_name' => 'menu-hosting-types-menu',
    'link_path' => 'hosting/shared',
    'router_path' => 'hosting/shared',
    'link_title' => 'Shared Hosting',
    'options' => array(
      'attributes' => array(
        'title' => 'Shared hosting',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
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
  t('Enterprise & Managed');
  t('Featured providers');
  t('Platform as a Service');
  t('Shared Hosting');


  return $menu_links;
}
