<div id="choose-drupal">
     <h2><a href="about">Why Choose Drupal?</a></h2>
     <p>Use Drupal to build everything from personal blogs to enterprise applications. Thousands of add-on modules and designs let you build any site you can imagine. Join us!</p>
     <p class="front-get-started"><a href="start" class="link-button"><span>Get Started with Drupal</span></a></p>
     <h2><a href="project/distributions">Drupal Distributions</a></h2>
     <p>Distributions are a collection of pre-configured themes and modules for feature-rich web sites giving you a head start on building your site. Build your own online communities, media portal, online store, and more!</p>
     <p class="front-get-started"><a href="documentation/build/distributions" class="link-button"><span>Learn about Distributions</span></a></p>
</div>

<div id="sites-with-drupal">
     <h2><a href="case-studies">Sites Made with Drupal</a></h2>
     <div class="things-we-made-wrapper"><?php print $things_we_made; ?></div>
     <p>Drupal is used by some of the biggest sites on the Web, like <a href="/node/915102">The Economist</a>, <a href="http://www.examiner.com/">Examiner.com</a> and <a href="http://www.whitehouse.gov">The White House</a>. Read more Drupal <a href="/case-studies">case studies</a>.</p>
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
        </div>

        <ul class="links">
          <li><a href="project/drupal">Drupal Core</a></li>
          <li><a href="security">Security Info</a></li>
          <li><a href="contributors-guide">Developer Docs</a></li>
          <li><a href="http://api.drupal.org">API Docs</a></li>
        </ul>
    <?php print $psa; ?>
</div>

<div id="stats-map">
  <div id="front-drupal-stats">
    <div class="inner"><em><?php print $number_of_users; ?></em> people in <em><?php print $number_of_countries; ?></em> countries<span class="country-note"><a href="/node/955312">*</a></span> speaking <em><?php print $number_of_languages; ?></em> languages power Drupal.</div>
  </div>

  <div id="community-map">
    <div class="homepage-map"><?php print $map_content; ?></div>
  </div>
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
