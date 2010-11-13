<table>
  <caption>Drupal Association Membership</caption>
  <?php if (count($drupalorg_civimembership->memberships) > 0): ?>
    <thead>
      <th>Membership Type</th>
      <?php if ($is_current_user): ?>
        <th>End Date</th>
        <th>Status</th>
        <th></th>
     <?php endif; ?>
    </thead>

    <tbody>
      <?php foreach ($drupalorg_civimembership->memberships as $membership): ?>
        <tr>
          <td><?php print check_plain($membership['membership_type']) ?></td>
          <?php if ($is_current_user): ?>
            <td><?php print format_date(strtotime($membership['end_date']), 'custom', 'M jS, Y') ?></td>
            <td><?php print check_plain($membership['status']) ?></td>
            <td><a href="<?php print check_url('http://association.drupal.org/civicrm/contribute/transact?reset=1&id=' . $values['entity_id']) ?> ">Renew this membership</a></td>
          <?php endif; ?>
        </tr>
      <?php endforeach; ?>
    </tbody>
  <?php else: ?>
    <tbody>
      <?php if ($is_current_user): ?>
        <tr>
          <td><a href="http://association.drupal.org/civicrm/contribute/transact?reset=1&id=1">Buy an Individual Membership</a></td>
        </tr>
        <tr>
          <td><a href="http://association.drupal.org/civicrm/contribute/transact?reset=1&id=2">Buy an Organizational Membership</a></td>
        </tr>
      <?php else: ?>
        <tr><td>This user does not have any memberships.</td></tr>
      <?php endif; ?>
    </tbody>
  <?php endif; ?>
</table>

