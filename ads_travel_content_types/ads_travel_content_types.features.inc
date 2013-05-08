<?php
/**
 * @file
 * ads_travel_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_travel_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ads_travel_content_types_node_info() {
  $items = array(
    'flight' => array(
      'name' => t('Flight'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
