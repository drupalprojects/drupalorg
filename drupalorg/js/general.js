(function ($) {
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
    var drupalorg = new Drupal.Drupalorg();
    drupalorg.init();
  };

  Drupal.Drupalorg = function () {
    var myself = this;

    this.init = function () {
      myself.setDefaultSearchFormValue($('body:not(.front) #edit-search-theme-form-1'), Drupal.t('Search Drupal.org'));
      myself.setFooterPosition();
    };

    // Add focus/blur label behavior to search box.
    this.setDefaultSearchFormValue = function ($element, value) {
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

    // Push footer to bottom of window if content is smaller than window.
    this.setFooterPosition = function () {
      var footer_height = $('#footer').innerHeight();
      var footer_pos = $('#footer').position();
      var window_height = $(window).height();
      var page_height = $('#page').height();
      var page_pos = $('#page').position();
      var page_total = page_pos.top + page_height;
      var content_height = footer_height + page_total;
      if (content_height <= window_height) {
        if (footer_pos.top < window_height) {
          var footer_new_pos = window_height - content_height;
          $('#footer').css('position', 'relative');
          $('#footer').css('margin-top', footer_new_pos);
        }
      }
    };
  };
}(jQuery));
