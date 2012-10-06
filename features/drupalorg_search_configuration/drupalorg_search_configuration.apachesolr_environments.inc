<?php

/**
 * Implementation of hook_apachesolr_environments().
 */
function drupalorg_search_configuration_apachesolr_environments() {
  $export = array();

  $environment = new stdClass;
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'stagingsolr dev';
  $environment->url = 'http://stagingsolr.drupal.org:8112/solr/do-3.x';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'multisitesearch' => 1,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'book',
      1 => 'casestudy',
      2 => 'changenotice',
      3 => 'forum',
      4 => 'organization',
      5 => 'packaging_whitelist',
      6 => 'page',
      7 => 'project_issue',
      8 => 'project_project',
      9 => 'project_release',
      10 => 'story',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
