<?php

/**
 * Add the CSS and JS requirements for the page.
 */
function dashboard_add_ui($page = NULL) {
  jquery_ui_add(array('ui.sortable'));
  drupal_add_css(drupal_get_path('module', 'dashboard') . '/dashboard.css');
  drupal_add_js(array(
    'dashboardPage' => $page->path,
    'dashboardToken' => drupal_get_token('dashboard ' . $page->page_id),
    'dashboardPageAddForm' => drupal_get_form('dashboard_page_add_form'),
    'dashboardPageEditForm' => drupal_get_form('dashboard_page_edit_form', $page),
  ),'setting');
  drupal_add_js(drupal_get_path('module', 'dashboard') . '/dashboard.js');
}

function dashboard_page($page = NULL) {
  if (is_null($page)) {
    $page = dashboard_user_page_load('');
  }
  dashboard_add_ui($page);

  $gadgets = array_fill(0, 3, '');
  $result = db_query('SELECT gadget_id, module, name, col FROM {dashboard_gadget} WHERE page_id = %d ORDER BY weight', $page->page_id);
  while ($gadget = db_fetch_object($result)) {
    $function = $gadget->module . '_' . $gadget->name .'_dashboard_gadget';
    $info = $function($gadget->gadget_id);
    $info['gadget_id'] = $gadget->gadget_id;
    if (isset($info['link'])) {
      $info['title'] = l($info['title'], $info['link']);
    }
    else {
      $info['title'] = check_plain($info['title']);
    }

    $gadgets[$gadget->col] .= theme('dashboard_gadget', $info);
  }

  return theme('dashboard_page', $gadgets);
}

function dashboard_page_add_form($form_state) {
  $form = array(
    '#attributes' => array('class' => 'nav-tab'),
  );

  $form['title'] = array(
    '#prefix' => '<div class="container-inline">',
    '#type' => 'textfield',
    '#size' => 15,
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
    '#attributes' => array('disabled' => 'disabled'),
    '#suffix' => '</div>',
  );

  return $form;
}

function dashboard_page_add_form_submit($form, &$form_state) {
  global $user;

  // Make a sanitized & unique path.
  $pages = dashboard_user_page_load();
  $used_paths = array_keys($pages);
  $used_paths[] = $pages['']->path;

  $path = $base_path = preg_replace('/[^a-z0-9-]/', '', drupal_strtolower(str_replace(' ', '-', $form_state['values']['title'])));
  $n = 0;
  while (in_array($path, $used_paths)) {
    $n += 1;
    $path = $base_path . '-' . $n;
  }

  $page = array(
    'uid' => $user->uid,
    'path' => $path,
    'weight' => db_result(db_query("SELECT max(weight) FROM {dashboard_page} WHERE uid = %d", $user->uid)) + 1,
    'title' => $form_state['values']['title'],
  );
  drupal_write_record('dashboard_page', $page);

  $form_state['redirect'] = 'dashboard/'. $path;
}

function dashboard_page_edit_form($form_state, $page) {
  $form = array();

  $form['edit_title'] = array(
    '#prefix' => '<div class="edit container-inline">',
    '#type' => 'textfield',
    '#default_value' => $page->title,
    '#size' => 15,
    '#required' => TRUE,
  );
  $form['page_id'] = array(
    '#type' => 'value',
    '#value' => $page->page_id,
  );
  $form['edit_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#ahah' => array(
      'event' => 'click',
      'path' => 'dashboard/'. $page->path .'/rename',
    ),
    '#suffix' => '</div>',
  );
  $form['delete'] = array(
    '#prefix' => '<div class="delete container-inline">',
    '#type' => 'submit',
    '#value' => t('Deleting…'),
    '#suffix' => '<a href="#" class="cancel">' . t('Cancel') . '</a></div>',
  );

  return $form;
}

function dashboard_page_rename($page) {
  drupal_get_form('dashboard_page_edit_form', $page);
  drupal_json(array('status' => TRUE, 'data' => ''));
}

function dashboard_page_edit_form_submit($form, &$form_state) {
  global $user;

  switch ($form_state['clicked_button']['#id']) {
    case 'edit-edit-submit':
      $page = array(
        'page_id' => $form_state['values']['page_id'],
        'title' => $form_state['values']['edit_title'],
      );
      drupal_write_record('dashboard_page', $page, array('page_id'));
      break;

    case 'edit-delete':
      db_query("DELETE FROM {dashboard_page} WHERE page_id = %d", $form_state['values']['page_id']);
      db_query("DELETE FROM {dashboard_gadget} WHERE page_id = %d", $form_state['values']['page_id']);
      $form_state['redirect'] = 'dashboard';
      break;
  }
}

function dashboard_page_reorder() {
  foreach (explode(',', $_POST['pages']) as $weight => $page_id) {
    $page = array(
      'page_id' => $page_id,
      'weight' => $weight,
    );
    drupal_write_record('dashboard_page', $page, array('page_id'));
  }
}

function dashboard_gadget_reorder($page) {
  foreach (range(0, 2) as $column) {
    foreach (explode(',', $_POST['column_'. $column]) as $weight => $gadget_id) {
      $gadget = array(
        'gadget_id' => $gadget_id,
        'col' => $column,
        'weight' => $weight,
      );
      drupal_write_record('dashboard_gadget', $gadget, array('gadget_id'));
    }
  }
}
