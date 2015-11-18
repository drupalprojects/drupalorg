<?php
/**
 * Provide links to the download releases table provided by project module
 * TODO: Add an issue to the project issue queue to bring this plugin in.
 */
$plugin = array(
  'title' => t('All project releases link'),
  'single' => TRUE,
  'category' => array(t('Drupalorg Project'), -9),
  'render callback' => 'download_releases_link_pane_content_type_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
* Run-time rendering of the body of the block (content type)
* See ctools_plugin_examples for more advanced info
*/
function download_releases_link_pane_content_type_render($subtype, $conf, $args, $context = NULL) {
  $block = new stdClass();
  if (isset($context->keyword) && $context->keyword == 'node' && isset($context->data) && project_node_is_project($context->data)) {
    $node = $context->data;
    $content = array(
      '#theme' => 'links',
      '#links' => array(
        'view_all_releases' => array(
          'title' => t('View all releases'),
          'href' => 'node/' . $node->nid . '/release'
        ),
      ),
    );
    if (project_user_access($node->nid, 'administer releases')) {
      $types = project_release_release_node_types();
      // todo this uses the first release node type. What to do if there are
      // multiple?
      $content['#links']['add_new_release'] = array(
        'title' => t('Add new release'), 'href' => 'node/add/' . str_replace('_', '-', reset($types)) . '/' . $node->nid,
      );
      $content['#links']['administer_releases'] = array(
        'title' => t('Administer releases'), 'href' => 'node/' . $node->nid . '/edit/releases',
      );
    }
    $block->content = drupal_render($content);
  }
  return $block;
}
