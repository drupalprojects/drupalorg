<div id="front-top-left" class="grid-4 alpha">
  <div id="front-top-left-inner">
    <div class="block-content">
     <h2><a href="about">Why Choose Drupal?</a></h2>
     <p>Drupal is a publishing platform created by our vibrant community and bursting with potential. Use as-is or snap in any of thousands of free designs and plug-ins for rapid site assembly. Developers love our well-documented APIs. Designers love our flexibility. Site administrators love our limitless scalability. Drupal continuously evolves. Read more <a href="about">about Drupal</a> and why it's right for you.</p>
     <p class="front-get-started">
      <a href="start" class="link-button"><span>Get Started with Drupal</span></a>
     </p>
     <h4><a href="success-stories">Who Else Uses Drupal?</a></h4>
     Magazines: <a href="">Fast Company</a>, <a href="#">Popular Science</a>, The Economist.<br/>
     Newspapers: <a href="#">Morris Digital</a>, <a href="#">Seattle Times</a> and many, many <a href="success-stories">more...</a>
    </div>
  </div>
</div>

<div id="front-top-middle" class="grid-4">
  <div id="front-top-middle-inner">
    <div class="block-content">
     <h2><a href="cases">Sites Made with Drupal</a></h2>
     <?php print $things_we_made; ?>
    </div>
  </div> 
</div> 

<div id="front-top-right" class="grid-4 omega">
  <div id="front-top-right-inner">
    <div class="block-content">
      <h2><a href="download">Develop with Drupal</a></h2>
      <p>Drupal is extensible, powerful, scalable, and flexible.</p>
      <div class="grid-2 alpha">
       <strong>Current activity</strong>
       <ul>
         <li><a href="cvs"><?php print $number_of_cvs_accounts; ?> CVS a/c holders</a></li>
         <li><a href="cvs"><?php print $number_of_cvs_commits; ?> commits this week</a></li>
       </ul>
      </div>
      <div class="grid-2 omega">
       <ul>
         <li><a href="http://api.drupal.org">Drupal API</a></li>
         <li><a href="download">Download Drupal</a></li>
         <li><a href="security">Security Info</a></li>
         <li><a href="project/issues">Issue List</a></li>
       </ul>
      </div>
      <h4><a href="download">Modules and Themes</a></h4>
      Explore Drupal <a href="project/modules">modules</a> and <a href="project/themes">themes</a>
      <div class="advertising">
       <img src="/files/ad.png"/>
       <p><a href="http://association.drupal.org/drupal-org-adsense-banner-advertising">Advertising</a> helps build a successful ecosystem around Drupal</p>
      </div>
    </div>
  </div>
</div>

<div id="front-middle" class="grid-12 alpha omega">
  <div id="front-middle-inner">
    <div class="block-content">
      <div id="front-drupal-stats"><span class="blue"><?php print $number_of_users; ?></span> people in <span class="blue"><?php print $number_of_countries; ?></span> countries speaking <span class="blue"><?php print $number_of_languages; ?></span> languages are using Drupal.</div>
    </div>
  </div>
</div>

<div id="front-bottom-left" class="grid-6 alpha">
  <div id="front-bottom-left-inner">
    <div class="block-content">
      <div class="homepage-map"><?php print $map_content; ?></div>
    </div>
  </div>
</div>

<div id="front-bottom-right" class="grid-6 omega">
  <div id="front-bottom-right-inner">
    <div class="block-content">
      <div id="rotate">
        <ul class="ui-tabs-nav">
          <li class="ui-tabs-selected"><a href="#fragment-1">News</a></li>
          <li class="ui-tabs-docs-updates"><a href="#fragment-2"><span class="icon"></span>Docs Updates</a></li>
          <li class="ui-tabs-forum-posts"><a href="#fragment-3"><span class="icon"></span>Forum Posts</a></li>
          <li class="ui-tabs-commits"><a href="#fragment-4"><span class="icon"></span>Commits</a></li>
        </ul>
        <div id="fragment-1" class="ui-tabs-panel">
          <?php print $tab_content_news; ?>
        </div>
        <div id="fragment-2" class="ui-tabs-panel ui-tabs-hide">
          <?php print $tab_content_docs; ?>
        </div>
        <div id="fragment-3" class="ui-tabs-panel ui-tabs-hide">
          <?php print $tab_content_forums; ?>
        </div>
        <div id="fragment-4" class="ui-tabs-panel ui-tabs-hide">
          <?php print $tab_content_cvs; ?>
        </div>
      </div>
    </div>
  </div>
</div>
