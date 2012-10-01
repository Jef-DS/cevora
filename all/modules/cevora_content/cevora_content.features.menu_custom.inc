<?php
/**
 * @file
 * cevora_content.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cevora_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-minimenu.
  $menus['menu-minimenu'] = array(
    'menu_name' => 'menu-minimenu',
    'title' => 'Minimenu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Minimenu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
