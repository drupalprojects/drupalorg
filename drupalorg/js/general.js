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
  var $element = $('body:not(.front) #edit-search-theme-form-1'),
    value = Drupal.t('Search Drupal.org'),
    $footer = $('#footer'),
    $page = $('#page');

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

  // Push footer to bottom of window if content is smaller than window.
  if ($footer.length > 0 && $page.length > 0) {
    var footer_height = $footer.innerHeight();
    var footer_pos = $footer.position();
    var window_height = $(window).height();
    var page_height = $page.height();
    var page_pos = $page.position();
    var page_total = page_pos.top + page_height;
    var content_height = footer_height + page_total;
    if (content_height <= window_height) {
      if (footer_pos.top < window_height) {
        var footer_new_pos = window_height - content_height;
        $footer.css('position', 'relative');
        $footer.css('margin-top', footer_new_pos);
      }
    }
  }
};

Drupal.behaviors.drupalorgSearch = function () {
  $('body.page-search #content-top-region form:not(.drupalorgSearch-processed)').addClass('drupalorgSearch-processed').each(function () {
    var $this = $(this);
    $this.find('select').change(function () {
      $this.submit();
    });
  });
};
