<?php
/**
 * @file
 * Displays the meta-information sidebar.
 *
 * Available variables:
 * - $about: About section information array.
 *
 * @see drupalorg_handbook_meta_data()
 *
 * @ingroup themeable
 */
?>
<dl class="about-section">
  <?php foreach ($about as $title => $terms) { ?>
    <dt><?php print $title; ?></dt>
    <dd><?php print implode(', ', $terms); ?></dd>
  <?php } ?>
</dl>
