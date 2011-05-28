<div class="grid-8 alpha">
  <h2>Become an Individual Member</h2>
  <p><a href="<?php print $individual_url; ?>" class="action-button">Become an Individual Member for €22, about $30</a></p>

  <h3>Why Join?</h3>
  <p>Individual Members can show they’re an active part of the Drupal community. Memberships help pay for Drupal.org infrastructure and financing large community initiatives.</p>

  <h3>Benefits:</h3>
  <ul>
    <li><a href="/civicrm/profile?reset=1&force=1&gid=8&search=0&crmRowCount=10000">Directory of Individual Members</a> - Members are listed in our public directory of Individual Members</li>
    <li><a href="http://association.drupal.org/membership/benefits">Discounts</a> - Members receive discounts from Drupal Association partners like Zend, Varnish Software, ActiveState and Acquia.</li>
    <li>Promote - Members are listed in the <a href="http://association.drupal.org/system/files/Annual%20Report%202011%20-%20web%20short%20compressed.pdf">Drupal Association Annual Report</a>, given out at major Drupal events and online</li>
    <li><a href="http://drupal.org/image/tid/112">Membership Badge</a> - Let the world know you’re a part of the Drupal community on your Drupal.org profile and beyond</li>
    <li>First Alert - Early notice of upcoming promotional programs and Association initiatives</li>
  </ul>

  <h2>Become an Organization Member</h2>
  <p><a href="<?php print $organization_url; ?>" class="action-button">Become an Organization Member for €73, about $100</a></p>

  <h3>Why Join?</h3>
  <p>Not only does your membership support the community, but you also receive unique promotional opportunities. And, by joining, you can tout the depth of your involvement to your prospective Drupal clients.</p>

  <h3>Benefits:</h3>
  <ul>
    <li><a href="http://drupal.org/marketplace-preview">Drupal Marketplace</a> - Organization Members who have contributed to Drupal can be listed in the Drupal Marketplace, which receives 23,000 monthly visitors</li>
    <li>Advertising - Communicate contextual, relevant and value-add messaging tothe developer community with web banners on fixed, well approved areas
    <li>Get Connected - Grow your business partnerships. We’ll make introductions at business networking events, so you can accelerate your business</li>
    <li><a href="http://association.drupal.org/membership/benefits">Discounts</a> - Members receive discounts from Drupal Association partners like Zend, Varnish Software, ActiveState and Acquia.</li>
    <li><a href="/civicrm/profile?reset=1&force=1&gid=4&search=0&crmRowCount=10000">Organization Directory Listing</a> - Members are listed in our public directory of Organization Members</li>
    <li>Promote - Members are listed in the <a href="http://association.drupal.org/system/files/Annual%20Report%202011%20-%20web%20short%20compressed.pdf">Drupal Association Annual Report</a>, given out at major Drupal events and online</li>
    <li>Business-focused Newsletter - Provides updates on new promotional opportunities, Drupal Association news, and more!</li>
    <li>First Alert - Early notice of upcoming promotional programs and Association initiatives</li>
    <li><a href="http://drupal.org/image/tid/113">Membership Badge</a> - Let the world know you’re a part of the Drupal community on your Drupal.org profile and beyond</li>
  </ul>

  <h2>What else can I do?</h2>
  <p>If you would like to give more to the Association and the community, you can also make a donation, offer to be a sponsor for Drupalcon, or sponsor a local Drupal event.</p>
  <p><a href="donate" class="action-button">Donate to the Drupal Association</a></p>

  <h2>Where does it go?</h2>
  <p>The Drupal Association can not take credit for the amazing success of the Drupal project, but will highlight the success of the community in it’s efforts to keep supporting the project. Your membership makes the Drupal.org infrastructure possible and supports community initiatives:</p>
  <ul>
    <li><a href="http://groups.drupal.org/drupalorg-redesign-plan-drupal-association">Drupal.org redesign</a></li>
    <li><a href="http://drupal.org/community-initiatives/git">Drupal.org’s migration to Git</a></li>
    <li>Upgrading the Drupal.org infrastructure</li>
    <li><a href="http://drupalcon.org/">DrupalCons</a> and Drupal camps in cities around the world</a></li>
  </ul>
</div>

<div class="grid-4 omega">
  <?php if (user_is_logged_in()) { ?>
    <h3>Your membership status</h3>
    <?php foreach ($memberships as $membership) { ?>
      <p><?php print $membership; ?></p>
    <?php } ?>
  <?php } ?>

  <h3>Current membership discounts</h3>
  <p>The Drupal Association has partnered with companies like Zend, Varnish, ActiveState and Acquia to secure discounts at their stores. <a href="http://association.drupal.org/membership/benefits">See our partner discounts</a>.</p>

  <h3>Association support in numbers</h3>
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
