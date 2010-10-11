$(function () {
  var current = 0,
    $map = $('.homepage-map'),
    $pins = $('.homepage-map>.homepage-pin');

  $pins.each(function () {
    $(this).css({
      left: '' + Drupal.html5UserGeolocationLongitudeToPx($('>.longitude', this).text(), -168, $map.width()) + 'px',
      bottom: '' + Drupal.html5UserGeolocationLatitudeToPx($('>.latitude', this).text(), 78, -58, $map.height()) + 'px'
    });
  }).eq(current).show();
  setInterval(function () {
    $pins.eq(current).hide();
    current += 1;
    if (current === $pins.length) {
      current = 0;
    }
    $pins.eq(current).show();
  }, 4000);
});

Drupal.behaviors.frontTabs = function () {
  $('#rotate > ul').tabs();
};
