Drupal.behaviors.dashboard = function(context) {
  $dashboard = $('#dashboard:not(.dashboard-processed)', context).addClass('dashboard-processed');

  if ($dashboard.length > 0) {
    // Gadget reordering.
    $columns = $dashboard.find('>div.column');
    $columns.sortable({
      items: '>div.gadget',
      handle: '>h2',
      connectWith: $columns,
      placeholder: 'dashboard-placeholder',
      containment: $dashboard,
      distance: 5,
      opacity: 0.8,
      start: function(event, ui) {
        dashboardSetColumnHeight(ui.item.height());
      },
      stop: function(event, ui) {
        gadgets = [];
        $columns.each(function() {
          gadgets.push($(this).sortable('toArray').join(',').replace(/gadget-/g, ''));
        });
        jQuery.post(Drupal.settings.basePath + 'dashboard/' + Drupal.settings.dashboardPage + '/reorder-gadgets', {
          token: Drupal.settings.dashboardToken,
          column_0: gadgets[0],
          column_1: gadgets[1],
          column_2: gadgets[2],
        });
        dashboardSetColumnHeight(0);
      }
    });
  }
}

Drupal.behaviors.dashboardNavigation = function(context) {
  $navigation = $('#nav-content.nav-content-dashboard:not(.dashboard-processed)', context).addClass('dashboard-processed');

  if ($navigation.length > 0) {
    // Add IDs for sortable('toArray'). theme('links') can not put IDs here.
    $navigation.find('>ul>li').each(function() {
      $this = $(this);
      $this.attr('id', $this.attr('class').replace(/ .*/, ''));
    });

    // Fake hovering for edit & delete icons.
    $dashboardActiveSpan = $navigation.find('>ul>li.active>span');
    $dashboardActiveSpan.hover(
      function () {
        $dashboardActiveSpan.addClass('hover');
      }, 
      function () {
        $dashboardActiveSpan.removeClass('hover');
      }
    );

    // Drag & drop tabs
    $navigation.sortable({
      items: '>ul>li:not(.dashboard-link-add, .dashboard-profile)',
      containment: $navigation,
      axis: 'x',
      distance: 5,
      start: function(event, ui) {
        ui.helper.find('>span.hover').removeClass('hover');
      },
      stop: function(event, ui) {
        jQuery.post(Drupal.settings.basePath + 'dashboard/' + Drupal.settings.dashboardPage + '/reorder-pages', {
          token: Drupal.settings.dashboardToken,
          pages: $navigation.sortable('toArray').join(',').replace(/dashboard-page-/g, ''),
        });
        $navigation.find('>ul>li:not(.dashboard-link-add, .dashboard-profile)').each(function() {
          $this = $(this);
          path = $this.attr('class').replace(/.* dashboard-path-([^ ]*).*/, '$1');
          $this.find('>a').attr('href', Drupal.settings.basePath + 'dashboard/' + path);
        });
        $navigation.find('>ul>li:first>a').attr('href', Drupal.settings.basePath + 'dashboard');
      }
    });
    $navigation.find('>ul>li.dashboard-link-add>a').click(function() {
      // Hide add link, show add form.
      $this = $(this).hide().parent().append(Drupal.settings.dashboardPageAddForm);
      $dashboardAddForm = $('#dashboard-page-add-form');
      $dashboardAddForm.find('#edit-title').keyup(function(event) {
        if (event.which == 27) { // Esc pressed.
          dashboardRemoveAddPageForm();
        }
        else {
          // Enable Add button only when text is present.
          if ($(this).attr('value') == '') {
            $dashboardAddForm.find('#edit-submit').attr('disabled', 'disabled');
          }
          else {
            $dashboardAddForm.find('#edit-submit').removeAttr('disabled');
          }
        }
      }).focus();
      $('body').bind('click', dashboardAddPageBodyClick);
      return false;
    });

    // Edit page link
    $dashboardActiveSpan.find('>a.edit').click(function() {
      // Hide edit link, show edit form.
      $dashboardActiveSpan.find('>a').hide().end().append(Drupal.settings.dashboardPageEditForm);
      $dashboardEditForm = $('#dashboard-page-edit-form').find('div.delete').hide().end();

      // Correct title in case it has already been edited.
      $dashboardEditForm.find('#edit-edit-title').attr('value', $dashboardActiveSpan.find('>a.edit').text());

      // Allow AHAH form submission, but make changes active instantly.
      Drupal.attachBehaviors($dashboardEditForm);
      $dashboardEditFormSubmit = $dashboardEditForm.find('#edit-edit-submit').click(function() {
        $dashboardActiveSpan.find('>a.edit').html(Drupal.checkPlain($dashboardEditForm.find('#edit-edit-title').attr('value')) + '<span class="edit-icon"></span>');
        dashboardRemoveEditPageForm();
      });
      $dashboardEditForm.find('#edit-edit-title').keyup(function(event) {
        if (event.which == 27) { // Esc pressed.
          dashboardRemoveEditPageForm();
        }
        else {
          // Enable Edit button only when text is present.
          if ($(this).attr('value') == '') {
            $dashboardEditFormSubmit.attr('disabled', 'disabled');
          }
          else {
            $dashboardEditFormSubmit.removeAttr('disabled');
          }
        }
      }).focus();
      $('body').bind('click', dashboardEditPageBodyClick);
      return false;
    });

    // Delete page link
    $dashboardActiveSpan.find('>a.delete').click(function() {
      // Hide edit link, show edit form.
      $dashboardActiveSpan.find('>a').hide().end().append(Drupal.settings.dashboardPageEditForm);
      $dashboardEditForm = $('#dashboard-page-edit-form').find('div.edit').hide().end();

      // Correct title in case it has already been edited.
      $dashboardEditForm.find('#edit-delete').attr('value', Drupal.t('Yes, delete !title', {'!title': $dashboardActiveSpan.find('>a.edit').text()}));
      $dashboardEditForm.find('#edit-delete').click(function() {
        // Set a non-dynamic title so Form API is not confused.
        $(this).attr('value', Drupal.t('Deleting…'));
      });

      $('body').bind('click', dashboardEditPageBodyClick);
      $dashboardEditForm.find('a.cancel').click(dashboardRemoveEditPageForm);
      return false;
    });
    dashboardSetColumnHeight(0);
  }
}

/**
 * Set equal height columns with addional space to increase the size of
 * drag zones.
 */
function dashboardSetColumnHeight(add) {
  height = add;
  $('#dashboard>div.column').each(function() {
    height = Math.max(height, $(this).css('height', 'auto').height() + add);
  }).each(function() {
    $(this).height(height);
  });
}

/**
 * Hide the Add page form if click is outside the form.
 */
function dashboardAddPageBodyClick(event) {
  if ($(event.target).parents('#dashboard-page-add-form').length == 0) {
    dashboardRemoveAddPageForm();
  }
}

/**
 * Remove the Add page form, show the link, remove event.
 */
function dashboardRemoveAddPageForm() {
  $dashboardAddForm.remove();
  $navigation.find('>ul>li.dashboard-link-add>a').show();
  $('body').unbind('click', dashboardAddPageBodyClick);
}

/**
 * Hide the Edit page form if click is outside the form.
 */
function dashboardEditPageBodyClick(event) {
  if ($(event.target).parents('#dashboard-page-edit-form').length == 0) {
    dashboardRemoveEditPageForm();
  }
}

/**
 * Remove the Edit page form, show the link, remove event.
 */
function dashboardRemoveEditPageForm() {
  $dashboardEditForm.remove();
  $dashboardActiveSpan.removeClass('hover').find('>a').show();
  $('body').unbind('click', dashboardEditPageBodyClick);
}
