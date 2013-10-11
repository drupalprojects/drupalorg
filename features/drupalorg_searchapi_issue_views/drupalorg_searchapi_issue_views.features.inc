<?php
/**
 * @file
 * drupalorg_searchapi_issue_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupalorg_searchapi_issue_views_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function drupalorg_searchapi_issue_views_default_search_api_index() {
  $items = array();
  $items['project_issues'] = entity_import('search_api_index', '{
    "name" : "Project issues",
    "machine_name" : "project_issues",
    "description" : null,
    "server" : "project_issues",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "1000",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "project_issue" : "project_issue" } }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "project_issue_alter_participants" : { "status" : 1, "weight" : "0", "settings" : [] },
        "project_issue_alter_followers" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Title (fulltext)",
                "type" : "fulltext",
                "fields" : [ "title" ],
                "description" : "A Fulltext aggregation of the following fields: Title."
              }
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "search_api_aggregation_1" : true,
              "body:value" : true,
              "comments:comment_body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "body:value" : true, "comments:comment_body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "search_api_aggregation_1" : true,
              "body:value" : true,
              "comments:comment_body:value" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "title" : { "type" : "string", "boost" : "3.0" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "comment_count" : { "type" : "integer" },
        "taxonomy_vocabulary_9" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_project" : { "type" : "integer", "entity_type" : "node" },
        "field_issue_status" : { "type" : "integer" },
        "field_issue_priority" : { "type" : "integer" },
        "field_issue_category" : { "type" : "integer" },
        "field_issue_component" : { "type" : "string" },
        "field_issue_assigned" : { "type" : "integer", "entity_type" : "user" },
        "field_issue_version" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text", "boost" : "2.0" },
        "project_issue_followers" : { "type" : "list\\u003Cinteger\\u003E" },
        "project_issue_participants" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "comments:comment_body:value" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.5" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function drupalorg_searchapi_issue_views_default_search_api_server() {
  $items = array();
  $items['project_issues'] = entity_import('search_api_server', '{
    "name" : "Project issues",
    "machine_name" : "project_issues",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "autocomplete" : { "suggest_suffix" : 1, "suggest_words" : 1 },
      "indexes" : { "project_issues" : {
          "title" : {
            "table" : "search_api_db_project_issues",
            "type" : "string",
            "boost" : "3.0",
            "column" : "title"
          },
          "taxonomy_vocabulary_9" : {
            "table" : "search_api_db_project_issues_taxonomy_vocabulary_9",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_project_issues",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_project_issues",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_project_issues",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "project_issue_participants" : {
            "table" : "search_api_db_project_issues_project_issue_participants",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_issue_category" : {
            "table" : "search_api_db_project_issues",
            "column" : "field_issue_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_issue_component" : {
            "table" : "search_api_db_project_issues",
            "column" : "field_issue_component",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_issue_assigned" : {
            "table" : "search_api_db_project_issues",
            "column" : "field_issue_assigned",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_issue_status" : {
            "table" : "search_api_db_project_issues",
            "column" : "field_issue_status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_issue_priority" : {
            "table" : "search_api_db_project_issues",
            "column" : "field_issue_priority",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_issue_version" : {
            "table" : "search_api_db_project_issues",
            "column" : "field_issue_version",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_project" : {
            "table" : "search_api_db_project_issues",
            "column" : "field_project",
            "type" : "integer",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_project_issues",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "comment_count" : {
            "table" : "search_api_db_project_issues",
            "column" : "comment_count",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_aggregation_1" : {
            "table" : "search_api_db_project_issues_search_api_aggregation_1",
            "type" : "text",
            "boost" : "2.0"
          },
          "body:value" : {
            "table" : "search_api_db_project_issues_body_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "comments:comment_body:value" : {
            "table" : "search_api_db_project_issues_comments_comment_body_value",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "0.5"
          },
          "project_issue_followers" : {
            "table" : "search_api_db_project_issues_project_issue_followers",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
