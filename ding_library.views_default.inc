<?php
/**
 * @file
 * ding_library.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_library_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ding_library';
  $view->description = '';
  $view->tag = 'ding_library';
  $view->base_table = 'node';
  $view->human_name = 'Ding library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'vcard clearfix library-[nid]';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['style_options']['class'] = 'library-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_library_list_image']['id'] = 'field_ding_library_list_image';
  $handler->display->display_options['fields']['field_ding_library_list_image']['table'] = 'field_data_field_ding_library_list_image';
  $handler->display->display_options['fields']['field_ding_library_list_image']['field'] = 'field_ding_library_list_image';
  $handler->display->display_options['fields']['field_ding_library_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_library_list_image']['settings'] = array(
    'image_style' => 'ding_library_list',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title fn org middle-col';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Addresse */
  $handler->display->display_options['fields']['field_ding_library_addresse']['id'] = 'field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['table'] = 'field_data_field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['field'] = 'field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_class'] = 'address add middle-col';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_library_addresse']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ding_library_addresse']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_ding_library_phone_number']['id'] = 'field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['table'] = 'field_data_field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['field'] = 'field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['label'] = 'Phone';
  /* Field: Content: Fax number */
  $handler->display->display_options['fields']['field_ding_library_fax_number']['id'] = 'field_ding_library_fax_number';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['table'] = 'field_data_field_ding_library_fax_number';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['field'] = 'field_ding_library_fax_number';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['label'] = 'Fax';
  $handler->display->display_options['fields']['field_ding_library_fax_number']['hide_empty'] = TRUE;
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_ding_library_mail']['id'] = 'field_ding_library_mail';
  $handler->display->display_options['fields']['field_ding_library_mail']['table'] = 'field_data_field_ding_library_mail';
  $handler->display->display_options['fields']['field_ding_library_mail']['field'] = 'field_ding_library_mail';
  $handler->display->display_options['fields']['field_ding_library_mail']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_mail']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Library (field_ding_news_library:nid) */
  $handler->display->display_options['arguments']['ding_library_nid']['id'] = 'ding_library_nid';
  $handler->display->display_options['arguments']['ding_library_nid']['table'] = 'field_data_field_ding_news_library';
  $handler->display->display_options['arguments']['ding_library_nid']['field'] = 'ding_library_nid';
  $handler->display->display_options['arguments']['ding_library_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['ding_library_nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_library' => 'ding_library',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Libraries list */
  $handler = $view->new_display('panel_pane', 'Libraries list', 'ding_library_libraries_list');
  $handler->display->display_options['pane_category']['name'] = 'Library panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'nid',
    'other_lon' => 'nid',
    'wkt' => 'field_ding_library_geocode',
    'other_top' => 'nid',
    'other_right' => 'nid',
    'other_bottom' => 'nid',
    'other_left' => 'nid',
    'name_field' => 'title',
    'description_field' => '#row',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Geocode */
  $handler->display->display_options['fields']['field_ding_library_geocode']['id'] = 'field_ding_library_geocode';
  $handler->display->display_options['fields']['field_ding_library_geocode']['table'] = 'field_data_field_ding_library_geocode';
  $handler->display->display_options['fields']['field_ding_library_geocode']['field'] = 'field_ding_library_geocode';
  $handler->display->display_options['fields']['field_ding_library_geocode']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_geocode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_library_geocode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_geocode']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_ding_library_geocode']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Addresse */
  $handler->display->display_options['fields']['field_ding_library_addresse']['id'] = 'field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['table'] = 'field_data_field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['field'] = 'field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_addresse']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_addresse']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ding_library_addresse']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Opening hours */
  $handler->display->display_options['fields']['field_ding_library_opening_hours']['id'] = 'field_ding_library_opening_hours';
  $handler->display->display_options['fields']['field_ding_library_opening_hours']['table'] = 'field_data_field_ding_library_opening_hours';
  $handler->display->display_options['fields']['field_ding_library_opening_hours']['field'] = 'field_ding_library_opening_hours';
  $handler->display->display_options['fields']['field_ding_library_opening_hours']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_opening_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_library_opening_hours']['element_label_colon'] = FALSE;
  $translatables['ding_library'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Gendan'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Phone'),
    t('Fax'),
    t('All'),
    t('Libraries list'),
    t('Library panes'),
    t('OpenLayers Data Overlay'),
  );
  $export['ding_library'] = $view;

  return $export;
}
