<?php

$plugin = [
  'title' => t('Documentation book navigation from OG menus'),
  'single' => TRUE,
  'category' => t('Drupal.org'),
  'render callback' => 'drupalorg_og_menu_book_navigation',
  'required context' => new ctools_context_required(t('Node'), 'node'),
];

/**
 * Creates a previous/next block for use in Panels on Documentation pages.
 *
 * The navigation assumes that the pages form a book spanning several
 * Documentation Guides, each of which has an OG Menu containing one or more
 * pages. There can be several levels of menus.
 */
function drupalorg_og_menu_book_navigation($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();

  // Extract the node from the context, and verify that we can do something
  // with it.
  if (!module_exists('og_menu')) {
    return $block;
  }
  if (!isset($context->keyword) || $context->keyword !== 'node' || !isset($context->data) || !in_array($context->data->type, ['guide', 'documentation'])) {
    return $block;
  }
  $node = $context->data;

  if (!isset($node->body['und'][0]['format']) || ($node->body['und'][0]['format'] !== 'asciidoc_import')) {
    return $block;
  }

  // Find the previous/next pages for navigation.
  // We are skipping guide pages. This could be made into a setting, and
  // then pass the value into the following two function calls.
  $previous_node = _drupalorg_og_menu_find_next($node, FALSE);
  $next_node = _drupalorg_og_menu_find_next($node, TRUE);
  if (!$previous_node && !$next_node) {
    return $block;
  }

  // Build the content and return.
  $block->content = '<div class="documentation-nav">';
  if ($next_node && node_access('view', $next_node)) {
    $block->content .= '<div class="next aside-half">' .
      '<span class="element-invisible">' . t('Next') . '</span> ' .
      l('→ ' . $next_node->title, 'node/' . $next_node->nid) . '</div>';
  }

  if ($previous_node && node_access('view', $previous_node)) {
    $block->content .= '<div class="previous">' .
      '<span class="element-invisible">' . t('Previous') . '</span> ' .
      l('← ' . $previous_node->title, 'node/' . $previous_node->nid) . '</div>';
  }


  $block->content .= '</div>';

  return $block;
}

/**
 * Finds the previous or next page for a node.
 *
 * @param object $current
 *   Current page's node object.
 * @param bool $next
 *   (optional) TRUE (default) to find the next page; FALSE to find the
 *   previous page.
 * @param bool $skip_guides
 *   (optional) TRUE (default) to skip over chapter/guide landing pages and
 *   instead only navigate through pages that have no sub-menus. FALSE to stop
 *   on chapter/guide landing pages too.
 * @param bool $recursive
 *   (optional, internal) Set to TRUE internally for recursive calls, to avoid
 *   looping.
 *
 * @return object|null
 *   Node object for the next/previous page, or NULL if there is none found.
 *   Note that node access is not checked.
 */
function _drupalorg_og_menu_find_next($current, $next = TRUE, $skip_guides = TRUE, $recursive = FALSE) {
  // For next links, if we're on a guide page (with a child menu), to navigate
  // to the next page, we go down the menu tree. Skip this for recursive calls.
  if ($next && !$recursive && ($child = _drupalorg_og_menu_find_deepest_child($current, $next, $skip_guides))) {
    return $child;
  }

  // Handle the normal case: find the previous/next link in the menu this
  // page is in, if there is one, and return that.
  $gids = og_get_entity_groups('node', $current);
  if (empty($gids)) {
    return NULL;
  }

  $menus = og_menu_get_group_menus($gids);
  $parent_menu = empty($menus) ? NULL : array_shift($menus);
  if ($parent_menu) {
    $next_node = _drupalorg_og_menu_find_node_after($parent_menu, $current->nid, $next);
    if ($next_node) {
      // If we're not skipping guides, this is the node we want.
      if (!$skip_guides) {
        return $next_node;
      }

      // If we're skipping guides, go as deep as possible.
      if ($next_child = _drupalorg_og_menu_find_deepest_child($next_node, $next, $skip_guides)) {
        return $next_child;
      }
      else {
        return $next_node;
      }
    }
  }

  // We're at the start/end of the menu already, so we did not find a
  // previous/end link. Recursively try to find one for the parent.
  // The structure of $gids is something like:
  // array('node' => array('something' => $nid));
  $gids = array_shift($gids);
  $parent_nid = array_shift($gids);
  $parent = node_load($parent_nid);
  if (!$parent) {
    return NULL;
  }
  $parent_next = _drupalorg_og_menu_find_next($parent, $next, $skip_guides, TRUE);
  if (!$parent_next) {
    return NULL;
  }
  return $parent_next;
}

/**
 * Finds the deepest appropriate child node of the current node.
 *
 * @param object $current
 *   Current node to find child of.
 * @param bool $next
 *   (optional) TRUE (default) if we're looking for the first child in the menu
 *   at each level, FALSE to look for the last child in the menu.
 * @param bool $skip_guides
 *   (optional) TRUE (default) to go as deep as possible, skipping "guide"
 *   pages (pages with their own sub-menus). FALSE to just return the first
 *   child found, whether or not it is a guide page.
 *
 * @return object|null
 *   The deepest or first child, or NULL if there are no children. Note that
 *   node access is not checked.
 */
function _drupalorg_og_menu_find_deepest_child($current, $next = TRUE, $skip_guides = TRUE) {
  // Find the child menu of this node.
  $menus = og_menu_get_menus('node', $current->nid);
  if (empty($menus)) {
    return NULL;
  }

  // Find the first/last child node in the menu.
  $child_menu = array_shift($menus);
  $first_child = _drupalorg_og_menu_find_node_after($child_menu, 0, $next);
  if (!$first_child) {
    return NULL;
  }

  // If we are not skipping guides, this is the node we want.
  if (!$skip_guides) {
    return $first_child;
  }

  // Recurse to see if we can go deeper into the menus, since we are skipping
  // guide pages.
  $next_child = _drupalorg_og_menu_find_deepest_child($first_child, $next, $skip_guides);
  if ($next_child) {
    return $next_child;
  }

  // If we didn't find any deeper children, return the one we found earlier.
  return $first_child;
}

/**
 * Finds the first, last, next, or previous node in a menu.
 *
 * @param array|object $menu
 *   Information about a menu to look in. This is expected to be one item
 *   from the return value of og_menu_get_group_menus() or og_menu_get_menus(),
 *   so it is an array or object with element/property 'menu_name' at least.
 * @param int $nid
 *   Node ID to find the next node of, or 0 (default) to return the first/last
 *   node in the menu.
 * @param bool $next
 *   (optional) TRUE (default) if you want the next node, FALSE for the
 *   previous node.
 *
 * @return object|null
 *   The first/last or next/previous node in the menu, or NULL if there isn't
 *   one. Note that node access is not checked.
 */
function _drupalorg_og_menu_find_node_after($menu, $nid, $next = TRUE) {
  $menu = (array) $menu;
  // Use the internal menu build function, which does not check access,
  // because checking access results in a lot of router calls. This is
  // always an OG menu, so it is built of nodes, or should be, and we will
  // check access later.
  $data = _menu_build_tree($menu['menu_name'], array('max_depth' => 1));
  $tree = $data['tree'];
  if (empty($tree)) {
    return NULL;
  }

  // Filter out anything that is hidden or not a node, and find node IDs.
  // Also make an array key that is sortable, similar to what
  // _menu_tree_check_access() does.
  $items = array();
  foreach ($tree as $data) {
    if (!$data['link']['hidden'] && ($data['link']['router_path'] == 'node/%')) {
      $this_nid = (int) substr($data['link']['link_path'], 5);
      if ($this_nid > 0) {
        $data['nid'] = $this_nid;
        $key = (50000 + $data['link']['weight']) . ' ' . $data['link']['mlid'];
        $items[$key] = $data;
      }
    }
  }
  if (empty($items)) {
    return NULL;
  }
  ksort($items);
  $items = array_values($items);

  // Figure out which item we're after here.
  $next_item = NULL;
  if (!$nid) {
    // We want the first/last item.
    $next_item = ($next) ? array_shift($items) : array_pop($items);
  }
  else {
    // We want the node before/after the NID that was passed in.
    $match_index = -1;
    foreach ($items as $i => $data) {
      if ($data['nid'] == $nid) {
        $match_index = $i;
        break;
      }
    }

    if ($match_index >= 0) {
      if ($next && ($match_index < count($items) - 1)) {
        $next_item = $items[$match_index + 1];
      }
      elseif (!$next && ($match_index > 0)) {
        $next_item = $items[$match_index - 1];
      }
    }
  }

  if (!$next_item) {
    // We didn't find anything.
    return NULL;
  }

  // Load the node and return it.
  $node = node_load($next_item['nid']);
  if ($node) {
    return $node;
  }

  return NULL;
}
