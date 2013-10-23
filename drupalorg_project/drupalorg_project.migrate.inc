<?php

class DrupalorgProjectSearchApiMigration extends MigrationBase {
  public function __construct() {
    parent::__construct();
    $this->description = t('Prepopulate project issues search index.');
  }

  public function import() {
    db_query("INSERT INTO {search_api_db_project_issues} SELECT n.nid AS item_id, lower(n.title) AS title, n.language AS search_api_language, n.created, n.changed, c.field_issue_category_value AS field_issue_category, co.field_issue_component_value AS field_issue_component, a.field_issue_assigned_target_id AS field_issue_assigned, s.field_issue_status_value AS field_issue_status, p.field_issue_priority_value AS field_issue_priority, v.field_issue_version_value AS field_issue_version, pn.field_project_target_id AS field_project, n.uid AS author, cs.comment_count FROM {node} n LEFT JOIN {field_data_field_issue_category} c ON c.entity_id = n.nid LEFT JOIN {field_data_field_issue_component} co ON co.entity_id = n.nid LEFT JOIN {field_data_field_issue_assigned} a ON a.entity_id = n.nid AND a.field_issue_assigned_target_id <> 0 LEFT JOIN {field_data_field_issue_status} s ON s.entity_id = n.nid LEFT JOIN {field_data_field_issue_priority} p ON p.entity_id = n.nid LEFT JOIN {field_data_field_issue_version} v ON v.entity_id = n.nid LEFT JOIN {field_data_field_project} pn ON pn.entity_id = n.nid LEFT JOIN {node_comment_statistics} cs ON cs.nid = n.nid WHERE n.status = 1 AND n.type = 'project_issue'");
    db_query("INSERT INTO {search_api_db_project_issues_project_issue_followers} SELECT n.nid AS item_id, f.uid AS value FROM {node} n INNER JOIN {flag_content} f ON f.content_id = n.nid WHERE n.status = 1 AND n.type = 'project_issue'");
    db_query("INSERT INTO {search_api_db_project_issues_project_issue_participants} (SELECT n.nid AS item_id, n.uid AS value FROM {node} n WHERE n.status = 1 AND n.type = 'project_issue') UNION DISTINCT (SELECT n.nid AS item_id, c.uid AS value FROM {node} n INNER JOIN {comment} c ON c.nid = n.nid WHERE n.status = 1 AND n.type = 'project_issue')");
    db_query("INSERT INTO {search_api_db_project_issues_taxonomy_vocabulary_9} SELECT n.nid AS item_id, t.tid AS value FROM {node} n INNER JOIN {taxonomy_index} t ON t.nid = n.nid INNER JOIN {taxonomy_term_data} td ON td.tid = t.tid AND td.vid = 9 WHERE n.status = 1 AND n.type = 'project_issue'");
    db_query("INSERT INTO {search_api_item} SELECT n.nid AS item_id, (SELECT id FROM {search_api_index} WHERE machine_name = 'project_issues') AS index_id, unix_timestamp() AS changed FROM {node} n WHERE n.status = 1 AND n.type = 'project_issue'");
  }

  public function isComplete() {
    return (bool) db_query_range("SELECT 1 FROM {search_api_db_project_issues}", 1, 1);
  }
}
