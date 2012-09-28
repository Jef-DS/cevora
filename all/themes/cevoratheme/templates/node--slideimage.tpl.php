<article<?php print $attributes; ?>>
  
  <div<?php print $content_attributes; ?>>
    <div class="bodytextbg" style="position: absolute; z-index: 20; padding: 15px; margin: 190px 0px 0px 50px; width: 370px; height: 100px; opacity: 0.7; overflow: auto; background: none repeat scroll 0% 0% rgb(255, 255, 255); font-style: italic; color: rgb(0, 0, 0);"></div>
    <div >
        <a style="text-decoration:none;position: absolute; z-index: 30; padding: 15px; margin: 190px 0px 0px 50px; overflow: auto; color: rgb(0, 0, 0); font-size: 18px; width: 370px; height: 100px; text-transform: uppercase;" href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a>
    </div>
    <div class="bodytext" style="position: absolute; z-index: 40; padding: 15px; margin: 225px 0px 0px 50px; width: 370px; height: 100px; overflow: auto; font-style: italic; color: rgb(0, 0, 0); line-height: 16px;">
    <?php print render($content['field_tekst']);?>
   </div>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['field_tekst']);
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
   </div>
  
</article>