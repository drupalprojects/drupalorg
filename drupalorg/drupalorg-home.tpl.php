<div id="front-top-left" class="grid-4 alpha">
  <div id="front-top-left-inner">
    <div class="block-content">
     <h2><a href="about">Why Choose Drupal?</a></h2>
     <p>Use Drupal to build everything from personal blogs to enterprise applications. Thousands of add-on modules and designs let you build any site you can imagine.</p><p>Drupal is free, flexible, robust and constantly being improved by hundreds of thousands of passionate people from all over the world. Join us!</p>
     <p class="front-get-started">
      <a href="start" class="link-button"><span>Get Started with Drupal</span></a><br /><br />
      <h3>Drupal 7 is here. <a href="/drupal-7.0">Read all about it</a>!</h3>
     </p>
    </div>
  </div>
</div>

<div id="front-top-middle" class="grid-4">
  <div id="front-top-middle-inner">
    <div class="block-content">
     <h2><a href="cases">Sites Made with Drupal</a></h2>
     <?php print $things_we_made; ?>
     <p>Drupal is used by some of the biggest sites on the Web, like <a href="/node/915102">The Economist</a>, <a href="http://www.examiner.com/">Examiner.com</a> and <a href="http://www.whitehouse.gov">The White House</a>.  Read more Drupal <a href="/success-stories">success stories</a>.</p>
    </div>
  </div> 
</div> 

<div id="front-top-right" class="grid-4 omega">
  <div id="front-top-right-inner">
    <div class="block-content clear-block">
      <h2><a href="download">Develop with Drupal</a></h2>
        <div class="clear-block">
          <table class="front-current-activity">
            <tr><td><?php print $number_of_modules; ?></td><td><a href="project/modules">Modules</a></td></tr>
            <tr><td><?php print $number_of_themes; ?></td><td><a href="project/themes">Themes</a></td></tr>
            <tr><td><?php print $number_of_cvs_accounts; ?></td><td><a href="cvs">Active devs</a></td></tr>
          </table>
          <table class="front-current-activity">
            <tr><td></td><th>This week</th></tr>
            <tr><td><?php print $number_of_cvs_commits; ?></td><td><a href="cvs">Code commits</a></td></tr>
            <tr><td><?php print $number_of_issue_comments; ?></td><td><a href="project/issues">Issue comments</a></td></tr>
          </table>
        </div>

        <ul>
          <li><a href="project/drupal">Drupal Core</a></li>
          <li><a href="security">Security Info</a></li>
          <li><a href="contributors-guide">Developer Docs</a></li>
          <li><a href="http://api.drupal.org">API Docs</a></li>
        </ul>
    </div>
    <?php print $psa; ?>
  </div>
</div>

<div id="front-middle" class="grid-12 alpha omega">
  <div id="front-middle-inner">
    <div class="block-content">
      <div id="front-drupal-stats"><em><?php print $number_of_users; ?></em> people in <em><?php print $number_of_countries; ?></em> countries<span class="country-note"><a href="/node/955312">*</a></span> speaking <em><?php print $number_of_languages; ?></em> languages power Drupal.</div>
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
