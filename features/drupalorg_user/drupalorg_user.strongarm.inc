<?php
/**
 * @file
 * drupalorg_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalorg_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_drupalorg_email_verified_body';
  $strongarm->value = 'Thanks for verifying your email address on [site:name], [user:name]! What comes next?

Fill out your profile to help people learn a bit more about you, your interests, and areas you can help make Drupal even better: [user:edit-url]

Your new account has some limitations until you are confirmed. You can learn more about how to become a confirmed user here: https://www.drupal.org/drupalorg/docs/user-accounts/become-a-confirmed-user

Here are some handy links to help you get started:

---------------------
Build Your Skillset
---------------------

Get started with Drupal: https://www.drupal.org/start

Find a hosting provider for your website: https://www.drupal.org/hosting

Learn more with professional training: https://www.drupal.org/training-services

Attend a DrupalCon or a Global Training Day: https://assoc.drupal.org/drupalcon

---------------------
Make Friends & Find Mentors
---------------------

Meet our community https://www.drupal.org/community and the Drupal Association https://drupal.org/association

Learn Drupal’s values and principles: https://www.drupal.org/about/values-and-principles

Get Involved with the project: https://www.drupal.org/getting-involved

Find local user group near you: https://groups.drupal.org

Attend an upcoming meetup, camp, or DrupalCon! https://groups.drupal.org/events

Join the conversation: Get on IRC (https://www.drupal.org/irc) to meet the people behind Drupal
Visit #drupal for general chit-chat
Visit #drupal-support if you need some guidance
Visit #drupal-contribute if you want to contribute to Drupal and see what people are working on

---------------------
Stay Up To Date
---------------------

Follow @Drupal https://twitter.com/drupal and @DrupalAssoc https://twitter.com/DrupalAssoc on Twitter

Find us on Facebook: https://www.facebook.com/pages/Drupal/8427738891

Subscribe to Drupal Newsletters by updating preferences on your profile at [user:edit-url]

Add the Drupal project to your LinkedIn experience: https://www.linkedin.com/company/drupal-project

Become a Drupal Association Member https://drupal.org/association/support - and support community initiatives like maintaining the technical infrastructure of the project on Drupal.org, community grants, and the organization of DrupalCon events and DrupalCon scholarships and grants.

We’re glad to have you in the community. Thanks for joining the Drupal family.';
  $export['user_mail_drupalorg_email_verified_body'] = $strongarm;

  return $export;
}
