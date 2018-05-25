<?php
/**
 * @file
 * drupalorg_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_projects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
 * Implements hook_flag_default_flags().
 */
function drupalorg_projects_flag_default_flags() {
  $flags = array();
  // Exported flag: "Project star".
  $flags['project_star'] = array(
    'entity_type' => 'node',
    'title' => 'Project star',
    'global' => 0,
    'types' => array(
      0 => 'project_distribution',
      1 => 'project_core',
      2 => 'project_drupalorg',
      3 => 'project_module',
      4 => 'project_theme_engine',
      5 => 'project_theme',
    ),
    'flag_short' => 'Star',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unstar',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'print' => 0,
      'nodechanges' => 0,
      'token' => 0,
      'diff_standard' => 0,
      'issuemetadata' => 0,
      'related_content' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'drupalorg_projects',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

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
      'name' => t('Community project'),
      'base' => 'node_content',
      'description' => t('Community projects can be used for any purpose that supports or enhances the Drupal project and community. Examples could be support for the Drupal.org website or non-code projects used to manage groups or initiatives within the Drupal community.'),
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
