
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

      // Case studies slideshow.
      var $viewCaseStudies = $('.view-redesign-2018-case-studies .view-content', context);
      if ($viewCaseStudies.length > 0) {
        if (!$viewCaseStudies.hasClass('view-slideshow')) {

          $viewCaseStudies.addClass('view-slideshow');

          var mySiema = new Siema({
            selector: '.view-redesign-2018-case-studies .view-content',
            duration: 200,
            easing: 'ease-out',
            loop: true,
            rtl: false,
            perPage: {
              768: 2,
              1024: 3,
            }
          });

          $('<button class="btn-prev">prev</button><button class="btn-next">next</button>').insertAfter($viewCaseStudies);

          $('.btn-prev').click(function() {
            mySiema.prev();
          });

          $('.btn-next').click(function() {
            mySiema.next();
          });
        }
      };

      // Hero animation.
      if ($('.d-hero', context).length > 0) {
        // Canvas code.
        var canvas, stage, exportRoot, anim_container, dom_overlay_container, fnStartAnimation;
        function initHero() {
          canvas = document.getElementById("canvas");
          anim_container = document.getElementById("animation_container");
          dom_overlay_container = document.getElementById("dom_overlay_container");
          var comp=AdobeAn.getComposition("4F7E56806ABB4DFCB54C9E7021D97C9F");
          var lib=comp.getLibrary();
          handleComplete({},comp);
        }
        function handleComplete(evt,comp) {
          //This function is always called, irrespective of the content. You can use the variable "stage" after it is created in token create_stage.
          var lib=comp.getLibrary();
          var ss=comp.getSpriteSheet();
          exportRoot = new lib.drupalhero();
          stage = new lib.Stage(canvas);
          //Registers the "tick" event listener.
          fnStartAnimation = function() {
            stage.addChild(exportRoot);
            createjs.Ticker.setFPS(lib.properties.fps);
            createjs.Ticker.addEventListener("tick", stage);
          }
          //Code to support hidpi screens and responsive scaling.
          function makeResponsive(isResp, respDim, isScale, scaleType) {
            var lastW, lastH, lastS=1;
            window.addEventListener('resize', resizeCanvas);
            resizeCanvas();
            function resizeCanvas() {
              var w = lib.properties.width, h = lib.properties.height;
              var iw = window.innerWidth, ih=window.innerHeight;
              var pRatio = window.devicePixelRatio || 1, xRatio=iw/w, yRatio=ih/h, sRatio=1;
              if(isResp) {
                if((respDim=='width'&&lastW==iw) || (respDim=='height'&&lastH==ih)) {
                  sRatio = lastS;
                }
                else if(!isScale) {
                  if(iw<w || ih<h)
                    sRatio = Math.min(xRatio, yRatio);
                }
                else if(scaleType==1) {
                  sRatio = Math.min(xRatio, yRatio);
                }
                else if(scaleType==2) {
                  sRatio = Math.max(xRatio, yRatio);
                }
              }
              canvas.width = w*pRatio*sRatio;
              canvas.height = h*pRatio*sRatio;
              canvas.style.width = dom_overlay_container.style.width = anim_container.style.width =  w*sRatio+'px';
              canvas.style.height = anim_container.style.height = dom_overlay_container.style.height = h*sRatio+'px';
              stage.scaleX = pRatio*sRatio;
              stage.scaleY = pRatio*sRatio;
              lastW = iw; lastH = ih; lastS = sRatio;
              stage.tickOnUpdate = false;
              stage.update();
              stage.tickOnUpdate = true;
            }
          }
          makeResponsive(false,'height',false,1);
          AdobeAn.compositionLoaded(lib.properties.id);
          fnStartAnimation();
        }

        // Initialize canvas.
        initHero();

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

        $personas.find('.field-name-field-cta-link a').live('mouseover focusin click', function(e){
          var $el = $(this).closest('.d-persona');
          var $start = $el.find('.start');
          var $end = $el.find('.end');
          var $ico = $el.find('.field-name-field-cta-graphic').find('img');
          start = $start;
          end = $end;
          bgColor = $start.css('fill');
          TweenMax.to($start, 1, { morphSVG:$end, fill:brightBlue, ease: Elastic.easeOut.config(1.2, 0.5)});
          TweenMax.to($ico, 1, { rotation: 19, scale: 0.7, ease: Elastic.easeOut.config(1.2, 0.5)});
        });
        $personas.find('.field-name-field-cta-link a').live('mouseout focusout', function(e){
          var $el = $(this).closest('.d-persona');
          var $start = $el.find('.start');
          var $end = $el.find('.end');
          var $ico = $el.find('.field-name-field-cta-graphic').find("img");
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

        $randomShapes.find('.field-name-field-title a').live('mouseover focusin click', function(e){
          var $el = $(this).closest('..field-collection-item-field-infographics');
          var $start = $el.find('.start');
          var $end = $el.find('.end');
          var $ico = $el.find('.field-name-field-cta-graphic').find('img');
          start = $start;
          end = $end;
          TweenMax.to($start, 1, { morphSVG:$end, ease: Elastic.easeOut.config(1.2, 0.5)});
          TweenMax.to($ico, 1, { scale: 1.1, ease: Elastic.easeOut.config(1.2, 0.5)});
        });
        $randomShapes.find('.field-name-field-title a').live('mouseout focusout', function(e){
          var $el = $(this).closest('..field-collection-item-field-infographics');
          var $ico = $el.find('.field-name-field-cta-graphic').find('img');
          var $start = $el.find('.start');
          var $end = $el.find('.end');
          if (start) {
            TweenMax.to($start, 1, { morphSVG:start, ease: Elastic.easeOut.config(1.2, 0.5)});
            TweenMax.to($ico, 1, { scale: 1, ease: Elastic.easeOut.config(1.2, 0.5)});
          }
        });
      }

    }

  };

})(jQuery);
