<?php
/**
 * @file
 * ding_library.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_library_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ding_library';
  $strongarm->value = 0;
  $export['comment_anonymous_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ding_library';
  $strongarm->value = 1;
  $export['comment_default_mode_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ding_library';
  $strongarm->value = '50';
  $export['comment_default_per_page_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ding_library';
  $strongarm->value = '1';
  $export['comment_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ding_library';
  $strongarm->value = 1;
  $export['comment_form_location_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ding_library';
  $strongarm->value = '0';
  $export['comment_preview_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ding_library';
  $strongarm->value = 1;
  $export['comment_subject_field_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ding_library';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_highlight' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ding_library';
  $strongarm->value = '2';
  $export['language_content_type_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ding_library';
  $strongarm->value = array();
  $export['menu_options_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ding_library';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ding_library';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ding_library';
  $strongarm->value = '0';
  $export['node_preview_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ding_library';
  $strongarm->value = 1;
  $export['node_submitted_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_content_type_ding_library';
  $strongarm->value = 'omitted';
  $export['og_group_content_type_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opening_hours_enabled_ding_library';
  $strongarm->value = 1;
  $export['opening_hours_enabled_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_source';
  $strongarm->value = 'profiles/ding2/libraries/openlayers/OpenLayers.js';
  $export['openlayers_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_about_page_ding_library_da_pattern';
  $strongarm->value = 'biblioteker/[node:field_ding_library_slug]/om';
  $export['pathauto_ding_path_alias_library_about_page_ding_library_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_about_page_ding_library_en_pattern';
  $strongarm->value = 'library/[node:field_ding_library_slug]/about';
  $export['pathauto_ding_path_alias_library_about_page_ding_library_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_about_page_ding_library_und_pattern';
  $strongarm->value = '';
  $export['pathauto_ding_path_alias_library_about_page_ding_library_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_about_page_pattern';
  $strongarm->value = 'biblioteker/[node:field_ding_library_slug]/om';
  $export['pathauto_ding_path_alias_library_about_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_event_page_ding_library_da_pattern';
  $strongarm->value = 'biblioteker/[node:field_ding_library_slug]/arrangementer';
  $export['pathauto_ding_path_alias_library_event_page_ding_library_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_event_page_ding_library_en_pattern';
  $strongarm->value = 'library/[node:field_ding_library_slug]/events';
  $export['pathauto_ding_path_alias_library_event_page_ding_library_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_event_page_ding_library_und_pattern';
  $strongarm->value = '';
  $export['pathauto_ding_path_alias_library_event_page_ding_library_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_event_page_pattern';
  $strongarm->value = 'biblioteker/[node:field_ding_library_slug]/events';
  $export['pathauto_ding_path_alias_library_event_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_news_page_ding_library_da_pattern';
  $strongarm->value = 'biblioteker/[node:field_ding_library_slug]/nyheder';
  $export['pathauto_ding_path_alias_library_news_page_ding_library_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_news_page_ding_library_en_pattern';
  $strongarm->value = 'library/[node:field_ding_library_slug]/news';
  $export['pathauto_ding_path_alias_library_news_page_ding_library_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_news_page_ding_library_und_pattern';
  $strongarm->value = '';
  $export['pathauto_ding_path_alias_library_news_page_ding_library_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ding_path_alias_library_news_page_pattern';
  $strongarm->value = 'biblioteker/[node:field_ding_library_slug]/nyheder';
  $export['pathauto_ding_path_alias_library_news_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ding_library_da_pattern';
  $strongarm->value = 'biblioteker/[node:field_ding_library_slug]';
  $export['pathauto_node_ding_library_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ding_library_en_pattern';
  $strongarm->value = 'library/[node:field_ding_library_slug]';
  $export['pathauto_node_ding_library_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ding_library_pattern';
  $strongarm->value = 'biblioteker/[node:field_ding_library_slug]';
  $export['pathauto_node_ding_library_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ding_library_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ding_library_und_pattern'] = $strongarm;

  return $export;
}
