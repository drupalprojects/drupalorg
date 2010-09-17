<div class="meta">
  <h5>About This Article</h5>
  <ul>
    <?php foreach ($info as $title => $terms): ?>
      <li><?php print $title; ?>: <?php print $terms; ?>
    <?php endforeach; ?>
    <?php if ($modified): ?>
      <li class="modified">Last modified: <?php print $modified; ?></li>
    <?php endif; ?>
  </ul>
</div>
