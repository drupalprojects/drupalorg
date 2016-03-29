<?php
/**
 * @file
 * drupalorg_wysiwyg.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function drupalorg_wysiwyg_ckeditor_profile_defaults() {
  $data = array(
    'Drupalorg' => array(
      'name' => 'Drupalorg',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\'],
    [\'Bold\',\'Italic\',\'Strike\',\'Format\', \'Table\'],
    [\'Image\',\'Link\',\'Unlink\',\'Blockquote\'],
    [\'NumberedList\',\'BulletedList\',\'Templates\', \'CodeSnippet\' ]
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => '#9498C6',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'codesnippet' => array(
            'name' => 'codesnippet',
            'desc' => 'Plugin file: codesnippet',
            'path' => '%plugin_dir_extra%codesnippet/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'counter' => array(
            'name' => 'counter',
            'desc' => 'Plugin to count symbols, symbols without blanks and words',
            'path' => '%plugin_dir%counter/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'image' => array(
            'name' => 'image',
            'desc' => 'Plugin file: image',
            'path' => '%plugin_dir_extra%image/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'lineutils' => array(
            'name' => 'lineutils',
            'desc' => 'Plugin file: lineutils',
            'path' => '%plugin_dir_extra%lineutils/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'mediaembed' => array(
            'name' => 'mediaembed',
            'desc' => 'Plugin for embedding HTML snippets',
            'path' => '%plugin_dir%mediaembed/',
            'buttons' => array(
              'MediaEmbed' => array(
                'label' => 'MediaEmbed',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'prism' => array(
            'name' => 'prism',
            'desc' => 'Plugin file: prism',
            'path' => '%plugin_dir_extra%prism/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'widget' => array(
            'name' => 'widget',
            'desc' => 'Plugin file: widget',
            'path' => '%plugin_dir_extra%widget/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        1 => 'Filtered HTML',
        3 => 'Full HTML',
      ),
    ),
  );
  return $data;
}
