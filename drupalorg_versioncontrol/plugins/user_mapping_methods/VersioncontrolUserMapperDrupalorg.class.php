<?php

/**
 * Plugin to map commits to d.o users, based on the particular workflows and
 * rules established by the community.
 *
 * First, check if it's an anonymized address. Then, check the multiple_emails
 * module's tables for an entry. Return FALSE if nothing.
 *
 */
class VersioncontrolUserMapperDrupalorg implements VersioncontrolUserMapperInterface {
  public function mapAuthor(VersioncontrolOperation $commit) {
    return $this->map($commit->author);
  }

  public function mapCommitter(VersioncontrolOperation $commit) {
    return $this->map($commit->committer);
  }

  public function map($email) {
    $matches = array();
    preg_match('/^.*@(\d{1,8})\.no-reply\.drupal\.org$/', $email, $matches);
    if (!empty($matches[1])) {
      // It's a special d.o anonymized email addresses. If the uid exists in the db, return it directly.
      if (db_query('SELECT uid FROM {users} WHERE uid = :uid', array(':uid' => $matches[1]))->fetchField()) {
        return $matches[1];
      }
    }

    // Otherwise, check against the multiple_email module, but only use confirmed emails.
    if ($uid = db_query("SELECT uid FROM {multiple_email} WHERE email = :email AND confirmed = 1", array(':email' => $email))->fetchField()) {
      return $uid;
    }

    // No mapping could be found.
    return FALSE;
  }
}
