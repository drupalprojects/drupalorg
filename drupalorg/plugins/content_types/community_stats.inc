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
    <div class="users"><strong>@number_of_confirmed_accounts users</strong><br>actively contributing</div>
  </div>
  <div class="column-content-region">
    <div class="commits"><strong>@number_of_git_commits commits</strong><br>in the last week</div>
  </div>
  <div class="column-content-region">
    <div class="comments"><strong>@number_of_issue_comments comments</strong><br>in the last week</div>
  </div>', [
    '@number_of_confirmed_accounts' => $activity['number_of_confirmed_accounts'],
    '@number_of_git_commits' => $activity['number_of_git_commits'],
    '@number_of_issue_comments' => $activity['number_of_issue_comments'],
  ]);

  return $block;
}
