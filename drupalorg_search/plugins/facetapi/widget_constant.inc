<?php

/**
 * @file
 * Widgets for facets rendered as links changing only 1 facet.
 */

/**
 * Widget that renders facets as a list of clickable links.
 */
class FacetapiWidgetConstant extends FacetapiWidgetLinks {

  /**
   * Renders the links.
   */
  public function execute() {
    $element = &$this->build[$this->facet['field alias']];

    // Get the general facet.
    $facet = $this->facet->getFacet();
    // Determine if the facet is currently in use. If not, all is active.
    $active_facets = $this->facet->getAdapter()->getActiveItems($facet);
    $all_active = empty($active_facets) ? TRUE : FALSE;

    // @todo: Should we count differently? This is the current logic on d.o,
    // but this expects everything to have a value in this facet, and not
    // all items are indexed with a meta facet (pages, for instance).
    $total_count = 0;
    foreach ($element as &$result) {
      $total_count += $result['#count'];
      $result['#query']['f'] = array($this->facet['field alias'] . ':' . $result['#indexed_value']);
    }

    if ($total_count > 0) {
      // @todo: There _must_ be a better way to do this. Find it.
      $array = $this->build[$this->facet['field alias']];
      $all = array_pop($array);
      $all['#markup'] = t('All');
      $all['#count'] = $total_count;
      $all['#active'] = $all_active;
      $all['#query'] = array();
      $element = array('all' => $all) + $element;
    }

    // Sets each item's theme hook, builds item list.
    $this->setThemeHooks($element);
    $element = array(
      '#theme' => 'item_list',
      '#items' => $this->buildListItems($element),
      '#attributes' => $this->build['#attributes'],
    );
  }

  /**
   * Recursive function that sets each item's theme hook.
   *
   * @param array &$build
   *   A render array containing the facet items.
   */
  protected function setThemeHooks(array &$build) {
    foreach ($build as $value => &$item) {
      $item['#theme'] = ($item['#active'] && FALSE ? 'facetapi_link_active' : 'facetapi_link_inactive');
      if (!empty($item['#item_children'])) {
        $this->setThemeHooks($item['#item_children']);
      }
    }
    return $this;
  }

  /**
   * Recursive function that converts the render array into an array that can be
   * passed to theme_item_list().
   *
   * @param array $build
   *   The facet's render array.
   *
   * @return array
   *   The "items" parameter for theme_item_list().
   */
  function buildListItems($build) {
    $settings = $this->settings->settings;

    // Initializes links attributes, adds rel="nofollow" if configured.
    $attributes = ($settings['nofollow']) ? array('rel' => 'nofollow') : array();
    $attributes += array('class' => $this->getItemClasses());

    // Builds rows.
    $items = array();
    foreach ($build as $value => $item) {
      $row = array('class' => array());

      // Initializes variables passed to theme hook.
      $variables = array(
        'text' => $item['#markup'],
        'path' => $item['#path'],
        'count' => $item['#count'],
        'options' => array(
          'attributes' => $attributes,
          'html' => $item['#html'],
          'query' => $item['#query'],
        ),
      );

      // Adds the facetapi-zero-results class to items that have no results.
      if (!$item['#count']) {
        $variables['options']['attributes']['class'][] = 'facetapi-zero-results';
      }

      // If the item has no children, it is a leaf.
      if (empty($item['#item_children'])) {
        $row['class'][] = 'leaf';
      }
      else {
        // If the item is active or the "show_expanded" setting is selected,
        // show this item as expanded so we see its children.
        if ($item['#active'] || !empty($settings['show_expanded'])) {
          $row['class'][] = 'expanded';
          $row['children'] = $this->buildListItems($item['#item_children']);
        }
        else {
          $row['class'][] = 'collapsed';
        }
      }

      // Gets theme hook, adds last minute classes.
      $class = ($item['#active']) ? 'facetapi-active' : 'facetapi-inactive';
      $variables['options']['attributes']['class'] = $class;

      // Themes the link, adds row to items.
      $row['data'] = theme($item['#theme'], $variables);

      $items[] = $row;
    }

    return $items;
  }
}
