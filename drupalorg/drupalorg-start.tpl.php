<div id="getting-started" class="grid-12 alpha omega">
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header1.png" alt="Download Drupal" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header2.png" alt="Extend Drupal" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header3.png" alt="Documentation" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header4.png" alt="Get Support" />
</div>
<div class="grid-3 alpha">
  <div class="narrow-box">
    <p>To get started with Drupal, you'll need to install <a href="/project/drupal">Drupal core</a>, the base system files.</p> 
    <?php print $core_download_button; ?>
    <p>Drupal 7 is recommended for most new websites. A large number of modules and themes are already available for it.</p>
    <p>Many Drupal sites currently run on <a href="/project/drupal">Drupal 6</a>.</p>
    <h5>Installation Profiles</h5>
    <p>Drupal <a href="/project/installation+profiles">Installation profiles</a> are pre-packaged website solutions for specific use cases. They include Drupal core as well as additional modules. More Drupal 7 installation profiles will become available in the near future.</p>
  </div>
</div>
<div class="grid-3">
  <div class="narrow-box">
    <p>Download hundreds of modules to customize and extend your site.</p>
    <div class="narrow-box-list">
      <h5 class="lined">Most popular modules</h5>
      <?php print $most_popular_modules; ?>
      <a href="/project/modules" class="all">All modules</a>
    </div><!--/narrow-box-list-->
    <div class="narrow-box-list">
      <h5 class="lined">Most popular themes</h5>
      <?php print $most_popular_themes; ?>
      <a href="/project/themes" class="all">All themes</a>
    </div><!--/narrow-box-list-->
    <div class="narrow-box-list">
      <h5 class="lined">Translations</h5>
      <ul>
        <?php print $drupalorg_featured_translations; ?>
      </ul>
      <a href="http://localize.drupal.org/" class="all">All translations</a>
    </div><!--/narrow-box-list-->
  </div>
</div>
<div class="grid-3">
  <div class="narrow-box">
    <p>Want more information before you begin using Drupal? Our extensive documentation will tell you how.</p>
    <div class="narrow-box-list">
      <h5 class="lined">Most popular guides</h5>
      <ul>
        <li><a href="/documentation/install">Installation guide</a></li>
        <li><a href="/documentation/build">Site building guide</a></li>
        <li><a href="/documentation/theme">Theming guide</a></li>
        <li><a href="/documentation/understand">Understanding Drupal</a></li>
        <li><a href="/documentation/structure">Structure guide</a></li>
      </ul>
      <a href="/documentation" class="all">All documentation</a>
    </div><!--/narrow-box-list-->
    <div class="narrow-box-list">
      <h5 class="lined">Drupal books</h5>
      <p><a href="/books"><img src="<?php print url(drupal_get_path('module', 'drupalorg') . '/images/books-d7.png'); ?>" alt="Drupal book covers"></a></p>
      <p>There are many <a href="/books">Drupal books</a> available.</p>
    </div><!--/narrow-box-list-->
  </div>
</div>
<div class="grid-3 omega">
  <div class="narrow-box">
    <p>Ask questions and get answers in <a href="/forum">Forums</a>.</p>
    <p>Get quick responses and friendly chat in the <a href="/irc">IRC channels</a>.</p>
    <p>Find professional Drupal service providers in the <a href="/marketplace">Marketplace</a> directory.</p>
    <p>Find more ways to connect on the <a href="/community">Community and Support page</a>.</p>
  </div>
</div>
