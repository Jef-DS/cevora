<?php
/**
 * @file
 * cevora_content.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cevora_content_taxonomy_default_vocabularies() {
  return array(
    'faq_categorie' => array(
      'name' => 'FAQ categorie',
      'machine_name' => 'faq_categorie',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
