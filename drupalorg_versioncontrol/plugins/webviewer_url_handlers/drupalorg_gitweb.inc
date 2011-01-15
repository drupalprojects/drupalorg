<?php
// $Id$

/**
 * @file
 * This plugin contains the main documentation of how to make a
 * webviewer_url_handler. It does not really provide any functionallity.
 */

$plugin = array(
  'vcs' => 'git',
  'title' => t('Drupalorg Gitweb URL autogenerator'),
  'url_templates' => array(
    'repository_view' => '%base_url/%repo_name.git',
    'commit_view' => '%base_url/%repo_name.git/commit/%revision',
    'file_log_view' => '%base_url/%repo_name.git/history/%revision:/%path',
    'directory_log_view' => '%base_url/%repo_name.git/history/%revision:/%path',
    'file_view' => '%base_url/%repo_name.git/blob/%revision:/%path',
    'directory_view' => '%base_url/%repo_name.git/tree/%revision:/%path',
    'diff' => '%base_url/%repo_name.git/blobdiff/%old_revision..%new_revision:/%path',
  ),
  'handler' => array(
    'class' => 'VersioncontrolRepositoryUrlHandlerGitweb',
    'file' => 'VersioncontrolRepositoryUrlHandlerGitweb.inc',
    'path' => drupal_get_path('module', 'versioncontrol_git') . '/includes/plugins/webviewer_url_handlers',
    'parent' => 'none',
  ),
);
