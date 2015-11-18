<?php

/**
 * @file
 *
 * Plugin to provide an argument handler for a username
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Project: machine_name"),
  // keyword to use for %substitution
  'keyword' => 'project_machine_name',
  'description' => t('Creates a project node context from a project machine name.'),
  'context' => 'ctools_argument_project_machine_name_context',
  'placeholder form' => array(
    '#type' => 'textfield',
    '#description' => t('Enter the machine name of a project for this argument'),
  ),
);

/**
 * Discover if this argument gives us the user we crave.
 */
function ctools_argument_project_machine_name_context($arg = NULL, $conf = NULL, $empty = FALSE) {
  // If unset it wants a generic, unfilled context.
  if ($empty) {
    return ctools_context_create_empty('node');
  }

  // We can accept either a node object or a pure nid.
  if (is_object($arg)) {
    return ctools_context_create('node', $arg);
  }

  $node = project_load($arg);
  if (!$node) {
    return NULL;
  }
  return ctools_context_create('node', $node);
}



