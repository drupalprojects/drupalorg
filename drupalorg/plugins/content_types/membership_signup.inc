<?php

$plugin = [
  'title' => t('Membership signup'),
  'single' => TRUE,
  'category' => t('Drupal.org'),
  'defaults' => [
    'membership_type' => 'membership-individual',
  ],
];

function drupalorg_membership_signup_content_type_edit_form($form, &$form_state) {
  $form['membership_type'] = [
    '#type' => 'radios',
    '#options' => [
      'membership-individual' => t('Individual membership'),
      'membership-organization' => t('Organization membership'),
      'donation' => t('Donation'),
    ],
  ];

  // Copy in default values.
  foreach ($form_state['plugin']['defaults'] as $key => $value) {
    $form[$key]['#default_value'] = $form_state['conf'][$key] ?: $value;
  }

  return $form;
}

function drupalorg_membership_signup_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything with a default to conf.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

function drupalorg_membership_signup_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  // Check for existing memberships.
  if (strpos($conf['membership_type'], 'membership-') === 0) {
    $membership_type = explode('-', $conf['membership_type'])[1];
    foreach (_drupalorg_get_chargify_subscriptions($GLOBALS['user']) as $subscription) {
      if (strpos($subscription->product_handle, $membership_type) === 0) {
        switch ($subscription->state) {
          case 'active':
            drupal_set_message(t('You already have a membership, thanks!') . ' ' . l(t('Manage & renew your membership'), 'user/' . $GLOBALS['user']->uid . '/membership'));
            return $block;

          default:
            drupal_set_message(t('Your membership has expired!') . ' ' . l(t('Manage & renew your membership'), 'user/' . $GLOBALS['user']->uid . '/membership'), 'warning');
            return $block;
        }
      }
    }
  }

  $block->content = drupal_get_form('drupalorg_membership_signup_content_type_render_form', $conf);
  return $block;
}

function drupalorg_membership_signup_content_type_render_form($form, &$form_state, $conf) {
  $chargify_products = variable_get('drupalorg_chargify_products');
  $form = [];

  $form['currency'] = [
    '#type' => 'radios',
    '#title' => t('Currency'),
    '#title_display' => 'invisible',
    '#required' => TRUE,
    '#attributes' => ['class' => ['container-inline']],
    'usd' => [
      '#suffix' => t('or'),
      '#attributes' => ['class' => ['element-invisible', 'toggle-button']],
    ],
    'eur' => [
      '#attributes' => ['class' => ['element-invisible', 'toggle-button']],
    ],
  ];
  if ($conf['membership_type'] === 'donation') {
    $form['currency']['#options'] = [
      'usd' => t('Donate in U.S. Dollars'),
      'eur' => t('Donate in Euro'),
    ];
    $form['amount_usd'] = [
      '#type' => 'textfield',
      '#title' => t('Donation'),
      '#field_prefix' => '$',
      '#size' => 5,
      '#states' => [
        'visible' => [
          ':input[name="currency"]' => ['value' => 'usd'],
        ],
      ],
    ];
    $form['amount_eur'] = [
      '#type' => 'textfield',
      '#title' => t('Donation'),
      '#field_prefix' => '€',
      '#size' => 5,
      '#states' => [
        'visible' => [
          ':input[name="currency"]' => ['value' => 'eur'],
        ],
      ],
    ];
    $form['recur'] = [
      '#type' => 'value',
      '#value' => 'single',
    ];
  }
  else {
    $form['currency']['#options'] = [
      'usd' => t('Join with U.S. Dollars'),
      'eur' => t('Join with Euro'),
    ];
    $form['amount_usd'] = [
      '#type' => 'radios',
      '#title' => t('Membership gift level'),
      '#title_display' => 'invisible',
      '#options' => $chargify_products[$conf['membership_type']]['usd']['options'],
      '#default_value' => $chargify_products[$conf['membership_type']]['usd']['default'],
      '#required' => TRUE,
      '#states' => [
        'visible' => [
          ':input[name="currency"]' => ['value' => 'usd'],
        ],
      ],
    ];
    $form['amount_eur'] = [
      '#type' => 'radios',
      '#title' => t('Membership gift level'),
      '#title_display' => 'invisible',
      '#options' => $chargify_products[$conf['membership_type']]['eur']['options'],
      '#default_value' => $chargify_products[$conf['membership_type']]['eur']['default'],
      '#required' => TRUE,
      '#states' => [
        'visible' => [
          ':input[name="currency"]' => ['value' => 'eur'],
        ],
      ],
    ];
    $form['recur'] = [
      '#type' => 'checkbox',
      '#title' => t('Renew my membership automatically every year'),
      '#default_value' => TRUE,
      '#return_value' => 'recur',
      '#states' => [
        'visible' => [
          ':input[name="currency"]' => [
            ['value' => 'usd'],
            ['value' => 'eur'],
          ],
        ],
      ],
    ];
    if ($conf['membership_type'] === 'membership-organization') {
      $form['organization'] = [
        '#type' => 'radios',
        '#title' => t('Organization'),
        '#options' => _drupalorg_organization_options(),
        '#description' => t('Add your current organization to your <a href="/user">user profile</a> for membership badge and directory listing. If you don’t have an <a href="/organizations">organization page</a> yet, you can add it later.'),
        '#states' => [
          'visible' => [
            ':input[name="currency"]' => [
              ['value' => 'usd'],
              ['value' => 'eur'],
            ],
          ],
        ],
      ];
      $form['organization']['#options'][0] = t('Name my organization on the next page');
      $form['organization']['#default_value'] = array_keys($form['organization']['#options'])[0];
    }
  }

  if (user_is_anonymous()) {
    $form['login'] = [
      '#markup' => l(t('Log in or register to support us'), 'user', [
        'attributes' => ['class' => 'action-button'],
        'query' => drupal_get_destination(),
      ]),
    ];
    return $form;
  }

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Continue'),
    '#states' => [
      'visible' => [
        ':input[name="currency"]' => [
          ['value' => 'usd'],
          ['value' => 'eur'],
        ],
      ],
    ],
  ];

  return $form;
}

function drupalorg_membership_signup_content_type_render_form_validate($form, &$form_state) {
  if (!empty($form_state['values']['currency']) && $form_state['build_info']['args'][0]['membership_type'] === 'donation') {
    $field_name = 'amount_' . $form_state['values']['currency'];
    if (!is_numeric($form_state['values'][$field_name]) || $form_state['values'][$field_name] <= 0) {
      form_set_error($field_name, t('Amount must be a number greater than zero.'));
    }
  }
}

function drupalorg_membership_signup_content_type_render_form_submit($form, &$form_state) {
  $user_wrapper = entity_metadata_wrapper('user', $GLOBALS['user']);
  $query = [
    'reference' => $GLOBALS['user']->uid,
    'email' => $GLOBALS['user']->mail,
    'first_name' => $user_wrapper->field_first_name->value(),
    'last_name' => $user_wrapper->field_last_name->value(),
    'components[448894][allocated_quantity]' => $form_state['values']['amount_' . $form_state['values']['currency']],
  ];
  if ($form_state['build_info']['args'][0]['membership_type'] === 'donation') {
    $query['reference'] .= '-' . REQUEST_TIME;
  }
  elseif ($form_state['build_info']['args'][0]['membership_type'] === 'membership-organization') {
    if (empty($form_state['values']['organization'])) {
      $query['reference'] .= '-new-' . REQUEST_TIME;
    }
    else {
      $query['reference'] .= '-' . $form_state['values']['organization'];
      $query['organization'] = $form['organization']['#options'][$form_state['values']['organization']];
    }
  }
  $form_state['redirect'] = [
    variable_get('drupalorg_chargify_products')[$form_state['build_info']['args'][0]['membership_type']][$form_state['values']['currency']][$form_state['values']['recur'] ?: 'single'],
    [
      'external' => TRUE,
      'query' => $query,
    ],
  ];
}
