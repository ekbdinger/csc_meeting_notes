<?php
/**
 * @file
 * csc_meeting_notes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function csc_meeting_notes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'csc_meeting_notes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CSC Meeting Notes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CSC Meeting Notes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    46 => '46',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'edit_node' => 'edit_node',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>&nbsp;</p>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_csc_meeting_date']['id'] = 'field_csc_meeting_date';
  $handler->display->display_options['fields']['field_csc_meeting_date']['table'] = 'field_data_field_csc_meeting_date';
  $handler->display->display_options['fields']['field_csc_meeting_date']['field'] = 'field_csc_meeting_date';
  $handler->display->display_options['fields']['field_csc_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_csc_meeting_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_csc_meeting_date']['alter']['text'] = '<span class="submitted">[field_csc_meeting_date]</span>';
  $handler->display->display_options['fields']['field_csc_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_csc_meeting_date']['settings'] = array(
    'format_type' => 'csc_service_alert',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Notes:  Summary only displays on View */
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['id'] = 'field_csc_meeting_notes_1';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['table'] = 'field_data_field_csc_meeting_notes';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['field'] = 'field_csc_meeting_notes';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['ui_name'] = 'Notes:  Summary only displays on View';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['label'] = '';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_csc_meet_attachments']['id'] = 'field_csc_meet_attachments';
  $handler->display->display_options['fields']['field_csc_meet_attachments']['table'] = 'field_data_field_csc_meet_attachments';
  $handler->display->display_options['fields']['field_csc_meet_attachments']['field'] = 'field_csc_meet_attachments';
  $handler->display->display_options['fields']['field_csc_meet_attachments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_csc_meet_attachments']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_csc_meet_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_csc_meet_attachments']['click_sort_column'] = 'fid';
  /* Field: Space */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Space';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<p>&nbsp;</p>
';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Read More link */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Read More link';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="links">
» 
<ul class="links inline">
<li class="node-readmore first"><a href="node/[nid]" rel="tag">Read more</a></li>
</ul>
</div>';
  $handler->display->display_options['fields']['nid']['alter']['path'] = '/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Space below each post */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Space below each post';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p>&nbsp;</p>
<hr />
<p>&nbsp;</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Note';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'title' => 0,
    'field_csc_meeting_date' => 0,
    'field_csc_meeting_notes_1' => 0,
    'field_csc_meet_attachments' => 0,
    'nothing_1' => 0,
    'nid' => 0,
    'nothing' => 0,
  );
  /* Sort criterion: Content: Date (field_csc_meeting_date) */
  $handler->display->display_options['sorts']['field_csc_meeting_date_value']['id'] = 'field_csc_meeting_date_value';
  $handler->display->display_options['sorts']['field_csc_meeting_date_value']['table'] = 'field_data_field_csc_meeting_date';
  $handler->display->display_options['sorts']['field_csc_meeting_date_value']['field'] = 'field_csc_meeting_date_value';
  $handler->display->display_options['sorts']['field_csc_meeting_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'csc_meeting_notes' => 'csc_meeting_notes',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Meeting Notes';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'csc/meeting-notes';
  $export['csc_meeting_notes'] = $view;

  return $export;
}
