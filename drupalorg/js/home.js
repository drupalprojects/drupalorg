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
    positions: ['top'],
    closeWhenOthersOpen: true,
    width: 'auto',
    spikeLength: 15,
    spikeGirth: 10,
    padding: 5,
    cornerRadius: 10,
    fill: '#FFF',
    strokeStyle: '#BFBFBF',
    strokeWidth: 1,
    trigger: 'none',
    animate: true,
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
  }, 3000);
});

Drupal.behaviors.thingsWeMade = function (context) {
  var index = 0;

  setInterval(function () {
    // Figure which image we are wrapping too
    if ($('.things-we-made li').eq(index).hasClass('last')) {
      index = 0;
    }
    else {
      index += 1;
    }

    $('ul.things-we-made').animate({ marginLeft: index * -300 }, 500);
  }, 6000);
};

Drupal.behaviors.frontTabs = function () {
  $('#rotate > ul').tabs();
};
