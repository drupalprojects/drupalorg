<div id="download" class="node-section grid-12 alpha omega">

  <div class="grid-3 alpha">
    <h2>Core</h2>
    <?php print $core_download_button; ?>
    <ul class="flat">
      <li><a href="node/3060/release">Other releases</a></li>
      <li><a class="all" href="project/drupal">More information</a></li>
    </ul>
  </div>

  <div class="grid-3">
    <h2>Installation Profiles</h2>
    <ul class="flat">
      <li><a href="project/openmedia">Community Site</a></li>
      <li><a href="project/uberdrupal">E-commerce</a></li>
      <li><a href="project/openpublish">News Site</a></li>
      <li><a href="project/drupal_wiki">Wiki</a></li>
      <li><a class="all" href="project/installation+profiles">More profiles</a></li>
    </ul>
  </div>

  <div class="grid-3">
    <h2>Themes</h2>
    <ul class="flat">
      <li><a href="node/221881">About Themes & Subthemes</a></li>
      <li><a href="project/themes?solrsort=sis_project_release_usage%20desc">Most installed themes</a></li>
      <li><a href="project/themes?solrsort=created%20desc">New themes</a></li>
      <li><a href="project/themes?solrsort=ds_project_latest_activity%20desc">Most active themes</a></li>
      <li><a class="all" href="project/themes">Search for more themes</a></li>
    </ul>
  </div>
  
  <div class="grid-3 omega">
    <h2>Translations</h2>
    <ul class="flat">
      <li><a href="http://localize.drupal.org/translate/languages/ca">Catalan</a></li>
      <li><a href="http://localize.drupal.org/translate/languages/fr">French</a></li>
      <li><a href="http://localize.drupal.org/translate/languages/hu">Hungarian</a></li>
      <li><a href="http://localize.drupal.org/" class="all">All translations</a></li>
    </ul>
  </div>
</div>
  
<div class="grid-12 alpha omega">
  <h2>Drupal Modules</h2>
  <p>Show only modules for Drupal version DROPDOWN</p>
</div>

<div class="grid-12 alpha omega">

<?php /*
  NOTE: It would be super helpful if these dynamic lists were wrapped in a <ul class="flat">
        This class removes the padding and bullets from the list items
*/ ?>

  <div class="grid-3 alpha">
    <?php print $sort_most_installed; ?>
  </div>
  
  <div class="grid-3">      
    <?php print $project_solr_categories; ?>    
  </div>
  
  <div class="grid-3">      
    <?php print $sort_created; ?>
  </div>
  
  <div class="grid-3 omega">        
    <h2>Placeholder</h2>
    <a href="#" class="all">More placeholder</a>
  </div>

</div>