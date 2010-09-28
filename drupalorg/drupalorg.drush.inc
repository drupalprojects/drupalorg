<?php

function drupalorg_drush_help($section) {
  switch ($section) {
    case 'drupalorg:map-content':
      return dt('Update home page map pins.');
  }
}

function drupalorg_drush_command() {
  return array(
    'map-content' => array(
      'description' => 'Update home page map pins.',
    ),
  );
}

function drush_drupalorg_map_content() {
  drupalorg_map_content(TRUE);
}
