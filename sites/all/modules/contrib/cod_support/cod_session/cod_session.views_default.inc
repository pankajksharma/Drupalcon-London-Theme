<?php

/**
 * Implementation of hook_views_default_views().
 */
function cod_session_views_default_views() {
  $views = array();

  // Exported view: cod_schedule
  $view = new view;
  $view->name = 'cod_schedule';
  $view->description = 'Session Schedule';
  $view->tag = 'cod session';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'flag_content_rel' => array(
      'label' => 'flag: session_schedule',
      'required' => 0,
      'flag' => 'session_schedule',
      'user_scope' => 'current',
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('fields', array(
    'field_track_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_track_value',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<strong>[title]</strong>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_presenters_uid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'user_full_name',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_presenters_uid',
      'table' => 'node_data_field_presenters',
      'field' => 'field_presenters_uid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_experience_value' => array(
      'label' => 'Experience',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_experience_value',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'ops' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_type' => '',
      'exclude' => 0,
      'id' => 'ops',
      'table' => 'flag_content',
      'field' => 'ops',
      'relationship' => 'flag_content_rel',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
        'schedule_item' => 'schedule_item',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_accepted_value' => array(
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_accepted_value',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_session_slot_nid' => array(
      'operator' => 'not empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_slot_nid',
      'table' => 'node_data_field_session_slot',
      'field' => 'field_session_slot_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_session_room_nid' => array(
      'operator' => 'not empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_room_nid',
      'table' => 'node_data_field_session_room',
      'field' => 'field_session_room_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '3' => 3,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Schedule (Access Restricted)');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('empty', 'The schedule is empty. Please create one or more rooms and timeslots, and assign a session or schedule item to them. For help with scheduling, please see the <a href="http://groups.drupal.org/node/79003">COD Documentation</a>.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('link_display', 'page_1');
  $handler->override_option('style_plugin', 'cod_session_calendar');
  $handler->override_option('style_options', NULL);
  $handler = $view->new_display('page', 'Schedule', 'page_1');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'schedule_item' => 'schedule_item',
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_accepted_value' => array(
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_accepted_value',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_session_slot_nid' => array(
      'operator' => 'not empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_slot_nid',
      'table' => 'node_data_field_session_slot',
      'field' => 'field_session_slot_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_session_room_nid' => array(
      'operator' => 'not empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_room_nid',
      'table' => 'node_data_field_session_room',
      'field' => 'field_session_room_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('path', 'program/session-schedule/all');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Session Schedule',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Session schedule',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler = $view->new_display('block', 'Primary Sessions Block', 'block_1');
  $handler->override_option('block_description', 'Primary Sessions');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('page', 'Your schedule', 'page_4');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
        'schedule_item' => 'schedule_item',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_accepted_value' => array(
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_accepted_value',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_session_slot_nid' => array(
      'operator' => 'not empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_slot_nid',
      'table' => 'node_data_field_session_slot',
      'field' => 'field_session_slot_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_session_room_nid' => array(
      'operator' => 'not empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_room_nid',
      'table' => 'node_data_field_session_room',
      'field' => 'field_session_room_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'flagged' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'flagged',
      'table' => 'flag_content',
      'field' => 'flagged',
      'relationship' => 'flag_content_rel',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('title', 'Your schedule');
  $handler->override_option('empty', 'Your schedule is empty. You can add sessions to your personal schedule from the <a href="./program/session-schedule">main schedule.</a>');
  $handler->override_option('path', 'program/session-schedule/your-schedule');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Your schedule',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  // Exported view: sessions
  $view = new view;
  $view->name = 'sessions';
  $view->description = 'Submitted sessions (before voting)';
  $view->tag = 'cod session';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Session',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_presenters_uid' => array(
      'label' => 'Presenter(s)',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'user_full_name',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '10',
        'multiple_from' => '0',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_presenters_uid',
      'table' => 'node_data_field_presenters',
      'field' => 'field_presenters_uid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'teaser' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '200',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'teaser',
      'table' => 'node_revisions',
      'field' => 'teaser',
      'relationship' => 'none',
    ),
    'field_accepted_value' => array(
      'label' => 'Status',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_accepted_value',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_experience_value' => array(
      'label' => 'Experience level',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_experience_value',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_track_value' => array(
      'label' => 'Track',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_track_value',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_experience_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_experience_value_many_to_one_op',
        'identifier' => 'field_experience_value_many_to_one',
        'label' => 'Experience level',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_experience_value_many_to_one',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_track_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_track_value_many_to_one_op',
        'identifier' => 'field_track_value_many_to_one',
        'label' => 'Track',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_track_value_many_to_one',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Filter by keywords:',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_accepted_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        '1' => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_accepted_value_many_to_one_op',
        'label' => 'by status:',
        'use_operator' => 0,
        'identifier' => 'status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_accepted_value_many_to_one',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value_many_to_one',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Sessions');
  $handler->override_option('css_class', 'view-grouped-list sessions-list');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('empty', 'No sessions have been submitted.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', '1');
  $handler->override_option('link_display', 'page_1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'field_presenters_uid' => 'title',
      'teaser' => 'title',
      'field_accepted_value' => 'title',
      'field_experience_value' => 'field_experience_value',
      'field_track_value' => 'field_track_value',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '<br>',
      ),
      'field_presenters_uid' => array(
        'separator' => '',
      ),
      'teaser' => array(
        'separator' => '',
      ),
      'field_accepted_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_experience_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_track_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'field_presenters_uid' => 'field_presenters_uid',
    ),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler = $view->new_display('page', 'Page: Accepted', 'page_1');
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Accepted sessions');
  $handler->override_option('empty', 'Sessions have not yet been accepted.');
  $handler->override_option('path', 'program/sessions/accepted');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Accepted sessions',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Sessions',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler = $view->new_display('feed', 'Feed: Sessions All', 'feed_1');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_experience_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_experience_value_many_to_one_op',
        'identifier' => 'field_experience_value_many_to_one',
        'label' => 'Experience level',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_experience_value_many_to_one',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_track_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_track_value_many_to_one_op',
        'identifier' => 'field_track_value_many_to_one',
        'label' => 'Track',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_track_value_many_to_one',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Filter by keywords:',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'item_length' => 'fulltext',
  ));
  $handler->override_option('path', 'program/sessions/proposed/rss');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'block_1' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('block', 'Block: Session Details', 'block_1');
  $handler->override_option('relationships', array(
    'field_session_slot_nid' => array(
      'label' => 'Time slot',
      'required' => 0,
      'delta' => -1,
      'id' => 'field_session_slot_nid',
      'table' => 'node_data_field_session_slot',
      'field' => 'field_session_slot_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'field_accepted_value' => array(
      'label' => 'Status: ',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_accepted_value',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => 'Schedule: ',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_session_slot_nid',
    ),
    'field_track_value' => array(
      'label' => 'Track: ',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_track_value',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'delta' => array(
      'id' => 'delta',
      'table' => 'node_data_field_session_room',
      'field' => 'delta',
    ),
  ));
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'node',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '6' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'me_redirect' => 0,
      'me_validate_user_argument_type' => 'uid',
      'me_validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '6' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'validate_argument_node_type' => array(
        'news' => 0,
        'session' => 0,
        'sponsor' => 0,
        'tshirt_design' => 0,
        'event' => 0,
        'page' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
      'validate_argument_signup_status' => 'any',
      'validate_argument_signup_node_access' => 0,
      'me_validate_user_restrict_roles' => 0,
    ),
  ));
  $handler->override_option('title', 'Sessions Details');
  $handler->override_option('css_class', 'session-details');
  $handler->override_option('items_per_page', 1);
  $handler->override_option('block_description', 'Sessions: Session Details');
  $handler->override_option('block_caching', '4');
  $handler = $view->new_display('block', 'Block: Session Presenters', 'block_2');
  $handler->override_option('relationships', array(
    'field_presenters_uid' => array(
      'label' => 'Presenter(s)',
      'required' => 0,
      'delta' => '-1',
      'id' => 'field_presenters_uid',
      'table' => 'node_data_field_presenters',
      'field' => 'field_presenters_uid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'picture' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_presenters_uid',
    ),
    'name' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_presenters_uid',
    ),
    'name_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '([name_1])',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name_1',
      'table' => 'users',
      'field' => 'name',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'value' => array(
      'label' => 'Personal information: Organization',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => 'organization/[value]',
        'link_class' => '',
        'alt' => 'People who work with [value]',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'exclude' => 0,
      'id' => 'value',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_presenters_uid',
    ),
  ));
  $handler->override_option('sorts', array(
    'name' => array(
      'order' => 'DESC',
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'field_presenters_uid',
    ),
  ));
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'node',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '6' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'me_redirect' => 0,
      'me_validate_user_argument_type' => 'uid',
      'me_validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '6' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'validate_argument_node_type' => array(
        'news' => 0,
        'session' => 0,
        'sponsor' => 0,
        'tshirt_design' => 0,
        'event' => 0,
        'page' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
      'validate_argument_signup_status' => 'any',
      'validate_argument_signup_node_access' => 0,
      'me_validate_user_restrict_roles' => 0,
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_accepted_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        '1' => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_accepted_value_many_to_one_op',
        'label' => 'by status:',
        'use_operator' => 0,
        'identifier' => 'status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_accepted_value_many_to_one',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('title', 'Session Presenters');
  $handler->override_option('css_class', 'session-presenters');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'grid');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'columns' => '1',
    'alignment' => 'horizontal',
    'fill_single_line' => 1,
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'picture' => 'picture',
      'name' => 'name',
    ),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler->override_option('block_description', 'Sessions: Session Presenters');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('page', 'Page: Proposed', 'page_2');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_experience_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_experience_value_many_to_one_op',
        'identifier' => 'field_experience_value_many_to_one',
        'label' => 'Experience level',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_experience_value_many_to_one',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_track_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_track_value_many_to_one_op',
        'identifier' => 'field_track_value_many_to_one',
        'label' => 'Track',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_track_value_many_to_one',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Filter by keywords:',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_accepted_value_many_to_one' => array(
      'operator' => 'not',
      'value' => array(
        '1' => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_accepted_value_many_to_one_op',
        'label' => 'by status:',
        'use_operator' => 0,
        'identifier' => 'status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_accepted_value_many_to_one',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('title', 'Proposed Sessions');
  $handler->override_option('path', 'program/sessions/proposed');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Proposed sessions',
    'description' => '',
    'weight' => '10',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Block: Featured', 'block_3');
  $handler->override_option('relationships', array(
    'nodequeue_rel' => array(
      'label' => 'queue',
      'required' => 1,
      'limit' => 1,
      'qids' => array(
        '4' => 4,
        '1' => 0,
        '2' => 0,
      ),
      'id' => 'nodequeue_rel',
      'table' => 'node',
      'field' => 'nodequeue_rel',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_accepted_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        '1' => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_accepted_value_many_to_one_op',
        'label' => 'by status:',
        'use_operator' => 0,
        'identifier' => 'status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_accepted_value_many_to_one',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value_many_to_one',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('title', 'Featured Sessions');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: sessions_admin
  $view = new view;
  $view->name = 'sessions_admin';
  $view->description = 'Session organizing View';
  $view->tag = 'cod session';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_accepted_value' => array(
      'label' => 'Status',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_accepted_value',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_presenters_uid' => array(
      'label' => 'Presenters',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_presenters_uid',
      'table' => 'node_data_field_presenters',
      'field' => 'field_presenters_uid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_experience_value' => array(
      'label' => 'Experience',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_experience_value',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_track_value' => array(
      'label' => 'Track',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_track_value',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'edit_node' => array(
      'label' => 'Ops',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => '',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_track_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_track_value_many_to_one_op',
        'identifier' => 'field_track_value_many_to_one',
        'label' => 'Track',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_track_value_many_to_one',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Filter by keywords:',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_accepted_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        '1' => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_accepted_value_many_to_one_op',
        'label' => 'by status:',
        'use_operator' => 0,
        'identifier' => 'status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_accepted_value_many_to_one',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value_many_to_one',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_experience_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => '',
        'identifier' => 'experience_level',
        'label' => 'Experience level',
        'optional' => 1,
        'single' => 0,
        'remember' => 1,
        'reduce' => 0,
      ),
      'id' => 'field_experience_value_many_to_one',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_session_room_nid' => array(
      'id' => 'field_session_room_nid',
      'table' => 'node_data_field_session_room',
      'field' => 'field_session_room_nid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'edit field_accepted',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Sessions');
  $handler->override_option('css_class', 'view-grouped-list sessions-list');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('empty', 'There are no sessions with this status.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', '1');
  $handler->override_option('link_display', 'page_1');
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'field_accepted_value' => 'field_accepted_value',
      'field_presenters_uid' => 'field_presenters_uid',
      'field_experience_value' => 'field_experience_value',
      'field_track_value' => 'field_track_value',
      'edit_node' => 'edit_node',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_accepted_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_presenters_uid' => array(
        'separator' => '',
      ),
      'field_experience_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_track_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'edit_node' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'field_presenters_uid' => 'field_presenters_uid',
    ),
    'separator' => ', ',
    'hide_empty' => 0,
  ));
  $handler = $view->new_display('page', 'Accepted sessions', 'page_1');
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_track_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_track_value_many_to_one_op',
        'identifier' => 'field_track_value_many_to_one',
        'label' => 'Track',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_track_value_many_to_one',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Filter by keywords:',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_accepted_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        '1' => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_accepted_value_many_to_one_op',
        'label' => 'by status:',
        'use_operator' => 0,
        'identifier' => 'status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_accepted_value_many_to_one',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value_many_to_one',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_experience_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => '',
        'identifier' => 'experience_level',
        'label' => 'Experience level',
        'optional' => 1,
        'single' => 0,
        'remember' => 1,
        'reduce' => 0,
      ),
      'id' => 'field_experience_value_many_to_one',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_session_room_nid' => array(
      'operator' => 'empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_room_nid',
      'table' => 'node_data_field_session_room',
      'field' => 'field_session_room_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_session_slot_nid' => array(
      'operator' => 'empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_slot_nid',
      'table' => 'node_data_field_session_slot',
      'field' => 'field_session_slot_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('title', 'Accepted sessions');
  $handler->override_option('header', 'Note: Only unscheduled sessions (that are accepted and published) are displayed here.');
  $handler->override_option('header_empty', 1);
  $handler->override_option('path', 'conference-admin/sessions/accepted');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Accepted Sessions',
    'description' => '',
    'weight' => '1',
    'name' => 'menu-conference-admin',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Sessions',
    'description' => '',
    'weight' => '0',
    'name' => 'menu-conference-admin',
  ));
  $handler = $view->new_display('page', 'Declined sessions', 'page_3');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_track_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_track_value_many_to_one_op',
        'identifier' => 'field_track_value_many_to_one',
        'label' => 'Track',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_track_value_many_to_one',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Filter by keywords:',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_accepted_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        '2' => '2',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_accepted_value_many_to_one_op',
        'label' => 'by status:',
        'use_operator' => 0,
        'identifier' => 'status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_accepted_value_many_to_one',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_experience_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => '',
        'identifier' => 'experience_level',
        'label' => 'Experience level',
        'optional' => 1,
        'single' => 0,
        'remember' => 1,
        'reduce' => 0,
      ),
      'id' => 'field_experience_value_many_to_one',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('title', 'Declined sessions');
  $handler->override_option('header', 'Note: Only declined sessions (of any published status) are displayed here.');
  $handler->override_option('path', 'conference-admin/sessions/declined');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Declined Sessions',
    'description' => '',
    'weight' => '-8',
    'name' => 'menu-conference-admin',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'Unprocessed sessions', 'page_4');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_track_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_track_value_many_to_one_op',
        'identifier' => 'field_track_value_many_to_one',
        'label' => 'Track',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_track_value_many_to_one',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Filter by keywords:',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_accepted_value_many_to_one' => array(
      'operator' => 'not',
      'value' => array(
        '1' => '1',
        '2' => '2',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'field_accepted_value_many_to_one_op',
        'label' => 'by status:',
        'use_operator' => 0,
        'identifier' => 'status',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'field_accepted_value_many_to_one',
      'table' => 'node_data_field_accepted',
      'field' => 'field_accepted_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_experience_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => '',
        'identifier' => 'experience_level',
        'label' => 'Experience level',
        'optional' => 1,
        'single' => 0,
        'remember' => 1,
        'reduce' => 0,
      ),
      'id' => 'field_experience_value_many_to_one',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('title', 'Unprocessed sessions');
  $handler->override_option('path', 'conference-admin/sessions/unprocessed');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Unprocessed sessions',
    'description' => '',
    'weight' => '-9',
    'name' => 'menu-conference-admin',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Session moderation',
    'description' => '',
    'weight' => '0',
    'name' => 'menu-conference-admin',
  ));
  $handler = $view->new_display('page', 'Scheduled sessions', 'page_2');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'session' => 'session',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'field_track_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_track_value_many_to_one_op',
        'identifier' => 'field_track_value_many_to_one',
        'label' => 'Track',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_track_value_many_to_one',
      'table' => 'node_data_field_track',
      'field' => 'field_track_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Filter by keywords:',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_experience_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => '',
        'identifier' => 'experience_level',
        'label' => 'Experience level',
        'optional' => 1,
        'single' => 0,
        'remember' => 1,
        'reduce' => 0,
      ),
      'id' => 'field_experience_value_many_to_one',
      'table' => 'node_data_field_experience',
      'field' => 'field_experience_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_session_room_nid' => array(
      'operator' => 'not empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_room_nid',
      'table' => 'node_data_field_session_room',
      'field' => 'field_session_room_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_session_slot_nid' => array(
      'operator' => 'not empty',
      'value' => array(),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_session_slot_nid',
      'table' => 'node_data_field_session_slot',
      'field' => 'field_session_slot_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('header', '<a href="/program/schedule">View schedule grid</a>');
  $handler->override_option('header_empty', 1);
  $handler->override_option('path', 'conference-admin/sessions/scheduled');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Scheduled sessions',
    'description' => '',
    'weight' => '6',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
