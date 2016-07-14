<?php
/**
 * @file
 * drupalorg_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalorg_content_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function drupalorg_content_types_default_message_type() {
  $items = array();
  $items['comment_notification'] = entity_import('message_type', '{
    "name" : "comment_notification",
    "description" : "Comment notification",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "[[message:field-target-comment:node:content-type]] [message:field-target-comment:node:title]",
          "format" : "1",
          "safe_value" : "\\u003Cp\\u003E[[message:field-target-comment:node:content-type]] [message:field-target-comment:node:title]\\u003C\\/p\\u003E"
        },
        {
          "value" : "[message:field-target-comment:field_documentation_changes]\\r\\n\\r\\n[message:field-target-comment:author:name] commented:\\r\\n[message:field-target-comment:body]\\r\\n\\r\\nView on [site:name]: [message:field-target-comment:url:absolute]\\r\\n\\r\\n-- \\r\\nTo unsubscribe from notifications about this content, go to [message:field-target-comment:node:url] and click \\u201cUnfollow\\u201d. (And make sure you are logged in.)",
          "format" : "1",
          "safe_value" : "\\u003Cp\\u003E[message:field-target-comment:field_documentation_changes]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comment:author:name] commented:\\u003Cbr \\/\\u003E\\n[message:field-target-comment:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EView on [site:name]: [message:field-target-comment:url:absolute]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E--\\u003Cbr \\/\\u003E\\nTo unsubscribe from notifications about this content, go to [message:field-target-comment:node:url] and click \\u201cUnfollow\\u201d. (And make sure you are logged in.)\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function drupalorg_content_types_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('If you want to add a static page, like a contact page or an about page, use a page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Blog, discussion, announcement posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'section' => array(
      'name' => t('Section'),
      'base' => 'node_content',
      'description' => t('Sections are used to group content by common topic and maintainers. Sections use organic groups to help identify maintainers and to control who may edit what content within each section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
