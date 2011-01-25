<?php
// $Id$
/**
 * @file
 * This plugin provides support for gitweb, when gitweb configuration
 * contains "$feature{'pathinfo'}{'default'} = [1];".
 */

$plugin = array(
  'vcs' => 'git',
  'title' => t('Drupal.org project-pathing sensitive Gitweb'),
  'url_templates' => array(
    // Revisions refer commit hashes for this plugin to support gitweb pathinfo feature.
    'repository_view' => '%base_url/%prefix/%repo_name.git',
    'commit_view' => '%base_url/%prefix/%repo_name.git/commit/%revision',
    'file_log_view' => '%base_url/%prefix/%repo_name.git/history/%revision:%path',
    'directory_log_view' => '%base_url/%prefix/%repo_name.git/history/%revision:%path',
    'file_view' => '%base_url/%prefix/%repo_name.git/blob/%revision:%path',
    'directory_view' => '%base_url/%prefix/%repo_name.git/tree/%revision:%path',
    'diff' => '%base_url/%prefix/%repo_name.git/blobdiff/%old_revision..%new_revision:%path',
  ),
  'handler' => array(
    'class' => 'DrupalorgVersioncontrolRepositoryUrlHandlerGitwebRewrite',
    'parent' => 'none',
  ),
);
