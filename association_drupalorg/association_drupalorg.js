// Hide Shirt option for Drupal Means Business registrations.
Drupal.behaviors.associationDrupalorg = function (context) {
  $(Drupal.settings.associationDrupalorgConfReg + ':not(.associationDrupalorg-processed)', context).each(function () {
    $this = $(this).addClass('associationDrupalorg-processed')
    $this.change(function () {
      if ($(this).val() == Drupal.settings.associationDrupalorgDMB) {
        $(Drupal.settings.associationDrupalorgShirt).slideUp('fast');
      }
      else {
        $(Drupal.settings.associationDrupalorgShirt).slideDown('fast');
      }
    }).change();
  });
};
