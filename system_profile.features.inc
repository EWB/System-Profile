<?php
/**
 * @file
 * system_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function system_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function system_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function system_profile_node_info() {
  $items = array(
    'system_profile' => array(
      'name' => t('System Profile'),
      'base' => 'node_content',
      'description' => t('A profile of an installed system or project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
