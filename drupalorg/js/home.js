$(function() {
  jQuery.bt.defaults.closeWhenOthersOpen = true;
  var current = 0, max = Drupal.settings.homePageMap.length;
  for (i = 0; i < items.length; i++) {
    item = items[i];
    css = { top: item.top, left: item.left };
    $('.map').append($('<img class="homepage-image" src="homepage-'+ item.type +'.png" alt="gmap-pin" title="" width="6" height="7" id="homepage-image-'+ i +'" />').css(css));
    $('#homepage-image-'+ i).bt('<strong>'+ item.title +'</strong><br /><div class="description">'+ item.description +'</div>', {
      width: 220,
      spikeLength: 15,
      spikeGirth: 10,
      padding: 5,
      cornerRadius: 10,
      fill: '#FFF',
      strokeStyle: '#BFBFBF',
      strokeWidth: 1,
      trigger: 'none',
      animate: true
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

