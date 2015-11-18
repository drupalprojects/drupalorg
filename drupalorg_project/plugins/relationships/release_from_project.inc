<?php

/**
 * @file
 * Plugin to provide an relationship handler for book parent.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
    /*
    array(
    new ctools_context_required(t('Project: machine_name'), 'project_machine_name'),
    new ctools_context_required(t('Project: version'), 'project_version'),
  ),
    */
$plugin = array(
  'title' => t('Release from project'),
  'keyword' => 'release_from_project',
  'description' => t('Adds a release node from a project node context.'),
  'required context' => array(
    new ctools_context_required(t('Node'), 'node'),
    new ctools_context_required(t('String'), 'string'),
  ),
  'context' => 'ctools_release_from_project_context',
);

/**
 * Return a new context based on an existing context.
 */
function ctools_release_from_project_context($context, $conf) {
  // If unset it wants a generic, unfilled context, which is just NULL.
  list($project, $version) = $context;
  if (empty($project->data)) {
    return ctools_context_create_empty('node');
  }

  /* Get release from project and version */
  if ($release = project_release_exists($project->data->nid, $version->data)) {
    // Load the node.
    $node = node_load($release);
    // Generate the context.
    if (node_access('view', $node)) {
      return ctools_context_create('node', $node);
    }
  }
  else {
    return ctools_context_create_empty('node');
  }
}
