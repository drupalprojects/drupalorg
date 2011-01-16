<?php

$plugin = array(
  'title' => t('Packaging logic for drupal.org installation profile distributions'),
  'packager' => array(
    'class' => 'DrupalorgProjectPackageReleaseDistro',
    'parent' => 'drupalorg',  // plugin name, not class name
  ),
);
