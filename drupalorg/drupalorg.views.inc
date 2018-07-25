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
      'drupalorg_security_coverage' => [
        'field' => [
          'title' => t('Security advisory coverage'),
          'help' => t('Indicator of Drupal Security advisory coverage'),
          'handler' => 'drupalorg_handler_security_coverage',
        ],
      ],
      'drupalorg_release_branch_info' => [
        'field' => [
          'title' => t('Release branch information'),
          'help' => t('For Downloads on project pages, information about the branch'),
          'handler' => 'drupalorg_handler_release_branch_info',
        ],
      ],
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
    // Base drupalorg_comment_deleted table description.
    'drupalorg_comment_deleted' => array(
      'table' => array(
        'group' => t('Drupalorg comment deleted.'),
      ),
      // UID
      'uid' => array(
        'title' => t('User uid'),
        'help' => t('The user that wrote the comment that was spam deleted'),
        'field' => array(
          'handler' => 'views_handler_field',
        ),
        // UID relationship.
        'relationship' => array(
          'base' => 'users',
          'title' => t('User'),
          'help' => t('Relate spam to the user that created it.'),
          'handler' => 'views_handler_relationship',
          'label' => t('Spam user.'),
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_user_name',
        ),
        'argument' => array(
          'handler' => 'views_handler_argument_numeric',
        ),
      ),
      // NID
      'nid' => array(
        'title' => t('Spam node id'),
        'help' => t('Node id of spam node.'),
        'field' => array(
          'handler' => 'views_handler_field_node',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort_data',
        ),
        'argument' => array(
          'handler' => 'views_handler_argument_numeric',
        ),
      ),
      // Spam subject.
      'subject' => array(
        'title' => t('Subject/title of spam node.'),
        'help' => t('Display the subject or title of a spam node'),
        'field' => array(
          'handler' => 'views_handler_field',
        ),
      ),
      // Comment body.
      'comment_body' => array(
        'title' => t('Body of spam node.'),
        'help' => t('Display the body of a spam node'),
        'field' => array(
          'handler' => 'views_handler_field',
        ),
      ),
      // Flag count
      'flag_count' => array(
        'title' => t('Number of spam flags on a comment'),
        'help' => t('A count of the number of spam flags on a comment.,'),
        'field' => array(
          'handler' => 'views_handler_field',
        ),
      )
    )
  );
}

/**
 * Implements hook_views_data_alter().
 */
function drupalorg_views_data_alter(&$data) {
  // Add the deleted spam comment relationship.
  $data['users']['drupalorg_comment_deleted_rel'] = array(
    'group' => t('Drupalorg comment uid'),
    'title' => t('Drupalorg comment deleted rel - uid'),
    'help' => t('Drupalorg comment deleted rel - uid help'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'label' => t('Drupalorg comment deleted rel - uid'),
      'base' => 'drupalorg_comment_deleted',
      'base field' => 'uid',
      'relationship field' => 'uid',
    ),
  );
  $data['node']['drupalorg_comment_deleted_rel'] = array(
    'group' => t('Drupalorg comment nid'),
    'title' => t('Drupalorg comment deleted - nid'),
    'help' => t('Drupalorg comment deleted - nid help.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'label' => t('Drupalorg comment deleted nid rel.'),
      'base' => 'drupalorg_comment_deleted',
      'base field' => 'nid',
      'relationship field' => 'nid',
    )
  );
  $data['field_data_field_issue_last_status_change']['field_issue_last_status_change_value']['filter']['handler'] = 'views_handler_filter_date';
}
