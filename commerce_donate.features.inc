<?php
/**
 * @file
 * commerce_donate.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function commerce_donate_commerce_product_default_types() {
  $items = array(
    'donation' => array(
      'type' => 'donation',
      'name' => 'Donation',
      'description' => 'Variable price product',
      'help' => '',
      'revision' => '1',
      'module' => 'commerce_product_ui',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function commerce_donate_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function commerce_donate_node_info() {
  $items = array(
    'donation' => array(
      'name' => t('Donation'),
      'base' => 'node_content',
      'description' => t('Drupal Commerce donation product'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
