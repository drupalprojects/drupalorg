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

  public function getRepositoryViewUrl() {
    return $this->replaceRepoPath(parent::getRepositoryViewUrl());
  }

  public function getCommitViewUrl($revision) {
    return $this->replaceRepoPath(parent::getCommitViewUrl($revision));
  }

  public function getItemLogViewUrl($item, $current_label = NULL) {
    return $this->replaceRepoPath(parent::getItemLogViewUrl($item, $current_label));
  }

  public function getItemViewUrl($item, $current_label = NULL) {
    return $this->replaceRepoPath(parent::getItemViewUrl($item, $current_label));
  }
}
