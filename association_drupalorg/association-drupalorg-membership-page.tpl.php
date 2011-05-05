<h2>Join the Drupal Association</h2>

<div class="grid-8 alpha">
  <p>Purchase or renew a Drupal Association membership:</p>
  <ul>
    <li><a href="<?php print $individual_url; ?>">Buy an individual membership</a> for €22, approx $33</li>
    <li><a href="<?php print $organization_url; ?>">Buy an organization membership</a> for €73, approx $108</li>
  </ul>

  <h3>Membership benefits</h3>

  <h4>1. Membership directory listing</h4>
  <p>Members are listed in the public membership directories. Members who join or renew are listed in the Drupal Association's annual report.</p>
  <ul>
    <li><a href= "/civicrm/profile?reset=1&force=1&gid=8&search=0&crmRowCount=10000">Directory of individual memberships</a></li>
    <li><a href= "/civicrm/profile?reset=1&force=1&gid=4&search=0&crmRowCount=10000">Directory of organization memberships</a></li>
  </ul>

  <h4>2. Membership badges</h4>
  <p>Members are granted free use of the Drupal Association membership badges while they remain active members. Members can put it on their websites, blogs, etc. A badge will also show in their Drupal.org user profile.</p>

  <h4>3. Drupal marketplace</h4>
  <p>Organization members who have contributed to Drupal can be listed in the <a href="http://drupal.org/marketplace-preview">Drupal marketplace</a>.</p>

  <h3>Where does it go?</h3>
  <p>The Drupal association can not take credit for the amazing success of the Drupal project, but will highlight the success of the community in it's efforts to keep supporting the project. Your membership makes the Drupal.org infrastructure possible and supports:</p>

  <h4>Community initiatives:</h4>
  <ul>
    <li><a href="http://groups.drupal.org/drupalorg-redesign-plan-drupal-association">Drupal.org redesign</a></li>
    <li><a href="http://drupal.org/community-initiatives/git">Drupal.org's migration to Git</a></li>
    <li>Upgrading the Drupal.org infrastructure</li>
    <li><a href="http://drupalcon.org" alt="DrupalCons">DrupalCons</a> and Drupal camps in cities around the world</li>
  </ul>
</div>

<div class="grid-4 omega">
  <?php if (user_is_logged_in()) { ?>
    <h3 class="top">Your membership status</h3>
    <?php foreach ($memberships as $membership) { ?>
      <p><?php print $membership; ?></p>
    <?php } ?>
  <?php } ?>

  <?php /* todo: Want to give more? */ ?>

  <h3<?php if (!user_is_logged_in()) { ?> class="top"<?php } ?>>Association support in numbers</h3>
  <?php /* todo: Automate */ ?>
  <ul>
    <li><em>2,881 attendees</em> at <a href="http://chicago2011.drupal.org">DrupalCon Chicago</a></li>
    <li><a href="http://drupal.org/">Drupal.org</a> server infrastructure for <em>578,400+ people</em> and <em>9,384+ modules</em></li>
    <li>Migration to Git to support <em>thousands of commits per week</em></li>
  </ul>

  <h3>Have any questions?</h3>
  <ul class="flat">
    <li><a href="/about/faq">Freqently asked questions</a></li>
    <li><a href="/contact">Contact us</a></li>
  </ul>
</div>
