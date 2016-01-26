<?php

/**
 * Implements hook_views_data().
 */
function drupalorg_views_data() {
  return array(
    'views_entity_node' => array(
      'drupalorg_not_spam' => array(
        'field' => array(
          'title' => t('Remove spam flags'),
          'help' => t('Remove users’ spam reports'),
          'handler' => 'drupalorg_handler_not_spam',
        ),
      ),
    ),
    'views_entity_comment' => array(
      'drupalorg_not_spam' => array(
        'field' => array(
          'title' => t('Remove spam flags'),
          'help' => t('Remove users’ spam reports'),
          'handler' => 'drupalorg_handler_not_spam',
        ),
      ),
    ),
    'views_entity_user' => array(
      'drupalorg_not_spam' => array(
        'field' => array(
          'title' => t('Remove spam flags'),
          'help' => t('Remove users’ spam reports'),
          'handler' => 'drupalorg_handler_not_spam',
        ),
      ),
    ),
  );
}
