<?php

/**
 * Implementation of hook_user_default_roles().
 */
function drupalorg_packaging_whitelist_user_default_roles() {
  $roles = array();

  // Exported role: Packaging whitelist maintainer
  $roles['Packaging whitelist maintainer'] = array(
    'name' => 'Packaging whitelist maintainer',
  );

  return $roles;
}
