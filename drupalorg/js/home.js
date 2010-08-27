$(function() {
  jQuery.bt.defaults.closeWhenOthersOpen = true;
  var items = Drupal.settings.homePageMap, current = 0, max = Drupal.settings.homePageMap.length;
  for (i = 0; i < items.length; i++) {
    item = items[i];
    css = { top: item.top, left: item.left };
    $('.homepage-map').append($('<img class="homepage-image" src="'+ Drupal.settings.basePath +'/sites/all/themes/trunk/images/homepage-'+ item.type +'.png" width="10" height="10" id="homepage-image-'+ i +'" />').css(css));
    $('#homepage-image-'+ i).bt(item.content, {
      width: 220,
      spikeLength: 15,
      spikeGirth: 10,
      padding: 5,
      cornerRadius: 10,
      fill: '#FFF',
      strokeStyle: '#BFBFBF',
      strokeWidth: 1,
      trigger: 'none',
      animate: true,
      overlap: 5
    });
  }
  var update = function() {
    var $element = $('#homepage-image-'+ current),
        $window = $(window),
        top = $window.scrollTop(),
        bottom = $window.height() + top,
        elementTop = $element.offset().top,
        elementBottom = elementTop + $element.height();
    if (top < elementBottom && bottom > elementBottom) {
      $element.btOn();
    }
    current++;
    if (current == max) {
      current = 0;
    }
    setTimeout(function() {
      update();
    }, 3000);
  };
  update();
});

Drupal.behaviors.things_we_made = function(context) {
  var left = 0;
  var items = $('.things-we-made li');
  var index = 0;

  setInterval(function() {
    // Figure which image we are wrapping too
    if ($('.things-we-made li').eq(index).hasClass('last')) {
      index = 0;
    }
    else {
      index++;
    }
    left = index * -300;

    $('ul.things-we-made').animate({ marginLeft: left, }, 500);
  }, 6000);
}

Drupal.behaviors.frontTabs = function() {
  $('#rotate > ul').tabs({}).tabs('rotate', 0);
};
