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
      "confirmation_message" : "Thanks! You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {"tag":"EMAIL","name":"Email Address","type":"email","required":true,"default_value":"","public":true,"display_order":1,"options":{"size":25}},
        "ACCTCREATE" : 0,
        "BUSINESS" : 0,
        "CIVI_ID" : 0,
        "COMPANY" : 0,
        "COUNTRY" : 0,
        "DCEVENT" : 0,
        "DRUPNAME" : {"merge_id":4,"tag":"DRUPNAME","name":"Drupal Username (private)","type":"text","required":false,"default_value":"","public":false,"display_order":10,"options":{"size":25},"help_text":"","list_id":"6934bc4d06","_links":[{"rel":"self","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/4","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/4","method":"PATCH","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/4","method":"DELETE"}]},
        "FNAME" : {"merge_id":1,"tag":"FNAME","name":"First or Given Name","type":"text","required":true,"default_value":"Friend of Drupal","public":true,"display_order":5,"options":{"size":25},"help_text":"Tell us what name you prefer to be called","list_id":"6934bc4d06","_links":[{"rel":"self","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/1","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/1","method":"PATCH","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/1","method":"DELETE"}]},
        "FULLNAME" : 0,
        "JOBTITLE" : 0,
        "LNAME" : {"merge_id":2,"tag":"LNAME","name":"Last Name or Surname","type":"text","required":false,"default_value":"","public":true,"display_order":6,"options":{"size":25},"help_text":"","list_id":"6934bc4d06","_links":[{"rel":"self","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/2","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/2","method":"PATCH","targetSchema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us2.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us2.api.mailchimp.com\\/3.0\\/lists\\/6934bc4d06\\/merge-fields\\/2","method":"DELETE"}]},
        "MEMENDIND" : 0,
        "MEMENDORG" : 0,
        "MEMSINCEIN" : 0,
        "MEMSINCEOR" : 0,
        "MMERGE16" : 0,
        "MMERGE18" : 0,
        "MMERGE19" : 0,
        "MMERGE24" : 0,
        "MMERGE25" : 0,
        "MMERGE26" : 0,
        "MMERGE27" : 0,
        "MMERGE28" : 0,
        "ORG" : 0,
        "RECENTGIFT" : 0,
        "SFID" : 0,
        "SIGNUP" : 0,
        "SKILLLEVEL" : 0
      },
      "description" : "",
      "doublein" : 0,
      "include_interest_groups" : 1,
      "placeholder" : 1
    }
  }');
  return $items;
}
