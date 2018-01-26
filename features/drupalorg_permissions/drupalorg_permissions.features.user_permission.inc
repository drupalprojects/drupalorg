<?php
/**
 * @file
 * drupalorg_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalorg_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Toggle role confirmed'.
  $permissions['Toggle role confirmed'] = array(
    'name' => 'Toggle role confirmed',
    'roles' => array(
      'administrator' => 'administrator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'fasttoggle_user',
  );

  // Exported permission: 'accept git access agreement'.
  $permissions['accept git access agreement'] = array(
    'name' => 'accept git access agreement',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'drupalorg_git_gateway',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Git administrator' => 'Git administrator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'testing administrator' => 'testing administrator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access beanstalkd stats'.
  $permissions['access beanstalkd stats'] = array(
    'name' => 'access beanstalkd stats',
    'roles' => array(),
    'module' => 'beanstalkd',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access commit messages'.
  $permissions['access commit messages'] = array(
    'name' => 'access commit messages',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'commitlog',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access fieldable panels panes master list'.
  $permissions['access fieldable panels panes master list'] = array(
    'name' => 'access fieldable panels panes master list',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'access mollom statistics'.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'access pift settings for all projects'.
  $permissions['access pift settings for all projects'] = array(
    'name' => 'access pift settings for all projects',
    'roles' => array(
      'administrator' => 'administrator',
      'testing administrator' => 'testing administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'pift',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'book',
  );

  // Exported permission: 'access resource comment'.
  $permissions['access resource comment'] = array(
    'name' => 'access resource comment',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource field_collection_item'.
  $permissions['access resource field_collection_item'] = array(
    'name' => 'access resource field_collection_item',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource fieldable_panels_pane'.
  $permissions['access resource fieldable_panels_pane'] = array(
    'name' => 'access resource fieldable_panels_pane',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource file'.
  $permissions['access resource file'] = array(
    'name' => 'access resource file',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource flagging'.
  $permissions['access resource flagging'] = array(
    'name' => 'access resource flagging',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource message'.
  $permissions['access resource message'] = array(
    'name' => 'access resource message',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource message_type'.
  $permissions['access resource message_type'] = array(
    'name' => 'access resource message_type',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource message_type_category'.
  $permissions['access resource message_type_category'] = array(
    'name' => 'access resource message_type_category',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource node'.
  $permissions['access resource node'] = array(
    'name' => 'access resource node',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource og_membership'.
  $permissions['access resource og_membership'] = array(
    'name' => 'access resource og_membership',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource og_membership_type'.
  $permissions['access resource og_membership_type'] = array(
    'name' => 'access resource og_membership_type',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource pift_ci_job'.
  $permissions['access resource pift_ci_job'] = array(
    'name' => 'access resource pift_ci_job',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource redirect'.
  $permissions['access resource redirect'] = array(
    'name' => 'access resource redirect',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource search_api_index'.
  $permissions['access resource search_api_index'] = array(
    'name' => 'access resource search_api_index',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource search_api_server'.
  $permissions['access resource search_api_server'] = array(
    'name' => 'access resource search_api_server',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource sshkey'.
  $permissions['access resource sshkey'] = array(
    'name' => 'access resource sshkey',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_term'.
  $permissions['access resource taxonomy_term'] = array(
    'name' => 'access resource taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_vocabulary'.
  $permissions['access resource taxonomy_vocabulary'] = array(
    'name' => 'access resource taxonomy_vocabulary',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource user'.
  $permissions['access resource user'] = array(
    'name' => 'access resource user',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource versioncontrol_branch'.
  $permissions['access resource versioncontrol_branch'] = array(
    'name' => 'access resource versioncontrol_branch',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource versioncontrol_event'.
  $permissions['access resource versioncontrol_event'] = array(
    'name' => 'access resource versioncontrol_event',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource versioncontrol_item'.
  $permissions['access resource versioncontrol_item'] = array(
    'name' => 'access resource versioncontrol_item',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource versioncontrol_operation'.
  $permissions['access resource versioncontrol_operation'] = array(
    'name' => 'access resource versioncontrol_operation',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource versioncontrol_repo'.
  $permissions['access resource versioncontrol_repo'] = array(
    'name' => 'access resource versioncontrol_repo',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource versioncontrol_tag'.
  $permissions['access resource versioncontrol_tag'] = array(
    'name' => 'access resource versioncontrol_tag',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access security review list'.
  $permissions['access security review list'] = array(
    'name' => 'access security review list',
    'roles' => array(),
    'module' => 'security_review',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Git administrator' => 'Git administrator',
      'administrator' => 'administrator',
      'testing administrator' => 'testing administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add JS snippets for google analytics'.
  $permissions['add JS snippets for google analytics'] = array(
    'name' => 'add JS snippets for google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'book',
  );

  // Exported permission: 'admin tfa settings'.
  $permissions['admin tfa settings'] = array(
    'name' => 'admin tfa settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tfa',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer SSH public keys'.
  $permissions['administer SSH public keys'] = array(
    'name' => 'administer SSH public keys',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sshkey',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer all documentation guides'.
  $permissions['administer all documentation guides'] = array(
    'name' => 'administer all documentation guides',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'drupalorg',
  );

  // Exported permission: 'administer asciidoc'.
  $permissions['administer asciidoc'] = array(
    'name' => 'administer asciidoc',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'asciidoc_display',
  );

  // Exported permission: 'administer association memberships'.
  $permissions['administer association memberships'] = array(
    'name' => 'administer association memberships',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'drupalorg',
  );

  // Exported permission: 'administer bakery'.
  $permissions['administer bakery'] = array(
    'name' => 'administer bakery',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bakery',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer bueditor'.
  $permissions['administer bueditor'] = array(
    'name' => 'administer bueditor',
    'roles' => array(),
    'module' => 'bueditor',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer d3'.
  $permissions['administer d3'] = array(
    'name' => 'administer d3',
    'roles' => array(),
    'module' => 'd3',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer fasttoggle'.
  $permissions['administer fasttoggle'] = array(
    'name' => 'administer fasttoggle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fasttoggle',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer google admanager'.
  $permissions['administer google admanager'] = array(
    'name' => 'administer google admanager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'google_admanager',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer homebox'.
  $permissions['administer homebox'] = array(
    'name' => 'administer homebox',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'homebox',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer message types'.
  $permissions['administer message types'] = array(
    'name' => 'administer message types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'message',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer mollom'.
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'administer multiple emails'.
  $permissions['administer multiple emails'] = array(
    'name' => 'administer multiple emails',
    'roles' => array(
      'administrator' => 'administrator',
      'security team' => 'security team',
      'user administrator' => 'user administrator',
    ),
    'module' => 'multiple_email',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer og menu'.
  $permissions['administer og menu'] = array(
    'name' => 'administer og menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og_menu',
  );

  // Exported permission: 'administer og menu configuration'.
  $permissions['administer og menu configuration'] = array(
    'name' => 'administer og menu configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og_menu',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_book defaults'.
  $permissions['administer panelizer comment comment_node_book defaults'] = array(
    'name' => 'administer panelizer comment comment_node_book defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_book_listing defaults'.
  $permissions['administer panelizer comment comment_node_book_listing defaults'] = array(
    'name' => 'administer panelizer comment comment_node_book_listing defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_casestudy defaults'.
  $permissions['administer panelizer comment comment_node_casestudy defaults'] = array(
    'name' => 'administer panelizer comment comment_node_casestudy defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_changenotice defaults'.
  $permissions['administer panelizer comment comment_node_changenotice defaults'] = array(
    'name' => 'administer panelizer comment comment_node_changenotice defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_forum defaults'.
  $permissions['administer panelizer comment comment_node_forum defaults'] = array(
    'name' => 'administer panelizer comment comment_node_forum defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_organization defaults'.
  $permissions['administer panelizer comment comment_node_organization defaults'] = array(
    'name' => 'administer panelizer comment comment_node_organization defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_packaging_whitelist defaults'.
  $permissions['administer panelizer comment comment_node_packaging_whitelist defaults'] = array(
    'name' => 'administer panelizer comment comment_node_packaging_whitelist defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_page defaults'.
  $permissions['administer panelizer comment comment_node_page defaults'] = array(
    'name' => 'administer panelizer comment comment_node_page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_core defaults'.
  $permissions['administer panelizer comment comment_node_project_core defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_core defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_distribution defaults'.
  $permissions['administer panelizer comment comment_node_project_distribution defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_distribution defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_drupalorg defaults'.
  $permissions['administer panelizer comment comment_node_project_drupalorg defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_drupalorg defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_issue defaults'.
  $permissions['administer panelizer comment comment_node_project_issue defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_issue defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_module defaults'.
  $permissions['administer panelizer comment comment_node_project_module defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_module defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_release defaults'.
  $permissions['administer panelizer comment comment_node_project_release defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_release defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_theme defaults'.
  $permissions['administer panelizer comment comment_node_project_theme defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_theme defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_theme_engine defaults'.
  $permissions['administer panelizer comment comment_node_project_theme_engine defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_theme_engine defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_project_translation defaults'.
  $permissions['administer panelizer comment comment_node_project_translation defaults'] = array(
    'name' => 'administer panelizer comment comment_node_project_translation defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_section defaults'.
  $permissions['administer panelizer comment comment_node_section defaults'] = array(
    'name' => 'administer panelizer comment comment_node_section defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer comment comment_node_story defaults'.
  $permissions['administer panelizer comment comment_node_story defaults'] = array(
    'name' => 'administer panelizer comment comment_node_story defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node book defaults'.
  $permissions['administer panelizer node book defaults'] = array(
    'name' => 'administer panelizer node book defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node book_listing defaults'.
  $permissions['administer panelizer node book_listing defaults'] = array(
    'name' => 'administer panelizer node book_listing defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node casestudy defaults'.
  $permissions['administer panelizer node casestudy defaults'] = array(
    'name' => 'administer panelizer node casestudy defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node changenotice defaults'.
  $permissions['administer panelizer node changenotice defaults'] = array(
    'name' => 'administer panelizer node changenotice defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node documentation choice'.
  $permissions['administer panelizer node documentation choice'] = array(
    'name' => 'administer panelizer node documentation choice',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node documentation content'.
  $permissions['administer panelizer node documentation content'] = array(
    'name' => 'administer panelizer node documentation content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node documentation context'.
  $permissions['administer panelizer node documentation context'] = array(
    'name' => 'administer panelizer node documentation context',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node documentation defaults'.
  $permissions['administer panelizer node documentation defaults'] = array(
    'name' => 'administer panelizer node documentation defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node documentation layout'.
  $permissions['administer panelizer node documentation layout'] = array(
    'name' => 'administer panelizer node documentation layout',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node documentation overview'.
  $permissions['administer panelizer node documentation overview'] = array(
    'name' => 'administer panelizer node documentation overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node documentation settings'.
  $permissions['administer panelizer node documentation settings'] = array(
    'name' => 'administer panelizer node documentation settings',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node forum defaults'.
  $permissions['administer panelizer node forum defaults'] = array(
    'name' => 'administer panelizer node forum defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node guide choice'.
  $permissions['administer panelizer node guide choice'] = array(
    'name' => 'administer panelizer node guide choice',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node guide content'.
  $permissions['administer panelizer node guide content'] = array(
    'name' => 'administer panelizer node guide content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node guide context'.
  $permissions['administer panelizer node guide context'] = array(
    'name' => 'administer panelizer node guide context',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node guide defaults'.
  $permissions['administer panelizer node guide defaults'] = array(
    'name' => 'administer panelizer node guide defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node guide layout'.
  $permissions['administer panelizer node guide layout'] = array(
    'name' => 'administer panelizer node guide layout',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node guide overview'.
  $permissions['administer panelizer node guide overview'] = array(
    'name' => 'administer panelizer node guide overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node guide settings'.
  $permissions['administer panelizer node guide settings'] = array(
    'name' => 'administer panelizer node guide settings',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node organization defaults'.
  $permissions['administer panelizer node organization defaults'] = array(
    'name' => 'administer panelizer node organization defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node packaging_whitelist defaults'.
  $permissions['administer panelizer node packaging_whitelist defaults'] = array(
    'name' => 'administer panelizer node packaging_whitelist defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page choice'.
  $permissions['administer panelizer node page choice'] = array(
    'name' => 'administer panelizer node page choice',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page content'.
  $permissions['administer panelizer node page content'] = array(
    'name' => 'administer panelizer node page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page context'.
  $permissions['administer panelizer node page context'] = array(
    'name' => 'administer panelizer node page context',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page defaults'.
  $permissions['administer panelizer node page defaults'] = array(
    'name' => 'administer panelizer node page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page layout'.
  $permissions['administer panelizer node page layout'] = array(
    'name' => 'administer panelizer node page layout',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page overview'.
  $permissions['administer panelizer node page overview'] = array(
    'name' => 'administer panelizer node page overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page settings'.
  $permissions['administer panelizer node page settings'] = array(
    'name' => 'administer panelizer node page settings',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node post defaults'.
  $permissions['administer panelizer node post defaults'] = array(
    'name' => 'administer panelizer node post defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_core defaults'.
  $permissions['administer panelizer node project_core defaults'] = array(
    'name' => 'administer panelizer node project_core defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_distribution defaults'.
  $permissions['administer panelizer node project_distribution defaults'] = array(
    'name' => 'administer panelizer node project_distribution defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_drupalorg defaults'.
  $permissions['administer panelizer node project_drupalorg defaults'] = array(
    'name' => 'administer panelizer node project_drupalorg defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_issue defaults'.
  $permissions['administer panelizer node project_issue defaults'] = array(
    'name' => 'administer panelizer node project_issue defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_module defaults'.
  $permissions['administer panelizer node project_module defaults'] = array(
    'name' => 'administer panelizer node project_module defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_release choice'.
  $permissions['administer panelizer node project_release choice'] = array(
    'name' => 'administer panelizer node project_release choice',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_release content'.
  $permissions['administer panelizer node project_release content'] = array(
    'name' => 'administer panelizer node project_release content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_release context'.
  $permissions['administer panelizer node project_release context'] = array(
    'name' => 'administer panelizer node project_release context',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_release defaults'.
  $permissions['administer panelizer node project_release defaults'] = array(
    'name' => 'administer panelizer node project_release defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_release layout'.
  $permissions['administer panelizer node project_release layout'] = array(
    'name' => 'administer panelizer node project_release layout',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_release overview'.
  $permissions['administer panelizer node project_release overview'] = array(
    'name' => 'administer panelizer node project_release overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_release settings'.
  $permissions['administer panelizer node project_release settings'] = array(
    'name' => 'administer panelizer node project_release settings',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_theme defaults'.
  $permissions['administer panelizer node project_theme defaults'] = array(
    'name' => 'administer panelizer node project_theme defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_theme_engine defaults'.
  $permissions['administer panelizer node project_theme_engine defaults'] = array(
    'name' => 'administer panelizer node project_theme_engine defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project_translation defaults'.
  $permissions['administer panelizer node project_translation defaults'] = array(
    'name' => 'administer panelizer node project_translation defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section content'.
  $permissions['administer panelizer node section content'] = array(
    'name' => 'administer panelizer node section content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section context'.
  $permissions['administer panelizer node section context'] = array(
    'name' => 'administer panelizer node section context',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section defaults'.
  $permissions['administer panelizer node section defaults'] = array(
    'name' => 'administer panelizer node section defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section layout'.
  $permissions['administer panelizer node section layout'] = array(
    'name' => 'administer panelizer node section layout',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section overview'.
  $permissions['administer panelizer node section overview'] = array(
    'name' => 'administer panelizer node section overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section settings'.
  $permissions['administer panelizer node section settings'] = array(
    'name' => 'administer panelizer node section settings',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story defaults'.
  $permissions['administer panelizer node story defaults'] = array(
    'name' => 'administer panelizer node story defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term areas_of_expertise defaults'.
  $permissions['administer panelizer taxonomy_term areas_of_expertise defaults'] = array(
    'name' => 'administer panelizer taxonomy_term areas_of_expertise defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_1 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_1 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_1 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_2 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_2 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_2 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_3 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_3 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_3 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_31 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_31 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_31 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_34 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_34 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_34 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_38 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_38 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_38 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_44 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_44 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_44 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_46 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_46 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_46 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_48 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_48 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_48 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_5 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_5 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_5 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_50 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_50 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_50 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_52 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_52 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_52 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_54 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_54 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_54 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_56 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_56 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_56 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_58 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_58 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_58 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_6 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_6 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_6 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_60 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_60 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_60 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_62 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_62 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_62 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_7 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_7 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_7 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term vocabulary_9 defaults'.
  $permissions['administer panelizer taxonomy_term vocabulary_9 defaults'] = array(
    'name' => 'administer panelizer taxonomy_term vocabulary_9 defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels display styles'.
  $permissions['administer panels display styles'] = array(
    'name' => 'administer panels display styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels pane styles'.
  $permissions['administer panels pane styles'] = array(
    'name' => 'administer panels pane styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels region styles'.
  $permissions['administer panels region styles'] = array(
    'name' => 'administer panels region styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer projects'.
  $permissions['administer projects'] = array(
    'name' => 'administer projects',
    'roles' => array(
      'Git administrator' => 'Git administrator',
      'administrator' => 'administrator',
      'security team' => 'security team',
      'testing administrator' => 'testing administrator',
    ),
    'module' => 'project',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user git access'.
  $permissions['administer user git access'] = array(
    'name' => 'administer user git access',
    'roles' => array(
      'Git administrator' => 'Git administrator',
    ),
    'module' => 'drupalorg_git_gateway',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'security team' => 'security team',
      'user administrator' => 'user administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer version control systems'.
  $permissions['administer version control systems'] = array(
    'name' => 'administer version control systems',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'versioncontrol',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'assign and be assigned project issues'.
  $permissions['assign and be assigned project issues'] = array(
    'name' => 'assign and be assigned project issues',
    'roles' => array(),
    'module' => 'project_issue',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
      'user administrator' => 'user administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass access in place editing'.
  $permissions['bypass access in place editing'] = array(
    'name' => 'bypass access in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advagg',
  );

  // Exported permission: 'bypass bakery'.
  $permissions['bypass bakery'] = array(
    'name' => 'bypass bakery',
    'roles' => array(),
    'module' => 'bakery',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'Full HTML user' => 'Full HTML user',
      'Git administrator' => 'Git administrator',
      'Git vetted user' => 'Git vetted user',
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'testing administrator' => 'testing administrator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass mollom protection'.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass user restriction rules'.
  $permissions['bypass user restriction rules'] = array(
    'name' => 'bypass user restriction rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user_restrictions',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear asciidoc_user_guide feeds'.
  $permissions['clear asciidoc_user_guide feeds'] = array(
    'name' => 'clear asciidoc_user_guide feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear asciidoc_user_guide_guidelines feeds'.
  $permissions['clear asciidoc_user_guide_guidelines feeds'] = array(
    'name' => 'clear asciidoc_user_guide_guidelines feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create book_listing content'.
  $permissions['create book_listing content'] = array(
    'name' => 'create book_listing content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create casestudy content'.
  $permissions['create casestudy content'] = array(
    'name' => 'create casestudy content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create changenotice content'.
  $permissions['create changenotice content'] = array(
    'name' => 'create changenotice content',
    'roles' => array(
      'community' => 'community',
      'confirmed' => 'confirmed',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create documentation content'.
  $permissions['create documentation content'] = array(
    'name' => 'create documentation content',
    'roles' => array(
      'administrator' => 'administrator',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fieldable case_study'.
  $permissions['create fieldable case_study'] = array(
    'name' => 'create fieldable case_study',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable cta'.
  $permissions['create fieldable cta'] = array(
    'name' => 'create fieldable cta',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create full project_core projects'.
  $permissions['create full project_core projects'] = array(
    'name' => 'create full project_core projects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_distribution projects'.
  $permissions['create full project_distribution projects'] = array(
    'name' => 'create full project_distribution projects',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_drupalorg projects'.
  $permissions['create full project_drupalorg projects'] = array(
    'name' => 'create full project_drupalorg projects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_module projects'.
  $permissions['create full project_module projects'] = array(
    'name' => 'create full project_module projects',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_theme projects'.
  $permissions['create full project_theme projects'] = array(
    'name' => 'create full project_theme projects',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_theme_engine projects'.
  $permissions['create full project_theme_engine projects'] = array(
    'name' => 'create full project_theme_engine projects',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_translation projects'.
  $permissions['create full project_translation projects'] = array(
    'name' => 'create full project_translation projects',
    'roles' => array(),
    'module' => 'project',
  );

  // Exported permission: 'create full projects'.
  $permissions['create full projects'] = array(
    'name' => 'create full projects',
    'roles' => array(),
    'module' => 'project',
  );

  // Exported permission: 'create guide content'.
  $permissions['create guide content'] = array(
    'name' => 'create guide content',
    'roles' => array(
      'administrator' => 'administrator',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hosting_listing content'.
  $permissions['create hosting_listing content'] = array(
    'name' => 'create hosting_listing content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'message',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'book',
  );

  // Exported permission: 'create organization content'.
  $permissions['create organization content'] = array(
    'name' => 'create organization content',
    'roles' => array(
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create packaging_whitelist content'.
  $permissions['create packaging_whitelist content'] = array(
    'name' => 'create packaging_whitelist content',
    'roles' => array(
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create post content'.
  $permissions['create post content'] = array(
    'name' => 'create post content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_core content'.
  $permissions['create project_core content'] = array(
    'name' => 'create project_core content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_distribution content'.
  $permissions['create project_distribution content'] = array(
    'name' => 'create project_distribution content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_drupalorg content'.
  $permissions['create project_drupalorg content'] = array(
    'name' => 'create project_drupalorg content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_issue content'.
  $permissions['create project_issue content'] = array(
    'name' => 'create project_issue content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_module content'.
  $permissions['create project_module content'] = array(
    'name' => 'create project_module content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_theme content'.
  $permissions['create project_theme content'] = array(
    'name' => 'create project_theme content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_theme_engine content'.
  $permissions['create project_theme_engine content'] = array(
    'name' => 'create project_theme_engine content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project_translation content'.
  $permissions['create project_translation content'] = array(
    'name' => 'create project_translation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create sa content'.
  $permissions['create sa content'] = array(
    'name' => 'create sa content',
    'roles' => array(
      'security team' => 'security team',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sandbox projects'.
  $permissions['create sandbox projects'] = array(
    'name' => 'create sandbox projects',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create section content'.
  $permissions['create section content'] = array(
    'name' => 'create section content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create story content'.
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any book_listing content'.
  $permissions['delete any book_listing content'] = array(
    'name' => 'delete any book_listing content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any casestudy content'.
  $permissions['delete any casestudy content'] = array(
    'name' => 'delete any casestudy content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any changenotice content'.
  $permissions['delete any changenotice content'] = array(
    'name' => 'delete any changenotice content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any documentation content'.
  $permissions['delete any documentation content'] = array(
    'name' => 'delete any documentation content',
    'roles' => array(
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any full project'.
  $permissions['delete any full project'] = array(
    'name' => 'delete any full project',
    'roles' => array(),
    'module' => 'project',
  );

  // Exported permission: 'delete any guide content'.
  $permissions['delete any guide content'] = array(
    'name' => 'delete any guide content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hosting_listing content'.
  $permissions['delete any hosting_listing content'] = array(
    'name' => 'delete any hosting_listing content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organization content'.
  $permissions['delete any organization content'] = array(
    'name' => 'delete any organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any packaging_whitelist content'.
  $permissions['delete any packaging_whitelist content'] = array(
    'name' => 'delete any packaging_whitelist content',
    'roles' => array(
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any post content'.
  $permissions['delete any post content'] = array(
    'name' => 'delete any post content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_core content'.
  $permissions['delete any project_core content'] = array(
    'name' => 'delete any project_core content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_distribution content'.
  $permissions['delete any project_distribution content'] = array(
    'name' => 'delete any project_distribution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_drupalorg content'.
  $permissions['delete any project_drupalorg content'] = array(
    'name' => 'delete any project_drupalorg content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_issue content'.
  $permissions['delete any project_issue content'] = array(
    'name' => 'delete any project_issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_module content'.
  $permissions['delete any project_module content'] = array(
    'name' => 'delete any project_module content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_theme content'.
  $permissions['delete any project_theme content'] = array(
    'name' => 'delete any project_theme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_theme_engine content'.
  $permissions['delete any project_theme_engine content'] = array(
    'name' => 'delete any project_theme_engine content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_translation content'.
  $permissions['delete any project_translation content'] = array(
    'name' => 'delete any project_translation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sa content'.
  $permissions['delete any sa content'] = array(
    'name' => 'delete any sa content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sandbox project'.
  $permissions['delete any sandbox project'] = array(
    'name' => 'delete any sandbox project',
    'roles' => array(),
    'module' => 'project',
  );

  // Exported permission: 'delete any section content'.
  $permissions['delete any section content'] = array(
    'name' => 'delete any section content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any story content'.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete fieldable case_study'.
  $permissions['delete fieldable case_study'] = array(
    'name' => 'delete fieldable case_study',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable cta'.
  $permissions['delete fieldable cta'] = array(
    'name' => 'delete fieldable cta',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own book_listing content'.
  $permissions['delete own book_listing content'] = array(
    'name' => 'delete own book_listing content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own casestudy content'.
  $permissions['delete own casestudy content'] = array(
    'name' => 'delete own casestudy content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own changenotice content'.
  $permissions['delete own changenotice content'] = array(
    'name' => 'delete own changenotice content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own documentation content'.
  $permissions['delete own documentation content'] = array(
    'name' => 'delete own documentation content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own full project'.
  $permissions['delete own full project'] = array(
    'name' => 'delete own full project',
    'roles' => array(),
    'module' => 'project',
  );

  // Exported permission: 'delete own guide content'.
  $permissions['delete own guide content'] = array(
    'name' => 'delete own guide content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hosting_listing content'.
  $permissions['delete own hosting_listing content'] = array(
    'name' => 'delete own hosting_listing content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own organization content'.
  $permissions['delete own organization content'] = array(
    'name' => 'delete own organization content',
    'roles' => array(
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own packaging_whitelist content'.
  $permissions['delete own packaging_whitelist content'] = array(
    'name' => 'delete own packaging_whitelist content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own post content'.
  $permissions['delete own post content'] = array(
    'name' => 'delete own post content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_core content'.
  $permissions['delete own project_core content'] = array(
    'name' => 'delete own project_core content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_distribution content'.
  $permissions['delete own project_distribution content'] = array(
    'name' => 'delete own project_distribution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_drupalorg content'.
  $permissions['delete own project_drupalorg content'] = array(
    'name' => 'delete own project_drupalorg content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_issue content'.
  $permissions['delete own project_issue content'] = array(
    'name' => 'delete own project_issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_module content'.
  $permissions['delete own project_module content'] = array(
    'name' => 'delete own project_module content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_theme content'.
  $permissions['delete own project_theme content'] = array(
    'name' => 'delete own project_theme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_theme_engine content'.
  $permissions['delete own project_theme_engine content'] = array(
    'name' => 'delete own project_theme_engine content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_translation content'.
  $permissions['delete own project_translation content'] = array(
    'name' => 'delete own project_translation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sa content'.
  $permissions['delete own sa content'] = array(
    'name' => 'delete own sa content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sandbox project'.
  $permissions['delete own sandbox project'] = array(
    'name' => 'delete own sandbox project',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'delete own section content'.
  $permissions['delete own section content'] = array(
    'name' => 'delete own section content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own story content'.
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in areas_of_expertise'.
  $permissions['delete terms in areas_of_expertise'] = array(
    'name' => 'delete terms in areas_of_expertise',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in hosting_features'.
  $permissions['delete terms in hosting_features'] = array(
    'name' => 'delete terms in hosting_features',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_type'.
  $permissions['delete terms in organization_type'] = array(
    'name' => 'delete terms in organization_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_1'.
  $permissions['delete terms in vocabulary_1'] = array(
    'name' => 'delete terms in vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_2'.
  $permissions['delete terms in vocabulary_2'] = array(
    'name' => 'delete terms in vocabulary_2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_3'.
  $permissions['delete terms in vocabulary_3'] = array(
    'name' => 'delete terms in vocabulary_3',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_31'.
  $permissions['delete terms in vocabulary_31'] = array(
    'name' => 'delete terms in vocabulary_31',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_34'.
  $permissions['delete terms in vocabulary_34'] = array(
    'name' => 'delete terms in vocabulary_34',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_38'.
  $permissions['delete terms in vocabulary_38'] = array(
    'name' => 'delete terms in vocabulary_38',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_44'.
  $permissions['delete terms in vocabulary_44'] = array(
    'name' => 'delete terms in vocabulary_44',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_46'.
  $permissions['delete terms in vocabulary_46'] = array(
    'name' => 'delete terms in vocabulary_46',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_48'.
  $permissions['delete terms in vocabulary_48'] = array(
    'name' => 'delete terms in vocabulary_48',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_5'.
  $permissions['delete terms in vocabulary_5'] = array(
    'name' => 'delete terms in vocabulary_5',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_50'.
  $permissions['delete terms in vocabulary_50'] = array(
    'name' => 'delete terms in vocabulary_50',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_52'.
  $permissions['delete terms in vocabulary_52'] = array(
    'name' => 'delete terms in vocabulary_52',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_54'.
  $permissions['delete terms in vocabulary_54'] = array(
    'name' => 'delete terms in vocabulary_54',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_56'.
  $permissions['delete terms in vocabulary_56'] = array(
    'name' => 'delete terms in vocabulary_56',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_58'.
  $permissions['delete terms in vocabulary_58'] = array(
    'name' => 'delete terms in vocabulary_58',
    'roles' => array(
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_6'.
  $permissions['delete terms in vocabulary_6'] = array(
    'name' => 'delete terms in vocabulary_6',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_60'.
  $permissions['delete terms in vocabulary_60'] = array(
    'name' => 'delete terms in vocabulary_60',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_62'.
  $permissions['delete terms in vocabulary_62'] = array(
    'name' => 'delete terms in vocabulary_62',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_7'.
  $permissions['delete terms in vocabulary_7'] = array(
    'name' => 'delete terms in vocabulary_7',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_9'.
  $permissions['delete terms in vocabulary_9'] = array(
    'name' => 'delete terms in vocabulary_9',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any book_listing content'.
  $permissions['edit any book_listing content'] = array(
    'name' => 'edit any book_listing content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any casestudy content'.
  $permissions['edit any casestudy content'] = array(
    'name' => 'edit any casestudy content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any changenotice content'.
  $permissions['edit any changenotice content'] = array(
    'name' => 'edit any changenotice content',
    'roles' => array(
      'community' => 'community',
      'confirmed' => 'confirmed',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any documentation content'.
  $permissions['edit any documentation content'] = array(
    'name' => 'edit any documentation content',
    'roles' => array(
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any guide content'.
  $permissions['edit any guide content'] = array(
    'name' => 'edit any guide content',
    'roles' => array(
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hosting_listing content'.
  $permissions['edit any hosting_listing content'] = array(
    'name' => 'edit any hosting_listing content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organization content'.
  $permissions['edit any organization content'] = array(
    'name' => 'edit any organization content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any packaging_whitelist content'.
  $permissions['edit any packaging_whitelist content'] = array(
    'name' => 'edit any packaging_whitelist content',
    'roles' => array(
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any post content'.
  $permissions['edit any post content'] = array(
    'name' => 'edit any post content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_core content'.
  $permissions['edit any project_core content'] = array(
    'name' => 'edit any project_core content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_distribution content'.
  $permissions['edit any project_distribution content'] = array(
    'name' => 'edit any project_distribution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_drupalorg content'.
  $permissions['edit any project_drupalorg content'] = array(
    'name' => 'edit any project_drupalorg content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_issue content'.
  $permissions['edit any project_issue content'] = array(
    'name' => 'edit any project_issue content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_module content'.
  $permissions['edit any project_module content'] = array(
    'name' => 'edit any project_module content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_theme content'.
  $permissions['edit any project_theme content'] = array(
    'name' => 'edit any project_theme content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_theme_engine content'.
  $permissions['edit any project_theme_engine content'] = array(
    'name' => 'edit any project_theme_engine content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_translation content'.
  $permissions['edit any project_translation content'] = array(
    'name' => 'edit any project_translation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sa content'.
  $permissions['edit any sa content'] = array(
    'name' => 'edit any sa content',
    'roles' => array(
      'security team' => 'security team',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any section content'.
  $permissions['edit any section content'] = array(
    'name' => 'edit any section content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any story content'.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit asciidoc source'.
  $permissions['edit asciidoc source'] = array(
    'name' => 'edit asciidoc source',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'asciidoc_display',
  );

  // Exported permission: 'edit fieldable case_study'.
  $permissions['edit fieldable case_study'] = array(
    'name' => 'edit fieldable case_study',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable cta'.
  $permissions['edit fieldable cta'] = array(
    'name' => 'edit fieldable cta',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own book_listing content'.
  $permissions['edit own book_listing content'] = array(
    'name' => 'edit own book_listing content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own casestudy content'.
  $permissions['edit own casestudy content'] = array(
    'name' => 'edit own casestudy content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own changenotice content'.
  $permissions['edit own changenotice content'] = array(
    'name' => 'edit own changenotice content',
    'roles' => array(
      'community' => 'community',
      'confirmed' => 'confirmed',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own documentation content'.
  $permissions['edit own documentation content'] = array(
    'name' => 'edit own documentation content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own guide content'.
  $permissions['edit own guide content'] = array(
    'name' => 'edit own guide content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hosting_listing content'.
  $permissions['edit own hosting_listing content'] = array(
    'name' => 'edit own hosting_listing content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own organization content'.
  $permissions['edit own organization content'] = array(
    'name' => 'edit own organization content',
    'roles' => array(
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own packaging_whitelist content'.
  $permissions['edit own packaging_whitelist content'] = array(
    'name' => 'edit own packaging_whitelist content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own post content'.
  $permissions['edit own post content'] = array(
    'name' => 'edit own post content',
    'roles' => array(
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_core content'.
  $permissions['edit own project_core content'] = array(
    'name' => 'edit own project_core content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_distribution content'.
  $permissions['edit own project_distribution content'] = array(
    'name' => 'edit own project_distribution content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_drupalorg content'.
  $permissions['edit own project_drupalorg content'] = array(
    'name' => 'edit own project_drupalorg content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_issue content'.
  $permissions['edit own project_issue content'] = array(
    'name' => 'edit own project_issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_module content'.
  $permissions['edit own project_module content'] = array(
    'name' => 'edit own project_module content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_theme content'.
  $permissions['edit own project_theme content'] = array(
    'name' => 'edit own project_theme content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_theme_engine content'.
  $permissions['edit own project_theme_engine content'] = array(
    'name' => 'edit own project_theme_engine content',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_translation content'.
  $permissions['edit own project_translation content'] = array(
    'name' => 'edit own project_translation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sa content'.
  $permissions['edit own sa content'] = array(
    'name' => 'edit own sa content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own section content'.
  $permissions['edit own section content'] = array(
    'name' => 'edit own section content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own story content'.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in areas_of_expertise'.
  $permissions['edit terms in areas_of_expertise'] = array(
    'name' => 'edit terms in areas_of_expertise',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in hosting_features'.
  $permissions['edit terms in hosting_features'] = array(
    'name' => 'edit terms in hosting_features',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_type'.
  $permissions['edit terms in organization_type'] = array(
    'name' => 'edit terms in organization_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_1'.
  $permissions['edit terms in vocabulary_1'] = array(
    'name' => 'edit terms in vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_2'.
  $permissions['edit terms in vocabulary_2'] = array(
    'name' => 'edit terms in vocabulary_2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_3'.
  $permissions['edit terms in vocabulary_3'] = array(
    'name' => 'edit terms in vocabulary_3',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_31'.
  $permissions['edit terms in vocabulary_31'] = array(
    'name' => 'edit terms in vocabulary_31',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_34'.
  $permissions['edit terms in vocabulary_34'] = array(
    'name' => 'edit terms in vocabulary_34',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_38'.
  $permissions['edit terms in vocabulary_38'] = array(
    'name' => 'edit terms in vocabulary_38',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_44'.
  $permissions['edit terms in vocabulary_44'] = array(
    'name' => 'edit terms in vocabulary_44',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_46'.
  $permissions['edit terms in vocabulary_46'] = array(
    'name' => 'edit terms in vocabulary_46',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_48'.
  $permissions['edit terms in vocabulary_48'] = array(
    'name' => 'edit terms in vocabulary_48',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_5'.
  $permissions['edit terms in vocabulary_5'] = array(
    'name' => 'edit terms in vocabulary_5',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_50'.
  $permissions['edit terms in vocabulary_50'] = array(
    'name' => 'edit terms in vocabulary_50',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_52'.
  $permissions['edit terms in vocabulary_52'] = array(
    'name' => 'edit terms in vocabulary_52',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_54'.
  $permissions['edit terms in vocabulary_54'] = array(
    'name' => 'edit terms in vocabulary_54',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_56'.
  $permissions['edit terms in vocabulary_56'] = array(
    'name' => 'edit terms in vocabulary_56',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_58'.
  $permissions['edit terms in vocabulary_58'] = array(
    'name' => 'edit terms in vocabulary_58',
    'roles' => array(
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_6'.
  $permissions['edit terms in vocabulary_6'] = array(
    'name' => 'edit terms in vocabulary_6',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_60'.
  $permissions['edit terms in vocabulary_60'] = array(
    'name' => 'edit terms in vocabulary_60',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_62'.
  $permissions['edit terms in vocabulary_62'] = array(
    'name' => 'edit terms in vocabulary_62',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_7'.
  $permissions['edit terms in vocabulary_7'] = array(
    'name' => 'edit terms in vocabulary_7',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_9'.
  $permissions['edit terms in vocabulary_9'] = array(
    'name' => 'edit terms in vocabulary_9',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit user restriction rules'.
  $permissions['edit user restriction rules'] = array(
    'name' => 'edit user restriction rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user_restrictions',
  );

  // Exported permission: 'extended file field delete any file contents'.
  $permissions['extended file field delete any file contents'] = array(
    'name' => 'extended file field delete any file contents',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'extended_file_field',
  );

  // Exported permission: 'extended file field delete own file contents'.
  $permissions['extended file field delete own file contents'] = array(
    'name' => 'extended file field delete own file contents',
    'roles' => array(),
    'module' => 'extended_file_field',
  );

  // Exported permission: 'flag drupalorg_comment_spam'.
  $permissions['flag drupalorg_comment_spam'] = array(
    'name' => 'flag drupalorg_comment_spam',
    'roles' => array(
      'confirmed' => 'confirmed',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag drupalorg_node_spam'.
  $permissions['flag drupalorg_node_spam'] = array(
    'name' => 'flag drupalorg_node_spam',
    'roles' => array(
      'confirmed' => 'confirmed',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag drupalorg_user_spam'.
  $permissions['flag drupalorg_user_spam'] = array(
    'name' => 'flag drupalorg_user_spam',
    'roles' => array(
      'confirmed' => 'confirmed',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag flag_tracker_follow'.
  $permissions['flag flag_tracker_follow'] = array(
    'name' => 'flag flag_tracker_follow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag migrate'.
  $permissions['flag migrate'] = array(
    'name' => 'flag migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag project_issue_follow'.
  $permissions['flag project_issue_follow'] = array(
    'name' => 'flag project_issue_follow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag project_star'.
  $permissions['flag project_star'] = array(
    'name' => 'flag project_star',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'import asciidoc_user_guide feeds'.
  $permissions['import asciidoc_user_guide feeds'] = array(
    'name' => 'import asciidoc_user_guide feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import asciidoc_user_guide_guidelines feeds'.
  $permissions['import asciidoc_user_guide_guidelines feeds'] = array(
    'name' => 'import asciidoc_user_guide_guidelines feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'make posts sticky'.
  $permissions['make posts sticky'] = array(
    'name' => 'make posts sticky',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fasttoggle_node',
  );

  // Exported permission: 'manage any SSH public keys'.
  $permissions['manage any SSH public keys'] = array(
    'name' => 'manage any SSH public keys',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sshkey',
  );

  // Exported permission: 'manage distil status'.
  $permissions['manage distil status'] = array(
    'name' => 'manage distil status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'distil_registration',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage own SSH public keys'.
  $permissions['manage own SSH public keys'] = array(
    'name' => 'manage own SSH public keys',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'sshkey',
  );

  // Exported permission: 'may opt into security advisory coverage'.
  $permissions['may opt into security advisory coverage'] = array(
    'name' => 'may opt into security advisory coverage',
    'roles' => array(
      'Git vetted user' => 'Git vetted user',
    ),
    'module' => 'drupalorg',
  );

  // Exported permission: 'moderate comments'.
  $permissions['moderate comments'] = array(
    'name' => 'moderate comments',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'fasttoggle_comment',
  );

  // Exported permission: 'moderate posts'.
  $permissions['moderate posts'] = array(
    'name' => 'moderate posts',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'fasttoggle_node',
  );

  // Exported permission: 'moderate users'.
  $permissions['moderate users'] = array(
    'name' => 'moderate users',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'fasttoggle_user',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'pift re-test files'.
  $permissions['pift re-test files'] = array(
    'name' => 'pift re-test files',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'Git administrator' => 'Git administrator',
      'Git vetted user' => 'Git vetted user',
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'testing administrator' => 'testing administrator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'pift',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'post to newsletter'.
  $permissions['post to newsletter'] = array(
    'name' => 'post to newsletter',
    'roles' => array(
      'administrator' => 'administrator',
      'security team' => 'security team',
    ),
    'module' => 'lists',
  );

  // Exported permission: 'promote posts'.
  $permissions['promote posts'] = array(
    'name' => 'promote posts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fasttoggle_node',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'report to mollom'.
  $permissions['report to mollom'] = array(
    'name' => 'report to mollom',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'run security checks'.
  $permissions['run security checks'] = array(
    'name' => 'run security checks',
    'roles' => array(),
    'module' => 'security_review',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'setup own tfa'.
  $permissions['setup own tfa'] = array(
    'name' => 'setup own tfa',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'Full HTML user' => 'Full HTML user',
      'Git administrator' => 'Git administrator',
      'Git vetted user' => 'Git vetted user',
      'Packaging whitelist maintainer' => 'Packaging whitelist maintainer',
      'administrator' => 'administrator',
      'community' => 'community',
      'confirmed' => 'confirmed',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'testing administrator' => 'testing administrator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'tfa_basic',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
      'confirmed' => 'confirmed',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'unflag drupalorg_comment_spam'.
  $permissions['unflag drupalorg_comment_spam'] = array(
    'name' => 'unflag drupalorg_comment_spam',
    'roles' => array(
      'confirmed' => 'confirmed',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag drupalorg_node_spam'.
  $permissions['unflag drupalorg_node_spam'] = array(
    'name' => 'unflag drupalorg_node_spam',
    'roles' => array(
      'confirmed' => 'confirmed',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag drupalorg_user_spam'.
  $permissions['unflag drupalorg_user_spam'] = array(
    'name' => 'unflag drupalorg_user_spam',
    'roles' => array(
      'confirmed' => 'confirmed',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag flag_tracker_follow'.
  $permissions['unflag flag_tracker_follow'] = array(
    'name' => 'unflag flag_tracker_follow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag migrate'.
  $permissions['unflag migrate'] = array(
    'name' => 'unflag migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag project_issue_follow'.
  $permissions['unflag project_issue_follow'] = array(
    'name' => 'unflag project_issue_follow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag project_star'.
  $permissions['unflag project_star'] = array(
    'name' => 'unflag project_star',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unlock asciidoc_user_guide feeds'.
  $permissions['unlock asciidoc_user_guide feeds'] = array(
    'name' => 'unlock asciidoc_user_guide feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock asciidoc_user_guide_guidelines feeds'.
  $permissions['unlock asciidoc_user_guide_guidelines feeds'] = array(
    'name' => 'unlock asciidoc_user_guide_guidelines feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use multiple emails'.
  $permissions['use multiple emails'] = array(
    'name' => 'use multiple emails',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'multiple_email',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use signature'.
  $permissions['use signature'] = array(
    'name' => 'use signature',
    'roles' => array(
      'administrator' => 'administrator',
      'community' => 'community',
    ),
    'module' => 'signature_permissions',
  );

  // Exported permission: 'use text format 3'.
  $permissions['use text format 3'] = array(
    'name' => 'use text format 3',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'Full HTML user' => 'Full HTML user',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format 5'.
  $permissions['use text format 5'] = array(
    'name' => 'use text format 5',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format asciidoc_import'.
  $permissions['use text format asciidoc_import'] = array(
    'name' => 'use text format asciidoc_import',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view any SSH public keys'.
  $permissions['view any SSH public keys'] = array(
    'name' => 'view any SSH public keys',
    'roles' => array(
      'Git administrator' => 'Git administrator',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'sshkey',
  );

  // Exported permission: 'view own SSH public keys'.
  $permissions['view own SSH public keys'] = array(
    'name' => 'view own SSH public keys',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'sshkey',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view project usage'.
  $permissions['view project usage'] = array(
    'name' => 'view project usage',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'project_usage',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view role activity'.
  $permissions['view role activity'] = array(
    'name' => 'view role activity',
    'roles' => array(
      'administrator' => 'administrator',
      'user administrator' => 'user administrator',
    ),
    'module' => 'role_activity',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Git administrator' => 'Git administrator',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'testing administrator' => 'testing administrator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  return $permissions;
}
