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
  'title' => t("Project: version"),
  // keyword to use for %substitution
  'keyword' => 'project_version',
  'description' => t('Creates a release node context from a release name.'),
  'context' => 'ctools_argument_project_version_context',
  'placeholder form' => array(
    '#type' => 'textfield',
    '#description' => t('Enter the version of a project release for this argument'),
  ),
);

/**
 * Discover if this argument gives us the version we crave.
 */
function ctools_argument_project_version_context($arg = NULL, $conf = NULL, $empty = FALSE) {
  // If unset it wants a generic, unfilled context.
  if ($empty) {
    return ctools_context_create_empty('string');
  }

  $context = ctools_context_create('string', $arg);
  $context->original_argument = $arg;

  return $context;
}



