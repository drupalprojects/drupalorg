<?php

/**
 * Views field handler for making a link to drupalorg_ham().
 */
class drupalorg_handler_not_spam extends views_handler_field_entity {
  function render($values) {
    if ($entity = $this->get_value($values)) {
      return $this->render_link($entity, $values);
    }
  }

  function render_link($entity, $values) {
    $id = entity_id($this->entity_type, $entity);
    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = 'drupalorg-ham/' . $this->entity_type . '/' . $id . '/' . drupal_get_token($this->entity_type . $id);
    $this->options['alter']['query'] = drupal_get_destination();
    return t('This is ham');
  }
}
