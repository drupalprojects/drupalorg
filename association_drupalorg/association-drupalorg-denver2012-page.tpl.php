<div class="grid-6 alpha">
  <p>Drupal is coming to Denver. Lorum ipsum.</p>
</div>

<div class="grid-6 omega big">
  <img src="<?php print drupal_get_path('module', 'association_drupalorg') . '/images/denver-460.png'; ?>" width="460" height="101" alt="DrupalCon Denver" />
  <p>March 20–22, 2012<br />
  <a href="http://maps.google.com/maps/place?q=colorado+convention+center&cid=11112440205075771742">Colorado Convention Center</a></p>
</div>

<h2>Personal information</h2>
<p>We use your Drupal.org account. This info can be updated on Drupal.org at any time, and may be printed on your badge.</p>

<?php if (user_is_logged_in()) { ?>
  <div class="profile"><dl class="clear-block"><?php print $personal_info; ?></dl></div>
  <?php print $personal_info_edit; ?>
  <h3>Work</h3>
  <div class="profile"><dl class="clear-block"><?php print $work_info; ?></dl></div>
  <?php print $work_info_edit; ?>

  <?php print node_view(node_load(1484)); ?>
<?php } else { // Not logged in. ?>
  <p>Please <a href="<?php print url('user', array('query' => drupal_get_destination())); ?>">log in</a>.
<?php } ?>
