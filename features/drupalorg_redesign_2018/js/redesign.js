
(function ($) {

  /**
  * This script transforms a set of fieldsets into a stack of vertical
  * tabs. Another tab pane can be selected by clicking on the respective
  * tab.
  *
  * Each tab may have a summary which can be updated by another
  * script. For that to work, each fieldset has an associated
  * 'verticalTabCallback' (with jQuery.data() attached to the fieldset),
  * which is called every time the user performs an update to a form
  * element inside the tab pane.
  */
  Drupal.behaviors.redesign = {
    attach: function (context) {

      if ($('.d-hero', context).length > 0) {

        for (i=0; i<6; i++) {
          TweenMax.to("#start"+i, 6, {
            morphSVG:"#end"+i,
            yoyo:true,
            repeat:-1,
            repeatDelay: 0,
            ease:Power2.easeInOut
          });
        }

        $('#feel-the-wave').wavify({
          height: 300,
          bones: 5,
          amplitude: 120,
          speed: .15
        });

        $('#feel-the-wave-two').wavify({
          height: 200,
          bones: 4,
          amplitude: 80,
          speed: .20
        });

        $('#feel-the-wave-three').wavify({
          height: 150,
          bones: 4,
          amplitude: 20,
          speed: .25
        });

      }

      if ($('.d-focus', context).length > 0) {
        $('.d-focus').parent('.container-inner').addClass('h-focus-wrapper');
      }

      var $personas = $('.d-persona', context);
      if ($personas.length > 0) {
        var end = null;
        var start = null;
        var bgColor = "#0464A5";
        var brightBlue = "#0678BE";

        $personas.mouseenter(function (e) {
          var $start = $(this).find('.start');
          var $end = $(this).find('.end');
          var $ico = $(this).find('.field-name-field-cta-graphic').find('img');
          start = $start;
          end = $end;
          bgColor = $start.css('fill');
          TweenMax.to($start, 1, { morphSVG:$end, fill:brightBlue, ease: Elastic.easeOut.config(1.2, 0.5)});
          TweenMax.to($ico, 1, { rotation: 19, scale: 0.7, ease: Elastic.easeOut.config(1.2, 0.5)});
        });
        $personas.mouseleave(function (e) {
          var $start = $(this).find('.start');
          var $end = $(this).find('.end');
          var $ico = $(this).find('.field-name-field-cta-graphic').find("img");
          if (start) {
            TweenMax.to($start, 1, { morphSVG:start, fill:bgColor, ease: Elastic.easeOut.config(1.2, 0.5)});
            TweenMax.to($ico, 1, { rotation: 0, scale: 1, ease: Elastic.easeOut.config(1.2, 0.5)});
          }
        });
      }

      var $randomShapes = $('.field-collection-item-field-infographics.h-animate', context);
      if ($randomShapes.length > 0) {

        var end = null;
        var start = null;

        $randomShapes.mouseenter(function (e) {
          var $start = $(this).find('.start');
          var $end = $(this).find('.end');
          var $ico = $(this).find('.field-name-field-cta-graphic').find('img');
          start = $start;
          end = $end;
          TweenMax.to($start, 1, { morphSVG:$end, ease: Elastic.easeOut.config(1.2, 0.5)});
          TweenMax.to($ico, 1, { scale: 1.1, ease: Elastic.easeOut.config(1.2, 0.5)});
        });
        $randomShapes.mouseleave(function (e) {
          var $ico = $(this).find('.field-name-field-cta-graphic').find('img');
          var $start = $(this).find('.start');
          var $end = $(this).find('.end');
          if (start) {
            TweenMax.to($start, 1, { morphSVG:start, ease: Elastic.easeOut.config(1.2, 0.5)});
            TweenMax.to($ico, 1, { scale: 1, ease: Elastic.easeOut.config(1.2, 0.5)});
          }
        });
      }

    }

  };

})(jQuery);
