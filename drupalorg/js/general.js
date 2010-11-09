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

// All Drupal.org specific behaviors.
Drupal.behaviors.Drupalorg = function () {
  var $element = $('body:not(.drupalorg-front) #edit-search-theme-form-1'),
    value = Drupal.t('Search Drupal.org');

  // Add focus/blur label behavior to search box.
  $element.bind('focus', function () {
    if ($element.val() === value) {
      $element.val('').addClass('has-value');
    }
  });
  $element.bind('blur', function () {
    if ($element.val() === '' || $element.val() === value) {
      $element.val(value).removeClass('has-value');
    }
    else {
      $element.addClass('has-value');
    }
  });
  $element.trigger('blur');
};

Drupal.behaviors.drupalorgSearch = function () {
  $('body.page-search #content-top-region form:not(.drupalorgSearch-processed)').addClass('drupalorgSearch-processed').each(function () {
    var $this = $(this);
    $this.find('select').change(function () {
      $this.submit();
    });
  });
};
