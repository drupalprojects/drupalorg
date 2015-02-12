(function ($) {
  // Check Do Not Track.
  if (navigator.doNotTrack != "yes" && navigator.doNotTrack != "1" && navigator.msDoNotTrack != "1" && window.doNotTrack != "1") {
    window._pa = window._pa || {};
    var pa = document.createElement('script');
    pa.type = 'text/javascript';
    pa.async = true;
    pa.src = '//tag.perfectaudience.com/serve/54419274f6c96ed073000003.js';
    var s = document.getElementsByTagName('script')[0];
    s.parentNode.insertBefore(pa, s);
  }
})(jQuery);
