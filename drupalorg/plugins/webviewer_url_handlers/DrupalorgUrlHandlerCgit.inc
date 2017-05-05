<?php

class DrupalorgUrlHandlerCgit extends VersioncontrolRepositoryUrlHandlerCgit {
  private $repo_path = NULL;

  private function replaceRepoPath($string) {
    if (is_null($this->repo_path)) {
      $this->repo_path = preg_replace(['#^/var/git/repositories/#', '#^project/#', '#\.git$#', '#/#'], ['', '', '', '-'], $this->repository->root);
    }

    return strtr($string, [
      '%repo_path' => $this->repo_path,
    ]);
  }

  public function getRepositoryViewUrl($label = NULL) {
    return $this->replaceRepoPath(parent::getRepositoryViewUrl($label));
  }

  public function getCommitViewUrl($revision) {
    return $this->replaceRepoPath(parent::getCommitViewUrl($revision));
  }

  public function getItemLogViewUrl($item, $current_label = NULL) {
    return $this->replaceRepoPath(parent::getItemLogViewUrl($item, $current_label));
  }

  public function getItemViewUrl($item, $current_label = NULL) {
    // Removed items has not blob hash
    if (is_null($item->blob_hash)) {
      return '';
    }

    $args = [];
    if (!empty($item->revision)) {
      $args['id'] = $item->revision;
    }
    if (isset($current_label->type) && $current_label->type == VERSIONCONTROL_LABEL_BRANCH && isset($current_label->name)) {
      $args['h'] = $current_label->name;
    }

    $placeholders = [
      '%repo_name' => $this->repository->name,
      '%path' => substr($item->path, 1),
      '%args' => drupal_http_build_query($args),
    ];

    return $this->replaceRepoPath(strtr($this->getTemplateUrl($item->isFile() ? 'file_view' : 'directory_view'), $placeholders));
  }
}
