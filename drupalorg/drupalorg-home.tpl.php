<div class="front-primary">
  <div class="call-to-action">
    <h2><a href="/try-drupal">Try Drupal</a></h2>
    <p>Want to quickly see how Drupal works? Try one of these solutions to get started with Drupal in minutes.</p>
    <p class="front-get-started"><a href="/try-drupal" class="link-button"><span>Try Drupal</span></a></p>
  </div>

  <div class="call-to-action last">
    <h2><a href="about">Get Started</a></h2>
    <p>Use Drupal to build everything from personal blogs to enterprise applications. Thousands of add-on modules and designs let you build any site you can imagine. Join us!</p>
    <p class="front-get-started"><a href="start" class="link-button"><span>Get Started with Drupal</span></a></p>
  </div>

  <div id="community-updates">
    <ul>
      <li><a href="#tab-news" id="tab-news-link">News</a></li>
      <li><a href="#tab-docs" id="tab-docs-link"><span class="icon"></span>Docs Updates</a></li>
      <li><a href="#tab-forum" id="tab-forum-link"><span class="icon"></span>Forum Posts</a></li>
      <li><a href="#tab-commits" id="tab-commits-link"><span class="icon"></span>Commits</a></li>
    </ul>
    <div id="tab-news"><?php print $tab_content_news; ?></div>
    <div id="tab-docs"><?php print $tab_content_docs; ?></div>
    <div id="tab-forum"><?php print $tab_content_forums; ?></div>
    <div id="tab-commits"><?php print $tab_content_git; ?></div>
  </div>
</div>

<div id="develop-with-drupal">
  <h2><a href="download">Develop with Drupal</a></h2>
  <div class="intro">
    <div class="logo"><img src="<?php print drupal_get_path('module', 'drupalorg'); ?>/images/d8.svg" alt="Drupal 8"></div>
    <div class="text">
      <strong><a href="/drupal-8.0">Drupal 8 is in beta</a></strong>. Get <a href="https://groups.drupal.org/core/updates">regular updates</a> about the process or <a href="/core-mentoring">volunteer</a> as a developer, designer or tester.
    </div>
  </div>
  <div class="activities">
    <table class="front-current-activity">
      <tr><td><?php print $number_of_modules; ?></td><td><a href="project/modules">Modules</a></td></tr>
      <tr><td><?php print $number_of_themes; ?></td><td><a href="project/themes">Themes</a></td></tr>
      <tr><td><?php print $number_of_distributions; ?></td><td><a href="project/distributions">Distributions</a></td></tr>
      <tr><td><?php print $number_of_git_accounts; ?></td><td><a href="commitlog">Developers</a></td></tr>
    </table>
    <table class="front-thisweek-activity">
      <tr><td></td><th>This week</th></tr>
      <tr><td><?php print $number_of_git_commits; ?></td><td><a href="commitlog">Code commits</a></td></tr>
      <tr><td><?php print $number_of_issue_comments; ?></td><td><a href="project/issues">Issue comments</a></td></tr>
    </table>
    <ul class="links">
      <li><a href="project/drupal">Drupal Core</a></li>
      <li><a href="security">Security Info</a></li>
      <li><a href="contributors-guide">Developer Docs</a></li>
      <li><a href="http://api.drupal.org">API Docs</a></li>
    </ul>
  </div>
  <?php print $psa; ?>
</div>

  <div class="call-to-action">
    <h2><a href="/drupal-services">Services</a></h2>
    <p>The Drupal community is huge. Find a company to help you build or host your site in the Drupal Marketplace.</p>
    <p class="front-get-started"><a href="/drupal-services" class="link-button"><span>Drupal Services</span></a></p>
  </div>

  <div class="call-to-action">
    <h2><a href="https://jobs.drupal.org/">Jobs</a></h2>
    <p>The community is only as good as its best and brightest. Purchase a job post on Drupal Jobs to help support Drupal.org.</p>
    <p class="front-get-started"><a href="https://jobs.drupal.org/" class="link-button"><span>Drupal Jobs</span></a></p>
  </div>

  <div class="call-to-action last">
    <h2><a href="/supporters">Supporters</a></h2>
    <p>Drupal Association Supporter Programs provide companies a way to give back to the Drupal project and enjoy great benefits in return.</p>
    <p class="front-get-started"><a href="/supporters" class="link-button"><span>Drupal Supporters</span></a></p>
  </div>

<div id="sites-with-drupal">
  <h2><a href="case-studies">Who Uses Drupal</a></h2>
  <?php print $things_we_made; ?>
</div>
