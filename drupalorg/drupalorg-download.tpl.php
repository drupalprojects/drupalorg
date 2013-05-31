<p>Download Drupal core files, and extend your site with modules, themes, translations and installation profiles.</p>
<div id="download" class="node-section grid-12 alpha omega">
  <div class="grid-3 alpha core">
    <h2>Core</h2>
    <ul class="flat">
      <li class="first download-core"><?php print $core_download_button; ?></li>
      <li><a href="/project/drupal">Download Drupal 6</a></li>
      <li><a href="/node/3060/release">Other Releases</a></li>
      <li class="last all"><a class="all" href="/project/drupal">More Information</a></li>
    </ul>
  </div>

  <div class="grid-3">
    <h2>Distributions</h2>
    <ul class="flat">
      <li><a href="/documentation/build/distributions">About Distributions</a></li>
      <li><a href="/project/distributions?solrsort=iss_project_release_usage%20desc">Most Installed Distributions</a></li>
      <li><a href="/project/distributions?solrsort=ds_created%20desc">New Distributions</a></li>
      <li><a href="/project/distributions?solrsort=ds_project_latest_activity%20desc">Most Active Distribitions</a></li>
      <li class="last all"><a class="all" href="/project/distributions">Search for More Distributions</a></li>
    </ul>
  </div>

  <div class="grid-3 themes">
    <h2>Themes</h2>
    <ul class="flat">
      <li class="first"><a href="node/221881">About Themes &amp; Subthemes</a></li>
      <li><a href="/project/themes?solrsort=iss_project_release_usage%20desc">Most Installed Themes</a></li>
      <li><a href="/project/themes?solrsort=ds_created%20desc">New Themes</a></li>
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
    <?php print $iss_project_release_usage; ?>
  </div>

  <div class="grid-3">
    <h2>Module Categories</h2>
    <ul class="flat">
      <li class="first"><a href="/project/modules?f[0]=im_vid_3:53">Administration</a></li>
      <li><a href="/project/modules?f[0]=im_vid_3:56">Community</a></li>
      <li><a href="/project/modules?f[0]=im_vid_3:61">Event</a></li>
      <li><a href="/project/modules?f[0]=im_vid_3:67">Media</a></li>
      <li class="last all"><a href="/project/modules/categories" class="all">All Categories</a></li>
    </ul>
  </div>

  <div class="grid-3">
    <?php print $ds_created; ?>
  </div>

  <div class="grid-3 omega">
    <?php print $module_index; ?>
  </div>

</div>
