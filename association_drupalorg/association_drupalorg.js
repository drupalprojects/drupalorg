// Hide Shirt option for Drupal Means Business registrations.
Drupal.behaviors.associationDrupalorg = function (context) {
  $(Drupal.settings.associationDrupalorgConfReg + ':not(.associationDrupalorg-processed)', context).each(function () {
    $(Drupal.settings.associationDrupalorgShirt).hide();
    $(this).addClass('associationDrupalorg-processed').change(function () {
      if (Drupal.settings.associationDrupalorgHasShirt.indexOf(parseInt($(this).val(), 10)) !== -1) {
        if ($(this).attr('checked')) {
          $(Drupal.settings.associationDrupalorgShirt).slideDown('fast');
        }
        else {
          $(Drupal.settings.associationDrupalorgShirt).slideUp('fast');
        }
      }
    }).filter(':checked').change();
  });
};
