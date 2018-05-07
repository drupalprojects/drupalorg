<?php

/**
 * Implements hook_token_info();
 */
function drupalorg_token_info() {
  return [
    'tokens' => [
      'node' => [
        'drupalorg-top-guide' => [
          'name' => t('Top-level guide'),
          'description' => t('Top-level parent of a documentation guide or page.'),
          'type' => 'node',
        ],
        'drupalorg-sa-id' => [
          'name' => t('Security advisory ID'),
          'description' => t('Such as “SA-CONTRIB-2017-077” or “SA-CORE-2014-005”'),
          'type' => 'node',
        ],
      ],
      'user' => [
        'drupalorg-org-member-join-date' => [
          'name' => t('Organization member join date'),
          'description' => t('Drupal Association Organization member join date.'),
          'type' => 'date',
        ],
        'drupalorg-org-member-expiration-date' => [
          'name' => t('Organization member expiration date'),
          'description' => t('Drupal Association Organization member expiration date.'),
          'type' => 'date',
        ],
        'drupalorg-last-gift-amount' => [
          'name' => t('Last gift amount'),
          'description' => t('Drupal Association last donation or membership fee.'),
          'type' => 'integer',
        ],
      ],
    ],
  ];
}

/**
 * Implements hook_token_info_alter().
 */
function drupalorg_token_info_alter(&$data) {
  // Allow date-ish fields to be rendered as dates.
  $data['tokens']['user']['field-da-join-date']['type'] = 'date';
  $data['tokens']['user']['field-da-expiration-date']['type'] = 'date';
}

/**
 * Implements hook_tokens().
 */
function drupalorg_tokens($type, $tokens, array $data = [], array $options = []) {
  $replacements = [];

  switch ($type) {
    case 'node':
      if (isset($data['node'])) {
        $node_wrapper = entity_metadata_wrapper('node', $data['node']);
        if ($replace_tokens = token_find_with_prefix($tokens, 'drupalorg-top-guide')) {
          while ($node_wrapper->og_group_ref_documentation->getIdentifier()) {
            $node_wrapper = $node_wrapper->og_group_ref_documentation;
          }
          $replacements += token_generate('node', $replace_tokens, ['node' => $node_wrapper->value()]);
        }
        elseif ($data['node']->type === 'sa' && isset($tokens['drupalorg-sa-id'])) {
          if ($node_wrapper->field_project->raw() == 807766) {
            // “securitydrupalorg” project for PSAs.
            $replacements[$tokens['drupalorg-sa-id']] = 'PSA-' . format_date($data['node']->created, 'custom', 'Y') . '-' . $node_wrapper->field_sa_advisory_id->value();
          }
          else {
            $replacements[$tokens['drupalorg-sa-id']] = 'SA-' . ($node_wrapper->field_project->type === 'project_core' ? 'CORE' : 'CONTRIB') . '-' . format_date($data['node']->created, 'custom', 'Y') . '-' . $node_wrapper->field_sa_advisory_id->value();
          }
        }
      }
      break;

    case 'user':
      if (isset($data['user'])) {
        // Organization join & expiration date.
        $replace_tokens_join = token_find_with_prefix($tokens, 'drupalorg-org-member-join-date');
        $replace_tokens_expiration = token_find_with_prefix($tokens, 'drupalorg-org-member-expiration-date');
        if ($replace_tokens_join || $replace_tokens_expiration) {
          foreach (_drupalorg_get_chargify_subscriptions($data['user']) as $subscription) {
            if (strpos($subscription->product_handle, 'organization') === 0) {
              $replacements += token_generate('date', $replace_tokens_join, ['date' => $subscription->created_at]);
              $replacements += token_generate('date', $replace_tokens_expiration, ['date' => $subscription->current_period_ends_at ?: $subscription->expires_at]);
              break;
            }
          }
        }

        // Last gift amount.
        if (isset($tokens['drupalorg-last-gift-amount'])) {
          $last = 0;
          foreach (_drupalorg_get_chargify_subscriptions($data['user']) as $subscription) {
            if ($last === ($last = max($last, $subscription->created_at))) {
              $last_amount = _format_chargify_money($subscription);
            }
          }
          if (isset($last_amount)) {
            $replacements[$tokens['drupalorg-last-gift-amount']] = $last_amount;
          }
        }
      }
      break;
  }

  return $replacements;
}
