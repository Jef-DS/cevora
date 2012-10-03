<?php 
function cevoratheme_alpha_preprocess_page(&$vars) {
  if(! empty($vars['page']['header']['header']['header_first']['menu_block_1'])) {
    $url = file_create_url($vars['node']->field_foto['und'][0]['uri']);
    $background_style = "background: url('" . $url . "');background-repeat:no-repeat";
    $menu_block_1 = $vars['page']['header']['header']['header_first']['menu_block_1']; 
    $vars['page']['header']['header']['header_first']['menu_block_1']['#prefix'] = '<div style="' . $background_style . '">';
    $vars['page']['header']['header']['header_first']['menu_block_1']['#suffix'] = '</div>';
  }
}



