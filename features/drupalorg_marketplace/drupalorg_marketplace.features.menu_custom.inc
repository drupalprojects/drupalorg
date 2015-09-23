<?php
/**
 * @file
 * drupalorg_marketplace.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function drupalorg_marketplace_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-hosting-types-menu.
  $menus['menu-hosting-types-menu'] = array(
    'menu_name' => 'menu-hosting-types-menu',
    'title' => 'Hosting Types',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hosting Types');


  return $menus;
}
