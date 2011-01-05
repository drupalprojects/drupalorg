<?php t('Drupal 7 - Easier and more powerful than ever'); // intentionally discarded, need to make sure title is available for translating. ?>

<?php if (isset($rtl)) { ?><div dir="rtl"><?php } ?>

<div id="header-feature" class="grid-12 alpha omega">
  <div class="grid-6 alpha">
    <h1><?php print t('Friendly and powerful:', array(), $language); ?> <strong><?php print t('Drupal 7', array(), $language);?></strong></h1>
    <h2><?php print t('We are proud to present to you our best work yet &ndash; Drupal 7, the friendly and powerful content management platform for building nearly any kind of website: from blogs and micro-sites to collaborative social communities.', array(), $language);?></h2>
      <a href="/start" class="link-button"><span><?php print t('Get started with Drupal 7', array(), $language);?></span></a>
  </div>
  <p id="caption"></p>
  <div class="grid-6 omega slideshow">
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/examiner.png', t('Runs on Drupal 7: @site', array('@site' => 'Examiner.com'), $language)); ?>
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/chicago-public-media.png', t('Runs on Drupal 7: @site', array('@site' => 'Chicago Public Media'), $language)); ?>
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/drupal-gardens.png', t('Runs on Drupal 7: @site', array('@site' => 'Drupal Gardens'), $language)); ?>
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/subhublite.png', t('Runs on Drupal 7: @site', array('@site' => 'SubHubLite'), $language)); ?>
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/iqmetrix.png', t('Runs on Drupal 7: @site', array('@site' => 'iQmetrix'), $language)); ?>
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/sagmeister.png', t('Runs on Drupal 7: @site', array('@site' => 'Stefan Sagmeister'), $language)); ?>
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/voxel.png', t('Runs on Drupal 7: @site', array('@site' => 'Voxel'), $language)); ?>
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/ipswich-brewery.png', t('Runs on Drupal 7: @site', array('@site' => 'Ipswich Brewery'), $language)); ?>
    <?php print theme('image', drupal_get_path('module', 'drupalorg') .'/images/d7-sites/left-click.png', t('Runs on Drupal 7: @site', array('@site' => 'Left-click'), $language)); ?>
  </div>    
  
</div> <!-- /#header-inner -->
    
<div id="header-highlight" class="alpha omega">
  <div id="header-highlight-inner" class="grid-12">
    <div class="grid-3 alpha">
      <h3><?php print t('Easier to use', array(), $language); ?></h3>
      <p><?php print t('An entirely revamped administrative interface makes your daily tasks easier to find and carry out. Many improvements were added specifically for site builders and content editors.', array(), $language);?></p>
    </div>
    <div class="grid-3">
      <h3><?php print t('More flexible', array(), $language); ?></h3>
      <p><?php print t('Define your own content structure and add custom fields to content, users, comments, and more. Extend your site with one of the over 800 modules already available for Drupal 7.', array(), $language); ?></p>
    </div>
    <div class="grid-3">
      <h3><?php print t('More scalable', array(), $language); ?></h3>
      <p><?php print t('Your Drupal 7 site will be fast, responsive and handle huge amounts of traffic thanks to improved JavaScript and CSS optimization, better caching and more.', array(), $language); ?></p>
    </div>
    <div class="grid-3 omega">
      <h3><?php print t('Open source', array(), $language); ?></h3>
      <p><?php print t('Come for the software, stay for the community. Thousands of smart and productive people work together to continuously improve Drupal, modules, themes and distributions.', array(), $language); ?></p>
    </div>        
  </div> <!-- /#header-highlight-inner -->
</div> <!-- /#header-highlight -->
    
    
<div id="video" class="grid-12 alpha omega">
  <div class="grid-9 alpha">
    <h2><?php print t('Take a tour', array(), $language); ?></h2>
    <script type="text/javascript" src="http://s3.www.universalsubtitles.org/embed.js">
    ({
        "base_state": {"language": ""},
        "video_url": "http://vimeo.com/18352872"
    })
    </script>
  </div>
  <div class="grid-3 omega">
    <h3><?php print t('Learn more', array(), $language); ?></h3>
    <p><?php print t('Get started with updated documentation for Drupal 7:', array(), $language); ?></p>

    <ul id="doc-list">
      <li><?php print t('<a href="@install-url">Installing Drupal 7</a>', array('@install-url' => url('documentation/install')), $language); ?></li>
      <li><?php print t('<a href="@upgrade-url">Upgrading from version 6</a>', array('@upgrade-url' => url('documentation/upgrade/6/7')), $language); ?></li>
      <li class="last"><?php print t('<a href="@api-url">API Documentation</a>', array('@api-url' => url('http://api.drupal.org/api/drupal/7')), $language); ?></li>
    </ul>

    <p><?php print t('Attend <a href="@drupalcon-url">DrupalCon Chicago</a> to learn more about Drupal 7.', array('@drupalcon-url' => url('http://chicago2011.drupal.org/')), $language); ?></p>
    <p><?php print t('More topics in the <a href="@documentation-url">online documentation</a>.', array('@documentation-url' => url('documentation')), $language); ?></p>

  </div>
</div><!-- /#video -->

<div id="features" class="grid-12 alpha omega">
  <h2 class="clear" id="heading-features"><?php print t('Features', array(), $language); ?></h2>
  <div class="grid-3 alpha">
    <h3><?php print t('Flexible content', array(), $language); ?></h3>
    <p><?php print t('Define custom fields that can be used across content types, users, comments, terms and other entities. Store the data for these fields in SQL, <a href="@nosql-url">NoSQL</a>, or use remote storage.', array('@nosql-url' => url('project/mongodb')), $language); ?></p>
  </div>
  <div class="grid-3">
    <h3><?php print t('Better theming', array(), $language); ?></h3>
    <p><?php print t("Control exactly what gets shown where on the screen with the new Render API and some truly radical alter hooks. The new RDF module provides semantic web markup.", array(), $language); ?></p>  
  </div>
  <div class="grid-3">
    <h3><?php print t('Accessible', array(), $language); ?></h3>
    <p><?php print t("Administration screens are now far more accessible. Many front-end improvements make it easier for you to build highly accessible websites.", array(), $language); ?></p>
    
  </div>
  <div class="grid-3 omega">
    <h3><?php print t('Images and files', array(), $language); ?></h3>
    <p><?php print t('Adding images to content is now built in. Generate different versions for thumbnails, previews and other image styles. Private file handling can now be used alongside public files.', array(), $language); ?></p>
  </div>


  <div class="grid-3 alpha clear">
    <h3><?php print t('Automated code testing', array(), $language); ?></h3>
    <p><?php print t('A new automated testing framework with over 30,000 built-in tests allows for <a href="@qa-url">continuous integration testing</a> of all Drupal core patches and contributed modules.', array('@qa-url' => url('http://qa.drupal.org')), $language); ?></p>
  </div>
  <div class="grid-3">
    <h3><?php print t('Improved database support', array(), $language); ?></h3>
    <p><?php print t('A new database layer provides out-of-the-box support for SQLite, MySQL/MariaDB, and PostgreSQL. Install contributed modules to use <a href="@sqlsrv-url">MS SQL Server</a>, <a href="@oracle-url">Oracle</a>, and more.', array('@sqlsrv-url' => url('project/sqlsrv'), '@oracle-url' => url('project/oracle')), $language); ?></p>

  </div>
  <div class="grid-3">
    <h3><?php print t('Better distribution support', array(), $language); ?></h3>
    <p><?php print t('Use installation profiles to distribute your custom Drupal product. A new API and exportable configurations let you capture more settings in code.', array(), $language); ?></p>
  </div>
  <div class="grid-3 omega">
    <h3><?php print t('Extend', array(), $language); ?></h3>
    <p><?php print t('Thanks to a great community effort, over 800 modules are available or under active development for Drupal 7, including <a href="@views-url">Views</a>, <a href="@pathauto-url">Pathauto</a>, and <a href="@wysiwyg-url">WYSIWYG</a>, with more on the way every day.', array('@views-url' => url('project/views'), '@pathauto-url' => url('project/pathauto'), '@wysiwyg-url' => url('project/wysiwyg')), $language); ?></p>

  </div>
</div><!-- /#features -->

<div class="grid-12 alpha omega" id="requirements">
  <div class="grid-6 alpha">
    <h3><?php print t('See Drupal 7 in action', array(), $language); ?></h3>
    <p><?php print t('Drupal 7 is already in use on hundreds of sites. Some examples include:', array(), $language); ?></p>
    <ul>
    <li><?php print t('<a href="@examiner-url">Examiner.com</a>', array('@examiner-url' => url('http://www.examiner.com')), $language); ?></li>
    <li><?php print t('<a href="@gardens-url">Drupal Gardens</a>', array('@gardens-url' => url('http://sampler.drupalgardens.com/')), $language); ?></li>
    <li><?php print t('<a href="@subhub-url">SubHub</a>', array('@subhub-url' => url('http://www.subhublite.com/')), $language); ?></li>
    <li><?php print t('<a href="@cpm-url">Chicago Public Media</a>', array('@cpm-url' => url('http://chicagopublicmedia.org/')), $language); ?></li>
    <li><?php print t('<a href="@sagmeister-url">Stefan Sagmeister</a>', array('@sagmeister-url' => url('http://www.sagmeister.com/')), $language); ?></li>
    </ul>
  </div>

  <div class="grid-6 omega">
    <h3><?php print t('Requirements', array(), $language); ?></h3>
    <p><?php print t('To install Drupal 7, you will need:', array(), $language); ?></p>
    <ul>
      <li><?php print t('<strong>Web Server</strong>: Apache (recommended), Nginx, Lighttpd, or Microsoft IIS', array(), $language); ?></li>
      <li><?php print t('<strong>Database</strong>: MySQL 5.0.15 and higher, PostgreSQL 8.3 and higher, or SQLite 3.x', array(), $language); ?></li>
      <li><?php print t('<strong>PHP</strong>: 5.2.4 and higher', array(), $language); ?></li>
      <li><?php print t('<strong>Memory</strong>: 32MB (A site with a number of commonly used modules enabled may require 64 MB of memory or more.)', array(), $language); ?></li>
    </ul>
    <p><?php print t('More <a href="@requirements-url">requirements information</a>.', array('@requirements-url' => url('requirements')), $language); ?></p>
  </div>
</div><!-- /#requirements -->

<?php if (isset($rtl)) { ?></div><?php } ?>

<div class="grid-12 alpha omega" id="translations">
  <h3><?php print t('This announcement is available in', array(), $language); ?></h3>
  <p><?php print $language_list; ?></p>
</div><!-- /#translations -->
