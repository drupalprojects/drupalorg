<?php

/**
 * Page callback: Handles multistep precessing.
 *
 * @return string
 *   Multistep wizard output.
 *
 * @see drupalorg_docs_migrate_menu()
 */
function drupalorg_docs_migrate_form($node, $step = NULL) {
  if ($node->type != 'book') {
    return MENU_ACCESS_DENIED;
  }
  if (!empty($step) && ($step != 'edit' && $step != 'confirm')) {
    return drupal_not_found();
  }

  global $user;

  // Define array for ctools multistep wizard.
  $form_info = array(
    'id' => 'drupalorg_docs_migrate',
    'path' => "migrate/documentation/".$node->nid."/%step",
    'show trail' => FALSE,
    'show back' => TRUE,
    'show cancel' => TRUE,
    'show return' => FALSE,
    'next callback' =>  'drupalorg_docs_migrate_wizard_next',
    'finish callback' => 'drupalorg_docs_migrate_wizard_finish',
    'cancel callback' => 'drupalorg_docs_migrate_wizard_cancel',

   // Define forms order.
    'order' => array(
      'edit' => t('Convert book node to documentation'),
      'confirm' => t('Confirmation Page'),
    ),

   // Define forms
    'forms' => array(
      'edit' => array(
        'form id' => 'drupalorg_docs_migrate_form_edit'
      ),
      'confirm' => array(
        'form id' => 'drupalorg_docs_migrate_form_confirmation'
      ),
    ),
  );

  // We're not using any real storage here, so we're going to set our
  // object_id to 1. When using wizard forms, id management turns
  // out to be one of the hardest parts. Editing an object with an id
  // is easy, but new objects don't usually have ids until somewhere
  // in creation.
  //
  // We skip all this here by just using an id of 1.
  $object_id = 1;

  if (empty($step)) {

    // We reset the form when $step is NULL because that means they have
    // for whatever reason started over.
    drupalorg_docs_migrate_cache_clear($object_id);
    $step = 'edit';
  }

  // This automatically gets defaults if there wasn't anything saved.
  $object = drupalorg_docs_migrate_cache_get($object_id);

  // live $form_state changes.
  $form_state = array(
    // Put our object and ID into the form state cache so we can easily find it.
    'object_id' => $object_id,
    'object' => &$object,

    // Add our additional details for the node migration.
    'user_uid' => $user,
    'original_node' => $node,
  );

  // Send this all off to our form. This is like drupal_get_form only wizardy.
  ctools_include('wizard');
  $form = ctools_wizard_multistep_form($form_info, $step, $form_state);
  $output = drupal_render($form);

  if ($output === FALSE || !empty($form_state['complete'])) {
    return render(drupalorg_docs_migrate_get_result($object));
  }
  elseif (!empty($form_state['cancel'])) {
    drupal_goto('node/'. $node->nid);
  }
  else {
    return $output;
  }
}

/**
 * Clears the wizard cache.
 *
 * @param integer $id
 *   cache id.
 */
function drupalorg_docs_migrate_cache_clear($id) {
  ctools_include('object-cache');
  ctools_object_cache_clear('drupalorg_docs_migrate', $id);
}

/**
 * Stores our little cache so that we can retain data from form to form.
 *
 * @param integer $id
 *   cache id.
 * @param object $object
 *   object with form values.
 */
function drupalorg_docs_migrate_cache_set($id, $object) {
  ctools_include('object-cache');
  ctools_object_cache_set('drupalorg_docs_migrate', $id, $object);
}

/**
 * Gets the current object from the cache, or default.
 *
 * @param integer $id
 *   cache id.
 *
 * @return object
 *   cache with stored stuff.
 */
function drupalorg_docs_migrate_cache_get($id) {
  ctools_include('object-cache');
  $object = ctools_object_cache_get('drupalorg_docs_migrate', $id);
  if (!$object) {
    // Create a default object.
    $object = new stdClass;
  }

  return $object;
}

/**
 * Handles the 'next' click on the add/edit pane form wizard.
 *
 * All we need to do is store the updated pane in the cache.
 */
function drupalorg_docs_migrate_wizard_next(&$form_state) {
  drupalorg_docs_migrate_cache_set($form_state['object_id'], $form_state['object']);
}

/**
 * Handles the 'finish' click on teh add/edit pane form wizard.
 *
 * All we need to do is set a flag so the return can handle adding
 * the pane.
 */
function drupalorg_docs_migrate_wizard_finish(&$form_state) {
  $form_state['complete'] = TRUE;

  module_load_include('inc', 'node', 'node.pages');
  // Build an array of node ids to migrate, with parent being last.
  $nodes = isset($form_state['object']->children) ? $form_state['object']->children : array();
  $nodes[] = $form_state['object']->nid;

  if ($form_state['values']['op'] == 'Finish') {
    $batch = array(
      'title' => t('Migrating book %title', array('%title' => $form_state['object']->title)),
      'init_message' => t('Migration is starting...'),
      'progress_message' => t('Processed @current out of @total.'),
      'operations' => array(
          array('drupalorg_docs_migrate_batch_process', array('nid' => $nodes, 'guide' => $form_state['object']->guide)
        ),
      ),
      'finished' => '_drupalorg_docs_migrate_batch_finished',
      'file' => drupal_get_path('module', 'drupalorg_docs_migrate') . '/drupalorg_docs_migrate.wizard.inc',
    );

    batch_set($batch);
    batch_process('node/' . $form_state['object']->guide);
  }
}

/**
 * Handles the 'cancel' click on the add/edit pane form wizard.
 */
function drupalorg_docs_migrate_wizard_cancel(&$form_state) {
  $form_state['cancel'] = TRUE;
}

/**
 * Generates first form.
 *
 * @ingroup forms
 */
function drupalorg_docs_migrate_form_edit($form, &$form_state) {

  // Attach the fields for this ticket registration.
  $form_state['entity_type'] = 'node';
  $form_state['node'] = $form_state['original_node'];
  $form_state['node']->type = 'documentation';
  $form['#node'] = $form_state['node'];

  // Summary is a new field for documentation. Lets auto-fill it
  //$form_state['node']->field_summary[LANGUAGE_NONE][0]['value'] = truncate_utf8(strip_tags($form_state['node']->body[LANGUAGE_NONE][0]['value']), 140, TRUE, FALSE);
  $og_widget = array();
  field_attach_form('node', $form_state['node'], $og_widget, $form_state, LANGUAGE_NONE, array('field_name' => 'og_group_ref_documentation'));

  $form['og_group_ref_documentation'] = $og_widget['og_group_ref_documentation'];

  if ($result = _get_children_nodes($form_state['node']->nid)) {
    $depth = -1;
    $children = array();
    // Loop through each and make sure there aren't any children remaining there...
    $children = _print_children_nodes($children, $result, $depth);
  }

  if (!empty($children)) {
    $form['children'] = array(
      '#type' => 'checkbox',
      '#title' => t('Migrate @number child pages', ['@number' => count($children)]),
      '#description' => t('<strong>Hierarchy will not be saved!</strong> All child pages will be on the same level with the parent page in relation to the documentation guide.'),
    );
    if (count($children) > 100) {
      drupal_set_message(t('Warning: you’re attempting to migrate over 100 children nodes, and cannot individually deselect this many children. Usually you’ll want to migrate smaller sections of documentation at a time.'), 'warning');
    }
    else {
      $form['children_nodes'] = array(
        '#type' => 'fieldset',
        '#title' => t('Specific child pages to migrate'),
        '#states' => array(
          'visible' => array(
            ':input[name="children"]' => array('checked' => TRUE),
          ),
        ),
      );
      $form['children_nodes']['migrate'] = array(
        '#type' => 'checkboxes',
        '#options' => $children,
        '#default_value' => array_keys($children),
        '#description' => t('Checked pages will be migrated. To see the page, click on the link. It will open a new window or tab.'),
      );
    }
  }

  // Change 'group audience' title to something meaningful.
  $form['og_group_ref_documentation'][LANGUAGE_NONE][0]['target_id']['#title'] = t('Documentation guide to migrate page(s) into');
  return $form;
}

function _get_children_nodes($nid) {
  // Get children nodes
  $query = db_select('node', 'n')
    ->fields('n', array('title', 'nid', 'status', 'type'));
  $query->addJoin('LEFT', 'book', 'b', 'n.nid = b.nid');
  $query->addJoin('LEFT', 'menu_links', 'ml', 'b.mlid = ml.mlid');
  $query->addJoin('LEFT', 'book', 'bp', 'ml.plid = bp.mlid');
  $query->innerJoin('node', 'nbp', 'bp.nid = nbp.nid');

  return $query->condition('nbp.nid', $nid)
    ->condition('n.status', '1')
    ->condition('n.type', array('book'), 'IN')
    ->orderBy('n.created', 'DESC')
    ->execute()
    ->fetchAll();
}

function _print_children_nodes(&$children, $result, $depth) {
  $depth++;
  foreach($result AS $record) {
    if ($result = _get_children_nodes($record->nid)) {
      $children[$record->nid] = str_repeat('-', $depth) . ' ' . l($record->title, 'node/'.$record->nid, array('attributes' => array('target' => '_blank')));
      _print_children_nodes($children, $result, $depth);
    }
    else {
      $children[$record->nid] = str_repeat('-', $depth) . ' ' . l($record->title, 'node/'.$record->nid, array('attributes' => array('target' => '_blank')));
    }
  }
  return $children;
}

/**
 * Handles submit of first form.
 */
function drupalorg_docs_migrate_form_edit_submit($form, &$form_state) {
  // Parent node to be migrated
  $form_state['object'] = $form_state['node'];

  // Guide the node is to be migrated into
  $form_state['object']->guide = $form_state['values']['og_group_ref_documentation'][LANGUAGE_NONE][0]['target_id'];

  // Children nodes to also be migrated
  if (isset($form_state['values']['children'])) {
    $form_state['object']->children = array_keys(array_filter($form_state['values']['migrate']));
  }
}

/**
 * Generates second form.
 *
 * @ingroup forms
 */
function drupalorg_docs_migrate_form_confirmation($form, &$form_state) {
  $node = $form_state['object'];

  drupal_set_title(t('You are about to migrate the book %title !children', array('%title' => $node->title, '!children' => !empty($node->children) ? 'and ' . count($node->children) . ' child pages' : '')), PASS_THROUGH);

  $guide = node_load($node->guide);
  $form['description'] = [
    '#markup' => '<p>' . t('Into !guide', ['!guide' => l($guide->title, 'node/' . $guide->nid, ['attributes' => ['target' => '_blank']])]) . '</p><p>' . t('This action cannot be undone.') . '</p>',
  ];

  return $form;
}

function drupalorg_docs_migrate_batch_process($nodes, $guide, &$context) {
  if (!isset($context['sandbox']['progress'])) {
    $context['sandbox']['max'] = count($nodes);
    $context['sandbox']['progress'] = 0;
  }

  // Process 5 nodes at a time
  $max = ($context['sandbox']['max'] <= ($context['sandbox']['progress'] + 5)) ? $context['sandbox']['max'] : $context['sandbox']['progress'] + 5;
  for ($i = $context['sandbox']['progress']; $i < $max; $i++) {
    _drupalorg_docs_migrate_node($nodes[$i], $guide);
  }

  // Update our progress information.
  $context['sandbox']['progress'] = $i;

  // Multistep processing : report progress.
  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  }
}

function _drupalorg_docs_migrate_node($nid, $group_ref) {
  $node = node_load($nid);
  $node->type = 'documentation';
  $node->language = 'en';

  // Remove the page from book schema.
  book_node_delete($node);
  $node->book = array();
  
  $node->menu = array(
    'link_title' => $node->title,
    'menu_name' => 'menu-og-'. $group_ref,
    'parent' => 'menu-og-'. $group_ref.':0',
    'plid' => 0,
    'enabled' => 1,
  );

  $node_wrapper = entity_metadata_wrapper('node', $node);

  // Summary is a new field for documentation. Lets auto-fill it
  $node_wrapper->field_summary->set(truncate_utf8(strip_tags($node->body[LANGUAGE_NONE][0]['value']), 140, TRUE, FALSE));
  $node_wrapper->save();

  // Set the group reference for the node
  $node_wrapper->og_group_ref_documentation->set(intval($group_ref));
  $node_wrapper->save();
}

/**
 * Book delete batch 'finished' callback.
 */
function _drupalorg_docs_migrate_batch_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('The book has been migrated.'));
  }
  else {
    drupal_set_message(t('An error occurred and processing did not complete.'), 'error');
    $message = format_plural(count($results), '1 item successfully migrated:', '@count items successfully migrated:');
    $message .= theme('item_list', $results);
    drupal_set_message($message);
  }
}

/**
 * Returns form results.
 *
 * @param object $object
 *   object with form values.
 *
 * @return array
 *   returns renderable array for multistep form result output.
 */
function drupalorg_docs_migrate_get_result($object) {
  $output = t('The page has been successfully migrated!');
  return $output;
}
