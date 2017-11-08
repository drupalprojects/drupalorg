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
    '#options' => [
      'usd' => t('Donate in U.S. Dollars'),
      'eur' => t('Donate in Euro'),
    ],
    '#required' => TRUE,
  ];
  if ($conf['membership_type'] === 'donation') {
    $form['amount'] = [
      '#type' => 'textfield',
      '#title' => t('Donation'),
      '#size' => 5,
    ];
    $form['recur'] = [
      '#type' => 'value',
      '#value' => 'single',
    ];
  }
  else {
    $form['amount'] = [
      '#type' => 'radios',
      '#title' => t('Membership level'),
      '#title_display' => 'invisible',
      '#options' => $chargify_products[$conf['membership_type']]['usd']['options'],
      '#default_value' => 35,
      '#required' => TRUE,
    ];
    $form['recur'] = [
      '#type' => 'checkbox',
      '#title' => t('Renew my membership automatically every year'),
      '#default_value' => 'single',
      '#return_value' => 'recur',
    ];
  }

  if (user_is_anonymous()) {
    // todo prompt for login
    return $form;
  }
  // todo already a member or previously a member

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Continue'),
  ];

  return $form;
}

function drupalorg_membership_signup_content_type_render_form_validate($form, &$form_state) {
  if (!is_numeric($form_state['values']['amount']) || $form_state['values']['amount'] <= 0) {
    form_set_error('amount', t('Amount must be a number greater than zero.'));
  }
}

function drupalorg_membership_signup_content_type_render_form_submit($form, &$form_state) {
  $user_wrapper = entity_metadata_wrapper('user', $GLOBALS['user']);
  $reference = $GLOBALS['user']->uid;
  if ($form_state['build_info']['args'][0]['membership_type'] === 'donation') {
    $reference .= '-' . REQUEST_TIME;
  }
  $form_state['redirect'] = [
    variable_get('drupalorg_chargify_products')[$form_state['build_info']['args'][0]['membership_type']][$form_state['values']['currency']][$form_state['values']['recur'] ?: 'single'],
    [
      'external' => TRUE,
      'query' => [
        'reference' => $reference,
        'email' => $GLOBALS['user']->mail,
        'first_name' => $user_wrapper->field_first_name->value(),
        'last_name' => $user_wrapper->field_last_name->value(),
        'components[448894][allocated_quantity]' => $form_state['values']['amount'],
      ],
    ],
  ];
}
