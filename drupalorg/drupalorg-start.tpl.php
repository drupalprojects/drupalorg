<div id="getting-started" class="grid-12 alpha omega">
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header1.png" alt="Download Drupal" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header2.png" alt="Extend Drupal" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header3.png" alt="Documentation" />
  <img src="<?php print $theme_images_directory; ?>/gettingstarted-header4.png" alt="Get Support" />
</div>
<div class="grid-3 alpha">
  <div class="narrow-box">
    <p><a href="/project/drupal">Drupal core</a> contains the essential building blocks providing you a flexible foundation to get started with Drupal.</p>
    <?php print $core_download_button; ?>
    <p>Drupal <a href="/project/distributions">distributions</a> provide pre-configured installations, allowing you to quickly setup a fully featured Drupal site.</p>
    <a class="link-button" href="/project/distributions"><span>Find a Distribution</span></a>
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
    <p>Ask questions and get answers in <a href="/forum">our forums</a>.</p>
    <p>Get quick responses and friendly chat in the <a href="/irc">IRC channels</a>.</p>
    <p>Visit the Marketplace to find <a href="/marketplace">professional Drupal services</a> and <a href="/hosting">great Drupal hosting</a>.</p>
    <p>Find more ways to connect on the <a href="/community">Community and Support page</a>.</p>
  </div>
</div>
