
This directory contains a collection of modules and blocks that used to house PHP
code on Drupal.org. For better security and stability, these have been converted 
to modules and maintained in this project.

Here is a brief description of each and some maintenance notes, if applicable:

* advert
This module holds several blocks that are used for advertising on Drupal.org.
The ads are either HTML or Javascript (e.g. Google Adsense). The logic in the
module restricts the block's visibility to certain forums (mainly 'Paid services'
and 'Hosting support').

To add new blocks, add the appropriate lines in the _advert_list_blocks(), mainly
a Forum Term ID, and a title for the block.

* bingo
Patch bingo module, for the links in the contributor's block.

* branches
Displays the active branches within Drupal's CVS.

* handbook
Some special handbook pages that have some embedded logic.

* pivots_block
Displays conversation pivots block on project pages.

* planet_drupal_subscription

* project_stuff
Miscellaneous project module stuff.

* quick_stats


* redirects


* searchquery

