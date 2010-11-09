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
