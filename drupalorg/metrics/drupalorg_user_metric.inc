<?php

/**
 * @file
 * Sampler metric for users, by gender & country.
 */

$plugin = array(
  'title' => t('Drupal.org users'),
  'description' => t('Counts the number of users by gender & country.'),
  'data_type' => array(
    'gender' => 'varchar',
    'country' => 'varchar',
    'new' => 'int',
    'total' => 'int',
  ),
  'handler' => array(
    'class' => 'DrupalorgUserMetric',
  ),
);
