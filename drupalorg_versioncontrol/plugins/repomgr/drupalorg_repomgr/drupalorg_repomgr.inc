<?php

$plugin = array(
  'title' => t('Drupal.org-specific Git repo manager'),
  'worker' => array(
    'class' => 'DrupalorgVersioncontrolGitRepositoryManagerWorker',
    'parent' => 'git_default',
  ),
);
