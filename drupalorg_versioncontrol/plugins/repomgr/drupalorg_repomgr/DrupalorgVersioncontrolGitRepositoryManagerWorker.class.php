<?php

class DrupalorgVersioncontrolGitRepositoryManagerWorker implements VersioncontrolGitRepositoryManagerWorkerInterface {

  protected $verified;

  protected $repository;

  protected $templateDir = '/git/templates/drupalorg_repomgr';

  public function setRepository(VersioncontrolRepository $repository) {
    $this->repository = $repository;
  }

  public function init() {
    exec('mkdir -p ' . escapeshellarg($this->repository->root));
    // Create the repository on disk
    exec('git --git-dir ' . escapeshellarg($this->repository->root) . ' init --template ' . $this->templateDir, $output, $return);
    if ($return) {
      // init failed for some reason, throw exception
      throw new Exception('Git repository initialization failed with code ' . $return . ' and error message \'' . implode(' ', $output) . '\'', E_ERROR);
    }
  }

  public function create() {
    $this->init();
    $this->save();
  }

  public function setUserAuthData($uid, $auth_data) {
    $auth_handler = $this->repository->getAuthHandler();
    $auth_handler->setUserData($uid, $auth_data);
    $auth_handler->save();
  }

  public function setDescription($description) {
    file_put_contents($this->repository->root . '/description', $description);
  }

  public function move($target) {
    exec('mv ' . escapeshellarg($this->repository->root) . ' ' . escapeshellarg($target), $output, $return);

    if ($return) {
      // move failed for some reason, throw exception
      throw new Exception('Moving Git repository from sandbox to full project location failed with code ' . $return . ' and error message \'' . implode(' ', $output) . '\'', E_ERROR);
    }

    $this->repository->root = $target;
  }

  public function delete() {
    exec('rm -rf ' . escapeshellarg($this->repository->root), $output, $return);
    if ($return) {
      // Deletion failed, throw an error.
      throw new Exception('Git repository deletion failed with code ' . $return . ' and error message \'' . implode(' ', $output) . '\'', E_ERROR);
    }

    $this->repository->delete();
  }

  public function save() {
    $this->repository->save();

    // Also ensure the versioncontrol_project_projects association is up to date
    db_merge('versioncontrol_project_projects')
      ->key(array('nid' => $this->repository->project_nid))
      ->fields(array('repo_id' => $this->repository->repo_id))
      ->execute();
  }

  /**
   * Ensure we're properly set up before we try to do anything. If setup does
   * not pass verification, watchdog and optionally throw exceptions.
   *
   * FIXME this is half-implemented. It needs to throw actual errors, watchdog, something.
   */
  public function verifySetup($exception = TRUE) {
    if (!is_null($this->verified)) {
      return;
    }

    $this->verified = TRUE;

    if (!$this->repository instanceof VersioncontrolGitRepository) {
      $this->verified = FALSE;
    }

    if (empty($this->repository->project_nid)) {
      $this->verified = FALSE;
    }

    if (!file_exists($this->templateDir)) {
      $this->verified = FALSE;
    }
  }
}

