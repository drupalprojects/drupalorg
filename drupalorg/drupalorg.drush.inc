<?php

/**
 * Implementation of hook_drush_help().
 */
function drupalorg_drush_help($section) {
  switch ($section) {
    case 'drupalorg:rebuild-stats':
      return dt('Update home page stats.');
  }
}

/**
 * Implementation of hook_drush_command();
 */
function drupalorg_drush_command() {
  return array(
    'rebuild-stats' => array(
      'description' => 'Update home page stats.',
    ),
    'drupalorg-org-credit' => array(
      'description' => 'Update organization credit totals.'
    ),
    'drupalorg-chargify-sync' => [
      'description' => 'Sync Association membership subscriptions.'
    ],
  );
}

function drush_drupalorg_rebuild_stats() {
  drupalorg_get_activity(TRUE);
}

/**
 * Command callback. Count issue credits and store count on organization profile.
 */
function drush_drupalorg_org_credit() {
  $credits = [];
  $usage = [];
  // Organization attribution.
  $result = db_query("SELECT fdfact.field_attribute_contribution_to_target_id AS organization, n.nid, fdf_p.field_project_target_id AS project FROM {node} n INNER JOIN {field_data_field_issue_credit} fdfic ON fdfic.entity_id = n.nid INNER JOIN {comment} c ON c.cid = fdfic.field_issue_credit_target_id AND c.status = 1 INNER JOIN {field_data_field_issue_status} fdfis ON fdfis.entity_id = n.nid AND fdfis.field_issue_status_value IN (2,7) INNER JOIN {field_data_field_attribute_as_volunteer} fdf_av ON fdf_av.entity_id = c.cid AND fdf_av.field_attribute_as_volunteer_value = 0 INNER JOIN {field_data_field_attribute_contribution_to} fdfact ON fdfact.entity_id = c.cid INNER JOIN {field_data_field_project} fdf_p ON fdf_p.entity_id = n.nid INNER JOIN {field_data_field_project_type} fdf_pt ON fdf_pt.entity_id = fdf_p.field_project_target_id AND fdf_pt.field_project_type_value = 'full' WHERE n.type IN (:project_issue_types) AND n.status = 1 AND n.changed > UNIX_TIMESTAMP(NOW() - INTERVAL 3 MONTH)", [':project_issue_types' => project_issue_issue_node_types()]);
  foreach ($result as $row) {
    $credits[$row->organization][$row->nid] = $row->project;
  }
  // Customer attribution.
  $result = db_query("SELECT fdf_fc.field_for_customer_target_id AS organization, n.nid, fdf_p.field_project_target_id AS project FROM {node} n INNER JOIN {field_data_field_issue_credit} fdfic ON fdfic.entity_id = n.nid INNER JOIN {comment} c ON c.cid = fdfic.field_issue_credit_target_id AND c.status = 1 INNER JOIN {field_data_field_issue_status} fdfis ON fdfis.entity_id = n.nid AND fdfis.field_issue_status_value IN (2,7) INNER JOIN {field_data_field_attribute_as_volunteer} fdf_av ON fdf_av.entity_id = c.cid AND fdf_av.field_attribute_as_volunteer_value = 0 INNER JOIN {field_data_field_for_customer} fdf_fc ON fdf_fc.entity_id = c.cid INNER JOIN {field_data_field_project} fdf_p ON fdf_p.entity_id = n.nid INNER JOIN {field_data_field_project_type} fdf_pt ON fdf_pt.entity_id = fdf_p.field_project_target_id AND fdf_pt.field_project_type_value = 'full' WHERE n.type IN (:project_issue_types) AND n.status = 1 AND n.changed > UNIX_TIMESTAMP(NOW() - INTERVAL 3 MONTH)", [':project_issue_types' => project_issue_issue_node_types()]);
  // De-dupe by issue nid.
  foreach ($result as $row) {
    $credits[$row->organization][$row->nid] = $row->project;
  }

  // Update all organizations.
  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
    ->propertyCondition('type', 'organization')
    ->execute();
  foreach (node_load_multiple(array_keys($result['node'])) as $node) {
    $wrapper = entity_metadata_wrapper('node', $node);
    $updated = FALSE;

    $issue_credits = isset($credits[$node->nid]) ? count($credits[$node->nid]) : 0;
    if ($wrapper->field_org_issue_credit_count->value() != $issue_credits) {
      $wrapper->field_org_issue_credit_count = $issue_credits;
      $updated = TRUE;
    }

    $weights = variable_get('drupalorg_org_credit_weights');
    // Add issue credit, weighted by project usage.
    $issue_credit_weighted = 0;
    if (isset($credits[$node->nid])) {
      foreach ($credits[$node->nid] as $project) {
        if (!isset($usage[$project])) {
          $usage[$project] = max(0, log(project_usage_get_project_total_usage($project), $weights['issue credit project log']));
        }
        $issue_credit_weighted += $usage[$project];
      }
    }
    $contribution_rank = $weights['issue credit'] * $issue_credit_weighted;
    // Add Association partnerships.
    $contribution_rank += array_sum(array_intersect_key($weights['supporting partner'], array_flip($wrapper->field_organization_support->value())));
    // Add Association membership.
    $contribution_rank += $weights['membership'] * drupalorg_has_civimembership($node->title, 'Organization');
    // Add D8 case studies.
    $query = new EntityFieldQuery();
    $contribution_rank += $weights['d8 case study'] * $query->entityCondition('entity_type', 'node')
      ->propertyCondition('type', 'casestudy')
      ->fieldCondition('field_case_organizations', 'target_id', $node->nid)
      ->fieldCondition('taxonomy_vocabulary_5', 'tid', 20236) // D8
      ->count()->execute();
    // Add Projects supported.
    $query = new EntityFieldQuery();
    $contribution_rank += $weights['project supported'] * $query->entityCondition('entity_type', 'field_collection_item')
      ->fieldCondition('field_supporting_organization', 'target_id', $node->nid)
      ->count()->execute();
    // Round & store.
    $contribution_rank = round($contribution_rank);
    if ($wrapper->field_org_contribution_rank->value() != $contribution_rank) {
      $wrapper->field_org_contribution_rank = $contribution_rank;
      $updated = TRUE;
    }

    if ($updated) {
      drush_log(dt('Updating @title', array('@title' => $node->title)));
      $node->revision = FALSE;
      node_save($node);
    }
  }
}

/**
 * Implements drush_hook_post_COMMAND().
 */
function drush_drupalorg_post_association_members() {
  // Get the trusted role ID.
  $rid = variable_get('drupalorg_crosssite_trusted_role', 36);

  // Find users who are individual Association members, and do not have the
  // trusted role.
  $query = db_select('users', 'u');
  $query->join('drupalorg_crosssite_ind_civimembership', 'ic', 'ic.user_name = u.name');
  $query->leftJoin('users_roles', 'ur', 'ur.uid = u.uid AND ur.rid = :rid', array(':rid' => $rid));
  $query
    ->fields('u', array('uid'))
    ->condition('u.status', 1)
    ->isNull('ur.rid');
  $result = $query->execute();

  // Give those accounts the trusted role.
  user_multiple_role_edit($result->fetchCol(), 'add_role', $rid);
}

/**
 * Command callback. Sync Association membership subscriptions.
 */
function drush_drupalorg_chargify_sync() {
  foreach (array_keys(variable_get('drupalorg_chargify_keys')) as $currency) {
    $page = 0;
    do {
      $page += 1;
      $response = drupal_http_request(url(_drupalorg_chargify_base_url($currency) . 'subscriptions.json', ['query' => ['page' => 1]]));
      if ($response->code != 200) {
        drush_log(dt('Failed to fetch subscriptions for @currency', ['@currency' => $currency]), 'error');
        break 2;
      }
      $data = json_decode($response->data);
      if ($data === NULL) {
        drush_log(dt('Failed to parse subscriptions for @currency', ['@currency' => $currency]), 'error');
        break 2;
      }
      foreach ($data as $subscription) {
        _drupalorg_update_chargify_subscription($currency, $subscription);
      }
    } while (count($data) === 200);
  }
}
