<?php

function dashboard_defaults($uid) {
  $page = array(
    'uid' => $uid,
    'path' => 'foo',
    'weight' => 0,
    'title' => 'Dashboard',
  );
  drupal_write_record('dashboard_page', $page);

  $gadgets = array(
    array(
      'page_id' => $page['page_id'],
      'module' => 'dashboard',
      'name' => 'profile',
      'col' => 0,
      'weight' => 0,
    ),
    array(
      'page_id' => $page['page_id'],
      'module' => 'drupalorg_news',
      'name' => 'news',
      'col' => 0,
      'weight' => 1,
    ),
    array(
      'page_id' => $page['page_id'],
      'module' => 'dashboard',
      'name' => 'example',
      'col' => 1,
      'weight' => 0,
    ),
    array(
      'page_id' => $page['page_id'],
      'module' => 'dashboard',
      'name' => 'example',
      'col' => 2,
      'weight' => 0,
    ),
  );

  foreach ($gadgets as $gadget) {
    drupal_write_record('dashboard_gadget', $gadget);
  }
}
