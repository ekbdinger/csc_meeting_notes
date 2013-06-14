<?php
/**
 * @file
 * csc_meeting_notes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function csc_meeting_notes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_csc_meeting_notes';
  $strongarm->value = 0;
  $export['comment_anonymous_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_csc_meeting_notes';
  $strongarm->value = '1';
  $export['comment_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_csc_meeting_notes';
  $strongarm->value = 1;
  $export['comment_default_mode_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_csc_meeting_notes';
  $strongarm->value = '50';
  $export['comment_default_per_page_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_csc_meeting_notes';
  $strongarm->value = 1;
  $export['comment_form_location_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_csc_meeting_notes';
  $strongarm->value = '1';
  $export['comment_preview_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_csc_meeting_notes';
  $strongarm->value = 1;
  $export['comment_subject_field_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__csc_meeting_notes';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'badges' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_csc_meeting_notes';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_csc_meeting_notes';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_csc_meeting_notes';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_csc_meeting_notes';
  $strongarm->value = '1';
  $export['node_preview_csc_meeting_notes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_csc_meeting_notes';
  $strongarm->value = 1;
  $export['node_submitted_csc_meeting_notes'] = $strongarm;

  return $export;
}
