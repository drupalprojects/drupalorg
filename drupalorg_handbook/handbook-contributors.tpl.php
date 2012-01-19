<?php
/**
 * @file
 * Displays a list of contributors and call to edit a page.
 *
 * Available variables:
 * - $created: Formatted created date and author.
 * - $updated: Formatted last updated date.
 * - $contributors: Several recent revision authors (formatted).
 * - $edit_link: Link to edit the page or log in.
 *
 * @see drupalorg_handbook_contributor_list()
 *
 * @ingroup themeable
 */
?>
<p class="updated"><em><?php print $updated; ?> <?php print $created; ?>
<?php if (!empty($contributors) || !empty($edit_link)) { ?><br /><?php } ?>
<?php print $contributors; ?> <?php print $edit_link; ?></em></p>
