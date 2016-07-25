<div <?php if(isset($content['field_cta_background']['#items']['0']['filename'])): ?>style="background-image: url('/sites/default/files/cta/background/<?php print render($content['field_cta_background']['#items']['0']['filename']); ?>');"<?php endif; ?> class="pane-style-<?php print $content['field_cta_style']['#items'][0]['value'] . ' ' . $classes; ?>"<?php print $attributes; ?>>
  <?php print render($content['field_cta_graphic']); ?>
  <div class="cta-text">
    <h2><?php print $content['title']['#value']; ?></h2>
    <?php print render($content['field_cta_body']); ?>
    <?php print render($content['field_cta_link']); ?>
  </div>
</div>
