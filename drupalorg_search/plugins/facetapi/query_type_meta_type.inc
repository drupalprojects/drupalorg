<?php
/**
 * @file
 * Meta type query type plugin for the Apache Solr adapter.
 */

/**
 * Plugin for "meta_type" query types.
 */
class ApacheSolrFacetapiMetaType extends ApacheSolrFacetapiTerm implements FacetapiQueryTypeInterface {

  /**
   * Returns the query type associated with the plugin.
   *
   * @return string
   *   The query type.
   */
  static public function getType() {
    return 'meta_type';
  }

  /**
   * Adds the filter to the query object.
   *
   * @param stdClass $query
   *   An object containing the query in the backend's native API.
   */
  public function execute($query) {
    $settings = $this->adapter->getFacet($this->facet)->getSettings();
    // Adds the operator parameter.
    $operator = $settings->settings['operator'];
    $ex = "{!ex={$this->facet['field']}}";
    $query->addParam('facet.field', $ex . $this->facet['field']);

    if (!empty($settings->settings['facet_missing'])) {
      $query->addParam('f.' . $this->facet['field'] . '.facet.missing', 'true');
    }
    // Adds "hard limit" parameter to prevent too many return values.
    $limit = empty($settings->settings['hard_limit']) ? 20 : (int) $settings->settings['hard_limit'];
    $query->addParam('f.' . $this->facet['field'] . '.facet.limit', $limit);

    // Adds "facet mincount" parameter to limit the number of facets.
    if (isset($settings->settings['facet_mincount'])) {
      $count = $settings->settings['facet_mincount'];
      $query->addParam('f.' . $this->facet['field'] . '.facet.mincount', $count);
    }

    $active = $this->adapter->getActiveItems($this->facet);

    $local = "tag={$this->facet['field']}";
    $values = array_keys($active);
    if ($values) {
      // We require our meta type to always be a single value.
      $meta_type = array_pop($values);
      $query->addFilter($this->facet['field'], $meta_type, FALSE, $local);
    }
  }
}