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
    $('#homepage-image-'+ current).btOn();
    current++;
    if (current == max) {
      current = 0;
    }
    setTimeout(function() {
      update();
    }, 3000);
  };
  update();
})

