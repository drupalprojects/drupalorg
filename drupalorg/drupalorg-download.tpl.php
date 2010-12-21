<p>Download Drupal core files, and extend your site with modules, themes, translations and installation profiles.</p>
<div id="download" class="node-section grid-12 alpha omega">
  <div class="grid-3 alpha core">
    <h2>Core</h2>
    <ul class="flat">
      <li class="first download-core"><?php print $core_download_button; ?></li>
      <li><a href="/project/drupal">Test Drupal 7</a></li>
      <li><a href="/node/3060/release">Other Releases</a></li>
      <li class="last all"><a class="all" href="/project/drupal">More Information</a></li>
    </ul>
  </div>

  <div class="grid-3 installation-profiles">
    <h2>Installation Profiles</h2>
    <ul class="flat">
      <?php print $drupalorg_featured_install_profiles; ?>
      <li class="last all"><a class="all" href="/project/installation+profiles">More Profiles</a></li>
    </ul>
  </div>

  <div class="grid-3 themes">
    <h2>Themes</h2>
    <ul class="flat">
      <li class="first"><a href="node/221881">About Themes &amp; Subthemes</a></li>
      <li><a href="/project/themes?solrsort=sis_project_release_usage%20desc">Most Installed Themes</a></li>
      <li><a href="/project/themes?solrsort=created%20desc">New Themes</a></li>
      <li><a href="/project/themes?solrsort=ds_project_latest_activity%20desc">Most Active Themes</a></li>
      <li class="last all"><a class="all" href="/project/themes">Search for More Themes</a></li>
    </ul>
  </div>
  
  <div class="grid-3 omega translations">
    <h2>Translations</h2>
    <ul class="flat">
      <?php print $drupalorg_featured_translations; ?>
      <li class="last all"><a href="http://localize.drupal.org/" class="all">All Translations</a></li>
    </ul>
  </div>
</div>
  
<div class="grid-12 alpha omega drupal-modules">
  <h2>Drupal Modules</h2>
  <?php print $version_form; ?>
</div>

<div class="grid-12 alpha omega drupal-modules-facets">
<?php /*
  NOTE: It would be super helpful if these dynamic lists were wrapped in a <ul class="flat">
        This class removes the padding and bullets from the list items
*/ ?>
  <div class="grid-3 alpha">
    <?php print $sort_most_installed; ?>
  </div>
  
  <div class="grid-3">      
    <h2>Module Categories</h2>
    <ul class="flat">
      <li class="first"><a href="/project/modules?filters=tid:53">Administration</a></li>
      <li><a href="/project/modules?filters=tid:56">Community</a></li>
      <li><a href="/project/modules?filters=tid:61">Event</a></li>
      <li><a href="/project/modules?filters=tid:67">Media</a></li>
      <li class="last all"><a href="/project/modules/categories" class="all">All Categories</a></li>
    </ul>
  </div>
  
  <div class="grid-3">      
    <?php print $sort_created; ?>
  </div>
  
  <div class="grid-3 omega">        
    <?php print $module_index; ?>
  </div>

</div>
