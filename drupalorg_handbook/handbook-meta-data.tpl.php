<div class="meta">
  <ul>
    <?php foreach ($info as $title => $terms): ?>
      <li><?php print $title; ?>: <?php print $terms; ?>
    <?php endforeach; ?>
    <?php if ($modified): ?><li>Last modified: <?php print $modified; ?></li><?php endif; ?>
  </ul>
</div>
