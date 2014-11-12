<?php

class DrupalorgUserMetric extends SamplerMetric {
  public function computeSample() {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'user')
      ->propertyCondition('status', 1) // Not blocked.
      ->propertyCondition('login', 0, '>') // Has logged in.
      ->propertyCondition('created', $this->currentSample->sample_startstamp, '>')
      ->propertyCondition('created', $this->currentSample->sample_endstamp, '<=');
    $result = $query->execute();

    if (isset($result['user'])) {
      foreach (array_chunk(array_keys($result['user']), 100) as $uids) {
        foreach (user_load_multiple($uids, array(), TRUE) as $account) {
          $wrapper = entity_metadata_wrapper('user', $account);
          $key = $wrapper->field_gender->value() . '-' . $wrapper->field_country->value();
          if (isset($this->currentSample->values[$key])) {
            $this->currentSample->values[$key]['new'] += 1;
          }
          else {
            $this->currentSample->values[$key] = array(
              'gender' => $wrapper->field_gender->value(),
              'country' => $wrapper->field_country->value(),
              'new' => 1,
              'total' => 0,
            );
          }
        }
      }
    }
  }
}
