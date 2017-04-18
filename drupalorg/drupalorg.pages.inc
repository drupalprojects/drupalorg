<?php

/**
 * Menu callback, redirect to the appropriate place to report a security issue
 * for a project.
 */
function drupalorg_project_security_redirect(stdClass $node) {
  $wrapper = entity_metadata_wrapper('node', $node);
  $project = $wrapper->field_project_machine_name->value();

  if ($wrapper->field_security_advisory_coverage->value() === 'covered' && project_release_has_full_release($node)) {
    drupal_goto('https://security.drupal.org/node/add/project-issue/' . $project);
  }
  else {
    drupal_set_message(t('This project is not covered by the Drupal Security Team’s advisory policy. Security issues do not need to be privately reported for the %title project.', ['%title' => $node->title]));
    drupal_goto('node/add/project-issue/' . $project, ['query' => ['tags' => 'security', 'priorities' => '400', 'categories' => 'bug']]);
  }
}

/**
 * Menu callback, project browsing pages.
 */
function drupalorg_project_browse_page($project_type) {
  // Default Solr params.
  $params = [
    'q' => isset($_GET['text']) ? $_GET['text'] : '',
    'qf' => 'content',
    'fl' => [
      'id',
      'entity_type',
      'entity_id',
      'label',
      'content',
      'is_comment_count',
      'bundle',
      'ds_created',
      'ds_changed',
      'url',
      'is_uid',
      'ss_name',
      'iss_project_release_usage',
      'ds_project_latest_release',
      'ds_project_latest_activity',
      'hash',
    ],
    'rows' => variable_get('apachesolr_rows', 10),
    'facet' => 'true',
    'facet.mincount' => 1,
    'facet.sort' => 'true',
    'facet.field' => [
      'bundle',
      'im_project_release_api_tids',
    ],
    'facet.limit' => 200,
  ];
  $params['start'] = (isset($_GET['page']) ? $_GET['page'] : 0) * $params['rows'];

  // This is the object that does the communication with the solr server.
  $env_id = apachesolr_default_environment();
  $solr = apachesolr_get_solr($env_id);
  if (isset($_GET['solrsort'])) {
    $solrsort = $_GET['solrsort'];
  }
  else {
    if (module_exists('project_usage')) {
      $solrsort = 'iss_project_release_usage desc';
    }
    else {
      $solrsort = 'sort desc';
    }
  }
  $query = new SolrBaseQuery($env_id, $solr, $params, $solrsort, $_GET['q']);
  if (is_null($query)) {
    throw new Exception(t('Could not construct a Solr query.'));
  }

  // We add addFilter() parameters here to include all the constant filters for
  // the query -- project nodes of the given top-level type that have releases
  // (if project_release is enabled). We use addFilter() rather than
  // $params['fq'] so that our filters are correctly passed to anything that
  // uses our cached query.
  $query->addFilter('bundle', $project_type->type);

  // Apply sort value.
  $query->setAvailableSort('ss_name', ['title' => t('Author'), 'default' => 'asc']);
  $query->setAvailableSort('ds_created', ['title' => t('Created date'), 'default' => 'desc']);
  $query->setAvailableSort('ds_project_latest_release', ['title' => t('Last release'), 'default' => 'desc']);
  $query->setAvailableSort('ds_project_latest_activity', ['title' => t('Last build'), 'default' => 'desc']);
  if (module_exists('project_usage')) {
    $query->setAvailableSort('iss_project_release_usage', ['title' => t('Most installed'), 'default' => 'desc']);
  }
  list($sort_field, $sort_direction) = explode(' ', $solrsort);
  $query->setSolrsort($sort_field, $sort_direction);

  // Allow modules to alter the query prior to statically caching it.
  // This can e.g. be used to add available sorts.
  foreach (module_implements('apachesolr_query_prepare') as $module) {
    $function_name = $module . '_apachesolr_query_prepare';
    $function_name($query);
  }
  apachesolr_search_add_boost_params($query);

  // Cache the built query. Since all the built queries go through
  // this process, all the hook_invocations will happen later.
  apachesolr_current_query($env_id, $query);
  $response = $query->search(isset($_GET['text']) ? $_GET['text'] : '');

  // The response is cached so that it is accessible to the blocks and anything
  // else that needs it beyond the initial search.
  apachesolr_static_response_cache($query->getSearcher(), $response);
  apachesolr_has_searched($env_id, TRUE);

  $nids = [];
  foreach (apachesolr_search_process_response($response, $query) as $result) {
    $nids[] = $result['node']->entity_id;
  }
  $results = [];
  foreach (node_load_multiple($nids) as $node) {
    $results[] = node_view($node, 'teaser');
  }

  $form_state = [
    'method' => 'get',
    'always_process' => TRUE,
    'no_redirect' => TRUE,
    'build_info' => ['args' => [$project_type]],
  ];
  $form = drupal_build_form('drupalorg_browse_projects_form', $form_state);
  unset($form['#build_id'], $form['form_build_id'], $form['form_id']);

  return [
    'drupalorg_browse_projects_form' => $form,
    'description' => ['#markup' => '<p>' . filter_xss($project_type->description) . '</p>'],
    'results' => $results,
    'pager' => ['#markup' => theme('pager')],
  ];
}

function drupalorg_sponsor_redirect_page($sponsor) {
  $country = drupalorg_get_and_vary_header('GeoIP-country');
  switch ($sponsor) {
    case '1and1-shared':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/drupal-hosting?ac=OM.PU.PUo63K403739T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/webhosting?ac=OM.AA.AAo63K403756T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/drupal-hosting?ac=OM.UK.UKo63K403741T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/hebergement-web?ac=OM.FR.FRo63K403742T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/alojamiento-web?ac=OM.WE.WEo63K403743T7073a');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/drupal-hosting?ac=OM.CA.CAo63K403744T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/web-hosting?ac=OM.MB.MBo63K403745T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/web-hosting?ac=OM.IA.IAo63K403746T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/drupal-hosting?ac=OM.US.USo63K403740T7073a');
          return;
      }

    case '1and1-cloud':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/cloud-app-center/drupal-download?ac=OM.PU.PUo63K403739T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/cloud-app-center/drupal-download?ac=OM.AA.AAo63K403756T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/cloud-app-centre/drupal-download?ac=OM.UK.UKo63K403741T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/cloud-app-center/drupal-download?ac=OM.FR.FRo63K403742T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/cloud-app-center/drupal-descarga?ac=OM.WE.WEo63K403743T7073a');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/cloud-app-center/drupal-download?ac=OM.CA.CAo63K403744T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/cloud-app-center/drupal-descarga?ac=OM.MB.MBo63K403745T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/cloud-app-center/drupal-download?ac=OM.IA.IAo63K403746T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/cloud-app-center/drupal-download?ac=OM.US.USo63K403740T7073a');
          return;
      }

    case '1and1-vps':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/vserver?ac=OM.PU.PUo63K403739T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/vserver?ac=OM.AA.AAo63K403756T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/virtual-server?ac=OM.UK.UKo63K403741T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/serveurs-virtuels?ac=OM.FR.FRo63K403742T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/servidores-virtuales?ac=OM.WE.WEo63K403743T7073a');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/vps-hosting?ac=OM.CA.CAo63K403744T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/servidores-virtuales?ac=OM.MB.MBo63K403745T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/server-virtuali?ac=OM.IA.IAo63K403746T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/vps-hosting?ac=OM.US.USo63K403740T7073a');
          return;
      }

    case '1and1-dedicated':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/dedicated-server-tarife?ac=OM.PU.PUo63K403739T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/dedicated-server-tarife?ac=OM.AA.AAo63K403756T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/server-dedicated-tariff?ac=OM.UK.UKo63K403741T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/server-dedicated-tariff?ac=OM.FR.FRo63K403742T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/server-dedicated-tariff?ac=OM.WE.WEo63K403743T7073');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/server-dedicated-tariff?ac=OM.CA.CAo63K403744T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/server-dedicated-tariff?ac=OM.MB.MBo63K403745T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/server-dedicated-tariff?ac=OM.IA.IAo63K403746T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/server-dedicated-tariff?ac=OM.US.USo63K403740T7073a');
          return;
      }

    case '1and1-try-drupal':
      switch ($country) {
        case 'DE':
          drupal_goto('https://hosting.1und1.de/drupal-cloud-hosting?ac=OM.PU.PUo63K404685T7073a');
          return;

        case 'AT':
          drupal_goto('https://www.1und1.at/drupal-cloud-hosting?ac=OM.AA.AAo63K404687T7073a');
          return;

        case 'GB':
          drupal_goto('https://www.1and1.co.uk/drupal-cloud-hosting?ac=OM.UK.UKo63K404688T7073a');
          return;

        case 'FR':
          drupal_goto('https://www.1and1.fr/drupal-cloud-hosting?ac=OM.FR.FRo63K404689T7073a');
          return;

        case 'ES':
          drupal_goto('https://www.1and1.es/drupal-cloud-hosting?ac=OM.WE.WEo63K404690T7073a');
          return;

        case 'CA':
          drupal_goto('https://www.1and1.ca/drupal-cloud-hosting?ac=OM.CA.CAo63K404691T7073a');
          return;

        case 'MX':
          drupal_goto('https://www.1and1.mx/drupal-cloud-hosting?ac=OM.MB.MBo63K404692T7073a');
          return;

        case 'IT':
          drupal_goto('https://www.1and1.it/drupal-cloud-hosting?ac=OM.IA.IAo63K404693T7073a');
          return;

        default:
          drupal_goto('https://www.1and1.com/drupal-cloud-hosting?ac=OM.US.USo63K404686T7073a');
          return;
      }

    case 'debug':
      return t('Country: %country', ['%country' => $country]);
  }
}
