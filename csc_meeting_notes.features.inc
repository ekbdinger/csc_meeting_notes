<?php
/**
 * @file
 * csc_meeting_notes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function csc_meeting_notes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function csc_meeting_notes_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function csc_meeting_notes_node_info() {
  $items = array(
    'csc_meeting_notes' => array(
      'name' => t('CSC Meeting Notes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
