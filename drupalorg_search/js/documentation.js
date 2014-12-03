(function ($) {

  /**
   * Attaches the autoclookup behavior to all required fields
   */
  Drupal.behaviors.documentationHelp = {
    attach: function (context) {
      var CHDB = [];
      $('input.autolookup:not(.autolookup-processed)', context).each(function () {
        var uri = this.value,
          input_id = this.id.substr(0, this.id.length - 11),
          input = $('#' + input_id).attr('autolookup', 'OFF')[0],
          jsch;

        if (!CHDB[uri]) {
          // We leverage virtually all the same behavior as the autocomplete
          // so, we use the ACDB rather than re-creating all the functionality.
          CHDB[uri] = new Drupal.ACDB(uri);
        }
        $(this).after('<div id="' + input_id + '-results"></div>');
        $(input.form).submit(function() { return false; });

        jsch = new Drupal.jsCH(input, CHDB[uri]);
        jsch.populateResults();
        $(this).addClass('autolookup-processed');
      });
    }
  };

  /**
   * A Documentation Help object.
   */
  Drupal.jsCH = function (input, db) {
    var ac = this;
    this.input = input;
    this.resultsId = this.input.id + '-results';
    this.db = db;

    $(this.input).keyup(function (event) { ac.onkeyup(this, event); });
  };

  /**
   * Handler for the "keyup" event.
   */
  Drupal.jsCH.prototype.onkeyup = function (input, e) {
    if (!e) {
      e = window.event;
    }
    switch (e.keyCode) {
      case 16: // shift
      case 17: // ctrl
      case 18: // alt
      case 20: // caps lock
      case 33: // page up
      case 34: // page down
      case 35: // end
      case 36: // home
      case 37: // left arrow
      case 38: // up arrow
      case 39: // right arrow
      case 40: // down arrow
      case 9:  // tab
      case 13: // enter
      case 27: // esc
        return true;

      default: // all other keys
        if (input.value.length > 0) {
          this.populateResults();
        }
        return true;
    }
  };

  /**
   * Starts a search ig search terms are provided.
   */
  Drupal.jsCH.prototype.populateResults = function () {
    //If no value in the textfield, do not search for results.
    if (!this.input.value.length) {
      return false;
    }
    // Do search
    this.db.owner = this;
    this.db.search(this.input.value);
  };

  /**
   * Here we deviate from the base handling of autocomplete and more closely
   * align with AHAH for simplicity and theming of our results. Matches represents
   * a rendered html output of the matches (rather than an array of individual
   * matches).
   */
  Drupal.jsCH.prototype.found = function (matches) {
    $('#' + this.resultsId).empty();
    // If no value in the textfield, do not show the results.
    if (!this.input.value.length) {
      return false;
    }
    $('#' + this.resultsId).append(matches);
  };

  Drupal.jsCH.prototype.setStatus = function (status) {
    switch (status) {
      case 'begin':
        $(this.input).addClass('throbbing');
        break;
      case 'cancel':
      case 'error':
      case 'found':
        $(this.input).removeClass('throbbing');
        break;
    }
  };

})(jQuery);
