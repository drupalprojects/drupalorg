(function ($) {
  Drupal.behaviors.drupalorgHome = {
    attach: function (context, settings) {
      $('.front #community-updates', context).each(function () {
        $(this).tabs();
      });
    }
  };

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
          left: '' + Drupal.longitudeToPx($('>.longitude', this).text(), -168, $map.width()) + 'px',
          bottom: '' + Drupal.latitudeToPx($('>.latitude', this).text(), 75, -57, $map.height()) + 'px'
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
   * Comment attribution display.
   *
   * This is a global bind and must only be ran once.
   */
  $(document).ready(function () {
    $('body').bind('click', function (e) {
      var $clicked = $('.attribution', $(e.target).filter('.attribution-label')).toggleClass('element-invisible');
      $('.attribution').not($clicked).addClass('element-invisible');
    });
    $('body').bind('touchstart', function (e) {
      $('.attribution').not($('.attribution', $(e.target).filter('.attribution-label'))).addClass('element-invisible');
    });
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
  }
})(jQuery);
