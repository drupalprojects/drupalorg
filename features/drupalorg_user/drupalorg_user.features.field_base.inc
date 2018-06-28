<?php
/**
 * @file
 * drupalorg_user.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalorg_user_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_areas_of_expertise'.
  $field_bases['field_areas_of_expertise'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_areas_of_expertise',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'areas_of_expertise',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_bio'.
  $field_bases['field_bio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bio',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_contributed'.
  $field_bases['field_contributed'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contributed',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'patches' => 'I contributed Drupal patches',
        'modules' => 'I contributed Drupal modules',
        'themes' => 'I contributed Drupal themes',
        'profiles' => 'I contributed Drupal installation profiles',
        'issues' => 'I contributed to Drupal issue queues',
        'drupalorg' => 'I contributed to Drupal.org',
        'documentation' => 'I contributed Drupal documentation',
        'translations' => 'I contributed Drupal translations',
        'drupalcon' => 'I helped organize DrupalCon',
        'tests' => 'I contributed Automated tests',
        'applications' => 'I reviewed Project applications',
        'forums' => 'I help in the Drupal support forums',
        'services' => 'I provide Drupal-related services',
        'irc' => 'I give support on IRC',
        'mentor' => 'I help mentor new contributors',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_country'.
  $field_bases['field_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'AF' => 'Afghanistan',
        'AX' => 'Åland Islands',
        'AL' => 'Albania',
        'DZ' => 'Algeria',
        'AS' => 'American Samoa',
        'AD' => 'Andorra',
        'AO' => 'Angola',
        'AI' => 'Anguilla',
        'AQ' => 'Antarctica',
        'AG' => 'Antigua and Barbuda',
        'AR' => 'Argentina',
        'AM' => 'Armenia',
        'AW' => 'Aruba',
        'AU' => 'Australia',
        'AT' => 'Austria',
        'AZ' => 'Azerbaijan',
        'BS' => 'Bahamas',
        'BH' => 'Bahrain',
        'BD' => 'Bangladesh',
        'BB' => 'Barbados',
        'BY' => 'Belarus',
        'BE' => 'Belgium',
        'BZ' => 'Belize',
        'BJ' => 'Benin',
        'BM' => 'Bermuda',
        'BT' => 'Bhutan',
        'BO' => 'Bolivia',
        'BA' => 'Bosnia and Herzegovina',
        'BW' => 'Botswana',
        'BV' => 'Bouvet Island',
        'BR' => 'Brazil',
        'IO' => 'British Indian Ocean Territory',
        'VG' => 'British Virgin Islands',
        'BN' => 'Brunei',
        'BG' => 'Bulgaria',
        'BF' => 'Burkina Faso',
        'BI' => 'Burundi',
        'KH' => 'Cambodia',
        'CM' => 'Cameroon',
        'CA' => 'Canada',
        'CV' => 'Cape Verde',
        'BQ' => 'Caribbean Netherlands',
        'KY' => 'Cayman Islands',
        'CF' => 'Central African Republic',
        'TD' => 'Chad',
        'CL' => 'Chile',
        'CN' => 'China',
        'CX' => 'Christmas Island',
        'CC' => 'Cocos (Keeling) Islands',
        'CO' => 'Colombia',
        'KM' => 'Comoros',
        'CG' => 'Republic of the Congo',
        'CD' => 'DR of the Congo',
        'CK' => 'Cook Islands',
        'CR' => 'Costa Rica',
        'HR' => 'Croatia',
        'CU' => 'Cuba',
        'CW' => 'Curaçao',
        'CY' => 'Cyprus',
        'CZ' => 'Czech Republic',
        'DK' => 'Denmark',
        'DJ' => 'Djibouti',
        'DO' => 'Dominican Republic',
        'DM' => 'Dominica',
        'EC' => 'Ecuador',
        'EG' => 'Egypt',
        'SV' => 'El Salvador',
        'GQ' => 'Equatorial Guinea',
        'ER' => 'Eritrea',
        'EE' => 'Estonia',
        'ET' => 'Ethiopia',
        'FK' => 'Falkland Islands',
        'FO' => 'Faroe Islands',
        'FJ' => 'Fiji',
        'FI' => 'Finland',
        'FR' => 'France',
        'GF' => 'French Guiana',
        'PF' => 'French Polynesia',
        'TF' => 'French Southern Territories',
        'GA' => 'Gabon',
        'GM' => 'The Gambia',
        'GE' => 'Georgia',
        'DE' => 'Germany',
        'GH' => 'Ghana',
        'GI' => 'Gibraltar',
        'GR' => 'Greece',
        'GL' => 'Greenland',
        'GD' => 'Grenada',
        'GP' => 'Guadeloupe',
        'GU' => 'Guam',
        'GT' => 'Guatemala',
        'GG' => 'Guernsey',
        'GW' => 'Guinea-Bissau',
        'GN' => 'Guinea',
        'GY' => 'Guyana',
        'HT' => 'Haiti',
        'HM' => 'Heard Island and McDonald Islands',
        'HN' => 'Honduras',
        'HK' => 'Hong Kong',
        'HU' => 'Hungary',
        'IS' => 'Iceland',
        'IN' => 'India',
        'ID' => 'Indonesia',
        'IR' => 'Iran',
        'IQ' => 'Iraq',
        'IE' => 'Ireland',
        'IM' => 'Isle of Man',
        'IL' => 'Israel',
        'IT' => 'Italy',
        'CI' => 'Ivory Coast',
        'JM' => 'Jamaica',
        'JP' => 'Japan',
        'JE' => 'Jersey',
        'JO' => 'Jordan',
        'KZ' => 'Kazakhstan',
        'KE' => 'Kenya',
        'KI' => 'Kiribati',
        'XK' => 'Kosovo',
        'KW' => 'Kuwait',
        'KG' => 'Kyrgyzstan',
        'LA' => 'Laos',
        'LV' => 'Latvia',
        'LB' => 'Lebanon',
        'LS' => 'Lesotho',
        'LR' => 'Liberia',
        'LY' => 'Libya',
        'LI' => 'Liechtenstein',
        'LT' => 'Lithuania',
        'LU' => 'Luxembourg',
        'MO' => 'Macau',
        'MK' => 'Macedonia',
        'MG' => 'Madagascar',
        'MW' => 'Malawi',
        'MY' => 'Malaysia',
        'MV' => 'Maldives',
        'ML' => 'Mali',
        'MT' => 'Malta',
        'MH' => 'Marshall Islands',
        'MQ' => 'Martinique',
        'MR' => 'Mauritania',
        'MU' => 'Mauritius',
        'YT' => 'Mayotte',
        'MX' => 'Mexico',
        'FM' => 'Micronesia',
        'MD' => 'Moldova',
        'MC' => 'Monaco',
        'MN' => 'Mongolia',
        'ME' => 'Montenegro',
        'MS' => 'Montserrat',
        'MA' => 'Morocco',
        'MZ' => 'Mozambique',
        'MM' => 'Myanmar',
        'NA' => 'Namibia',
        'NR' => 'Nauru',
        'NP' => 'Nepal',
        'AN' => 'Netherlands Antilles',
        'NL' => 'Netherlands',
        'NC' => 'New Caledonia',
        'NZ' => 'New Zealand',
        'NI' => 'Nicaragua',
        'NG' => 'Nigeria',
        'NE' => 'Niger',
        'NU' => 'Niue',
        'NF' => 'Norfolk Island',
        'KP' => 'North Korea',
        'MP' => 'Northern Mariana Islands',
        'NO' => 'Norway',
        'OM' => 'Oman',
        'PK' => 'Pakistan',
        'PW' => 'Palau',
        'PS' => 'Palestine',
        'PA' => 'Panama',
        'PG' => 'Papua New Guinea',
        'PY' => 'Paraguay',
        'PE' => 'Peru',
        'PH' => 'Philippines',
        'PN' => 'Pitcairn',
        'PL' => 'Poland',
        'PT' => 'Portugal',
        'PR' => 'Puerto Rico',
        'QA' => 'Qatar',
        'RE' => 'Réunion',
        'RO' => 'Romania',
        'RU' => 'Russia',
        'RW' => 'Rwanda',
        'BL' => 'Saint Barthélemy',
        'SH' => 'Saint Helena',
        'KN' => 'Saint Kitts and Nevis',
        'LC' => 'Saint Lucia',
        'MF' => 'Saint Martin (French)',
        'PM' => 'Saint Pierre and Miquelon',
        'VC' => 'Saint Vincent and the Grenadines',
        'WS' => 'Samoa',
        'SM' => 'San Marino',
        'ST' => 'São Tomé and Príncipe',
        'SA' => 'Saudi Arabia',
        'SN' => 'Senegal',
        'RS' => 'Serbia',
        'SC' => 'Seychelles',
        'SL' => 'Sierra Leone',
        'SG' => 'Singapore',
        'SX' => 'Sint Maarten (Dutch)',
        'SK' => 'Slovakia',
        'SI' => 'Slovenia',
        'SB' => 'Solomon Islands',
        'SO' => 'Somalia',
        'ZA' => 'South Africa',
        'GS' => 'South Georgia and the South Sandwich Islands',
        'KR' => 'South Korea',
        'SS' => 'South Sudan',
        'ES' => 'Spain',
        'LK' => 'Sri Lanka',
        'SD' => 'Sudan',
        'SR' => 'Suriname',
        'SJ' => 'Svalbard and Jan Mayen',
        'SZ' => 'Swaziland',
        'SE' => 'Sweden',
        'CH' => 'Switzerland',
        'SY' => 'Syria',
        'TW' => 'Taiwan',
        'TJ' => 'Tajikistan',
        'TZ' => 'Tanzania',
        'TH' => 'Thailand',
        'TL' => 'Timor-Leste',
        'TG' => 'Togo',
        'TK' => 'Tokelau',
        'TO' => 'Tonga',
        'TT' => 'Trinidad and Tobago',
        'TN' => 'Tunisia',
        'TR' => 'Turkey',
        'TM' => 'Turkmenistan',
        'TC' => 'Turks and Caicos Islands',
        'TV' => 'Tuvalu',
        'VI' => 'U.S. Virgin Islands',
        'UG' => 'Uganda',
        'UA' => 'Ukraine',
        'AE' => 'United Arab Emirates',
        'GB' => 'United Kingdom',
        'UM' => 'United States Minor Outlying Islands',
        'US' => 'United States',
        'UY' => 'Uruguay',
        'UZ' => 'Uzbekistan',
        'VU' => 'Vanuatu',
        'VA' => 'Vatican',
        'VE' => 'Venezuela',
        'VN' => 'Vietnam',
        'WF' => 'Wallis and Futuna Islands',
        'EH' => 'Western Sahara',
        'YE' => 'Yemen',
        'YU' => 'Yugoslavia',
        'ZM' => 'Zambia',
        'ZW' => 'Zimbabwe',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_current'.
  $field_bases['field_current'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_current',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'Current organization',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_demographics'.
  $field_bases['field_demographics'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_demographics',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'ability' => 'Ability',
        'age' => 'Age',
        'ethnicity' => 'Ethnicity',
        'gender' => 'Gender',
        'gender identity' => 'Gender identity',
        'race' => 'Race',
        'religion' => 'Religion',
        'sexual orientation' => 'Sexual orientation',
        'socio-economic status' => 'Socio-economic status/class',
        'learning differences' => 'Learning differences',
        'family composition' => 'Family composition',
        'none' => 'None',
        'prefer not to answer' => 'Prefer not to answer',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_distil_ip_prob'.
  $field_bases['field_distil_ip_prob'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_ip_prob',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_distil_ip_prob_country'.
  $field_bases['field_distil_ip_prob_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_ip_prob_country',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_distil_reg_botscore'.
  $field_bases['field_distil_reg_botscore'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_reg_botscore',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_distil_reg_flagged'.
  $field_bases['field_distil_reg_flagged'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_reg_flagged',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Okay',
        1 => 'Suspicious',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_distil_reg_iid'.
  $field_bases['field_distil_reg_iid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_reg_iid',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_distil_reg_reported_ip'.
  $field_bases['field_distil_reg_reported_ip'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_reg_reported_ip',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_distil_reg_reported_ua'.
  $field_bases['field_distil_reg_reported_ua'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_reg_reported_ua',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_distil_reg_sid_ip'.
  $field_bases['field_distil_reg_sid_ip'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_reg_sid_ip',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_distil_reg_uid'.
  $field_bases['field_distil_reg_uid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_reg_uid',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_distil_reg_zid'.
  $field_bases['field_distil_reg_zid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'field_distil_reg_zid',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_drupal_contributions'.
  $field_bases['field_drupal_contributions'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_drupal_contributions',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_events_attended'.
  $field_bases['field_events_attended'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_events_attended',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'antwerp_2005' => 'Drupal conference at FOSDEM 2005 (Antwerp, Belgium)',
        'portland_2005' => 'OSCON 2005 or the off-site Drupal conference at OSCON 2005 (Portland, Oregon)',
        'amsterdam_2005' => 'DrupalCon Amsterdam 2005',
        'london_2005' => 'LinuxWorldExpo London',
        'vancouver_2006' => 'Drupal conference colocated with the Open Source CMS and Blogging Tools Summit (Vancouver, Canada)',
        'brussels_2006' => 'Drupal conference 2006 (Brussels, Belgium)',
        'oscms_2007' => 'OSCMS 2007, Sunnyvale',
        'barcelona_2007' => 'DrupalCon Barcelona 2007',
        'boston_2008' => 'DrupalCon Boston 2008',
        'szeged_hungary_2008' => 'DrupalCon Szeged, Hungary 2008',
        'dc_2009' => 'DrupalCon DC 2009',
        'paris_2009' => 'DrupalCon Paris 2009',
        'sf_2010' => 'DrupalCon San Francisco 2010',
        'copenhagen_2010' => 'DrupalCon Copenhagen 2010',
        'chicago_2011' => 'DrupalCon Chicago 2011',
        'london_2011' => 'DrupalCon London 2011',
        'denver_2012' => 'DrupalCon Denver 2012',
        'munich_2012' => 'DrupalCon Munich 2012',
        'sydney_2012' => 'DrupalCon Sydney 2013',
        'portland_2013' => 'DrupalCon Portland 2013',
        'prague_2013' => 'DrupalCon Prague 2013',
        'austin_2014' => 'DrupalCon Austin 2014',
        'amsterdam_2014' => 'DrupalCon Amsterdam 2014',
        'latinamerica_2015' => 'DrupalCon Latin America 2015',
        'losangeles_2015' => 'DrupalCon Los Angeles 2015',
        'barcelona_2015' => 'DrupalCon Barcelona 2015',
        'asia_2016' => 'DrupalCon Asia 2016',
        'neworleans_2016' => 'DrupalCon New Orleans 2016',
        'dublin_2016' => 'DrupalCon Dublin 2016',
        'baltimore_2017' => 'DrupalCon Baltimore 2017',
        'vienna_2017' => 'DrupalCon Vienna 2017',
        'nashville_2018' => 'DrupalCon Nashville 2018',
        'europe_2018' => 'Drupal Europe 2018',
        'seattle_2019' => 'DrupalCon Seattle 2019',
        'minneapolis_2020' => 'DrupalCon Minneapolis 2020',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_first_name'.
  $field_bases['field_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_first_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 120,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_gender'.
  $field_bases['field_gender'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gender',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'male' => 'male',
        'female' => 'female',
        'transgender' => 'transgender',
        'other' => 'other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_industries_worked_in'.
  $field_bases['field_industries_worked_in'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_industries_worked_in',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_irc_nick'.
  $field_bases['field_irc_nick'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_irc_nick',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_job_title'.
  $field_bases['field_job_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_job_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_languages'.
  $field_bases['field_languages'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_languages',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Abkhazian' => 'Abkhazian',
        'Afar' => 'Afar',
        'Afrikaans' => 'Afrikaans',
        'Akan' => 'Akan',
        'Albanian' => 'Albanian',
        'Amharic' => 'Amharic',
        'Arabic' => 'Arabic',
        'Armenian' => 'Armenian',
        'Assamese' => 'Assamese',
        'Avar' => 'Avar',
        'Avestan' => 'Avestan',
        'Aymara' => 'Aymara',
        'Azerbaijani' => 'Azerbaijani',
        'Bambara' => 'Bambara',
        'Bashkir' => 'Bashkir',
        'Basque' => 'Basque',
        'Belarusian' => 'Belarusian',
        'Bengali' => 'Bengali',
        'Bhutani' => 'Bhutani',
        'Bihari' => 'Bihari',
        'Bislama' => 'Bislama',
        'Bosnian' => 'Bosnian',
        'Breton' => 'Breton',
        'Bulgarian' => 'Bulgarian',
        'Burmese' => 'Burmese',
        'Cambodian' => 'Cambodian',
        'Catalan' => 'Catalan',
        'Chamorro' => 'Chamorro',
        'Chechen' => 'Chechen',
        'Chichewa' => 'Chichewa',
        'Chinese, Simplified' => 'Chinese, Simplified',
        'Chinese, Traditional' => 'Chinese, Traditional',
        'Chuvash' => 'Chuvash',
        'Cornish' => 'Cornish',
        'Corsican' => 'Corsican',
        'Cree' => 'Cree',
        'Croatian' => 'Croatian',
        'Czech' => 'Czech',
        'Danish' => 'Danish',
        'Dutch' => 'Dutch',
        'English' => 'English',
        'Esperanto' => 'Esperanto',
        'Estonian' => 'Estonian',
        'Ewe' => 'Ewe',
        'Faeroese' => 'Faeroese',
        'Filipino' => 'Filipino',
        'Fiji' => 'Fiji',
        'Finnish' => 'Finnish',
        'French' => 'French',
        'Frisian' => 'Frisian',
        'Fulah' => 'Fulah',
        'Galician' => 'Galician',
        'Georgian' => 'Georgian',
        'German' => 'German',
        'Greek' => 'Greek',
        'Greenlandic' => 'Greenlandic',
        'Guarani' => 'Guarani',
        'Gujarati' => 'Gujarati',
        'Hausa' => 'Hausa',
        'Hebrew' => 'Hebrew',
        'Herero' => 'Herero',
        'Hindi' => 'Hindi',
        'Hiri Motu' => 'Hiri Motu',
        'Hungarian' => 'Hungarian',
        'Icelandic' => 'Icelandic',
        'Igbo' => 'Igbo',
        'Indonesian' => 'Indonesian',
        'Interlingua' => 'Interlingua',
        'Interlingue' => 'Interlingue',
        'Inuktitut' => 'Inuktitut',
        'Inupiak' => 'Inupiak',
        'Irish' => 'Irish',
        'Italian' => 'Italian',
        'Japanese' => 'Japanese',
        'Javanese' => 'Javanese',
        'Kannada' => 'Kannada',
        'Kanuri' => 'Kanuri',
        'Kashmiri' => 'Kashmiri',
        'Kazakh' => 'Kazakh',
        'Kikuyu' => 'Kikuyu',
        'Kinyarwanda' => 'Kinyarwanda',
        'Kirghiz' => 'Kirghiz',
        'Kirundi' => 'Kirundi',
        'Komi' => 'Komi',
        'Kongo' => 'Kongo',
        'Korean' => 'Korean',
        'Kurdish' => 'Kurdish',
        'Kwanyama' => 'Kwanyama',
        'Laothian' => 'Laothian',
        'Latin' => 'Latin',
        'Latvian' => 'Latvian',
        'Lingala' => 'Lingala',
        'Lithuanian' => 'Lithuanian',
        'Luganda' => 'Luganda',
        'Luxembourgish' => 'Luxembourgish',
        'Macedonian' => 'Macedonian',
        'Malagasy' => 'Malagasy',
        'Malay' => 'Malay',
        'Malayalam' => 'Malayalam',
        'Maldivian' => 'Maldivian',
        'Maltese' => 'Maltese',
        'Manx' => 'Manx',
        'Maori' => 'Maori',
        'Marathi' => 'Marathi',
        'Marshallese' => 'Marshallese',
        'Moldavian' => 'Moldavian',
        'Mongolian' => 'Mongolian',
        'Nauru' => 'Nauru',
        'Navajo' => 'Navajo',
        'Ndonga' => 'Ndonga',
        'Nepali' => 'Nepali',
        'North Ndebele' => 'North Ndebele',
        'Northern Sami' => 'Northern Sami',
        'Norwegian Bokmål' => 'Norwegian Bokmål',
        'Norwegian Nynorsk' => 'Norwegian Nynorsk',
        'Occitan' => 'Occitan',
        'Old Slavonic' => 'Old Slavonic',
        'Oriya' => 'Oriya',
        'Oromo' => 'Oromo',
        'Ossetian' => 'Ossetian',
        'Pali' => 'Pali',
        'Pashto' => 'Pashto',
        'Persian' => 'Persian',
        'Polish' => 'Polish',
        'Portuguese, Brazil' => 'Portuguese, Brazil',
        'Portuguese, Portugal' => 'Portuguese, Portugal',
        'Punjabi' => 'Punjabi',
        'Quechua' => 'Quechua',
        'Rhaeto-Romance' => 'Rhaeto-Romance',
        'Romanian' => 'Romanian',
        'Russian' => 'Russian',
        'Samoan' => 'Samoan',
        'Sango' => 'Sango',
        'Sanskrit' => 'Sanskrit',
        'Sardinian' => 'Sardinian',
        'Scots Gaelic' => 'Scots Gaelic',
        'Serbian' => 'Serbian',
        'Serbo-Croatian' => 'Serbo-Croatian',
        'Sesotho' => 'Sesotho',
        'Setswana' => 'Setswana',
        'Shona' => 'Shona',
        'Sindhi' => 'Sindhi',
        'Singhalese' => 'Singhalese',
        'Siswati' => 'Siswati',
        'Slovak' => 'Slovak',
        'Slovenian' => 'Slovenian',
        'Somali' => 'Somali',
        'South Ndebele' => 'South Ndebele',
        'Spanish' => 'Spanish',
        'Sudanese' => 'Sudanese',
        'Swahili' => 'Swahili',
        'Swedish' => 'Swedish',
        'Tagalog' => 'Tagalog',
        'Tahitian' => 'Tahitian',
        'Tajik' => 'Tajik',
        'Tamil' => 'Tamil',
        'Tatar' => 'Tatar',
        'Telugu' => 'Telugu',
        'Thai' => 'Thai',
        'Tibetan' => 'Tibetan',
        'Tigrinya' => 'Tigrinya',
        'Tonga' => 'Tonga',
        'Tsonga' => 'Tsonga',
        'Turkish' => 'Turkish',
        'Turkmen' => 'Turkmen',
        'Twi' => 'Twi',
        'Uighur' => 'Uighur',
        'Ukrainian' => 'Ukrainian',
        'Urdu' => 'Urdu',
        'Uzbek' => 'Uzbek',
        'Venda' => 'Venda',
        'Vietnamese' => 'Vietnamese',
        'Welsh' => 'Welsh',
        'Wolof' => 'Wolof',
        'Xhosa' => 'Xhosa',
        'Yiddish' => 'Yiddish',
        'Yoruba' => 'Yoruba',
        'Zhuang' => 'Zhuang',
        'Zulu' => 'Zulu',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_last_name'.
  $field_bases['field_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_last_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 120,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_mentors'.
  $field_bases['field_mentors'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mentors',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'user_profile_my_mentor_list',
        ),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_notes'.
  $field_bases['field_notes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_notes',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_organization_name'.
  $field_bases['field_organization_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organization_reference'.
  $field_bases['field_organization_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'organization' => 'organization',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_organizations'.
  $field_bases['field_organizations'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organizations',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => FALSE,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_shared_account_for_an_org'.
  $field_bases['field_shared_account_for_an_org'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shared_account_for_an_org',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_social_links'.
  $field_bases['field_social_links'] = array(
    'active' => 1,
    'cardinality' => 7,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_links',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'url',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'url',
  );

  // Exported field_base: 'field_subscribe_membership'.
  $field_bases['field_subscribe_membership'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subscribe_membership',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'mc_list_id' => 'a1d014e8d3',
      'unsubscribe_action' => 'unsubscribe',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  // Exported field_base: 'field_subscribe_to'.
  $field_bases['field_subscribe_to'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subscribe_to',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'mc_list_id' => '6934bc4d06',
      'send_welcome' => 1,
      'unsubscribe_action' => 'remove',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  // Exported field_base: 'field_terms_of_service'.
  $field_bases['field_terms_of_service'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_terms_of_service',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'I have read and accept Drupal.org <a href="/terms">Terms of Service</a> and <a href="/privacy">Privacy Policy</a>',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_user_geolocation'.
  $field_bases['field_user_geolocation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_geolocation',
    'indexes' => array(
      'lat' => array(
        0 => 'lat',
      ),
      'lng' => array(
        0 => 'lng',
      ),
    ),
    'locked' => 0,
    'module' => 'geolocation',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'geolocation_latlng',
  );

  // Exported field_base: 'field_websites'.
  $field_bases['field_websites'] = array(
    'active' => 1,
    'cardinality' => 5,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_websites',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'og_user_node'.
  $field_bases['og_user_node'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'og_user_node',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'og',
      'handler_settings' => array(
        'behaviors' => array(
          'og_behavior' => array(
            'status' => TRUE,
          ),
        ),
        'membership_type' => 'og_membership_type_default',
        'target_bundles' => array(),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
