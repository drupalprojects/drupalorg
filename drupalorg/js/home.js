(function ($) {
  Drupal.behaviors.drupalorgHome = {
    attach: function (context, settings) {
      var current = 0,
        $map = $('.homepage-map', context),
        $pins = $('.homepage-map>.homepage-pin', context);

      $pins.each(function () {
        $(this).css({
          left: '' + Drupal.longitudeToPx($('>.longitude', this).text(), -168, $map.width()) + 'px',
          bottom: '' + Drupal.latitudeToPx($('>.latitude', this).text(), 78, -58, $map.height()) + 'px'
        });
      }).eq(current).show();
      if ($map.length > 0) {
        setInterval(function () {
          $pins.eq(current).hide();
          current += 1;
          if (current === $pins.length) {
            current = 0;
          }
          $pins.eq(current).show();
        }, 4000);
      }
      $('#community-updates', context).tabs();
    }
  };
})(jQuery);
