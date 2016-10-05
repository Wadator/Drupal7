<?php
/**
 * @file
 * myfeature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myfeature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function myfeature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function myfeature_node_info() {
  $items = array(
    'film' => array(
      'name' => t('Film'),
      'base' => 'node_content',
      'description' => t('Content type for films'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
