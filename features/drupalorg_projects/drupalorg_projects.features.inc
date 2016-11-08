<?php
/**
 * @file
 * drupalorg_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_projects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_projects_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupalorg_projects_node_info() {
  $items = array(
    'project_core' => array(
      'name' => t('Drupal core'),
      'base' => 'node_content',
      'description' => t('The <a href="/project/drupal">Drupal core</a> system or one of the experimental clones of it.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'project_distribution' => array(
      'name' => t('Distribution project'),
      'base' => 'node_content',
      'description' => t('<p>Distributions provide site features and functions for a specific type of site as a single download containing Drupal core, contributed modules, themes, and pre-defined configuration. They make it possible to quickly set up a complex, use-specific site in fewer steps than if installing and configuring elements individually.</p>'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'project_drupalorg' => array(
      'name' => t('Drupal.org project'),
      'base' => 'node_content',
      'description' => t('Drupal.org is maintained by volunteers and the <a href="http://association.drupal.org/">Drupal Association</a>. These projects organize work on Drupal.org itself. For more about how Drupal.org works, see the <a href="http://drupal.org/about/drupal.org-FAQ">FAQ</a>.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'project_module' => array(
      'name' => t('Module project'),
      'base' => 'node_content',
      'description' => t('Extend and customize Drupal functionality with contributed modules.

If a module doesn\'t quite do what you want it to do, if you find a bug or have a suggestion, then <a href="http://drupal.org/node/23789">join forces</a> and help the module maintainer. Or, share your own by <a href="http://drupal.org/developing/modules">starting a new module</a>.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'project_release' => array(
      'name' => t('Release'),
      'base' => 'node_content',
      'description' => t('A release of a project with a specific version number.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project_theme' => array(
      'name' => t('Theme project'),
      'base' => 'node_content',
      'description' => t('<p>Themes allow you to change the look and feel of your Drupal site. You can use themes contributed by others or create your own to share with the community. Contributed themes are not part of any official release and may not have optimized code/functionality for your purposes.</p>

<p>You can also create a sub-theme of an existing theme. A sub-theme inherits a parent theme\'s resources. Read more about <a href="/node/225125">Sub-theme structure and inheritance</a>.</p>

<p>You can also <a href="/project/themes/index">view a full index of themes</a> listing only their titles.</p>'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'project_theme_engine' => array(
      'name' => t('Theme Engine project'),
      'base' => 'node_content',
      'description' => t('Theme engines are how themes interact with Drupal. Use the default theme engine included with Drupal core unless you are using a theme that specifically requires a different theme engine.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'project_translation' => array(
      'name' => t('Translation project'),
      'base' => 'node_content',
      'description' => t('Historic lists of translations. Translations are now available from <a href="http://localize.drupal.org">http://localize.drupal.org</a>, check there for up to date information.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
