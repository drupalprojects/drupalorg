(function ($) {
  Drupal.behaviors.drupalorgHome = {
    attach: function (context, settings) {
      $('#community-updates', context).tabs();
    }
  };
})(jQuery);
