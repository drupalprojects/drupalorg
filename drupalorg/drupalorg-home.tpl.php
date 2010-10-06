<div id="front-top-left" class="grid-4 alpha">
  <div id="front-top-left-inner">
    <div class="block-content">
     <h2><a href="about">Why Choose Drupal?</a></h2>
     <p>Drupal can be used to build everything from personal blogs to sophisticated enterprise applications. It features thousands of add-on modules and design themes that enable you to build any kind of site you can imagine. Drupal is free software that is flexible, robust, and constantly being improved by a community of hundreds of thousands of passionate users. Come join us!</p>
     <p class="front-get-started">
      <a href="start" class="link-button"><span>Get Started with Drupal</span></a>
     </p>
    </div>
  </div>
</div>

<div id="front-top-middle" class="grid-4">
  <div id="front-top-middle-inner">
    <div class="block-content">
     <h2><a href="cases">Sites Made with Drupal</a></h2>
     <?php print $things_we_made; ?>
     <p>Drupal is used by some of the biggest sites on the Web, like <a href="/node/915102">The Economist</a>, <a href="http://www.examiner.com/">Examiner.com</a> and <a href="http://www.whitehouse.gov">The White House</a>.  Read more Drupal <a href="/success-stories">success stories</a>..</p>
    </div>
  </div> 
</div> 

<div id="front-top-right" class="grid-4 omega">
  <div id="front-top-right-inner">
    <div class="block-content clear-block">
      <h2><a href="download">Develop with Drupal</a></h2>
      <p>Drupal is extensible, powerful, scalable, and flexible.</p>
      <div class="grid-2 alpha">
        <strong>Current activity:</strong>
        <ul>
          <li><a href="project/modules"><?php print $number_of_modules; ?> modules</a></li>
          <li><a href="project/themes"><?php print $number_of_themes; ?> themes</a></li>
          <li><a href="cvs"><?php print $number_of_cvs_accounts; ?> active developers</a></li>
        </ul>
        <strong>This week:</strong>
        <ul>
          <li><a href="drupal/project"><?php print $number_of_new_projects; ?> new projects</a></li>
          <li><a href="cvs"><?php print $number_of_cvs_commits; ?> code commits</a></li>
          <li><a href="project/issues"><?php print $number_of_issue_comments; ?> issue comments</a></li>
        </ul>
      </div>
      <div class="grid-2 omega">
        <ul>
          <li><a href="http://api.drupal.org">Drupal API</a></li>
          <li><a href="download">Download Drupal</a></li>
          <li><a href="security">Security Info</a></li>
          <li><a href="handbook">Handbook</a></li>
        </ul>
        <h4><a href="download">Modules and Themes</a></h4>
        Explore Drupal <a href="project/modules">modules</a> and <a href="project/themes">themes</a>
      </div>
    </div>
    <?php print $psa; ?>
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
