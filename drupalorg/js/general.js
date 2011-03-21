Drupal.behaviors.drupalorgSetHome = function () {
  $('#drupalorg-set-home:not(.drupalorg-set-home-processed)')
  .addClass('drupalorg-set-home-processed')
  .each(function () {
    var $this = $(this);
    // Click triggers form submit
    $('a', $this).click(function () {
      $('input[type=submit]', $this).click();
      return false;
    });
  });
};

Drupal.behaviors.drupalorgSearch = function () {
  $('body.page-search #content-top-region form:not(.drupalorgSearch-processed)').addClass('drupalorgSearch-processed').each(function () {
    var $this = $(this);
    $this.find('select').change(function () {
      $this.submit();
    });
  });
};

Drupal.behaviors.drupalorgCompany = function () {
  var $map = $('#organization-map');
  $map.find('>.pin').each(function () {
    $(this).css({
      left: '' + Drupal.html5UserGeolocationLongitudeToPx($('>.longitude', this).text(), -168, $map.width()) + 'px',
      bottom: '' + Drupal.html5UserGeolocationLatitudeToPx($('>.latitude', this).text(), 74, -58, $map.height()) + 'px'
    });
  })
};
