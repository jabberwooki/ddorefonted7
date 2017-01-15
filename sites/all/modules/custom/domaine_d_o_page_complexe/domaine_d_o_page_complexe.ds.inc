<?php
/**
 * @file
 * domaine_d_o_page_complexe.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function domaine_d_o_page_complexe_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|titre3_txt_summary_option|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'titre3_txt_summary_option';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_titre_niveau_3' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'title-open-close',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|titre3_txt_summary_option|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function domaine_d_o_page_complexe_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|titre3_txt_summary_option|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'titre3_txt_summary_option';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_titre_niveau_3',
        1 => 'field_image_page_complexe',
        2 => 'field_summary_page_complexe',
        3 => 'field_texte_page_complexe',
      ),
    ),
    'fields' => array(
      'field_titre_niveau_3' => 'ds_content',
      'field_image_page_complexe' => 'ds_content',
      'field_summary_page_complexe' => 'ds_content',
      'field_texte_page_complexe' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|titre3_txt_summary_option|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|titre4_txt_summary_option|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'titre4_txt_summary_option';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_titre_niveau_4',
        1 => 'field_image_page_complexe_4',
        2 => 'field_summary_page_complexe',
        3 => 'field_texte_page_complexe',
      ),
    ),
    'fields' => array(
      'field_titre_niveau_4' => 'ds_content',
      'field_image_page_complexe_4' => 'ds_content',
      'field_summary_page_complexe' => 'ds_content',
      'field_texte_page_complexe' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|titre4_txt_summary_option|default'] = $ds_layout;

  return $export;
}