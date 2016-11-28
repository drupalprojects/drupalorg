<?php
/**
 * @file
 * drupalorg_documentation.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function drupalorg_documentation_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'asciidoc_user_guide';
  $feeds_importer->config = array(
    'name' => 'AsciiDoc User Guide',
    'description' => 'Imports the AsciiDoc output of the User Guide into a Documentation Guide',
    'fetcher' => array(
      'plugin_key' => 'AsciiDocFetcher',
      'config' => array(
        'allowed_extensions' => 'html',
        'direct' => TRUE,
        'translated' => 1,
        'source_language' => 'en',
        'copyright_file' => 'copyright.html',
        'source_directory' => '/usr/local/user_guide_source/source/',
        'source_field' => 'field_asciidoc_source_file',
        'source_message' => 'This page is generated from <a href="http://asciidoc.org/">AsciiDoc</a> source from the <a href="https://www.drupal.org/project/user_guide">User Guide</a>. To propose a change, edit the source and attach the file to a <a href="https://www.drupal.org/node/add/project_issue/user_guide">new issue in the User Guide project</a>.',
        'delete_uploaded_file' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'AsciiDocParser',
      'config' => array(
        'internal_link_prefix' => '/docs/user_guide/[LANG]/',
        'internal_image_prefix' => '/files/docs/user_guide/[LANG]/',
        'show_toc' => 0,
        'add_copyright' => 0,
        'remove_titles' => 1,
        'guid_prefix' => 'asciidoc_user_guide',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '180064',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'langcode',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'type',
            'target' => 'asciidoc_content_type',
            'chapter' => 'guide',
            'book' => 'guide',
            'language' => 'und',
          ),
          3 => array(
            'source' => 'source_guid',
            'target' => 'asciidoc_tnid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'summary',
            'target' => 'field_summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'output_file',
            'target' => 'asciidoc_alias',
            'path_prefix' => 'docs/user_guide/[LANG]/',
          ),
          7 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'images',
            'target' => 'asciidoc_files',
            'directory' => 'docs/user_guide/[LANG]/images/',
            'exists_behavior' => '1',
            'language' => 'und',
          ),
          9 => array(
            'source' => 'source_file',
            'target' => 'field_asciidoc_source_file',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'title',
            'target' => 'asciidoc_comment_settings',
            'comment_settings' => '0',
            'language' => 'und',
          ),
          11 => array(
            'source' => 'parent_guid',
            'target' => 'og_group_ref_documentation',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'title',
            'target' => 'asciidoc_menu_title',
            'menu_name' => '',
            'language' => 'und',
          ),
          13 => array(
            'source' => 'parent_weight',
            'target' => 'asciidoc_menu_entry_weight',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'parent_guid',
            'target' => 'asciidoc_menu_og_guid',
            'remove_if_blank' => 1,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'asciidoc_import',
        'skip_hash_check' => 0,
        'bundle' => 'documentation',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['asciidoc_user_guide'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'asciidoc_user_guide_guidelines';
  $feeds_importer->config = array(
    'name' => 'AsciiDoc Contributor Guide',
    'description' => 'Contributor guide for the User Guide project',
    'fetcher' => array(
      'plugin_key' => 'AsciiDocFetcher',
      'config' => array(
        'allowed_extensions' => 'html',
        'direct' => TRUE,
        'translated' => 0,
        'source_language' => 'en',
        'copyright_file' => 'copyright.html',
        'source_directory' => '/usr/local/user_guide_source/guidelines',
        'source_field' => 'field_asciidoc_source_file',
        'source_message' => 'This page is generated from <a href="http://asciidoc.org/">AsciiDoc</a> source from the <a href="https://www.drupal.org/project/user_guide">User Guide</a>. To propose a change, edit the source and attach the file to a <a href="https://www.drupal.org/node/add/project_issue/user_guide">new issue in the User Guide project</a>.',
        'delete_uploaded_file' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'AsciiDocParser',
      'config' => array(
        'internal_link_prefix' => '/docs/user_guide_guidelines/',
        'internal_image_prefix' => '/files/docs/user_guide/guidelines/',
        'show_toc' => 0,
        'add_copyright' => 0,
        'remove_titles' => 1,
        'guid_prefix' => 'asciidoc_user_guide_guidelines',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '180064',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'type',
            'target' => 'asciidoc_content_type',
            'chapter' => 'guide',
            'book' => 'guide',
            'language' => 'und',
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'summary',
            'target' => 'field_summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'output_file',
            'target' => 'asciidoc_alias',
            'path_prefix' => 'docs/user_guide_guidelines/',
          ),
          5 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'images',
            'target' => 'asciidoc_files',
            'directory' => 'docs/user_guide/guidelines/images/',
            'exists_behavior' => '1',
          ),
          7 => array(
            'source' => 'source_file',
            'target' => 'field_asciidoc_source_file',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'title',
            'target' => 'asciidoc_comment_settings',
            'comment_settings' => '0',
            'language' => 'und',
          ),
          9 => array(
            'source' => 'parent_guid',
            'target' => 'og_group_ref_documentation',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'title',
            'target' => 'asciidoc_menu_title',
            'menu_name' => '',
            'language' => 'und',
          ),
          11 => array(
            'source' => 'parent_weight',
            'target' => 'asciidoc_menu_entry_weight',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'parent_guid',
            'target' => 'asciidoc_menu_og_guid',
            'remove_if_blank' => 1,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'asciidoc_import',
        'skip_hash_check' => 0,
        'bundle' => 'documentation',
        'language' => 'en',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['asciidoc_user_guide_guidelines'] = $feeds_importer;

  return $export;
}
