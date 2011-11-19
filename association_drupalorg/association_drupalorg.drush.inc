<?php

/**
 * @file
 * Drush commands for Association site.
 */

/**
 * Implementation of hook_drush_command().
 */
function association_drupalorg_drush_command() {
  return array(
    'user-data-clean' => array(
      'callback' => 'association_drupalorg_drush_user_data_cleaner',
      'description' => 'Clean out the users.data column of profile fields.',
    ),
    'fulfillment-mail' => array(
      'description' => 'Email fulfillment CSV.',
      'arguments' => array(
        'addresses' => 'Commma-separated list of email addresses.',
      ),
    ),
  );
}

/**
 * Implementation of hook_drush_help().
 */
function association_drupalorg_drush_help($section) {
  switch ($section) {
    case 'drush:user-data-clean':
      return dt('Cleans out the users.data field. This loops over all users, loads the row, modifies, updates it back. Could take a while.');

    case 'error:ASSOCIATION_DRUPALORG_ARG_MISSING':
      return t('Missing argument.');
  }
}

/**
 * Callback for drush command.
 * Removes profile fields from users.data
 */
function association_drupalorg_drush_user_data_cleaner() {
  $max = db_result(db_query("SELECT max(uid) from {users}"));
  for ($i = 1; $i < ($max + 3); $i++) {
    $account = db_fetch_object(db_query("SELECT * FROM {users} WHERE uid = %d", $i));
    if ($account && $account->status == 1) {
      $data = unserialize($account->data);
      unset($data['profile_current_company_organization']);
      unset($data['profile_full_name']);
      unset($data['profile_job']);
      unset($data['profile_role_with_drupal']);
      unset($data['country']);
      unset($data['profile_irc_nick']);
      db_query("UPDATE {users} SET data = '%s' WHERE uid = %d", serialize($data), $i);
    }
  }
}

function drush_association_drupalorg_fulfillment_mail($addresses = '') {
  module_load_include('inc', 'uc_usps', 'uc_usps.countries');

  if (empty($addresses)) {
    drush_set_error('ASSOCIATION_DRUPALORG_ARG_MISSING');
    return;
  }

  $fp = fopen('php://temp', 'w');
  fputcsv($fp, array(
    'Customer ID',
    'Order #',
    'Billing Name',
    'Billing Address 1',
    'Billing Address 2',
    'Billing City',
    'Billing State',
    'Billing Zip',
    'Billing Country',
    'Order Date',
    'Shipping Name',
    'Shipping Address 1',
    'Shipping Address 2',
    'Shipping City',
    'Shipping State',
    'Shipping Zip',
    'Shipping Country',
    'Ship Method',
    'Email',
    'item1', 'qty1', 'price1',
    'item2', 'qty2', 'price2',
    'item3', 'qty3', 'price3',
    'item4', 'qty4', 'price4',
    'item5', 'qty5', 'price5',
    'item6', 'qty6', 'price6',
    'item7', 'qty7', 'price7',
    'item8', 'qty8', 'price8',
    'item9', 'qty9', 'price9',
    'item10', 'qty10', 'price10',
    'item11', 'qty11', 'price11',
    'item12', 'qty12', 'price12',
    'item13', 'qty13', 'price13',
    'item14', 'qty14', 'price14',
    'item15', 'qty15', 'price15',
    'item16', 'qty16', 'price16',
    'item17', 'qty17', 'price17',
    'item18', 'qty18', 'price18',
    'item19', 'qty19', 'price19',
    'item20', 'qty20', 'price20',
    'item21', 'qty21', 'price21',
    'item22', 'qty22', 'price22',
    'item23', 'qty23', 'price23',
    'item24', 'qty24', 'price24',
    'item25', 'qty25', 'price25',
  ));

  $send = FALSE;
  $result = db_query("SELECT DISTINCT o.order_id FROM {uc_orders} o INNER JOIN {uc_order_products} op ON op.order_id = o.order_id INNER JOIN {uc_products} p ON p.nid = op.nid AND p.shippable = 1 WHERE o.order_status IN ('completed', 'payment_received')");
  while ($order_id = db_result($result)) {
    $send = TRUE;
    $order = uc_order_load($order_id);
    $line = array(
      197,
      $order->order_id,
      $order->billing_first_name . ' ' . $order->billing_last_name . ' ' . $order->billing_company,
      $order->billing_street1,
      $order->billing_street2,
      $order->billing_city,
      uc_zone_get_by_id($order->billing_zone),
      $order->billing_postal_code,
      uc_country_get_by_id($order->billing_country),
      date('Y-m-d', $order->created),
      $order->delivery_first_name . ' ' . $order->delivery_last_name . ' ' . $order->delivery_company,
      $order->delivery_street1,
      $order->delivery_street2,
      $order->delivery_city,
      uc_zone_get_by_id($order->delivery_zone),
      $order->delivery_postal_code,
      uc_usps_country_map($order->delivery_country),
      '',
      $order->primary_email,
    );
    foreach ($order->products as $product) {
      if ($product->data['shippable']) {
        $line[] = $product->model;
        $line[] = $product->qty;
        $line[] = $product->cost;
      }
    }
    fputcsv($fp, $line);
    uc_order_update_status($order->order_id, 'fulfillment');
  }

  if ($send) {
    $boundary = md5('boundary');
    $message = drupal_mail('association_drupalorg', 'fulfillment', $addresses, language_default(), array(), NULL, FALSE);
    $message['subject'] = t('Drupal Association fulfillment for @date', array('@date' => date('Y-m-d')), $message['language']->language);
    $message['headers']['Content-Type'] = 'multipart/mixed; boundary=' . $boundary;
    $message['body'] = '--' . $boundary . "\n";
    $message['body'] .= 'Content-Type: ' . mime_header_encode('text/plain; charset=UTF-8') . "\n\n";
    $message['body'] .= t('See attached.', array(), $message['language']->language) . "\n\n";
    $message['body'] .= '--' . $boundary . "\n";
    $message['body'] .= 'Content-Type: ' . mime_header_encode('text/csv; charset=UTF-8') . "\n";
    $message['body'] .= 'Content-Disposition: ' . mime_header_encode('attachment; filename="orders.csv"') . "\n\n";
    $message['body'] .= stream_get_contents($fp, -1, 0);
    drupal_mail_send($message);
  }
  fclose($fp);
}
