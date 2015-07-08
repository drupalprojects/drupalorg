<div class="front-primary">
  <div id="get-started">
    <h2>Get started with Drupal</h2>
    <p>Drupal helps you build everything from personal blogs to enterprise applications. Thousands of add-on modules and designs let you build any site you can imagine.</p>
    <p>
      <a href="/try-drupal" class="link-button"><span>Try a hosted Drupal demo</span></a>
      <a href="/documentation/get-started" class="link-button"><span>Download and Get Started</span></a>
    </p>
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
    </table>
    <ul class="front-thisweek-activity">
      <li><a href="security">Security Info</a></li>
      <li><a href="contributors-guide">Developer Docs</a></li>
      <li><a href="http://api.drupal.org">API Docs</a></li>
    </ul>
  </div>
  <?php print $psa; ?>
</div>

<div id="community-stats" class="front-secondary">
  <div class="call-to-action">
    <span class="users"><span class="highlight"><?php print $number_of_confirmed_accounts; ?> users</span> <span class="caption">actively contributing</span></span>
  </div>
  <div class="call-to-action">
    <span class="commits"><span class="highlight"><?php print $number_of_git_commits; ?> commits</span> <span class="caption">in the last week</span></span>
  </div>
  <div class="call-to-action last">
    <span class="comments"><span class="highlight"><?php print $number_of_issue_comments; ?> comments</span> <span class="caption">in the last week</span></span>
  </div>
  <div class="get-involved"><a href="getting-involved-guide">Get Involved →</a></div>
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
