(function ($) {
  Drupal.behaviors.drupalorgSearch = {
    attach: function (context, settings) {
      $('body.page-search #content-top-region form:not(.drupalorgSearch-processed)', context).addClass('drupalorgSearch-processed').each(function () {
        var $this = $(this);
        $this.find('select').change(function () {
          $this.submit();
        });
      });
    }
  };

  Drupal.behaviors.drupalorgCompany = {
    attach: function () {
      var $map = $('#organization-map');
      $map.find('>.drupalorg-map-pin').each(function () {
        $(this).css({
          left: '' + Drupal.longitudeToPx($('>.longitude', this).text(), -162, $map.width()) + 'px',
          bottom: '' + Drupal.latitudeToPx($('>.latitude', this).text(), 75, -45, $map.height()) + 'px'
        });
      });
    }
  };

  /**
   * Marketplace listing pages.
   */
  Drupal.behaviors.drupalorgMarketplace = {
    attach: function () {
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
    }
  };

  /**
   * Randomize children, used on Hosting PaaS and Enterprise pages.
   */
  Drupal.behaviors.drupalorgRandom = {
    attach: function (context) {
      $('.drupalorg-random:not(.drupalorg-random-processed)', context).addClass('drupalorg-random-processed').each(function () {
        var $this = $(this),
          elements = $this.children().get();
        for (var j, x, i = elements.length; i; j = Math.floor(Math.random() * i), x = elements[--i], elements[i] = elements[j], elements[j] = x);
        $this.html(elements);
      });
    }
  };

  /**
   * Load block content from other sites.
   */
  Drupal.behaviors.drupalorgBlockLoad = {
    attach: function () {
      var $block = $('#drupalorg-security-issues-placeholder');
      if ($block.length > 0) {
        var xhr = new XMLHttpRequest();
        xhr.open('GET', 'https://security.drupal.org/dofeed', true);
        xhr.withCredentials = true;
        xhr.onload = function () {
          $block.parent().html(this.responseText);
        };
        xhr.send();
      }
    }
  };

  /**
   * Code to run after the documnent is ready.
   */
  $(document).ready(function () {
    var $body = $('body');

    // Comment attribution display. This is a global bind and must only be ran
    // once.
    $body.bind('click', function (e) {
      var $clicked = $('.attribution', $(e.target).filter('.attribution-label')).toggleClass('element-invisible');
      $('.attribution-label .attribution').not($clicked).addClass('element-invisible');
    })
    .bind('touchstart', function (e) {
      $('.attribution-label .attribution').not($('.attribution', $(e.target).filter('.attribution-label'))).addClass('element-invisible');
    });
    // For potential link GA event tracking. Attach mousedown, keyup,
    // touchstart events to document only and catch clicks on all elements.
    // Based on googleanalytics.js.
    if (typeof Drupal.googleanalytics !== 'undefined') {
      $body.bind('mousedown keyup touchstart', function(event) {
        // Catch the closest surrounding link of a clicked element.
        $(event.target).closest('a,area').each(function() {
          var $this = $(this);

          // Is the clicked URL internal?
          if (Drupal.googleanalytics.isInternal(this.href)) {
            // Look for interesting classes.
            for (var c in {'page-up':0, 'page-previous':0, 'page-next':0, 'upload-button':0, 'issue-button':0}) {
              if (this.classList.contains(c)) {
                ga('send', 'event', 'Navigation', 'Click on ' + c, $this.text());
                return;
              }
            }
            // Look for parents with interesting classes.
            for (var c in {
              '.book-navigation':0, '#block-book-navigation':0, // Book navigation
              '#nav-content':0, '.breadcrumb':0, '.tabs.primary':0, // General navigation
              '#project-issue-jumplinks':0, // Issue pages
              '#block-versioncontrol-project-project-maintainers':0, '#block-project-issue-issue-cockpit':0, // Project pages
              '#block-drupalorg-project-resources':0, '#block-drupalorg-project-development':0,
              '.project-info':0, '.view_all_releases':0, '.add_new_release':0, '.administer_releases':0
            }) {
              if ($this.parents(c).length) {
                ga('send', 'event', 'Navigation', 'Click on ' + c, $this.text());
                return;
              }
            }
          }
          else { // External link.
            // Look for interesting classes.
            for (var c in {'cke_button':0}) {
              if (this.classList.contains(c)) {
                ga('send', 'event', 'Navigation', 'Click on ' + c, $this.text());
                return;
              }
            }
            // Look for parents with interesting classes.
            for (var c in {
              // Membership campaign.
              '#block-drupalorg-membership-campaign':0
            }) {
              if ($this.parents(c).length) {
                ga('send', 'event', 'Navigation', 'Click on ' + c, $this.text());
                return;
              }
            }
          }
        });
      });
    }
  });

  /**
   * Issue comment attribution. See drupalorg_form_node_form_alter();
   */
  Drupal.behaviors.drupalorgIssueCommentAttribution = {
    attach: function (context) {
      // Comment attribution form.
      $('.group-issue-attribution', context).once('drupalorg-issue-comment-attribution', function () {
        var $fieldset = $(this),
          $summary = $(Drupal.settings.drupalOrg.defaultCommentAttribution),
          $notVolunteer = $('.field-name-field-attribute-as-volunteer .form-checkbox[value=0]', $fieldset),
          $attributeContributionTo = $('.field-name-field-attribute-contribution-to', $fieldset).attr('role', 'dialog').attr('tabindex', 0).hide(),
          $attributeContributionToFields = $('input', $attributeContributionTo).change(function (e) {
            if (e.target.checked) {
              $notVolunteer.attr('checked', 'checked');
            }
          }),
          $summaryOrganization = $('.organization', $summary).click(function (e) {
            // Position & show bubble.
            $attributeContributionTo.css({
              'left': Math.max(0, $summaryOrganization.position().left + ($summaryOrganization.outerWidth() - $attributeContributionTo.outerWidth()) / 2) + 'px',
              'top': $summaryOrganization.position().top + $summaryOrganization.outerHeight() + 'px'
            }).show().focus();
            e.preventDefault();
          }),
          $forCustomer = $('.field-name-field-for-customer', $fieldset).attr('role', 'dialog').attr('tabindex', 0).hide(),
          $forCustomerField = $('.form-text', $forCustomer).change(function (e) {
            if (e.target.value !== '') {
              $notVolunteer.attr('checked', 'checked');
            }
          }),
          $customerSuggestions = $('.customer-suggestion', $forCustomer).click(function (e) {
            // Add clicked suggestion.
            var newValue = $forCustomerField.val();
            if (newValue.length) {
              newValue += ', ';
            }
            $forCustomerField.val(newValue + $(e.target).data('string')).trigger('change');
            e.preventDefault();
          }),
          $summaryCustomer = $('.customer', $summary).click(function (e) {
            // Position & show bubble.
            $forCustomer.css({
              'left': Math.max(0, $summaryCustomer.position().left + ($summaryCustomer.outerWidth() - $forCustomer.outerWidth()) / 2) + 'px',
              'top': $summaryCustomer.position().top + $summaryCustomer.outerHeight() + 'px'
            }).show().focus();
            e.preventDefault();
          });

        // Hide bubbles on clicks outside.
        $('body').click(function (e) {
          if ($summaryOrganization.get(0) !== e.target) {
            $attributeContributionTo.hide();
            // If an element in the bubble was the target, return focus to summary.
            if ($(e.target).parents().get().indexOf($attributeContributionTo.get(0)) !== -1) {
              $summaryOrganization.focus();
            }
          }
          if ($summaryCustomer.get(0) !== e.target && $forCustomerField.get(0) !== e.target) {
            $forCustomer.hide();
            // If an element in the bubble was the target, return focus to summary.
            if ($customerSuggestions.get().indexOf(e.target) !== -1) {
              $summaryCustomer.focus();
            }
          }
        });
        // … and focuses.
        $('input, textarea').focus(function (e) {
          if ($attributeContributionToFields.get().indexOf(e.target) === -1 && $forCustomerField.get(0) !== e.target) {
            $attributeContributionTo.hide();
            $forCustomer.hide();
          }
        });
        // … and close buttons.
        $('button', $fieldset).click(function (e) {
          $attributeContributionTo.hide();
          $forCustomer.hide();
          e.preventDefault();
        });

        // Summary text.
        $notVolunteer.siblings('label').empty().prepend($summary);
        $fieldset.drupalSetSummary(function () {}).bind('summaryUpdated', function () {
          var $organizations = $('input:checked + label', $attributeContributionTo),
            customers = $forCustomerField.val();
          if ($organizations.length) {
            $summaryOrganization.text($organizations.map(function () {
              return $.trim($(this).text());
            }).get().join(', '));
          }
          else {
            $summaryOrganization.text(Drupal.t('not applicable'));
          }
          $customerSuggestions.show();
          if (customers.length) {
            $summaryCustomer.text(customers.replace(/ \(\d+\)/g, ''));
            // Hide taken suggestions.
            $.each(customers.split(','), function (index, value) {
              if (value.match(/.*\(\d+\)\s*/)) {
                $customerSuggestions.filter('[data-string*="' + value.replace(/.*\((\d+)\)\s*/, '$1') + '"]').hide();
              }
            });
          }
          else {
            $summaryCustomer.text(Drupal.t('not applicable'));
          }
        });
      });
    }
  };

  /**
   * Issue credit helping. See drupalorg_issue_credit_form().
   */
  Drupal.behaviors.drupalorgIssueCredit = {
    attach: function (context) {
      $('#drupalorg-issue-credit-form', context).once('drupalorg-issue-credit', function () {
        if (Drupal.settings.drupalOrg.isMaintainer) {
          $('>legend', this).after('<div class="credit-summary"></div>');
        }

        // Store command template.
        Drupal.settings.drupalorgIssueCreditTemplate = $('textarea[name=command]', this).val();
        Drupal.settings.drupalorgIssueCreditMessageTemplate = $('textarea[name=command-message]', this).val();

        // Attach event handlers.
        $('input[name=message]', this).keyup(Drupal.drupalorgUpdateIssueCredit);
        $('input[type=checkbox][id^=by-]', this).change(Drupal.drupalorgUpdateIssueCredit);
        $('input[name=author]', this).change(Drupal.drupalorgUpdateIssueCredit);
        $('input[name=add_credit]', this).change(Drupal.drupalorgUpdateIssueCredit);
        $('textarea[name=command], textarea[name=command-message]', this).click(function () {
          $(this).select();
        });

        // Initially fill out field.
        Drupal.drupalorgUpdateIssueCredit();
      });
    }
  };

  Drupal.drupalorgUpdateIssueCredit = function () {
    var $author = $('#drupalorg-issue-credit-form input[name=author]:checked'),
      addCredit = $('#drupalorg-issue-credit-form input[name=add_credit]').val(),
      message = $('#drupalorg-issue-credit-form input[name=message]').val(),
      byHtml = [];

    $('#drupalorg-issue-credit-form #by-' + $author.val()).attr('checked', 'checked');

    // Collect names for 'by …'
    var by = [];
    $('#drupalorg-issue-credit-form input[type=checkbox][id^=by-]:checked').each(function () {
      var $this = $(this);
      if (by.indexOf($this.data('by')) === -1) {
        by.push($this.data('by'));
      }
      byHtml.push($.trim($this.next('label').html()));
    });
    if (typeof addCredit !== 'undefined' && addCredit !== '') {
      by = by.concat(addCredit.split(',').map($.trim));
    }

    // Fill out template. It has already been translated server-side.
    $('#drupalorg-issue-credit-form textarea[name=command]').val(Drupal.formatString(Drupal.settings.drupalorgIssueCreditTemplate, {
      '!message': message.replace(/'/g, "'\\''"),
      '!by': (by.length > 0 ? ' by ' + by.join(', ') : '').replace(/'/g, "'\\''"),
      '!author': $author.data('author').replace(/'/g, "'\\''")
    }));
    $('#drupalorg-issue-credit-form textarea[name=command-message]').val(Drupal.formatString(Drupal.settings.drupalorgIssueCreditMessageTemplate, {
      '!message': message,
      '!by': (by.length > 0 ? ' by ' + by.join(', ') : '')
    }));

    // Fill out credit summary.
    if (Drupal.settings.drupalOrg.isMaintainer) {
      if (byHtml.length) {
        $('#drupalorg-issue-credit-form .credit-summary').html(Drupal.t('<strong>Giving credit to</strong> !credits', {'!credits': byHtml.join(', ')}));
      }
      else {
        $('#drupalorg-issue-credit-form .credit-summary').html(Drupal.t('Expand and select contributors to give credit.'));
      }
    }
  };

  Drupal.behaviors.drupalorgConfirm = {
    attach: function() {
      if (typeof(ga) !== 'function') {
        // Wait for GA load.
        setTimeout(Drupal.behaviors.drupalorgConfirm.attach, 1000);
        return;
      }

      $('.confirm-button-form').each(function () {
        // Send GA event if confirm form shown.
        ga('send', 'event', 'User confirm', 'Form shown');
      })
      .find('.form-submit').bind('mousedown keyup touchstart', function(event) {
        // Send GA event on click.
        ga('send', 'event', 'User confirm', 'Click', event.target.getAttribute('value'));
      });
    }
  };

  Drupal.behaviors.drupalorgSurveyBlock = {
    attach: function(context) {
      $('#block-drupalorg-documentation-survey', context).once('drupalorg-documentation-survey', function () {
        var $container = $(this),
          $frame = $('iframe', this).hide();
        $('.action-button', this).show().click(function () {
          $(this).hide();
          $frame.show();
          var interval = setInterval(function () {
            if (/thanks/.exec($frame.get(0).contentWindow.location.href)) {
              clearInterval(interval);
              $container.hide();
            }
          }, 5000);
        });
      });
    }
  };

  /**
   * Prevent multiple submits.
   */
  Drupal.behaviors.drupalorgPreventMultipleSubmit = {
    attach: function(context, settings) {
      if ($('form.prevent-multiple-submit-form').length) {
        $('body').once('multisub').delegate('form.prevent-multiple-submit-form', 'submit.formSubmitSingle', $.onFormSubmitSingle);
      }
    }
  };

  /**
   * “View file hashes” toggles on release pages.
   */
  Drupal.behaviors.drupalorgReleaseHashes = {
    attach: function (context) {
      $('.view-display-id-release_files_pane', context).once('drupalorgReleaseHashes', function () {
        var hashes = {},
          $filesPane = $(this);

        // Find hash types.
        $('.hash', this).parent().each(function () {
          var label = $('.views-label', this).text().replace(/: $/, '');
          $.each(this.classList, function () {
            if (this.match(/^views-field-field/)) {
              hashes[this] = label;
            }
          });
        });

        if (!$.isEmptyObject(hashes)) {
          var links = [],
            localStorage = 'localStorage' in window && typeof window.localStorage !== 'undefined' && window['localStorage'] !== null,
            $links;

          // Add “View file hashes” toggles.
          $.each(hashes, function (key, value) {
            links.push('<a href="javascript:void(0)" class="show-' + key + '">' + value + '</a>');
          });
          $links = $filesPane.parents('.panel-layout').find('.view-display-id-release_info_pane .views-row-last')
          .append('<div class="release-hash-links"><span class="views-label">' + Drupal.t('View file hashes: ') + '</span><span>' + links.join(', ') + '</span></div>')
          .find('a').click(function () {
            var $this = $(this);

            // Clear any existing classes.
            $.each(hashes, function (key, value) {
              $filesPane.removeClass('show-' + key);
            });
            $this.parents('.release-hash-links').find('.active').not($this).removeClass('active');

            // Toggle this link and update classes.
            if ($this.toggleClass('active').hasClass('active')) {
              $filesPane.removeClass('no-hashes').addClass(this.classList[0]);
              if (localStorage) {
                window.localStorage['drupalorgReleaseHashes'] = this.classList[0];
              }
            }
            else {
              $filesPane.addClass('no-hashes');
              if (localStorage) {
                window.localStorage.removeItem('drupalorgReleaseHashes');
              }
            }
          });
          if (localStorage && (typeof window.localStorage['drupalorgReleaseHashes'] !== 'undefined')) {
            $links.filter('.' + window.localStorage['drupalorgReleaseHashes']).click();
          }
        }
      });
    }
  };
})(jQuery);
