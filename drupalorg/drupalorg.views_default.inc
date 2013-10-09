<?php

/**
 * @file
 * Scans the 'views' subdirectory for default views by drupalorg module.
 */

/**
 * Implements hook_views_default_views().
 */
function drupalorg_views_default_views() {
  // Search the "views" subdirectory for files ending in .view.php.
  $files = file_scan_directory(drupal_get_path('module', 'drupalorg') . '/views', '/view\.php$/');
  foreach ($files as $absolute => $file) {
    // This is not require_once because it's possible that
    // hook_views_default_views() gets called more than once.
    require DRUPAL_ROOT . '/' . $absolute;
    if (isset($view)) {
      // $file->name has the ".php" stripped off, but still has the ".view".
      $view_name = substr($file->name, 0, strrpos($file->name, '.'));
      $views[$view_name] = $view;
    }
  }
  return $views;
}

/**
 * Implement hook_views_default_views_alter().
 */
function _drupalorg_views_default_views_alter(&$views) {
  // Get out of the way of SearchAPI-based views.
  foreach (array('project_issue_user_issues', 'project_issue_all_projects') as $name) {
    if (isset($views[$name])) {
      $views[$name]->disabled = TRUE;
    }
  }

  if (isset($views['project_index'])) {
    $views['project_index']->set_display('default');
    $filters = $views['project_index']->display_handler->get_option('filters');
    $filters['project_release_api_vocabulary']['expose']['identifier'] = 'drupal_core';
    $filters['project_release_api_vocabulary']['expose']['label'] = 'Drupal core version';
    $views['project_index']->display_handler->set_option('filters', $filters);
    $views['project_index']->display_handler->override_option('cache', array(
      'type' => 'views_content_cache',
      'keys' => array(
        'comment' => array(
          'changed' => 0,
        ),
        'node' => array(
          'project_project' => 'project_project',
        ),
      ),
      'results_min_lifespan' => '3600',
      'results_max_lifespan' => '21600',
      'output_min_lifespan' => '3600',
      'output_max_lifespan' => '21600',
    ));
    $views['project_index']->set_display('block_1');
    $views['project_index']->display_handler->set_option('items_per_page', 4);
    $views['project_index']->destroy();
  }

  $project_issue_views = array(
    'project_issue_all_projects',
    'project_issue_project',
    'project_issue_search_all',
    'project_issue_search_project',
    'project_issue_user_issues',
    'project_issue_user_projects',
  );
  $cache_none = array(
    'type' => 'none',
  );
  $cache_5min = array(
    'type' => 'time',
    'results_lifespan' => '300',
    'output_lifespan' => '300',
  );
  // For all of the issue views, we want to add a 5 minute cache to the feed.
  foreach ($project_issue_views as $name) {
    if (isset($views[$name])) {
      $views[$name]->set_display('default');
      $views[$name]->display_handler->override_option('cache', $cache_none);
      $views[$name]->set_display('feed_1');
      $views[$name]->display_handler->override_option('cache', $cache_5min);
      $views[$name]->destroy();
    }
  }

  // Add block caching to the 'Recent issues' block for each project.
  $name = 'project_issue_project';
  if (isset($views[$name])) {
    $views[$name]->set_display('block_1');
    $views[$name]->display_handler->override_option('block_caching', DRUPAL_CACHE_PER_PAGE);
    // ... and views-specific caching. Not sure why we want both, but that's
    // how it was configured by killes on d.o so I'm replicating that here.
    $views[$name]->display_handler->override_option('cache', $cache_5min);
    $views[$name]->destroy();
  }

  // Modify the flag_bookmarks view.
  if (isset($views['flag_bookmarks'])) {
    $handler = $views['flag_bookmarks']->new_display('block', 'Block', 'block');
    $handler->override_option('style_plugin', 'list');
    $handler->override_option('style_options', array(
      'grouping' => '',
      'type' => 'ul',
    ));
    $handler->override_option('row_plugin', 'fields');
    $handler->override_option('row_options', array(
      'inline' => array(
        'title' => 'title',
        'ops' => 'ops',
      ),
      'separator' => '',
      'hide_empty' => 0,
    ));
    $handler->override_option('title', 'My Bookmarks');
    $handler->override_option('block_caching', -1);
  }
}
