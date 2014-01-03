<?php
/**
 * @file
 * system_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function system_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'system_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'System Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Town */
  $handler->display->display_options['fields']['field_town']['id'] = 'field_town';
  $handler->display->display_options['fields']['field_town']['table'] = 'field_data_field_town';
  $handler->display->display_options['fields']['field_town']['field'] = 'field_town';
  $handler->display->display_options['fields']['field_town']['ui_name'] = 'Town';
  $handler->display->display_options['fields']['field_town']['label'] = '';
  $handler->display->display_options['fields']['field_town']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_year_value']['expose']['label'] = 'Year (field_year)';
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
    'system_profile' => 'system_profile',
  );

  /* Display: List of System Profiles */
  $handler = $view->new_display('panel_pane', 'List of System Profiles', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'System Profiles';
  $handler->display->display_options['display_description'] = 'This is a customizable list of System Profiles';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['system_profiles'] = $view;

  return $export;
}
