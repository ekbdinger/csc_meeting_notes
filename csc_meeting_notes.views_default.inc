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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File Attachments */
  $handler->display->display_options['fields']['field_csc_meet_attachments']['id'] = 'field_csc_meet_attachments';
  $handler->display->display_options['fields']['field_csc_meet_attachments']['table'] = 'field_data_field_csc_meet_attachments';
  $handler->display->display_options['fields']['field_csc_meet_attachments']['field'] = 'field_csc_meet_attachments';
  $handler->display->display_options['fields']['field_csc_meet_attachments']['click_sort_column'] = 'fid';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['id'] = 'field_csc_meeting_notes_1';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['table'] = 'field_data_field_csc_meeting_notes';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['field'] = 'field_csc_meeting_notes';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['label'] = 'Summary';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_csc_meeting_notes_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_csc_meeting_notes']['id'] = 'field_csc_meeting_notes';
  $handler->display->display_options['fields']['field_csc_meeting_notes']['table'] = 'field_data_field_csc_meeting_notes';
  $handler->display->display_options['fields']['field_csc_meeting_notes']['field'] = 'field_csc_meeting_notes';
  $handler->display->display_options['fields']['field_csc_meeting_notes']['alter']['alter_text'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p>&nbsp;</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'csc-meeting-notes';
  $export['csc_meeting_notes'] = $view;

  return $export;
}
