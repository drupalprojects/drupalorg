$(function () {
  var current = 0,
    $map = $('.homepage-map'),
    $pins = $('.homepage-map>.homepage-pin');
  $pins.each(function () {
    $(this).css({
      left: '' + Drupal.html5UserGeolocationLongitudeToPx($('>.longitude', this).text(), -168, $map.width()) + 'px',
      bottom: '' + Drupal.html5UserGeolocationLatitudeToPx($('>.latitude', this).text(), 78, -58, $map.height()) + 'px'
    });
  }).bt({
    contentSelector: "$('>.content', this)",
    positions: ['left', 'top'],
    windowMargin: -1000,
    closeWhenOthersOpen: true,
    clickAnywhereToClose: false,
    width: 'auto',
    spikeLength: 15,
    spikeGirth: 10,
    padding: 5,
    cornerRadius: 10,
    fill: '#FFF',
    strokeStyle: '#BFBFBF',
    strokeWidth: 1,
    trigger: 'none',
    preShow: function () {
      $(this).show();
    },
    postHide: function () {
      $(this).hide();
    },
    overlap: 4
  });
  setInterval(function () {
    $pins.eq(current).btOn();
    current += 1;
    if (current === $pins.length) {
      current = 0;
    }
  }, 4000);
});

Drupal.behaviors.frontTabs = function () {
  $('#rotate > ul').tabs();
};
