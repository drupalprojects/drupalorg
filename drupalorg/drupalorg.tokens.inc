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
      ],
    ],
  ];
}

/**
 * Implements hook_tokens().
 */
function drupalorg_tokens($type, $tokens, array $data = [], array $options = []) {
  $replacements = [];

  if ($type === 'node' && ($replace_tokens = token_find_with_prefix($tokens, 'drupalorg-top-guide'))) {
    $node_wrapper = entity_metadata_wrapper('node', $data['node']);
    while ($node_wrapper->og_group_ref_documentation->getIdentifier()) {
      $node_wrapper = $node_wrapper->og_group_ref_documentation;
    }
    $replacements += token_generate('node', $replace_tokens, ['node' => $node_wrapper->value()]);
  }

  return $replacements;
}
