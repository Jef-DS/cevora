<?php
/**
 * @file
 * cevora_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cevora_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cevora_content_node_info() {
  $items = array(
    'pagina' => array(
      'name' => t('Pagina'),
      'base' => 'node_content',
      'description' => t('Een pagina van de Cevora site'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'slideimage' => array(
      'name' => t('Slideimage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
