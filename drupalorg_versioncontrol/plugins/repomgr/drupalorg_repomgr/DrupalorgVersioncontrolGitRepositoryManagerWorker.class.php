<?php

class DrupalorgVersioncontrolGitRepositoryManagerWorker implements VersioncontrolGitRepositoryManagerWorkerInterface {

  protected $verified;

  protected $repository;

  protected $sandbox;

  protected $templateBaseDir;

  public function __construct() {
    // determine the base dir using a global conf var
    $git_basedir = variable_get('drupalorg_git_basedir', '/var/git');
    $this->templateBaseDir = "$git_basedir/templates/built";
  }

  public function setRepository(VersioncontrolRepository $repository) {
    $this->repository = $repository;
  }

  public function init() {
    $this->getSandboxStatus();
    $template_dir = $this->templateBaseDir . '/' . (empty($this->sandbox) ? 'project' : 'sandbox');
    // Create the repository on disk
    $return = $this->passthru('init --template ' . $template_dir, FALSE);

    if ($return) {
      // init failed for some reason, throw exception
      throw new Exception('Git repository initialization failed with code ' . $return, E_ERROR);
    }
  }

  public function reInit(array $flush) {
    if (!empty($flush)) {
      $flush = count($flush) > 1 ? '{' . implode(',', $flush) . '}' : array_shift($flush);
      exec("rm -rf {$this->repository->root}/$flush");
    }
    $this->init();
  }

  public function create() {
    exec('mkdir -p ' . escapeshellarg($this->repository->root), $output, $return);
    if ($return) {
      // init failed for some reason, throw exception
      throw new Exception('Failed to mkdir for intended repository location "' . $this->repository->root . '"; mkdir exited with code ' . $return, E_ERROR);
    }

    $this->init();
    $this->save();
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

  public function passthru($command, $exception = FALSE) {
    $prepend = "GIT_DIR={$this->repository->root} " . _versioncontrol_git_get_binary_path() . ' ';
    $command = escapeshellcmd($prepend . $command);
    exec($command, $output, $return);
    if ($exception && $return) {
      throw new Exception ("Command '$command' exited with status $return and the following output: " . implode(' ', $output), E_ERROR);
    }
    return $return;
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
    $this->sandbox = (int) db_result(db_query('SELECT sandbox FROM {project_projects} WHERE nid = %d', $this->repository->project_nid));
  }
}

