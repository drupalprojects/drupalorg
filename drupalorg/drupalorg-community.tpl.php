
<div class="grid-8 alpha">
  <?php print $help_form; ?>
  <h3>Recent activity</h3>
  <?php print $recent_activity; ?>
  
</div>
<div class="grid-4 omega">
  <h3 class="community-title">Where is the<br /> Drupal Community?</h3>
  <h5>Online and Local Groups</h5>
  <p><a href="http://groups.drupal.org">Groups.drupal.org</a> provides a place for groups to organize, meet, and work on projects based on interest or geographic location. It's a great way to get involved, learn more and get support.</p>
  <h5>Events</h5>
  <p>Community members can also be found at Drupal <a href="http://groups.drupal.org/event">events</a> where you can meet face to face, swap tips, and get inspiration for your next Drupal project, making friends along the way.</p>
  <h5>Commercial Support</h5>
  <p>If you need professional help, check out our <a href="/marketplace">Marketplace</a> where you can find companies on hand to assist with <a href="/hosting">hosting</a>, <a href="/training-services">training</a> and other <a href="/drupal-services">Drupal services</a> such as development, support, content moderation and spam blocking</a>.</p>
  <h5>Chat (IRC)</h5>
  <p><a href="/irc">IRC</a> is one means to communicate and interact with others. Whether you are asking questions or giving answers, IRC is a fast and effective way of getting involved with the community and getting the support you need.</p>
  <h5>Forum</h5>
  <p><a href="/forum">Our forums</a> offer a huge knowledge bank to support you. It is also a good way for you to <a href="/contribute">contribute</a> and <a href="/contribute/support">help others.</a></p>
  <h5>Mailing Lists</h5>
  <p>There are many <a href="/mailing-lists">mailing lists</a> you can subscribe to, in addition to <a href="/security">security announcements</a>, project issue updates and posts on groups.drupal.org.</p>
  <?php if ($advertisement) : ?>
    <div class="grid-4 alpha omega advertisement">
      <p><a href="/node/218094">Advertising</a> funds the all-volunteer Drupal Association members to deal with serious issues such as hardware upgrades.</p>
    </div>
  <?php endif;?>
</div>
