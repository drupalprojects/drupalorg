<?php

/**
 * Views field handler for determining if a release has security advisory
 * coverage.
 */
class drupalorg_handler_security_coverage extends views_handler_field_entity {
  function render($values) {
    if (drupalorg_project_release_security_coverage($this->get_value($values))['status'] === 'covered') {
      return 'covered';
    }
    return '';
  }
}
