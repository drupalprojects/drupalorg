<?php

/**
 * Views field handler for determining if a release has security advisory
 * coverage.
 */
class drupalorg_handler_security_coverage extends views_handler_field_entity {
  function render($values) {
    $coverage = drupalorg_project_release_security_coverage($this->get_value($values));
    return $coverage['status'];
  }
}
