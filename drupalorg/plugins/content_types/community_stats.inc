<?php

$plugin = [
  'title' => t('Community stats'),
  'single' => TRUE,
  'category' => t('Drupal.org'),
  'render callback' => 'drupalorg_community_stats_pane',
];

/**
 * Add information about becoming a guide maintainer.
 */
function drupalorg_community_stats_pane() {
  $activity = drupalorg_get_activity();
  $block = new stdClass();
  $block->content = t('<div class="column-content-region">
    <span class="users"><span class="highlight">@number_of_confirmed_accounts users</span> <span class="caption">actively contributing</span></span>
  </div>
  <div class="column-content-region">
    <span class="commits"><span class="highlight">@number_of_git_commits commits</span> <span class="caption">in the last week</span></span>
  </div>
  <div class="column-content-region">
    <span class="comments"><span class="highlight">@number_of_issue_comments comments</span> <span class="caption">in the last week</span></span>
  </div>', [
    '@number_of_confirmed_accounts' => $activity['number_of_confirmed_accounts'],
    '@number_of_git_commits' => $activity['number_of_git_commits'],
    '@number_of_issue_comments' => $activity['number_of_issue_comments'],
  ]);

  return $block;
}
