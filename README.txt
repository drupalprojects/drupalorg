These modules provide customizations used on Drupal.org itself. Other sites
SHOULD NOT INSTALL OR USE THESE MODULES. They are only included in the main
Drupal contributions repository for three reasons:

  1) To facilitate members of the Drupal community who wish to help
     debug problems and improve functionality on Drupal.org.

  2) Certain Drupal.org-specific assumptions are made in other modules
     (in particular, the project and project_issue suite of modules), and
     some code should be moved from those modules into here. Having a
     public issue queue for the drupalorg.module will help coordinate these
     development efforts.

  3) The educational value of an example of the kinds of customizations
     you can do via a site-specific module.

Official releases will never be made for this module, since we’re just
going to update Drupal.org based on our changes in Git. We have no
intention of supporting this module such that other sites can make use
of it.

p.s. Did we mention you don’t want to run this module on your own site?


## Contributing

Work from the `dev` branch, using feature branches named
`{issue number}-{short-description}`, for example
`2182993-api-breadcrumb-space`.

See https://www.drupal.org/node/2406727 for more information.
