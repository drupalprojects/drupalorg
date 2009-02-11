<div class="meta">
  <h5>About This Article</h5>
  <ul>
    <?php if ($versions): ?>
      <li class="versions">Drupal versions: <?php print $versions; ?>
    <?php endif; ?>
    <?php if ($modified): ?>
      <li class="modified">Last modified: <?php print $modified; ?></li>
    <?php endif; ?>
    <?php if ($authors): ?>
      <li class="authors">Authors: <?php print $authors; ?></li>
    <?php endif; ?>
    <?php if ($languages): ?>
      <li class="languages">Languages: <?php print $languages; ?><a href="#">Cymraeg</a>, <a href="#">English</a> </li>
    <?php endif; ?>
    <?php if ($features || $add_tag_link): ?>
      <li class="feature-tags">Tags: <?php print $features; ?><span><?php //print $add_tag_link; ?></span></li>
    <?php endif; ?>
    <?php if ($alerts): ?>
      <?php print $alerts; ?>
    <?php endif;?>
  </ul>
</div>
