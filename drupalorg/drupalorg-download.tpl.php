<p>Download Drupal core files, and extend your site with modules, themes, translations and installation profiles.</p>
<div id="download">
  <div class="core">
    <h2>Core</h2>
    <ul class="flat">
      <li class="download-core"><?php print $core_download_button; ?></li>
      <li><a href="/node/3060/release">Other Releases</a></li>
      <li><strong><a href="/project/drupal">More Information</a></strong></li>
    </ul>
  </div>

  <div class="distributions">
    <h2>Distributions</h2>
    <ul class="flat">
      <li><a href="/documentation/build/distributions">About Distributions</a></li>
      <li><a href="/project/project_distribution?solrsort=iss_project_release_usage%20desc">Most Installed Distributions</a></li>
      <li><a href="/project/project_distribution?solrsort=ds_created%20desc">New Distributions</a></li>
      <li><a href="/project/project_distribution?solrsort=ds_project_latest_activity%20desc">Most Active Distributions</a></li>
      <li><strong><a href="/project/project_distribution">Search for More Distributions</a></strong></li>
    </ul>
  </div>

  <div class="themes">
    <h2>Themes</h2>
    <ul class="flat">
      <li><a href="node/221881">About Themes &amp; Subthemes</a></li>
      <li><a href="/project/project_theme?solrsort=iss_project_release_usage%20desc">Most Installed Themes</a></li>
      <li><a href="/project/project_theme?solrsort=ds_created%20desc">New Themes</a></li>
      <li><a href="/project/project_theme?solrsort=ds_project_latest_activity%20desc">Most Active Themes</a></li>
      <li><strong><a href="/project/project_theme">Search for More Themes</a></strong></li>
    </ul>
  </div>

  <div class="translations">
    <h2>Translations</h2>
    <ul class="flat">
      <?php print $drupalorg_featured_translations; ?>
      <li><strong><a href="http://localize.drupal.org/">All Translations</a></strong></li>
    </ul>
  </div>
</div>

<hr>

<div class="drupal-modules">
  <h2>Drupal Modules</h2>
  <?php print $version_form; ?>
</div>

<div class="drupal-modules-facets">
  <div class="most-installed">
    <h2>Most Installed</h2>
    <?php print $iss_project_release_usage; ?>
  </div>

  <div class="categories">
    <h2>Module Categories</h2>
    <ul class="flat">
      <li><a href="/project/project_module?f[2]=im_vid_3:53">Administration</a></li>
      <li><a href="/project/project_module?f[2]=im_vid_3:56">Community</a></li>
      <li><a href="/project/project_module?f[2]=im_vid_3:61">Event</a></li>
      <li><a href="/project/project_module?f[2]=im_vid_3:67">Media</a></li>
      <li><strong><a href="/project/project_module/categories">All Categories</a></strong></li>
    </ul>
  </div>

  <div class="created">
    <h2>New Modules</h2>
    <?php print $ds_created; ?>
  </div>

  <div class="index">
    <?php print $module_index; ?>
  </div>

</div>
