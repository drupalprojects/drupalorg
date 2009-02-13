<div id="front-top-left" class="grid-4 alpha">
  <div id="front-top-left-inner">
    <div class="block-content">
     <h2><a href="#">Why Choose Drupal?</a></h2>
     <p>Drupal is like Lego. Connect the pieces and build a site limited only by your imagination. Drupal's passionate, vibrant community are always creating new pieces, or improving existing ones. Choosing Drupal means as your needs evolve, so does your site.</p>
     <p class="front-get-started">
      <a href="#" class="link-button"><span>Get Started with Drupal</span></a>
     </p>
     <h4><a href="#">Who Else Uses Drupal?</a></h4>
     Magazines: <a href="#">Fast Company</a>, <a href="#">Popular Science</a>.
     Newspapers:<a href="#">The Onion</a>, <a href="#">Morris Digital</a>, <a href="#">Seattle Times</a> and many, many <a href="#">more...</a>
    </div>
  </div>
</div>

<div id="front-top-middle" class="grid-4">
  <div id="front-top-middle-inner">
    <div class="block-content">
     <h2><a href="#">Things we made with Drupal</a></h2>
     <img src="/files/mtv_screenshot.jpg" class="homeimage" />
    </div>
  </div> 
</div> 

<div id="front-top-right" class="grid-4 omega">
  <div id="front-top-right-inner">
    <div class="block-content">
      <h2><a href="#">Develop with Drupal</a></h2>
      <p>Drupal is extensible, powerful, scalable, and flexible.</p>
      <div class="grid-2 alpha">
       <h4><a href="#">Current activity</a></h4>
       <ul>
         <li><a href="#">4212 CVS a/c holders</a></li>
         <li><a href="#">612 commits this month</a></li>
       </ul>
      </div>
      <div class="grid-2 omega">
       <ul>
         <li><a href="#">Drupal API</a></li>
         <li><a href="#">Download Drupal</a></li>
         <li><a href="#">Security Info</a></li>
         <li><a href="#">Issue List</a></li>
       </ul>
      </div>
      <h4><a href="#">Modules and Themes</a></h4>
      Explore Drupal <a href="#">modules</a> and <a href="#">themes</a>
      <div class="advertising">
       <img src="/files/ad.png"/>
       <p><a href="#">Advertising</a> helps build a successful ecosystem around Drupal</p>
      </div>
    </div>
  </div>
</div>

<div id="front-middle" class="grid-12 alpha omega">
  <div id="front-middle-inner">
    <div class="block-content">
      <div id="front-drupal-stats"><span class="blue"><?php print $number_of_users; ?></span> people in <span class="blue"><?php print $number_of_countries; ?></span> countries speaking <span class="blue"><?php print $number_of_languages; ?></span> different languages are using Drupal.</div>
    </div>
  </div>
</div>

<div id="front-bottom-left" class="grid-6 alpha">
  <div id="front-bottom-left-inner">
    <div class="block-content">
     <object width="450" height="250" id="myMovieName" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=6,0,40,0" classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000">
      <param value="http://drupal.markboultondesign.com/iteration11/images/flash/map.swf" name="movie"/>
      <param value="high" name="quality"/>
      <param value="#FFFFFF" name="bgcolor"/>
      <embed width="450" height="250" align="" pluginspage="http://www.macromedia.com/go/getflashplayer" type="application/x-shockwave-flash" name="myMovieName" bgcolor="#FFFFFF" quality="high" src="http://drupal.markboultondesign.com/iteration11/images/flash/map.swf"/>
     </object>
    </div>
  </div>
</div>

<div id="front-bottom-right" class="grid-6 omega">
  <div id="front-bottom-right-inner">
    <div class="block-content">
      <div id="rotate">
        <ul class="ui-tabs-nav">
          <li class="ui-tabs-selected"><a href="#fragment-1">News</a></li>
          <li><a href="#fragment-2"><img src="<?php print $theme_images_directory; ?>/bullet_home_green.jpg"> Docs updates</a></li>
          <li><a href="#fragment-3"><img src="<?php print $theme_images_directory; ?>/bullet_home_purple.jpg"> Forum posts</a></li>
          <li><a href="#fragment-4"><img src="<?php print $theme_images_directory; ?>/bullet_home_red.jpg"> Commits</a></li>
          <li><a href="#fragment-5">More</a></li>
        </ul>
        <div id="fragment-1" class="ui-tabs-panel">
          <?php print $tab_content_news; ?>
        </div>
        <div id="fragment-2" class="ui-tabs-panel ui-tabs-hide">
          <?php print $tab_content_docs; ?>
        </div>
        <div id="fragment-3" class="ui-tabs-panel ui-tabs-hide">
          Tab for forum posts.
        </div>
        <div id="fragment-4" class="ui-tabs-panel ui-tabs-hide">
          Tab for cvs commits.
        </div>
        <div id="fragment-5" class="ui-tabs-panel ui-tabs-hide">
          Tab for more... Whatever that means.
        </div>
      </div>
    </div>
  </div>
</div>
