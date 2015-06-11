<?php

/**
 * Implementation of hook_content_default_fields().
 */
function drupalorg_book_listings_content_default_fields() {
  $fields = array();

  // Exported field: field_book_description
  $fields['book_listing-field_book_description'] = array(
    'field_name' => 'field_book_description',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_book_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Book description',
      'weight' => '8',
      'description' => 'Full description of the book\'s content. Do not include copyrighted information here without permission!',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_book_isbn_10
  $fields['book_listing-field_book_isbn_10'] = array(
    'field_name' => 'field_book_isbn_10',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '10',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '10',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_book_isbn_10][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'ISBN-10',
      'weight' => '6',
      'description' => 'Note: The ISBN-10 is also the Amazon ID (ASIN) for books. It is used to build the Amazon purchase links.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_book_isbn_13
  $fields['book_listing-field_book_isbn_13'] = array(
    'field_name' => 'field_book_isbn_13',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '14',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '14',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_book_isbn_13][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'ISBN-13',
      'weight' => '5',
      'description' => 'All books have an ISBN-13, which is the new standard for book identification.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_book_listing_authors
  $fields['book_listing-field_book_listing_authors'] = array(
    'field_name' => 'field_book_listing_authors',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_book_listing_authors][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Authors',
      'weight' => 0,
      'description' => 'Enter list of authors\' full names (as shown by publisher), with each one linked to that author\'s Drupal.org user profile. Include a title attribute on each link showing the Drupal.org username; e.g., <code>&lt;a href=&quot;/user/1773&quot; title=&quot;emmajane | drupal.org&quot;&gt;Emma Jane Hogbin&lt;/a&gt;</code>',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_book_listing_date
  $fields['book_listing-field_book_listing_date'] = array(
    'field_name' => 'field_book_listing_date',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '7',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '7',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_book_listing_date][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Publication date',
      'weight' => '2',
      'description' => 'Enter the publication year and month in the format 2012-05',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_book_page_count
  $fields['book_listing-field_book_page_count'] = array(
    'field_name' => 'field_book_page_count',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'fr_0',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'fr_0',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '40',
    'max' => '10000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_book_page_count][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Page count',
      'weight' => '3',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_book_purchase_link
  $fields['book_listing-field_book_purchase_link'] = array(
    'field_name' => 'field_book_purchase_link',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => 'nofollow',
      'class' => 'order_link',
      'title' => 'Order directly from the publisher',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => '',
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Direct purchase link',
      'weight' => '7',
      'description' => 'This field is only for books published by Packt publishing, which donates a portion of sales of Drupal-related books to the Drupal Association.
<strong>URL:</strong> http://www.packtpub.com/drupal-7-webform-popular-contributed-modules-cookbook/book',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_book_subtitle
  $fields['book_listing-field_book_subtitle'] = array(
    'field_name' => 'field_book_subtitle',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '200',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '80',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_book_subtitle][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sub-title',
      'weight' => '-1',
      'description' => 'If the book has a "sub-title", add it in this field. E.g. Book title: "Cracking Drupal" has sub-title "A Drop in the Bucket", which in the Views display is shown on a second line, below the title.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_cover_image
  $fields['book_listing-field_cover_image'] = array(
    'field_name' => 'field_cover_image',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'grid-2_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'grid-3_imagelink',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png jpg jpeg',
      'file_path' => 'book_covers',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '1024K',
      'max_filesize_per_node' => '1024K',
      'max_resolution' => '800x800',
      'min_resolution' => '0',
      'alt' => 'Cover image for this book',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'default_book-cover.png',
        'filepath' => 'files/imagefield_default_images/default_book-cover.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'files/imagefield_default_images/default_book-cover.png',
        'filesize' => 20457,
        'uid' => '628196',
        'status' => 1,
        'timestamp' => 1332943468,
        'fid' => '4115571',
      ),
      'use_default_image' => 1,
      'label' => 'Cover image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_official_website
  $fields['book_listing-field_official_website'] = array(
    'field_name' => 'field_official_website',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => 'nofollow',
      'class' => '',
      'title' => 'A book’s official website may contain links to download errata, code used in the book, etc.',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'value',
    'title_value' => 'Official website for this book',
    'enable_tokens' => '',
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '4',
      'description' => 'If the book has a special website, enter it here; e.g. http://crackingdrupal.com is a site produced by Greg Knaddison, the author of "Cracking Drupal". These sites might have published errata or code to download, etc.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_publisher
  $fields['book_listing-field_publisher'] = array(
    'field_name' => 'field_publisher',
    'type_name' => 'book_listing',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_publisher][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Publisher',
      'weight' => '1',
      'description' => 'The listed publisher of the book.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Authors');
  t('Book description');
  t('Cover image');
  t('Direct purchase link');
  t('ISBN-10');
  t('ISBN-13');
  t('Page count');
  t('Publication date');
  t('Publisher');
  t('Sub-title');
  t('Website');

  return $fields;
}
