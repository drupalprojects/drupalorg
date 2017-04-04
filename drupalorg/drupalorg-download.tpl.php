<h2>Download</h2>

<p><?php print $core_download_button; ?> <a href="/try-drupal" class="secondary-button">Try a hosted Drupal demo</a> <a href="/hosting" class="secondary-button">Explore hosting partners</a></p>

<p>See <strong><a href="/project/drupal">Drupal’s project page</a></strong> for more information, older versions, and project development.<br>
Browse <a href="/docs">documentation</a> for more help and information.</p>

<h3><a href="/project/project_distribution">Distributions</a></h3>
<div class="download-facets">
  <div class="main">
    <p>Drupal bundled with additional projects such as themes, modules, libraries, and installation profiles. They give you a head start on building the type of site you need.</p>
  </div>

  <div class="aside">
    <h4>Most installed</h4>
    <?php print $project_distribution__iss_project_release_usage; ?>
  </div>

  <div class="aside">
    <h4>New distributions</h4>
    <?php print $project_distribution__ds_created; ?>
  </div>
</div>

<h3>Translations</h3>
<p><strong>Choose any one of a hundred languages at the first step of installation.</strong><br>
See <a href="/docs/7/installing-drupal-7/install-drupal-in-another-language">documentation for more information</a> and Drupal 7. Track translation status and help translate at <a href="https://localize.drupal.org/">Drupal Translations</a>.</p>

<h2>Extend</h2>

<?php print $version_form; ?>

<h3><a href="/project/project_module">Modules</a></h3>
<div class="download-facets">
  <div class="main">
    <p><strong>Extend and customize Drupal functionality, and integrate with 3rd-party services.</strong><br>
    View the <a href="/project/project_module/index">index of all modules</a>.</p>
  </div>

  <div class="aside">
    <h4>Most installed</h4>
    <?php print $project_module__iss_project_release_usage; ?>
  </div>

  <div class="aside">
    <h4>New modules</h4>
    <?php print $project_module__ds_created; ?>
  </div>
</div>

<h3><a href="/project/project_theme">Themes</a></h3>
<div class="download-facets">
  <div class="main">
    <p><strong>Change the look and feel of your Drupal site.</strong><br>
    View the <a href="/project/project_theme/index">index of all themes</a>.</p>
  </div>

  <div class="aside">
    <h4>Most installed</h4>
    <?php print $project_theme__iss_project_release_usage; ?>
  </div>

  <div class="aside">
    <h4>New themes</h4>
    <?php print $project_theme__ds_created; ?>
  </div>
</div>
