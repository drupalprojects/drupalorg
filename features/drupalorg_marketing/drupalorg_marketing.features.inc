<?php
/**
 * @file
 * drupalorg_marketing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalorg_marketing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function drupalorg_marketing_default_mailchimp_signup() {
  $items = array();
  $items['hosting_offers'] = entity_import('mailchimp_signup', '{
    "name" : "hosting_offers",
    "mc_lists" : { "6934bc4d06" : "6934bc4d06" },
    "mode" : "1",
    "title" : "Hosting offers",
    "settings" : {
      "path" : "",
      "submit_button" : "Subscribe \\u2709\\ufe0f",
      "confirmation_message" : "Thanks! You will receive a confirmation message soon.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {"tag":"EMAIL","name":"Email Address","type":"email","required":true,"default_value":"","public":true,"display_order":1,"options":{"size":25}},
        "ACCTCREATE" : 0,
        "CIVI_ID" : 0,
        "COMPANY" : 0,
        "COUNTRY" : {"merge_id":3,"tag":"COUNTRY","name":"Location","type":"dropdown","required":true,"default_value":"","public":true,"display_order":5,"options":{"choices":["","Aaland Islands","Afghanistan","Albania","Algeria","American Samoa","Andorra","Angola","Anguilla","Antarctica","Antigua And Barbuda","Argentina","Armenia","Aruba","Australia","Austria","Azerbaijan","Bahamas","Bahrain","Bangladesh","Barbados","Belarus","Belgium","Belize","Benin","Bermuda","Bhutan","Bolivia","Bosnia and Herzegovina","Botswana","Bouvet Island","Brazil","British Indian Ocean Territory","Brunei Darussalam","Bulgaria","Burkina Faso","Burundi","Cambodia","Cameroon","Canada","Cape Verde","Cayman Islands","Central African Republic","Chad","Chile","China","Christmas Island","Cocos (Keeling) Islands","Colombia","Comoros","Congo","Cook Islands","Costa Rica","Cote D\\u0027Ivoire","Croatia","Cuba","Curacao","Cyprus","Czech Republic","Democratic Republic of the Congo","Denmark","Djibouti","Dominica","Dominican Republic","Ecuador","Egypt","El Salvador","Equatorial Guinea","Eritrea","Estonia","Ethiopia","Falkland Islands","Faroe Islands","Fiji","Finland","France","French Guiana","French Polynesia","French Southern Territories","Gabon","Gambia","Georgia","Germany","Ghana","Gibraltar","Greece","Greenland","Grenada","Guadeloupe","Guam","Guatemala","Guernsey","Guinea","Guinea-Bissau","Guyana","Haiti","Heard and Mc Donald Islands","Honduras","Hong Kong","Hungary","Iceland","India","Indonesia","Iran","Iraq","Ireland","Isle of Man","Israel","Italy","Jamaica","Japan","Jersey  (Channel Islands)","Jordan","Kazakhstan","Kenya","Kiribati","Kuwait","Kyrgyzstan","Lao People\\u0027s Democratic Republic","Latvia","Lebanon","Lesotho","Liberia","Libya","Liechtenstein","Lithuania","Luxembourg","Macau","Macedonia","Madagascar","Malawi","Malaysia","Maldives","Mali","Malta","Marshall Islands","Martinique","Mauritania","Mauritius","Mayotte","Mexico","Micronesia, Federated States of","Moldova, Republic of","Monaco","Mongolia","Montenegro","Montserrat","Morocco","Mozambique","Myanmar","Namibia","Nauru","Nepal","Netherlands","Netherlands Antilles","New Caledonia","New Zealand","Nicaragua","Niger","Nigeria","Niue","Norfolk Island","North Korea","Northern Mariana Islands","Norway","Oman","Pakistan","Palau","Palestine","Panama","Papua New Guinea","Paraguay","Peru","Philippines","Pitcairn","Poland","Portugal","Puerto Rico","Qatar","Republic of Kosovo","Reunion","Romania","Russia","Rwanda","Saint Kitts and Nevis","Saint Lucia","Saint Vincent and the Grenadines","Samoa (Independent)","San Marino","Sao Tome and Principe","Saudi Arabia","Senegal","Serbia","Seychelles","Sierra Leone","Singapore","Sint Maarten","Slovakia","Slovenia","Solomon Islands","Somalia","South Africa","South Georgia and the South Sandwich Islands","South Korea","South Sudan","Spain","Sri Lanka","St. Helena","St. Pierre and Miquelon","Sudan","Suriname","Svalbard and Jan Mayen Islands","Swaziland","Sweden","Switzerland","Syria","Taiwan","Tajikistan","Tanzania","Thailand","Timor-Leste","Togo","Tokelau","Tonga","Trinidad and Tobago","Tunisia","Turkey","Turkmenistan","Turks \\u0026 Caicos Islands","Turks and Caicos Islands","Tuvalu","Uganda","Ukraine","United Arab Emirates","United Kingdom","United States","Uruguay","USA Minor Outlying Islands","Uzbekistan","Vanuatu","Vatican City State (Holy See)","Venezuela","Vietnam","Virgin Islands (British)","Virgin Islands (U.S.)","Wallis and Futuna Islands","Western Sahara","Yemen","Zambia","Zimbabwe"]},"help_text":"","list_id":"6934bc4d06","_links":[{"rel":"self","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/3","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/3","method":"PATCH","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/3","method":"DELETE"}]},
        "DRUPNAME" : {"merge_id":4,"tag":"DRUPNAME","name":"Drupal Username (private)","type":"text","required":false,"default_value":"","public":false,"display_order":7,"options":{"size":25},"help_text":"","list_id":"6934bc4d06","_links":[{"rel":"self","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/4","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/4","method":"PATCH","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/4","method":"DELETE"}]},
        "FNAME" : {"merge_id":1,"tag":"FNAME","name":"First or Given Name","type":"text","required":true,"default_value":"Friend of Drupal","public":true,"display_order":3,"options":{"size":25},"help_text":"Tell us what name you prefer to be called","list_id":"6934bc4d06","_links":[{"rel":"self","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/1","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/1","method":"PATCH","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/1","method":"DELETE"}]},
        "FULLNAME" : 0,
        "JOBTITLE" : 0,
        "LNAME" : {"merge_id":2,"tag":"LNAME","name":"Last Name or Surname","type":"text","required":false,"default_value":"","public":true,"display_order":4,"options":{"size":25},"help_text":"","list_id":"6934bc4d06","_links":[{"rel":"self","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/2","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/2","method":"PATCH","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/2","method":"DELETE"}]},
        "SFID" : 0,
        "SKILLLEVEL" : 0
      },
      "description" : "",
      "doublein" : 0,
      "include_interest_groups" : 1,
      "placeholder" : 0
    }
  }');
  return $items;
}
