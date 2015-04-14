<div class="front-primary">
  <div class="call-to-action">
    <h2><a href="/try-drupal">Try Drupal</a></h2>
    <p>Want to see Drupal in action? Try one of these solutions to deploy a real, live, working Drupal site in just a few minutes. It’s quick, simple and free.</p>
    <p class="front-get-started"><a href="/try-drupal" class="link-button"><span>Try Drupal</span></a></p>
  </div>

  <div class="call-to-action last">
    <h2><a href="about">Get Started</a></h2>
    <p>Use Drupal to build everything from personal blogs to enterprise applications. Thousands of add-on modules and designs let you build any site you can imagine.</p>
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
      <strong><a href="/drupal-8.0">Drupal 8 is in beta</a></strong>. Get <a href="https://groups.drupal.org/core/updates">regular updates</a> about the process or <a href="/core-mentoring">volunteer</a> as a developer, designer, or tester.
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

<div class="front-secondary">
  <div class="call-to-action">
    <h2><a href="/drupal-services">Find Drupal service providers</a></h2>
    <p>Find a company to help you create a great website or host one.</p>
    <p><a href="/drupal-services">Browse Drupal Services Marketplace →</a></p>
  </div>

  <div class="call-to-action">
    <h2><a href="https://jobs.drupal.org/">Drupal Jobs</a></h2>
    <p>Find your next job or post an open position on the official Drupal community job board.</p>
    <p><a href="https://jobs.drupal.org/">Search or post Drupal Jobs →</a></p>
  </div>

  <div class="call-to-action last">
    <h2><a href="/supporters">Thank you Drupal supporters</a></h2>
    <p>These companies joined our Drupal Supporter Programs to help grow the Drupal ecosystem.</p>
    <p><a href="/supporters">Find out who supports Drupal →</a></p>
  </div>
</div>

<div id="sites-with-drupal">
  <h2><a href="case-studies">Who Uses Drupal</a></h2>
  <?php print $case_studies; ?>
</div>
