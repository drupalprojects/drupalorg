<?php
// $Id$

/**
 * @file
 * Scans the 'views' subdirectory for default views by drupalorg module.
 */

/**
 * Implement hook_views_default_views().
 */
function drupalorg_views_default_views() {
  // Search the "views" subdirectory for files ending in .view.php.
  $files = file_scan_directory(drupal_get_path('module', 'drupalorg'). '/views', 'view\.php$');
  foreach ($files as $absolute => $file) {
    require_once $absolute;
    if (isset($view)) {
      // $file->name has the ".php" stripped off, but still has the ".view".
      $view_name = substr($file->name, 0, strrpos($file->name, '.'));
      $views[$view_name] = $view;
    }
  }
  return $views;
}
