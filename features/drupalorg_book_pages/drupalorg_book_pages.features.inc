<?php
/**
 * @file
 * drupalorg_book_pages.features.inc
 */

/**
 * Implements hook_node_info().
 */
function drupalorg_book_pages_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('A <em>book page</em> is a page of content, organized into a collection of related entries collectively known as a <em>book</em>. A <em>book page</em> automatically displays links to adjacent pages, providing a simple navigation system for organizing and reviewing structured content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('We need your contributions to grow and improve! See the <a href="/contribute/documentation">Documentation contribution guidelines</a> for ways you can help.'),
    ),
  );
  return $items;
}
