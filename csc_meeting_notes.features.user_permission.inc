<?php
/**
 * @file
 * csc_meeting_notes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function csc_meeting_notes_user_default_permissions() {
  $permissions = array();

  // Exported permission: create csc_meeting_notes content.
  $permissions['create csc_meeting_notes content'] = array(
    'name' => 'create csc_meeting_notes content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Contact Center Worker' => 'Contact Center Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any csc_meeting_notes content.
  $permissions['delete any csc_meeting_notes content'] = array(
    'name' => 'delete any csc_meeting_notes content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Contact Center Worker' => 'Contact Center Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own csc_meeting_notes content.
  $permissions['delete own csc_meeting_notes content'] = array(
    'name' => 'delete own csc_meeting_notes content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Contact Center Worker' => 'Contact Center Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any csc_meeting_notes content.
  $permissions['edit any csc_meeting_notes content'] = array(
    'name' => 'edit any csc_meeting_notes content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Contact Center Worker' => 'Contact Center Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own csc_meeting_notes content.
  $permissions['edit own csc_meeting_notes content'] = array(
    'name' => 'edit own csc_meeting_notes content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Contact Center Worker' => 'Contact Center Worker',
    ),
    'module' => 'node',
  );

  return $permissions;
}
