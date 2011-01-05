$(document).ready(function() {
  $('.slideshow').cycle({
    fx: 'scrollLeft',
    timeout: 7500,
    after: function() {
      $('#caption').html(this.alt);
    }    
  });
  $('#video').bind('DOMSubtreeModified', function () {
    $('object').attr('width', 690);
    $('object').attr('height', 388);
  });
});
