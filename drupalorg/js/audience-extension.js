(function () {
  // Check Do Not Track.
  if (Drupal.drupalorgCrosssite.canTrack()) {
    // Perfect Audience
    window._pa = window._pa || {};
    var pa = document.createElement('script');
    pa.type = 'text/javascript';
    pa.async = true;
    pa.src = '//tag.perfectaudience.com/serve/54419274f6c96ed073000003.js';
    var s = document.getElementsByTagName('script')[0];
    s.parentNode.insertBefore(pa, s);

    // Twitter
    !function(e,t,n,s,u,a){e.twq||(s=e.twq=function(){s.exe?s.exe.apply(s,arguments):s.queue.push(arguments);
      },s.version='1.1',s.queue=[],u=t.createElement(n),u.async=!0,u.src='//static.ads-twitter.com/uwt.js',
      a=t.getElementsByTagName(n)[0],a.parentNode.insertBefore(u,a))}(window,document,'script');
    twq('init','nw7p6'); // @Drupal
    twq('track','PageView');
    twq('init','nyk47'); // @DrupalCon
    twq('track','PageView');

    // Facebook
    !function(f,b,e,v,n,t,s)
    {if(f.fbq)return;n=f.fbq=function(){n.callMethod?
    n.callMethod.apply(n,arguments):n.queue.push(arguments)};
    if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
    n.queue=[];t=b.createElement(e);t.async=!0;
    t.src=v;s=b.getElementsByTagName(e)[0];
    s.parentNode.insertBefore(t,s)}(window, document,'script',
    'https://connect.facebook.net/en_US/fbevents.js');
    fbq('init', '576466256018464');
    fbq('track', 'PageView');

    // LinkedIn
    _linkedin_data_partner_id = "188468";
    (function () {
        var s = document.getElementsByTagName("script")[0];
        var b = document.createElement("script");
        b.type = "text/javascript";
        b.async = true;
        b.src = "https://snap.licdn.com/li.lms-analytics/insight.min.js";
        s.parentNode.insertBefore(b, s);
    })();
  }
})();
