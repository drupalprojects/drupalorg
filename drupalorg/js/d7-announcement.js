(function ($) {
  Drupal.behaviors.drupalorgD7 = {
    attach: function (context, settings) {
  var launched = false;
  $('.slideshow').cycle({
    fx: 'scrollLeft',
    timeout: 7500,
    before: function() {
      if (launched) {
        $('#caption span').fadeOut();
      }
      else {
        launched = true;
      }
    },
    after: function() {
      $('#caption span').html(this.alt).fadeIn();
    }
  });
  $('#video').bind('DOMSubtreeModified', function () {
    $('object').attr('width', 690);
    $('object').attr('height', 388);
  });
}
}
})(jQuery);
