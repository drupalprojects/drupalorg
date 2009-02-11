<p style="color: red;"><blink><em>This page needs to be themed.  This is outputted by <code>drupalorg-download.tpl.php</code>.  All the dynamic elements are provided as a variable.  The Mark Boulton design has many more blocks but we can't generate these yet.  Would be useful if we could create the grid/design with the block that we have right now and than we can easily add the missing blocks once they become available.  *blink* *blink*</em></blink></p>

<p>Download Drupal <?php print $version; ?></p>

<h6 class="lined">Most installed modules</h6>
<?php print $most_popular_modules; ?>
<a href="#" class="all">All modules</a>
    
<h6 class="lined">Most installed themes</h6>
<?php print $most_popular_themes; ?>
<a href="#" class="all">All themes</a>
  
<h6 class="lined">Most active modules</h6>
<?php print $most_active_modules; ?>
<a href="#" class="all">All themes</a>
    
<h6 class="lined">Most active themes</h6>
<?php print $most_active_themes; ?>
<a href="#" class="all">All themes</a>
 
<h6 class="lined">New modules</h6>
<?php print $new_modules; ?>
<a href="#" class="all">All themes</a>
    
<h6 class="lined">New themes</h6>
<?php print $new_themes; ?>
<a href="#" class="all">All themes</a>
    
<h6 class="lined">Translations</h6>
<ul>
 <li><a href="#">Spanish</a></li>
 <li><a href="#">Chinese</a></li>
 <li><a href="#">German</a></li>
</ul>
<a href="#" class="all">All translations</a>


