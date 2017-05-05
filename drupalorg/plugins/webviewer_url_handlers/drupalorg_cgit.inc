<?php
/**
 * @file
 * This plugin provides support for cgit.drupal.org.
 */

$plugin = [
  'vcs' => 'git',
  'title' => t('cgit.drupal.org URL autogenerator'),
  'url_templates' => [
    'repository_view' => '%base_url/%repo_path%branch',
    'commit_view' => '%base_url/%repo_path/commit/?id=%revision',
    'file_log_view' => '%base_url/%repo_path/log/%path%branch',
    'directory_log_view' => '%base_url/%repo_path/log/%path%branch',
    'file_view' => '%base_url/%repo_path/tree/%path?%args',
    'directory_view' => '%base_url/%repo_path/tree/%path?%args',
    // @todo does cgit support diffing arbitrary files on different revisions?
    'diff' => '',
  ],
  'handler' => [
    'class' => 'DrupalorgUrlHandlerCgit',
    'file' => 'DrupalorgUrlHandlerCgit.inc',
    'path' => drupal_get_path('module', 'drupalorg') . '/plugins/webviewer_url_handlers',
    'parent' => 'none',
  ],
];
