<div id="download" class="grid-12 alpha omega">

  <div class="grid-3 alpha">
    <h3>Core</h3>
    <a class="link-button" href="#"><span>Download Drupal <?php print $version; ?></span></a>
    <ul class="flat">
      <li><a href="#">Other releases</a></li>
      <li><a class="all" href="#">More information</a></li>
    </ul>
  </div>

  <div class="grid-3">
    <h3>Installation Profiles</h3>
    <ul class="flat">
      <li><a href="#">Community Site</a></li>
      <li><a href="#">E-commerce</a></li>
      <li><a href="#">News Site</a></li>
      <li><a href="#">Wiki</a></li>
      <li><a class="all" href="#">More profiles</a></li>
    </ul>
  </div>

  <div class="grid-3">
    <h3>Themes</h3>
    <ul class="flat">
      <li><a href="#">About Themes & Subthemes</a></li>
      <li><a href="#">Most installed themes</a></li>
      <li><a href="#">Highest rated themes</a></li>
      <li><a href="#">Most active themes</a></li>
      <li><a class="all" href="#">Search for more themes</a></li>
    </ul>
  </div>
  
  <div class="grid-3 omega">
    <h3>Translations</h3>
    <ul class="flat">
      <li><a href="#">Spanish</a></li>
      <li><a href="#">Chinese</a></li>
      <li><a href="#">German</a></li>
      <li><a href="#" class="all">All translations</a></li>
    </ul>
  </div>
  
  <hr>

  <div class="grid-12 alpha omega">
    <h3>Drupal Modules</h3>
    <p>Show only modules for Drupal version DROPDOWN</p>
  </div>


  <div class="grid-12 alpha omega">

<?php /*
  NOTE: It would be super helpful if these dynamic lists were wrapped in a <ul class="flat">
        This class removes the padding and bullets from the list items
*/ ?>

    <div class="grid-3 alpha">
        <h3>Most Installed</h3>
        <?php print $most_popular_modules; ?>
        <a href="#" class="all">More Most installed</a>
    </div>
    
    <div class="grid-3">      
      <h3>Most active modules</h3>
      <?php print $most_active_modules; ?>
      <a href="#" class="all">More most active</a>
    </div>
    
    <div class="grid-3">      
      <h3>New modules</h3>
      <?php print $new_modules; ?>
      <a href="#" class="all">More new modules</a>
    </div>
  
    <div class="grid-3 omega">        
      <h3>Placeholder</h3>
      <a href="#" class="all">More placeholder</a>
  </div>

</div>

<div class="grid-12 alpha omega">

  <div class="grid-3 alpha">
    <h3>Most popular themes</h3>
    <?php print $most_popular_themes; ?>
    <a href="#" class="all">More popular themes</a>
  </div>
  
  <div class="grid-3">   
    <h3>Most active themes</h3>
    <?php print $most_active_themes; ?>
    <a href="#" class="all">More most active</a>
  </div>

  <div class="grid-3">        
    <h3>New themes</h3>
    <?php print $new_themes; ?>
    <a href="#" class="all">More new themes</a>
  </div>

  <div class="grid-3 omega">        
    <h3>Placeholder</h3>
    <a href="#" class="all">More placeholder</a>
  </div>

</div>

</div>