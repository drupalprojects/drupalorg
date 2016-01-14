<?php

class DrupalorgVersioncontrolGitRepositoryManagerWorker extends VersioncontrolGitRepositoryManagerWorkerDefault {

  protected $verified;

  protected $sandbox;

  protected $templateBaseDir;

  public function __construct() {
    // determine the base dir using a global conf var
    $git_basedir = variable_get('drupalorg_git_basedir', '/var/git');
    $this->templateBaseDir = "$git_basedir/templates/built";
  }

  public function init() {
    $this->getSandboxStatus();
    $this->templateDir = $this->templateBaseDir . '/' . (empty($this->sandbox) ? 'project' : 'sandbox');
    return parent::init();
  }

  public function setUserAuthData($uid, $auth_data) {
    $auth_handler = $this->repository->getAuthHandler();
    // special case, let the caller init multiple users' auth data at once
    if (is_array($uid)) {
      foreach ($uid as $id) {
        $auth_handler->setUserData($id, $auth_data);
      }
    }
    else {
      $auth_handler->setUserData($uid, $auth_data);
    }
    $auth_handler->save();
  }

  public function save() {
    parent::save();

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

    if (!file_exists($this->templateBaseDir)) {
      $this->verified = FALSE;
    }
  }

  protected function getSandboxStatus() {
    $project = node_load($this->repository->project_nid);
    $this->sandbox = $project->field_project_type[LANGUAGE_NONE][0]['value'] === 'sandbox';
  }
}
