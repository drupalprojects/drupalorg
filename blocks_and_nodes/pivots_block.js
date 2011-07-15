Drupal.behaviors.pivotsBlock = function (context) {
  var data = $('.pivots-block-list', context).attr('id').split(':'),
    pivot_id = data[0],
    ga_data = data[1];
  _gaq.push(['_trackEvent', 'PivotsPageview_' + pivot_id, ga_data]);

  $('.pivots-block-item', context).click(function () {
    var data = $(this, context).attr('id').split(':'),
      pivot_id = data[0],
      ga_data = data[1];
    _gaq.push(['_trackEvent', 'PivotsClick_' + pivot_id, ga_data]);
  });

  $('#pivots-block-button', context).click(function () {
    var pattern = /^http(s)?:\/\/drupal\.org\/project\/\w+$/,
      suggestion = $('#pivots-block-suggestion', context).val(),
      data, pivot_id, source_nid;
    while (suggestion && !suggestion.match(pattern)) {
      suggestion = window.prompt('To prevent spamming, please suggest a related project using its URL starts with http://drupal.org/project/*. Thank you.');
    }
    if (suggestion) {
      data = $(this, context).attr('name').split(':');
      pivot_id = data[0];
      source_nid = data[1];
      _gaq.push(['_trackEvent', 'PivotsSuggest_' + pivot_id, source_nid + '_' + suggestion]);
      $('#pivots-block-suggestion').val('');
      window.alert('Thank you for suggesting a related project. All suggestions will be aggregated and updated to the results soon.');
    }
  });
};
