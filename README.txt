$Id$

This module provides customizations used on drupal.org itself. Other
sites SHOULD NOT INSTALL OR USE THIS MODULE.  It is only included in
the main Drupal contributions repository for three reasons:

1) To facilitate members of the Drupal community who wish to help
debug problems and improve functionality on drupal.org.

2) Certain drupal.org-specific assumptions are made in other modules
(in particular, the project and project_issue suite of modules), and
some code should be moved from those modules into here. Having a
public issue queue for the drupalorg.module will help coordinate these
development efforts.

3) The educational value of an example of the kinds of customizations
you can do via a site-specific module.


Official releases will never be made for this module, since we're just
going to update drupal.org itself directly from CVS.  We have no
intention of supporting this module such that other sites can make use
of it.


p.s. Did we mention you don't want to run this module on your own site?
