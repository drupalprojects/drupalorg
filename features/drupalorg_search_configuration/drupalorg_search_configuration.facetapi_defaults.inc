<?php

/**
 * Implementation of hook_facetapi_default_facet_settings().
 */
function drupalorg_search_configuration_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass;
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::ss_meta_type';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'ss_meta_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(),
    'facet_mincount' => 1,
    'facet_missing' => 0,
    'flatten' => 0,
    'query_type' => 'meta_type',
  );
  $export['apachesolr@solr::ss_meta_type'] = $facet;

  return $export;
}
