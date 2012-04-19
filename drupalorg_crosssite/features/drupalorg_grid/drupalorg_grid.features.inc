<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function drupalorg_grid_imagecache_default_presets() {
  $items = array(
    'grid-1' => array(
      'presetname' => 'grid-1',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '60',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-10' => array(
      'presetname' => 'grid-10',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '780',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-11' => array(
      'presetname' => 'grid-11',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '860',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-12' => array(
      'presetname' => 'grid-12',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '940',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-2' => array(
      'presetname' => 'grid-2',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '140',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-3' => array(
      'presetname' => 'grid-3',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '220',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-4' => array(
      'presetname' => 'grid-4',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-5' => array(
      'presetname' => 'grid-5',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '380',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-6' => array(
      'presetname' => 'grid-6',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '460',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-7' => array(
      'presetname' => 'grid-7',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '540',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-8' => array(
      'presetname' => 'grid-8',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '620',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'grid-9' => array(
      'presetname' => 'grid-9',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '700',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
