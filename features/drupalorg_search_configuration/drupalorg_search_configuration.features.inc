<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function drupalorg_search_configuration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => 1);
  }
  elseif ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => 1);
  }
}
