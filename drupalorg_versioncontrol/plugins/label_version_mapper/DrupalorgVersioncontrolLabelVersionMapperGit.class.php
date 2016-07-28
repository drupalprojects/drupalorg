<?php

/**
 * Plugin for drupal.org-specifc mapping of tags and branches to versions.
 */
class DrupalorgVersioncontrolLabelVersionMapperGit implements VersioncontrolReleaseLabelVersionMapperInterface {

  public function GetVersionFromLabel($label_name, $label_type, $project_node) {
    if ($label_type == VERSIONCONTROL_LABEL_TAG) {
      return $this->GetVersionFromTag($label_name, $project_node);
    }
    else {
      return $this->GetVersionFromBranch($label_name, $project_node);
    }
  }

  public function GetVersionFromTag($tag_name, $project_node) {
    $version = new stdClass;
    $api_term = '';
    $matches = array();
    // Core versions are totally different from contrib.
    if ($project_node->type == 'project_core') {
      // Core official versions can be any of the following:
      // 4.7.0-beta3
      // 4.7.0
      // 6.18
      // 7.0-alpha3
      // 7.0
      if (preg_match('/^(\d+)\.(\d+)(\.(\d+))?(-((alpha|beta|rc)\d+))?$/', $tag_name, $matches)) {
        // Starting with version 5 through version 8.0 alphas, we only had 2 digits, major and patch.
        if (($matches[1] >= 5 && $matches[1] <= 7) || ($matches[1] == 8 && $matches[4] == '')) {
          $version->version_major = $matches[1];
          $version->version_patch = $matches[2];
          $api_term = $version->version_major . '.x';
        }
        // Prior to 5 and from 8 onward we have all 3: major, minor and patch.
        else {
          $version->version_major = $matches[1];
          $version->version_minor = $matches[2];
          // Match 4 contains the patch level without the leading '.'.
          $version->version_patch = $matches[4];
          if ($matches[1] <= 4) {
            // For version 4 and prior, the API compatibility prefix had 3 components
            // e.g., 4.4.x-1.0
            $api_term = $version->version_major . '.' . $version->version_minor . '.x';
          }
          else {
            // For version 5 and onward the API compatibility prefix has 2 components
            // e.g., 8.x-1.0
            $api_term = $version->version_major . '.x';
          }
        }
        // Match 6 contains the version extra without the leading '-'.
        if (!empty($matches[6])) {
          $version->version_extra = $matches[6];
        }
      }
    }
    else {
      // Contrib official versions can be any of the following:
      // 4.7.x-1.0-beta2
      // 4.7.x-1.0
      // 6.x-1.0-alpha1
      // 6.x-1.3
      // 6.x-10.0-alpha3
      if (preg_match('/^((\d+)(\.(\d+))?\.x)-(\d+)\.(\d+)(-((alpha|beta|rc)\d+))?$/', $tag_name, $matches)) {
        $version->version_major = $matches[5];
        $version->version_patch = $matches[6];
        // Match 8 contains the version extra without the leading '-'.
        if (!empty($matches[8])) {
          $version->version_extra = $matches[8];
        }
        $api_term = $matches[1];
      }
    }

    if (!empty($api_term)) {
      // If we're using the compatibility taxonomy, find the right tid.
      $query = new EntityFieldQuery();
      $result = $query->entityCondition('entity_type', 'taxonomy_term')
        ->propertyCondition('vid', variable_get('project_release_api_vocabulary', ''))
        ->propertyCondition('name', $api_term)
        ->execute();

      // Bail if $api_term exists but the EFQ did not return a tid, to avoid
      // throwing an undefined index notice on $result['taxonomy_term'].
      if (empty($result)) {
        return FALSE;
      }

      $tids = array_keys($result['taxonomy_term']);
      $version->version_api_tid = reset($tids);
      $version->version_api = $api_term;
    }

    return !empty($version->version_api_tid) ? $version : FALSE;
  }

  public function GetVersionFromBranch($branch_name, $project_node) {
    $version = new stdClass;
    $api_term = '';
    $matches = array();

    // Again, core branches are different from contrib.
    if ($project_node->type == 'project_core') {
      // Core branches can be any of these:
      // 4.7.x
      // 7.x
      // 8.1.x
      // 10.x
      if (preg_match('/^(\d+)(\.(\d+))?\.x$/', $branch_name, $matches)) {
        $version->version_major = $matches[1];
        if (isset($matches[3]) && ($matches[1] <= 4 || $matches[1] >= 8)) {
          $version->version_minor = $matches[3];
        }
        // The whole thing should match the API compatibility term, for 7 and lower.
        if ($version->version_major <= 7) {
          $api_term = $branch_name;
        }
        else {
          $api_term = $version->version_major . '.x';
        }
      }
    }
    else {
      // Contrib branches can be any of these:
      // 4.7.x-1.x
      // 5.x-2.x
      // 6.x-10.x
      if (preg_match('/^((\d+)(\.(\d+))?\.x)-(\d+)\.x$/', $branch_name, $matches)) {
        $version->version_major = $matches[5];
        $api_term = $matches[1];
      }
    }
    // In both cases, we want these to be true for branches:
    $version->version_patch = 'x';
    $version->version_extra = 'dev';

    if (!empty($api_term)) {
      // If we're using the compatibility taxonomy, find the right tid.
      $query = new EntityFieldQuery();
      $result = $query->entityCondition('entity_type', 'taxonomy_term')
        ->propertyCondition('vid', variable_get('project_release_api_vocabulary', ''))
        ->propertyCondition('name', $api_term)
        ->execute();

      // Bail if $api_term exists but the EFQ did not return a tid, to avoid
      // throwing an undefined index notice on $result['taxonomy_term'].
      if (empty($result)) {
        return FALSE;
      }

      $tids = array_keys($result['taxonomy_term']);
      $version->version_api_tid = reset($tids);
      $version->version_api = $api_term;
    }

    return !empty($version->version_api_tid) ? $version : FALSE;
  }

}
