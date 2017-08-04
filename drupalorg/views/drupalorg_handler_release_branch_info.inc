<?php

/**
 * Views field handler for determining if a release has security advisory
 * coverage.
 */
class drupalorg_handler_release_branch_info extends views_handler_field_entity {
  function render($values) {
    static $testing_preference = [
      PIFT_CI_TEST_ISSUE => 0,
      PIFT_CI_TEST_BRANCH_COMMIT => 1,
      PIFT_CI_TEST_BRANCH_DAILY => 2,
      PIFT_CI_TEST_BRANCH_WEEKLY => 3,
      PIFT_CI_TEST_DISABLED => 4,
    ];

    if ($node_wrapper = entity_metadata_wrapper('node', $this->get_value($values))) {
      $api_field = 'taxonomy_' . taxonomy_vocabulary_load(variable_get('project_release_api_vocabulary', ''))->machine_name;

      // Find the dev release with the same project and version number components.
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', project_release_release_node_types())
        ->fieldCondition('field_release_project', 'target_id', $node_wrapper->field_release_project->raw())
        ->fieldCondition('field_release_build_type', 'value', 'dynamic')
        ->fieldCondition($api_field, 'tid', $node_wrapper->$api_field->raw())
        ->fieldCondition('field_release_version_major', 'value', $node_wrapper->field_release_version_major->raw());
      if (!is_null($node_wrapper->field_release_version_minor->raw())) {
        $query->fieldCondition('field_release_version_minor', 'value', $node_wrapper->field_release_version_minor->raw());
      }
      $result = $query->execute();
      if (isset($result['node'])) {
        $dev_release = node_load(reset($result['node'])->nid);
        $dev_release_wrapper = entity_metadata_wrapper('node', $dev_release);

        if ($dev_release_wrapper->field_show_download->raw()) {
          $output = t('Development version: !version <small>updated @updated</small>', [
            '!version' => l($dev_release_wrapper->field_release_version->raw(), 'node/' . $dev_release->nid),
            '@updated' => format_date($dev_release->changed),
          ]);

          // DrupalCI testing.
          if ($project_info = pift_ci_project_info($dev_release_wrapper->field_release_project->raw())) {
            // Find “best” test.
            $testing = ['schedule' => PIFT_CI_TEST_DISABLED];
            foreach ($project_info as $environment => $release_info) {
              if (isset($release_info[$dev_release->nid])) {
                foreach ($release_info[$dev_release->nid] as $core_branch => $schedule) {
                  if ($testing_preference[$schedule] < $testing_preference[$testing['schedule']]) {
                    $testing = [
                      'schedule' => $schedule,
                      'environment' => $environment,
                      'core_branch' => $core_branch,
                    ];
                  }
                }
              }
            }
            if ($testing['schedule'] !== PIFT_CI_TEST_DISABLED) {
              // Get the latest complete test.
              $query = new EntityFieldQuery();
              $query->entityCondition('entity_type', 'pift_ci_job')
                ->propertyCondition('target_type', PIFT_CI_TYPE_BRANCH)
                ->propertyCondition('release_nid', $dev_release->nid)
                ->propertyCondition('environment', $testing['environment'])
                ->propertyCondition('status', [PIFT_CI_STATUS_QUEUE, PIFT_CI_STATUS_SENT, PIFT_CI_STATUS_RUNNING], 'NOT IN')
                ->propertyCondition('custom', FALSE)
                ->propertyOrderBy('job_id', 'DESC')
                ->range(0, 1);
              if (!empty($testing['core_branch'])) {
                if (strpos($testing['core_branch'], '~') === 0) {
                  $query->propertyCondition('core_branch', pift_get_current_core($testing['core_branch'], $dev_release_wrapper->$api_field->raw())['branch']);
                }
                else {
                  $query->propertyCondition('core_branch', $testing['core_branch']);
                }
              }
              $result = $query->execute();
              if (isset($result['pift_ci_job'])) {
                $test_output = pift_ci_render_tests(entity_load('pift_ci_job', array_keys($result['pift_ci_job'])));
                foreach (element_children($test_output) as $key) {
                  $test_output[$key]['#prefix'] .= t('Testing result: ');
                }
                $output .= drupal_render($test_output);
              }
            }
          }

          return $output;
        }
      }
    }
  }
}
