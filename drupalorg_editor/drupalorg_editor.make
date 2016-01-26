api = 2
core = 7.x

projects[dialog][version] = "2.0-alpha8"
projects[dialog][type] = "module"
projects[dialog][subdir] = "contrib"

projects[editor][version] = "1.0-alpha6"
projects[editor][type] = "module"
projects[editor][subdir] = "contrib"

; EditorLinkDialog should validate URLs, and autocomplete like the Link widget.
; https://www.drupal.org/node/2604774#comment-10576566
projects[editor][patch][2604774] = "http://drupal.org/files/issues/validation-autocomplete-links-2604774-5.patch"

projects[editor_ckeditor_widgets][version] = "1.x-dev"
projects[editor_ckeditor_widgets][type] = "module"
projects[editor_ckeditor_widgets][subdir] = "contrib"
projects[editor_ckeditor_widgets][download][type] = "git"
projects[editor_ckeditor_widgets][download][revision] = "23c91d5"
projects[editor_ckeditor_widgets][download][branch] = "7.x-1.x"

projects[entity_embed][version] = "3.x-dev"
projects[entity_embed][type] = "module"
projects[entity_embed][subdir] = "contrib"
projects[entity_embed][download][type] = "git"
projects[entity_embed][download][revision] = "2882073"
projects[entity_embed][download][branch] = "7.x-3.x"

projects[jquery_update][version] = "2.7"
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

libraries[ckeditor-leaflet][download][type] = "get"
libraries[ckeditor-leaflet][download][url] = "https://github.com/ranelpadon/ckeditor-leaflet/archive/master.zip"
libraries[ckeditor-leaflet][directory_name] = "ckeditor-leaflet"
