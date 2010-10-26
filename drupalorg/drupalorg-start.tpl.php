<div id="getting-started" class="grid-12 alpha omega">
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header1.png" alt="Download Drupal" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header2.png" alt="Extend Drupal" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header3.png" alt="Documentation" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header4.png" alt="Get Support" />
</div>
<div class="grid-3 alpha">
  <div class="narrow-box">
    <p><a href="/project/drupal">Drupal core</a> is a collection of files that you download to get started with Drupal.</p>
    <?php print $core_download_button; ?>
    <h5>Installation Profiles</h5>
    <p>Already know what site you need? Drupal's <a href="/project/installation+profiles">installation profiles</a> can help you get started with your shop, blog, or social network, providing all the modules you need in one place.</p>
    <ul>
      <?php print $drupalorg_featured_install_profiles; ?>
    </ul>
  </div>
</div>
<div class="grid-3">
  <div class="narrow-box">
    <p>Download hundreds of modules to customize and extend your site.</p>
    <div class="narrow-box-list">
      <h5 class="lined">Most Popular Modules</h5>
      <?php print $most_popular_modules; ?>
      <a href="/project/modules" class="all">All Modules</a>
    </div><!--/narrow-box-list-->
    <div class="narrow-box-list">
      <h5 class="lined">Most Popular Themes</h5>
      <?php print $most_popular_themes; ?>
      <a href="/project/themes" class="all">All Themes</a>
    </div><!--/narrow-box-list-->
    <div class="narrow-box-list">
      <h5 class="lined">Translations</h5>
      <ul>
        <?php print $drupalorg_featured_translations; ?>
      </ul>
      <a href="http://localize.drupal.org/" class="all">All Translations</a>
    </div><!--/narrow-box-list-->
  </div>
</div>
<div class="grid-3">
  <div class="narrow-box">
    <p>Want more information before you begin using Drupal? Our extensive documentation will tell you how.</p>
    <div class="narrow-box-list">
      <h5 class="lined">Most Popular Guides</h5>
      <ul>
        <li><a href="/documentation/install">Installation Guide</a></li>
        <li><a href="/documentation/build">Site Building Guide</a></li>
        <li><a href="/documentation/structure">Structure Guide</a></li>
        <li><a href="/documentation/theme">Theming Guide</a></li>
        <li><a href="/documentation/understand">Understanding Drupal</a></li>
      </ul>
      <a href="/documentation" class="all">All Documentation</a>
    </div><!--/narrow-box-list-->
    <div class="narrow-box-list">
      <h5 class="lined">Books</h5>
      <p><a href="/books"><img src="<?php print url(drupal_get_path('module', 'drupalorg') . '/images/books.png'); ?>" alt=""></a></p>
    </div><!--/narrow-box-list-->
  </div>
</div>
<div class="grid-3 omega">
  <div class="narrow-box">
    <p>Drupal's community offers a wealth of support. See more resources on our <a href="/community">Community &amp; Support</a> page.</p>
    <h5 class="lined"><a href="/forum">Forum</a></h5>
    <p>Whether you are asking questions or answering them, the forum will connect you to the community and provide the help you need.</p>
    <h5 class="lined"><a href="/irc">Chat in IRC</a></h5>
    <p>For rapid responses, check out our <acronym title="Internet Relay Chat">IRC</acronym> channels.</p>
    <h5 class="lined"><a href="/drupal-services">Services</a></h5>
    <p>For commercial support, check out our directory with service providers.</p>
  </div>
</div>
