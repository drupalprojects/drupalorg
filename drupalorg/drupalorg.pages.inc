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
  if (isset($_GET['page']) && ctype_digit($_GET['page'])) {
    $params['start'] = $_GET['page'] * $params['rows'];
  }

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

/**
 * Page callback, shortcut to get to issue pages.
 */
function drupalorg_issue_redirect_page($nid) {
  drupal_goto('node/'. $nid);
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

/**
 * Page callback, current user becomes maintainer of a guide.
 */
function drupalorg_maintain_guide($node) {
  // Make current user the author, OG auotmatically adds maintainership.
  $node->uid = $GLOBALS['user']->uid;
  node_save($node);

  // Remove System Message placeholder maintainer.
  og_get_membership('node', $node->nid, 'user', 180064)->delete();

  drupal_set_message(t('You now maintain this guide! <a href="!url">Learn about maintaining documentation</a>', ['!url' => url('drupalorg/docs/content/documentation', ['fragment' => 'maintain'])]));

  drupal_goto('node/' . $node->nid);
}

/**
 * Membership summary & update form.
 */
function drupalorg_membership_form($form, &$form_state, stdClass $account) {
  $chargify_keys = variable_get('drupalorg_chargify_keys');
  $chargify_products = variable_get('drupalorg_chargify_products');

  $form['individual'] = [
    '#prefix' => '<h2>' . t('Individual membership') . '</h2>',
    '#markup' => '<p>' . l(t('Learn about membership and join today'), 'association/individual-membership') . '</p>',
  ];
  $form['organization'] = [
    '#prefix' => '<h2>' . t('Organization membership') . '</h2>',
    '#markup' => '<p>' . t('Responsible for an organization?') . ' ' . l(t('Learn about supporting the Drupal Association'), 'association/organization-membership') . '</p>',
  ];
  $form['donations'] = [
    '#prefix' => '<h2>' . t('Donations') . '</h2><p>' . t('Donations help keep the Drupal Association running.') . '</p>',
    'table' => [
      '#theme' => 'table',
      '#sticky' => FALSE,
    ],
    '#suffix' => '<p>' . l(t('Donate'), 'association/donate', ['attributes' => ['class' => 'action-button']]) . '</p>',
  ];
  $form['questions'] = [
    '#prefix' => '<h2>' . t('Have questions?') . '</h2>',
    '#markup' => '<ul>'
      . '<li>' . l(t('Membership frequently asked questions'), 'association/faq', ['fragment' => 'aboutmembership']) . '</li>'
      . '<li>' . l(t('Association frequently asked questions'), 'association/faq') . '</li>'
      . '<li>' . l(t('Contact us'), 'contact') . '</li>'
      . '</ul>',
  ];

  foreach (_drupalorg_get_chargify_subscriptions($account) as $row) {
    if ($row->product_handle === 'donation') {
      $form['donations']['table']['#caption'] = t('<strong>Your past donations</strong>');
      $form['donations']['table']['#suffix'] = '<p>' . t('Thank you! 🎉') . '</p>';
      $form['donations']['table']['#rows'][] = [
        format_date($row->created_at, 'custom', 'j F Y'),
        [
          'data' => _format_chargify_money($row),
          'class' => ['numeric'],
        ],
      ];
    }
    else {
      $base_product_handle = preg_replace('/-recur$/', '', $row->product_handle);
      unset($form[$base_product_handle]['#markup']);
      $form[$base_product_handle][$row->subscription_id] = [
        '#tree' => TRUE,
        'subscription' => ['#type' => 'value', '#value' => $row],
        '#prefix' => '<p><strong>' . format_date($row->created_at, 'custom', 'j F Y') . ' — ' . format_date($row->current_period_ends_at ?: $row->expires_at, 'custom', 'j F Y') . '</strong></p>',
        'thanks' => [
          '#access' => $row->state === 'active',
          '#markup' => '<p>' . t('🎉 Thank you for your membership! <a href="!url">Get the most out of your membership</a>', ['!url' => url('association/membership/thanks')]) . '</p>',
        ],
        'update_organization' => [],
        'organization' => [],
        'update_amount' => [
          '#type' => 'checkbox',
          '#title' => t('Update membership gift level'),
          '#attributes' => ['class' => ['toggle', 'element-invisible']],
        ],
        'amount' => [
          '#type' => 'fieldset',
          '#states' => [
            'visible' => [
              ':input[name="' . $row->subscription_id . '[update_amount]"]' => ['checked' => TRUE],
            ],
          ],
          'level' => [
            '#type' => 'radios',
            '#options' => $chargify_products['membership-' . $base_product_handle][$row->currency]['options'],
            '#default_value' => $row->current_billing_amount_in_cents / 100 - $chargify_products['membership-' . $base_product_handle][$row->currency]['minimum'],
          ],
          'submit' => [
            '#type' => 'submit',
            '#value' => t('Update membership gift level'),
            '#submit' => ['drupalorg_membership_form_submit_amount'],
            '#element_validate' => ['drupalorg_membership_form_validate_current_user'],
          ],
        ],
        'recurring' => [],
        'update_billing' => [
          '#prefix' => '<p>' . t('Billed to @first_name @last_name@organization<br>@email', [
            '@first_name' => $row->customer_first_name,
            '@last_name' => $row->customer_last_name,
            '@organization' => !empty($row->customer_organization) ? ', ' . $row->customer_organization : '',
            '@email' => $row->customer_email,
          ]) . '</p>',
          '#type' => 'checkbox',
          '#title' => t('Update billing name, organization, or email'),
          '#attributes' => ['class' => ['toggle', 'element-invisible']],
        ],
        'billing' => [
          '#type' => 'fieldset',
          '#states' => [
            'visible' => [
              ':input[name="' . $row->subscription_id . '[update_billing]"]' => ['checked' => TRUE],
            ],
          ],
          'customer_id' => [
            '#type' => 'value',
            '#value' => $row->customer_id,
          ],
          'first_name' => [
            '#type' => 'textfield',
            '#title' => t('First name'),
            '#default_value' => $row->customer_first_name,
            '#required' => TRUE,
          ],
          'last_name' => [
            '#type' => 'textfield',
            '#title' => t('Last name'),
            '#default_value' => $row->customer_last_name,
            '#required' => TRUE,
          ],
          'organization' => [
            '#type' => 'textfield',
            '#title' => t('Organization'),
            '#default_value' => $row->customer_organization,
          ],
          'email' => [
            '#type' => 'textfield',
            '#title' => t('Email'),
            '#default_value' => $row->customer_email,
            '#required' => TRUE,
          ],
          'submit' => [
            '#type' => 'submit',
            '#value' => t('Save'),
            '#submit' => ['drupalorg_membership_form_submit_billing'],
          ],
        ],
      ];
      $form[$base_product_handle][$row->subscription_id]['update_amount']['#prefix'] = '<p>' . t('On renewal you’ll be charged <strong>@amount</strong>', ['@amount' => _format_chargify_money($row)]) . '<br>';
      if ($GLOBALS['user']->uid === $account->uid) {
        // Only allow the member themselves to do certain actions.
        $form[$base_product_handle][$row->subscription_id]['update_amount']['#prefix'] .= l(t('View & update credit card'), 'https://' . $chargify_keys[$row->currency]['subdomain'] . '.chargifypay.com/update_payment/' . $row->subscription_id . '/' . substr(sha1('update_payment--' . $row->subscription_id . '--' . $chargify_keys[$row->currency]['shared_key']), 0, 10), ['external' => TRUE, 'attributes' => ['target' => '_blank']]);
      }
      else {
        // Disable some actions for admins.
        $form[$base_product_handle][$row->subscription_id]['update_amount']['#prefix'] .= '<em>' . t('View & update credit card [must be done by member]') . '</em>';
      }
      $form[$base_product_handle][$row->subscription_id]['update_amount']['#prefix'] .= '</p>';
      if ($base_product_handle === 'organization') {
        $form[$base_product_handle][$row->subscription_id]['update_organization'] = [
          '#type' => 'checkbox',
          '#title' => t('Change organization'),
          '#attributes' => ['class' => ['toggle', 'element-invisible']],
        ];
        if (empty($row->organization_nid)) {
          $form[$base_product_handle][$row->subscription_id]['update_organization']['#prefix'] = '<p>' . t('You do not have an organization page associated with your membership yet.') . '</p>';
        }
        else {
          $organization = node_load($row->organization_nid);
          $form[$base_product_handle][$row->subscription_id]['update_organization']['#prefix'] = '<p>' . t('For organization !link', ['!link' => l($organization->title, 'node/' . $organization->nid)]) . '</p>';
        }
        $form[$base_product_handle][$row->subscription_id]['organization'] = [
          '#type' => 'fieldset',
          '#states' => [
            'visible' => [
              ':input[name="' . $row->subscription_id . '[update_organization]"]' => ['checked' => TRUE],
            ],
          ],
        ];
        if ($options = _drupalorg_organization_options()) {
          $form[$base_product_handle][$row->subscription_id]['organization']['organization'] = [
            '#type' => 'radios',
            '#title' => t('Organization'),
            '#title_display' => 'invisible',
            '#options' => $options,
            '#default_value' => $row->organization_nid,
            '#description' => t('Don’t see your organization? <a href="!edit">Add it to your user profile</a> and make sure the name exactly matches an <a href="!organizations">organization page</a>', ['!edit' => url('user/' . $GLOBALS['user']->uid . '/edit', ['fragment' => 'field-organizations-values']), '!organizations' => url('organizations')]),
          ];
          $form[$base_product_handle][$row->subscription_id]['organization']['set_organization'] = [
            '#type' => 'submit',
            '#value' => t('Update organization'),
            '#submit' => ['drupalorg_membership_form_submit_organization'],
          ];
        }
        else {
          $form[$base_product_handle][$row->subscription_id]['organization']['organization'] = [
            '#markup' => t('Please <a href="!edit">add your organization to your user profile</a> and make sure the name exactly matches an <a href="!organizations">organization page</a>', ['!edit' => url('user/' . $GLOBALS['user']->uid . '/edit', ['fragment' => 'field-organizations-values']), '!organizations' => url('organizations')]),
          ];
        }
      }
      if (in_array($row->state, ['canceled', 'expired'])) {
        // Membership expired.
        $form[$base_product_handle][$row->subscription_id]['recurring'] = [
          '#prefix' => '<div class="note-warning"><p>' . t('<strong>Oh no!</strong> Your membership expired!') . '</p>',
          'reactivate' => [
            '#type' => 'submit',
            '#value' => t('Reactivate now'),
            '#suffix' => t('Your card will be charged @amount', ['@amount' => _format_chargify_money($row)]),
            '#submit' => ['drupalorg_membership_form_submit_reactivate'],
            '#element_validate' => ['drupalorg_membership_form_validate_current_user'],
          ],
          '#suffix' => '</div>',
        ];
      }
      else if (preg_match('/-recur$/', $row->product_handle)) {
        // Membership is recurring.
        $form[$base_product_handle][$row->subscription_id]['recurring'] = [
          '#prefix' => '<p>' . t('Your membership is auto-renewing, thanks! You’ll be billed on @date', ['@date' => format_date($row->current_period_ends_at, 'custom', 'j F Y')]) . '</p>',
          'recur_stop' => [
            '#type' => 'checkbox',
            '#title' => t('I don’t want my membership to auto-renew'),
            '#attributes' => ['class' => ['toggle', 'element-invisible']],
          ],
          'confirm' => [
            '#type' => 'fieldset',
            '#states' => [
              'visible' => [
                ':input[name="' . $row->subscription_id . '[recurring][recur_stop]"]' => ['checked' => TRUE],
              ],
            ],
            'recur' => [
              '#type' => 'submit',
              '#prefix' => t('Are you sure?') . ' ',
              '#value' => t('Cancel auto-renewal'),
              '#submit' => ['drupalorg_membership_form_submit_switch'],
              '#product_handle' => $base_product_handle,
            ],
          ],
        ];
      }
      else {
        // Membership is non-recurring.
        if ($row->expires_at > $row->current_period_ends_at) {
          $form[$base_product_handle][$row->subscription_id]['recurring'] = [
            '#prefix' => '<p>' . t('Renewal for 1 year will be charged on @date', ['@date' => format_date($row->current_period_ends_at, 'custom', 'j F Y')]) . '</p>',
          ];
        }
        else {
          $form[$base_product_handle][$row->subscription_id]['recurring'] = [
            '#prefix' => '<p>' . t('Your membership is <em>not auto-renewing</em>') . '</p>',
            'renew' => [
              '#prefix' => '<p>',
              '#type' => 'submit',
              '#value' => t('Renew for 1 more year'),
              '#suffix' => t('Your card will be billed on @date', ['@date' => format_date($row->current_period_ends_at, 'custom', 'j F Y')]) . '</p>',
              '#submit' => ['drupalorg_membership_form_submit_extend'],
              '#element_validate' => ['drupalorg_membership_form_validate_current_user'],
            ],
          ];
        }
        $form[$base_product_handle][$row->subscription_id]['recurring']['recur'] = [
          '#prefix' => '<p>',
          '#type' => 'submit',
          '#value' => t('Switch to automatic renewal'),
          '#submit' => ['drupalorg_membership_form_submit_switch'],
          '#element_validate' => ['drupalorg_membership_form_validate_current_user'],
          '#product_handle' => $row->product_handle . '-recur',
          '#suffix' => t('Never miss membership renewal') . '</p>',
        ];
      }
    }
  }

  return $form;
}

/**
 * Only allow the user to update their own membership.
 */
function drupalorg_membership_form_validate_current_user($element, $form_state) {
  if ($form_state['build_info']['args'][0]->uid !== $GLOBALS['user']->uid) {
    form_set_error($element['#name'], t('This can only be done by the member themselves.'));
  }
}

/**
 * Form submit callback, update contribution amount in Chargify.
 */
function drupalorg_membership_form_submit_amount($form, &$form_state) {
  $subscription_id = $form_state['clicked_button']['#parents'][0];
  $subscription = $form_state['values'][$subscription_id]['subscription'];

  if ($form_state['values'][$subscription->subscription_id]['amount']['level'] == $form[$form_state['clicked_button']['#array_parents'][0]][$subscription->subscription_id]['amount']['level']['#default_value']) {
    drupal_set_message(t('Membership not updated, that is the same membership level you already contribute at.'), 'warning');
    return;
  }

  $response = drupal_http_request(_drupalorg_chargify_base_url($subscription->currency) . 'subscriptions/' . $subscription->subscription_id . '/components/' . variable_get('drupalorg_chargify_keys')[$subscription->currency]['donation_component'] . '/allocations.json', [
    'method' => 'POST',
    'headers' => ['content-type' => 'application/json'],
    'data' => json_encode(['allocation' => [
      'quantity' => $form_state['values'][$subscription->subscription_id]['amount']['level'],
    ]]),
  ]);
  if ($response->code != 201) {
    watchdog('drupalorg_chargify', 'Failed to update amount for subscription @id', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  $data = json_decode($response->data);
  if ($data === NULL) {
    watchdog('drupalorg_chargify', 'Failed to parse update amount for subscription @id response', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  db_update('drupalorg_chargify_subscriptions')
    ->condition('currency', $subscription->currency)
    ->condition('subscription_id', $subscription_id)
    ->fields([
      'current_billing_amount_in_cents' => (variable_get('drupalorg_chargify_products')['membership-' . preg_replace('/-recur$/', '', $subscription->product_handle)][$subscription->currency]['minimum'] + $data->allocation->quantity) * 100,
    ])
    ->execute();
  drupal_set_message(t('Membership updated!'));
}

/**
 * Form submit callback, change organization.
 */
function drupalorg_membership_form_submit_organization($form, &$form_state) {
  $subscription_id = $form_state['clicked_button']['#parents'][0];
  $subscription = $form_state['values'][$subscription_id]['subscription'];

  if ($form_state['values'][$subscription->subscription_id]['organization']['organization'] == $form[$form_state['clicked_button']['#array_parents'][0]][$subscription->subscription_id]['organization']['organization']['#default_value']) {
    drupal_set_message(t('Membership not updated, that is the same organization.'), 'warning');
    return;
  }

  $organization = node_load($form_state['values'][$subscription->subscription_id]['organization']['organization']);
  $response = drupal_http_request(_drupalorg_chargify_base_url($subscription->currency) . 'customers/' . $subscription->customer_id . '.json', [
    'method' => 'PUT',
    'headers' => ['content-type' => 'application/json'],
    'data' => json_encode(['customer' => [
      'reference' => $form_state['build_info']['args'][0]->uid . '-' . $organization->nid,
      'organization' => $organization->title,
    ]]),
  ]);
  if ($response->code != 200) {
    watchdog('drupalorg_chargify', 'Failed to update customer @id', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  $data = json_decode($response->data);
  if ($data === NULL) {
    watchdog('drupalorg_chargify', 'Failed to parse update customer @id response', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  db_update('drupalorg_chargify_subscriptions')
    ->condition('currency', $subscription->currency)
    ->condition('subscription_id', $subscription_id)
    ->fields([
      'organization_nid' => $organization->nid,
      'customer_organization' => $data->customer->organization,
    ])
    ->execute();

  // Move the status in the field.
  $organization_wrapper = entity_metadata_wrapper('node', $organization);
  $organization_wrapper->field_org_membership_status = 'Current';
  node_save($organization);
  if (!empty($subscription->organization_nid)) {
    $old_organization = node_load($subscription->organization_nid);
    $old_organization_wrapper = entity_metadata_wrapper('node', $old_organization);
    $old_organization_wrapper->field_org_membership_status = 'Current';
    node_save($old_organization);
  }

  drupal_set_message(t('Membership updated!'));
}

/**
 * Form submit callback, reactivate subscription in Chargify.
 */
function drupalorg_membership_form_submit_reactivate($form, &$form_state) {
  $subscription_id = $form_state['clicked_button']['#parents'][0];
  $subscription = $form_state['values'][$subscription_id]['subscription'];
  $response = drupal_http_request(_drupalorg_chargify_base_url($subscription->currency) . 'subscriptions/' . $subscription->subscription_id . '/reactivate.json', [
    'method' => 'PUT',
  ]);
  $data = json_decode($response->data);
  if ($data === NULL) {
    watchdog('drupalorg_chargify', 'Failed to parse reactivate subscription @id response', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  if ($response->code != 200) {
    watchdog('drupalorg_chargify', 'Failed to reactivate subscription @id', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to reactivate membership: @error', ['@error' => implode(' ', $data->errors)]), 'error');
    return;
  }
  db_update('drupalorg_chargify_subscriptions')
    ->condition('currency', $subscription->currency)
    ->condition('subscription_id', $subscription_id)
    ->fields([
      'state' => $data->subscription->state,
      'current_period_ends_at' => !empty($data->subscription->current_period_ends_at) ? strtotime($data->subscription->current_period_ends_at) : NULL,
      'expires_at' => !empty($data->subscription->expires_at) ? strtotime($data->subscription->expires_at) : NULL,
    ])
    ->execute();
  drupal_set_message(t('Thanks for your membership! 🎉'));
}

/**
 * Form submit callback, save billing information to Chargify.
 */
function drupalorg_membership_form_submit_billing($form, &$form_state) {
  $subscription_id = $form_state['clicked_button']['#parents'][0];
  $subscription = $form_state['values'][$subscription_id]['subscription'];
  $response = drupal_http_request(_drupalorg_chargify_base_url($subscription->currency) . 'customers/' . $subscription->customer_id . '.json', [
    'method' => 'PUT',
    'headers' => ['content-type' => 'application/json'],
    'data' => json_encode(['customer' => array_intersect_key($form_state['values'][$subscription_id]['billing'], ['first_name' => TRUE, 'last_name' => TRUE, 'organization' => TRUE, 'email' => TRUE])]),
  ]);
  if ($response->code != 200) {
    watchdog('drupalorg_chargify', 'Failed to update customer @id', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  $data = json_decode($response->data);
  if ($data === NULL) {
    watchdog('drupalorg_chargify', 'Failed to parse update customer @id response', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  db_update('drupalorg_chargify_subscriptions')
    ->condition('currency', $subscription->currency)
    ->condition('subscription_id', $subscription_id)
    ->fields([
      'customer_first_name' => $data->customer->first_name,
      'customer_last_name' => $data->customer->last_name,
      'customer_organization' => $data->customer->organization,
      'customer_email' => $data->customer->email,
    ])
    ->execute();
  drupal_set_message(t('Thanks for keeping your billing information current!'));
}

/**
 * Form submit callback, switch product in Chargify.
 */
function drupalorg_membership_form_submit_switch($form, &$form_state) {
  $subscription_id = $form_state['clicked_button']['#parents'][0];
  $subscription = $form_state['values'][$subscription_id]['subscription'];
  $response = drupal_http_request(_drupalorg_chargify_base_url($subscription->currency) . 'subscriptions/' . $subscription->subscription_id . '.json', [
    'method' => 'PUT',
    'headers' => ['content-type' => 'application/json'],
    'data' => json_encode(['subscription' => [
      'product_handle' => $form_state['clicked_button']['#product_handle'],
    ]]),
  ]);
  if ($response->code != 200) {
    watchdog('drupalorg_chargify', 'Failed to update product for subscription @id', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  $data = json_decode($response->data);
  if ($data === NULL) {
    watchdog('drupalorg_chargify', 'Failed to parse update product for subscription @id response', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  db_update('drupalorg_chargify_subscriptions')
    ->condition('currency', $subscription->currency)
    ->condition('subscription_id', $subscription_id)
    ->fields([
      'product_handle' => $data->subscription->product->handle,
      'product_name' => $data->subscription->product->name,
      // Calculate expiration date since we are resetting it next.
      'expires_at' => preg_match('/-recur/', $data->subscription->product->handle) ? NULL : $subscription->current_period_ends_at,
    ])
    ->execute();
  // If switching to non-recurring, reset the expiration date.
  if (!preg_match('/-recur$/', $data->subscription->product->handle)) {
    drupal_http_request(_drupalorg_chargify_base_url($subscription->currency) . 'subscriptions/' . $subscription->subscription_id . '.json', [
      'method' => 'PUT',
      'headers' => ['content-type' => 'application/json'],
      'data' => json_encode(['subscription' => [
        'expires_at' => gmdate('c', $subscription->current_period_ends_at),
      ]]),
    ]);
  }
  drupal_set_message(t('Membership updated!'));
}

/**
 * Form submit callback, extend expiration date in Chargify.
 */
function drupalorg_membership_form_submit_extend($form, &$form_state) {
  $subscription_id = $form_state['clicked_button']['#parents'][0];
  $subscription = $form_state['values'][$subscription_id]['subscription'];
  $response = drupal_http_request(_drupalorg_chargify_base_url($subscription->currency) . 'subscriptions/' . $subscription->subscription_id . '.json', [
    'method' => 'PUT',
    'headers' => ['content-type' => 'application/json'],
    'data' => json_encode(['subscription' => [
      'expires_at' => (new DateTime('@' . $subscription->expires_at))->add(new DateInterval('P1Y'))->format('c'),
    ]]),
  ]);
  if ($response->code != 200) {
    watchdog('drupalorg_chargify', 'Failed to update product for subscription @id', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  $data = json_decode($response->data);
  if ($data === NULL) {
    watchdog('drupalorg_chargify', 'Failed to parse update product for subscription @id response', ['@id' => $subscription_id], WATCHDOG_ERROR);
    drupal_set_message(t('Failed to update billing backend. Please try again in a couple minutes.'), 'error');
    return;
  }
  db_update('drupalorg_chargify_subscriptions')
    ->condition('currency', $subscription->currency)
    ->condition('subscription_id', $subscription_id)
    ->fields([
      'expires_at' => strtotime($data->subscription->expires_at),
    ])
    ->execute();
  drupal_set_message(t('Membership updated!'));
}

/**
 * Menu callback, record membership and redirect to a thank-you page.
 */
function drupalorg_membership_return() {
  // Make sure input is sane.
  if (!in_array($_GET['currency'], ['usd', 'eur'])) {
    drupal_set_message(t('Something went wrong, incorrect currency.'), 'error');
    return '';
  }
  if (!ctype_digit($_GET['id'])) {
    drupal_set_message(t('Something went wrong, bad id.'), 'error');
    return '';
  }

  // Get the subscription.
  $response = drupal_http_request(url(_drupalorg_chargify_base_url($_GET['currency']) . 'subscriptions/' . $_GET['id'] . '.json'));
  if ($response->code != 200) {
    drupal_set_message(t('Failed to fetch subscription.'), 'error');
    return '';
  }
  $data = json_decode($response->data);
  if ($data === NULL) {
    drupal_set_message(t('Failed to parse subscription.'), 'error');
    return '';
  }

  // Save the subscription & redirect toward thanks.
  $subscription = _drupalorg_update_chargify_subscription($_GET['currency'], $data);
  if (is_array($subscription)) {
    // Stash subscription ID for Google Analytics for next page request, which
    // will not be a redirect and can run analytics JS.
    $_SESSION['drupalorg_chargify_subscription_added'] = $data->subscription->id;
    switch ($subscription['product_handle']) {
      case 'donation':
        drupal_goto('association/support/thanks-donation');

      default:
        drupal_goto('association/membership/thanks');
    }
  }
  else {
    // Something went wrong.
    return '';
  }
}
