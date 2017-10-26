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
    static $releases_seen = [];

    if ($node_wrapper = entity_metadata_wrapper('node', $this->get_value($values))) {
      $output = '';

      // Find a pre-release, if there is one.
      if (($nid = db_query('SELECT latest_release FROM {project_release_supported_versions} WHERE recommended_release = :nid AND latest_release != :nid', [':nid' => $node_wrapper->getIdentifier()])->fetchField()) && ($pre_release = node_load($nid))) {
        $pre_release_wrapper = entity_metadata_wrapper('node', $pre_release);
        $output .= '<p>' . t('Pre-release version: !version <small>released @updated</small>', [
          '!version' => l($pre_release_wrapper->field_release_version->raw(), 'node/' . $pre_release->nid),
          '@updated' => format_date($pre_release->changed),
        ]);
        if ($short_description = $pre_release_wrapper->field_release_short_description->value(['sanitize' => TRUE])) {
          $output .= '<br>' . $short_description;
        }
        $output .= '</p>';
      }

      // Find the dev release with the same project and version number components.
      $api_field = 'taxonomy_' . taxonomy_vocabulary_load(variable_get('project_release_api_vocabulary', ''))->machine_name;
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
        $dev_release = node_load(array_keys($result['node'])[0]);
        $dev_release_wrapper = entity_metadata_wrapper('node', $dev_release);

        // Only show each dev release once. May be with a tagged release, or
        // fall back to the development display. This class is instanciated for
        // each display, so need the extra check for the current display.
        if (($this->view->current_display !== 'development' || empty($releases_seen[$dev_release->nid])) && $dev_release_wrapper->field_show_download->raw()) {
          if ($this->view->current_display !== 'development') {
            $releases_seen[$dev_release->nid] = TRUE;
          }
          $output .= '<p>' . t('Development version: !version <small>updated @updated</small>', [
            '!version' => l($dev_release_wrapper->field_release_version->raw(), 'node/' . $dev_release->nid),
            '@updated' => format_date(isset($dev_release_wrapper->field_release_files[0]) && !empty($dev_release_wrapper->field_release_files[0]->field_release_file->value()) ? $dev_release_wrapper->field_release_files[0]->field_release_file->file->timestamp->value() : $dev_release->changed, 'medium', '', 'UTC'),
          ]) . '</p>';

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
              if (!empty($testing['core_branch']) && strpos($testing['core_branch'], '~') !== 0) {
                $query->propertyCondition('core_branch', $testing['core_branch']);
              }
              $result = $query->execute();
              if (isset($result['pift_ci_job'])) {
                $test_output = pift_ci_render_tests(entity_load('pift_ci_job', array_keys($result['pift_ci_job'])));
                foreach (element_children($test_output) as $key) {
                  $test_output[$key]['#prefix'] .= t('Testing result: ');
                  $test_output[$key]['#suffix'] = ' ' . l(t('all results'), 'node/' . $dev_release_wrapper->field_release_project->raw() . '/qa') . $test_output[$key]['#suffix'];
                }
                $output .= drupal_render($test_output);
              }
            }
          }
        }
      }

      return $output;
    }
  }
}
