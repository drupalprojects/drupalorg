<div class="project-info item-list">
  <h3>Project Information</h3>
  <ul>
    <?php foreach ($info as $title => $terms): ?>
      <li><?php print $title; ?>: <?php print $terms; ?></li>
    <?php endforeach; ?>
    <?php if ($modified): ?>
      <li class="modified">Last modified: <?php print $modified; ?></li>
    <?php endif; ?>
  </ul>
</div>
