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

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Git administrator' => 'Git administrator',
      'administrator' => 'administrator',
      'community' => 'community',
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
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
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
    ),
    'module' => 'pift',
  );

  // Exported permission: 'access pift settings for own projects'.
  $permissions['access pift settings for own projects'] = array(
    'name' => 'access pift settings for own projects',
    'roles' => array(
      'Git vetted user' => 'Git vetted user',
      'administrator' => 'administrator',
    ),
    'module' => 'pift',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'authenticated user' => 'authenticated user',
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
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'book',
  );

  // Exported permission: 'admin httpbl'.
  $permissions['admin httpbl'] = array(
    'name' => 'admin httpbl',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'httpbl',
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

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
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

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
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
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'administrator' => 'administrator',
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

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
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

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'administrator' => 'administrator',
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
      'content moderator' => 'content moderator',
      'security team' => 'security team',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
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
      'webmaster' => 'webmaster',
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
      'webmaster' => 'webmaster',
    ),
    'module' => 'path',
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

  // Exported permission: 'administer varnish'.
  $permissions['administer varnish'] = array(
    'name' => 'administer varnish',
    'roles' => array(),
    'module' => 'varnish',
  );

  // Exported permission: 'administer version control systems'.
  $permissions['administer version control systems'] = array(
    'name' => 'administer version control systems',
    'roles' => array(
      'Git administrator' => 'Git administrator',
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
    'roles' => array(
      'drupal.org issue queue squad' => 'drupal.org issue queue squad',
    ),
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
      'content moderator' => 'content moderator',
      'drupal.org issue queue squad' => 'drupal.org issue queue squad',
      'list maintainer' => 'list maintainer',
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
      'administrator' => 'administrator',
      'confirmed' => 'confirmed',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'administrator' => 'administrator',
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
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create book_listing content'.
  $permissions['create book_listing content'] = array(
    'name' => 'create book_listing content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create casestudy content'.
  $permissions['create casestudy content'] = array(
    'name' => 'create casestudy content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
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
      'Git vetted user' => 'Git vetted user',
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
      'Git vetted user' => 'Git vetted user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_theme projects'.
  $permissions['create full project_theme projects'] = array(
    'name' => 'create full project_theme projects',
    'roles' => array(
      'Git vetted user' => 'Git vetted user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_theme_engine projects'.
  $permissions['create full project_theme_engine projects'] = array(
    'name' => 'create full project_theme_engine projects',
    'roles' => array(
      'Git vetted user' => 'Git vetted user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full project_translation projects'.
  $permissions['create full project_translation projects'] = array(
    'name' => 'create full project_translation projects',
    'roles' => array(
      'Git vetted user' => 'Git vetted user',
    ),
    'module' => 'project',
  );

  // Exported permission: 'create full projects'.
  $permissions['create full projects'] = array(
    'name' => 'create full projects',
    'roles' => array(),
    'module' => 'project',
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
    'roles' => array(),
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
      'Git user' => 'Git user',
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

  // Exported permission: 'create sandbox projects'.
  $permissions['create sandbox projects'] = array(
    'name' => 'create sandbox projects',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'project',
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
      'webmaster' => 'webmaster',
    ),
    'module' => 'path',
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
    'roles' => array(),
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

  // Exported permission: 'delete any sandbox project'.
  $permissions['delete any sandbox project'] = array(
    'name' => 'delete any sandbox project',
    'roles' => array(),
    'module' => 'project',
  );

  // Exported permission: 'delete any story content'.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(),
    'module' => 'node',
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

  // Exported permission: 'delete own packaging_whitelist content'.
  $permissions['delete own packaging_whitelist content'] = array(
    'name' => 'delete own packaging_whitelist content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
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

  // Exported permission: 'delete own sandbox project'.
  $permissions['delete own sandbox project'] = array(
    'name' => 'delete own sandbox project',
    'roles' => array(
      'Git user' => 'Git user',
    ),
    'module' => 'project',
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
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_1'.
  $permissions['delete terms in vocabulary_1'] = array(
    'name' => 'delete terms in vocabulary_1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_2'.
  $permissions['delete terms in vocabulary_2'] = array(
    'name' => 'delete terms in vocabulary_2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_3'.
  $permissions['delete terms in vocabulary_3'] = array(
    'name' => 'delete terms in vocabulary_3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_31'.
  $permissions['delete terms in vocabulary_31'] = array(
    'name' => 'delete terms in vocabulary_31',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_34'.
  $permissions['delete terms in vocabulary_34'] = array(
    'name' => 'delete terms in vocabulary_34',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_38'.
  $permissions['delete terms in vocabulary_38'] = array(
    'name' => 'delete terms in vocabulary_38',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_44'.
  $permissions['delete terms in vocabulary_44'] = array(
    'name' => 'delete terms in vocabulary_44',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_46'.
  $permissions['delete terms in vocabulary_46'] = array(
    'name' => 'delete terms in vocabulary_46',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_48'.
  $permissions['delete terms in vocabulary_48'] = array(
    'name' => 'delete terms in vocabulary_48',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_5'.
  $permissions['delete terms in vocabulary_5'] = array(
    'name' => 'delete terms in vocabulary_5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_50'.
  $permissions['delete terms in vocabulary_50'] = array(
    'name' => 'delete terms in vocabulary_50',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_52'.
  $permissions['delete terms in vocabulary_52'] = array(
    'name' => 'delete terms in vocabulary_52',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_54'.
  $permissions['delete terms in vocabulary_54'] = array(
    'name' => 'delete terms in vocabulary_54',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_56'.
  $permissions['delete terms in vocabulary_56'] = array(
    'name' => 'delete terms in vocabulary_56',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_58'.
  $permissions['delete terms in vocabulary_58'] = array(
    'name' => 'delete terms in vocabulary_58',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_6'.
  $permissions['delete terms in vocabulary_6'] = array(
    'name' => 'delete terms in vocabulary_6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_60'.
  $permissions['delete terms in vocabulary_60'] = array(
    'name' => 'delete terms in vocabulary_60',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_62'.
  $permissions['delete terms in vocabulary_62'] = array(
    'name' => 'delete terms in vocabulary_62',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_7'.
  $permissions['delete terms in vocabulary_7'] = array(
    'name' => 'delete terms in vocabulary_7',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_9'.
  $permissions['delete terms in vocabulary_9'] = array(
    'name' => 'delete terms in vocabulary_9',
    'roles' => array(),
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
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(),
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
    'roles' => array(),
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

  // Exported permission: 'edit any story content'.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(),
    'module' => 'node',
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
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own casestudy content'.
  $permissions['edit own casestudy content'] = array(
    'name' => 'edit own casestudy content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
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

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'email unverified' => 'email unverified',
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
    'roles' => array(),
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
      'Git user' => 'Git user',
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

  // Exported permission: 'edit own story content'.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in areas_of_expertise'.
  $permissions['edit terms in areas_of_expertise'] = array(
    'name' => 'edit terms in areas_of_expertise',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_1'.
  $permissions['edit terms in vocabulary_1'] = array(
    'name' => 'edit terms in vocabulary_1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_2'.
  $permissions['edit terms in vocabulary_2'] = array(
    'name' => 'edit terms in vocabulary_2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_3'.
  $permissions['edit terms in vocabulary_3'] = array(
    'name' => 'edit terms in vocabulary_3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_31'.
  $permissions['edit terms in vocabulary_31'] = array(
    'name' => 'edit terms in vocabulary_31',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_34'.
  $permissions['edit terms in vocabulary_34'] = array(
    'name' => 'edit terms in vocabulary_34',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_38'.
  $permissions['edit terms in vocabulary_38'] = array(
    'name' => 'edit terms in vocabulary_38',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_44'.
  $permissions['edit terms in vocabulary_44'] = array(
    'name' => 'edit terms in vocabulary_44',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_46'.
  $permissions['edit terms in vocabulary_46'] = array(
    'name' => 'edit terms in vocabulary_46',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_48'.
  $permissions['edit terms in vocabulary_48'] = array(
    'name' => 'edit terms in vocabulary_48',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_5'.
  $permissions['edit terms in vocabulary_5'] = array(
    'name' => 'edit terms in vocabulary_5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_50'.
  $permissions['edit terms in vocabulary_50'] = array(
    'name' => 'edit terms in vocabulary_50',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_52'.
  $permissions['edit terms in vocabulary_52'] = array(
    'name' => 'edit terms in vocabulary_52',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_54'.
  $permissions['edit terms in vocabulary_54'] = array(
    'name' => 'edit terms in vocabulary_54',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_56'.
  $permissions['edit terms in vocabulary_56'] = array(
    'name' => 'edit terms in vocabulary_56',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_58'.
  $permissions['edit terms in vocabulary_58'] = array(
    'name' => 'edit terms in vocabulary_58',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_6'.
  $permissions['edit terms in vocabulary_6'] = array(
    'name' => 'edit terms in vocabulary_6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_60'.
  $permissions['edit terms in vocabulary_60'] = array(
    'name' => 'edit terms in vocabulary_60',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_62'.
  $permissions['edit terms in vocabulary_62'] = array(
    'name' => 'edit terms in vocabulary_62',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_7'.
  $permissions['edit terms in vocabulary_7'] = array(
    'name' => 'edit terms in vocabulary_7',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_9'.
  $permissions['edit terms in vocabulary_9'] = array(
    'name' => 'edit terms in vocabulary_9',
    'roles' => array(),
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
    ),
    'module' => 'extended_file_field',
  );

  // Exported permission: 'extended file field delete own file contents'.
  $permissions['extended file field delete own file contents'] = array(
    'name' => 'extended file field delete own file contents',
    'roles' => array(),
    'module' => 'extended_file_field',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
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
    ),
    'module' => 'sshkey',
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
      'Documentation moderator' => 'Documentation moderator',
      'Full HTML user' => 'Full HTML user',
      'Git administrator' => 'Git administrator',
      'Git user' => 'Git user',
      'Git vetted user' => 'Git vetted user',
      'administrator' => 'administrator',
      'community' => 'community',
      'content moderator' => 'content moderator',
      'drupal.org issue queue squad' => 'drupal.org issue queue squad',
      'list maintainer' => 'list maintainer',
      'security team' => 'security team',
      'testing administrator' => 'testing administrator',
      'user administrator' => 'user administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'pift re-test files'.
  $permissions['pift re-test files'] = array(
    'name' => 'pift re-test files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
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
      'list maintainer' => 'list maintainer',
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

  // Exported permission: 'report httpbl'.
  $permissions['report httpbl'] = array(
    'name' => 'report httpbl',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'httpbl',
  );

  // Exported permission: 'report to mollom'.
  $permissions['report to mollom'] = array(
    'name' => 'report to mollom',
    'roles' => array(
      'administrator' => 'administrator',
      'community' => 'community',
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

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
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

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'use multiple emails'.
  $permissions['use multiple emails'] = array(
    'name' => 'use multiple emails',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'multiple_email',
  );

  // Exported permission: 'use text format 3'.
  $permissions['use text format 3'] = array(
    'name' => 'use text format 3',
    'roles' => array(
      'Documentation moderator' => 'Documentation moderator',
      'Full HTML user' => 'Full HTML user',
      'administrator' => 'administrator',
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

  // Exported permission: 'view any SSH public keys'.
  $permissions['view any SSH public keys'] = array(
    'name' => 'view any SSH public keys',
    'roles' => array(
      'administrator' => 'administrator',
      'user administrator' => 'user administrator',
    ),
    'module' => 'sshkey',
  );

  // Exported permission: 'view own SSH public keys'.
  $permissions['view own SSH public keys'] = array(
    'name' => 'view own SSH public keys',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'sshkey',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
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
      'community' => 'community',
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
