/* $Id$ */

/**
 * When adding a new release, show the confirm checkbox for security updates.
 */
Drupal.drupalorgShowSecurityUpdateConfirmAutoAttach = function () {
  $('div.release-type-select .form-select').change(function () {
    var securityUpdate = false;
    $('option:selected', this).each(function() {
      if ($(this).text() == 'Security update') {
        securityUpdate = true;
      }
    });
    if (securityUpdate) {
      $('div.security-update-confirm').show();
    }
    else {
      $('div.security-update-confirm').hide();
    }
  });
};

// Global killswitch.
if (Drupal.jsEnabled) {
  $(function() {
    Drupal.drupalorgShowSecurityUpdateConfirmAutoAttach();
  });
}
