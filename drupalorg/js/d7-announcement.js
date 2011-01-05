$(document).ready(function() {
  $('.slideshow').cycle({
    fx: 'scrollLeft',
    timeout: 7500,
    after: function() {
      $('#caption').html(this.alt);
    }    
  });
});
