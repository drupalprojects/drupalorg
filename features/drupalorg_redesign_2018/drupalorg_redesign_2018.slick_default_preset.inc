<?php
/**
 * @file
 * drupalorg_redesign_2018.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function drupalorg_redesign_2018_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = '3xcarousel';
  $preset->label = '3xCarousel';
  $preset->breakpoints = 2;
  $preset->skin = '';
  $preset->options = array(
    'optimized' => 1,
    'general' => array(
      'normal' => 'grid-4-2x',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => TRUE,
      'asNavFor' => '',
      'arrows' => FALSE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="Previous" tabindex="0" role="button">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="Next" tabindex="0" role="button">Next</button>',
      'dots' => TRUE,
      'dotsClass' => 'slick-dots',
      'focusOnSelect' => FALSE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 5,
      'slide' => '',
      'slidesToShow' => 1,
      'swipeToSlide' => TRUE,
    ),
    'responsives' => array(
      'responsive' => array(
        0 => array(
          'breakpoint' => 960,
          'unslick' => FALSE,
          'settings' => array(
            'slidesPerRow' => 3,
            'slidesToShow' => 3,
          ),
        ),
        1 => array(
          'breakpoint' => 640,
          'unslick' => FALSE,
          'settings' => array(
            'arrows' => FALSE,
            'dots' => TRUE,
            'slidesPerRow' => 2,
            'slidesToShow' => 2,
          ),
        ),
      ),
    ),
  );
  $export['3xcarousel'] = $preset;

  return $export;
}
