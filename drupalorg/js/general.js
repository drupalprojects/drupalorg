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

/**
 * Marketplace listing pages.
 */
Drupal.behaviors.drupalorgMarketplace = function () {
  $('.view-drupalorg-organizations:not(.drupalorgMarketplace-processed)').addClass('drupalorgMarketplace-processed')
  .find('ul').each(function () {
    var $showMore = $('.show-more', this).hide(),
      $showLink = $('.show-link', this),
      $hideLink = $('.hide-link', this);

    $showLink.show().click(function (e) {
      $showMore.show();
      $showLink.hide();
      $hideLink.show();
      e.preventDefault();
    });
    $hideLink.click(function (e) {
      $showMore.hide();
      $showLink.show();
      $hideLink.hide();
      e.preventDefault();
    });
  });
};
