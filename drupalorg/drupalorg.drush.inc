<?php

function drupalorg_drush_help($section) {
  switch ($section) {
    case 'drupalorg:map-content':
      return dt('Update home page map pins.');
    case 'drupalorg:rebuild-stats':
      return dt('Update home page stats.');
    case 'drupalorg:aggregator':
      return dt('Run aggregator module cron.');
    case 'drupalorg:civimembership':
      return dt('Fetch Association membership records.');
  }
}

function drupalorg_drush_command() {
  return array(
    'map-content' => array(
      'description' => 'Update home page map pins.',
    ),
    'rebuild-stats' => array(
      'description' => 'Update home page stats.',
    ),
    'aggregator' => array(
      'description' => 'Run aggregator module cron.',
    ),
    'civimembership' => array(
      'description' => 'Fetch Association membership records.'
    ),
  );
}

function drush_drupalorg_map_content() {
  drupalorg_map_content(TRUE);
}

function drush_drupalorg_rebuild_stats() {
  drupalorg_get_activity(TRUE);
}

function drush_drupalorg_aggregator() {
  aggregator_not_cron();
}

function drush_drupalorg_civimembership() {
  // Fetch data.
  $response = drupal_http_request('https://association.drupal.org/api/association_members.json');
  if (isset($response->error)) {
    return drush_set_error('DRUSH_DRUPALORG_CIVIMEMBERSHIP_FETCH', dt('Failed to fetch membership data.'));
  }
  $data = json_decode($response->data);
  if (is_null($data)) {
    return drush_set_error('DRUSH_DRUPALORG_CIVIMEMBERSHIP_PARSE', dt('Failed to parse membership data.'));
  }

  // Store data.
  foreach ($data->users as $data_user) {
    $data_user->user->updated = $_SERVER['REQUEST_TIME'];
    drupal_write_record('drupalorg_civimembership', $data_user->user);
  }

  // Delete old data
  db_query("DELETE FROM {drupalorg_civimembership} WHERE updated != %d", $_SERVER['REQUEST_TIME']);

  // Fetch data 2 - Organizations.
  $response = drupal_http_request('https://association.drupal.org/api/membership/org_partner_memberships.json');
  if (isset($response->error)) {
    return drush_set_error('DRUSH_DRUPALORG_ORG_CIVIMEMBERSHIP_FETCH', dt('Failed to fetch organization membership data.'));
  }
  $data = json_decode($response->data);
  if (is_null($data)) {
    return drush_set_error('DRUSH_DRUPALORG_ORG_CIVIMEMBERSHIP_PARSE', dt('Failed to parse organization membership data.'));
  }

  // Store data.
  foreach ($data->orgs as $data_org) {
    $data_org->org->updated = $_SERVER['REQUEST_TIME'];
    drupal_write_record('drupalorg_org_civimembership', $data_org->org);
  }

  // Delete old data
  db_query("DELETE FROM {drupalorg_org_civimembership} WHERE updated != %d", $_SERVER['REQUEST_TIME']);

  // Fetch data 3 - Individuals.
  $response = drupal_http_request('https://association.drupal.org/api/membership/ind_memberships.json');
  if (isset($response->error)) {
    return drush_set_error('DRUSH_DRUPALORG_IND_CIVIMEMBERSHIP_FETCH', dt('Failed to fetch individual membership data.'));
  }
  $data = json_decode($response->data);
  if (is_null($data)) {
    return drush_set_error('DRUSH_DRUPALORG_IND_CIVIMEMBERSHIP_PARSE', dt('Failed to parse individual membership data.'));
  }

  // Store data.
  foreach ($data->users as $data_user) {
    $data_user->user->updated = $_SERVER['REQUEST_TIME'];
    drupal_write_record('drupalorg_ind_civimembership', $data_user->user);
  }

  // Delete old data
  db_query("DELETE FROM {drupalorg_ind_civimembership} WHERE updated != %d", $_SERVER['REQUEST_TIME']);
}
