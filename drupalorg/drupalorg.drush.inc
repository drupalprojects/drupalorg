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
  );
}

function drush_drupalorg_rebuild_stats() {
  drupalorg_get_activity(TRUE);
}

/**
 * Command callback. Count issue credits and store count on organization profile.
 */
function drush_drupalorg_org_credit() {
  $credits = array();
  $result = db_query('SELECT fdfact.field_attribute_contribution_to_target_id AS organization, n.nid FROM {node} n INNER JOIN {field_data_field_issue_credit} fdfic ON fdfic.entity_id = n.nid INNER JOIN {comment} c ON c.cid = fdfic.field_issue_credit_target_id AND c.status = 1 INNER JOIN {field_data_field_issue_status} fdfis ON fdfis.entity_id = n.nid AND fdfis.field_issue_status_value IN (2,7) INNER JOIN {field_data_field_attribute_as_volunteer} fdf_av ON fdf_av.entity_id = c.cid AND fdf_av.field_attribute_as_volunteer_value = 0 INNER JOIN {field_data_field_attribute_contribution_to} fdfact ON fdfact.entity_id = c.cid WHERE n.type IN (:project_issue_types) AND n.status = 1 AND n.changed > UNIX_TIMESTAMP(NOW() - INTERVAL 3 MONTH)', array(':project_issue_types' => project_issue_issue_node_types()));
  foreach ($result as $row) {
    $credits[$row->organization][$row->nid] = TRUE;
  }
  $result = db_query('SELECT fdf_fc.field_for_customer_target_id AS organization, n.nid FROM {node} n INNER JOIN {field_data_field_issue_credit} fdfic ON fdfic.entity_id = n.nid INNER JOIN {comment} c ON c.cid = fdfic.field_issue_credit_target_id AND c.status = 1 INNER JOIN {field_data_field_issue_status} fdfis ON fdfis.entity_id = n.nid AND fdfis.field_issue_status_value IN (2,7) INNER JOIN {field_data_field_attribute_as_volunteer} fdf_av ON fdf_av.entity_id = c.cid AND fdf_av.field_attribute_as_volunteer_value = 0 INNER JOIN {field_data_field_for_customer} fdf_fc ON fdf_fc.entity_id = c.cid WHERE n.type IN (:project_issue_types) AND n.status = 1 AND n.changed > UNIX_TIMESTAMP(NOW() - INTERVAL 3 MONTH)', array(':project_issue_types' => project_issue_issue_node_types()));
  foreach ($result as $row) {
    $credits[$row->organization][$row->nid] = TRUE;
  }
  foreach (node_load_multiple(array_keys($credits)) as $node) {
    $wrapper = entity_metadata_wrapper('node', $node);
    if ($wrapper->field_org_issue_credit_count->value() != count($credits[$node->nid])) {
      drush_log(dt('Updating @title', array('@title' => $node->title)));
      $wrapper->field_org_issue_credit_count = count($credits[$node->nid]);
      $node->revision = FALSE;
      node_save($node);
    }
  }

  // Clear any past credit.
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->propertyCondition('type', 'organization')
    ->propertyCondition('nid', array_keys($credits), 'NOT IN')
    ->fieldCondition('field_org_issue_credit_count', 'value', 0, '>');
  $result = $query->execute();
  if (!empty($result)) {
    foreach (node_load_multiple(array_keys($result['node'])) as $node) {
      drush_log(dt('Updating @title', array('@title' => $node->title)));
      $wrapper->field_org_issue_credit_count = 0;
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
