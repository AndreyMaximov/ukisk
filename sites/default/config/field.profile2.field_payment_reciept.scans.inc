<?php
/**
 * @file
 * field.profile2.field_payment_reciept.scans.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'active' => '1',
    'cardinality' => '-1',
    'columns' => array(
      'alt' => array(
        'description' => 'Alternative image text, for the image\'s \'alt\' attribute.',
        'length' => 512,
        'not null' => FALSE,
        'type' => 'varchar',
      ),
      'fid' => array(
        'description' => 'The {file_managed}.fid being referenced in this field.',
        'not null' => FALSE,
        'type' => 'int',
        'unsigned' => TRUE,
      ),
      'height' => array(
        'description' => 'The height of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
      'title' => array(
        'description' => 'Image title text, for the image\'s \'title\' attribute.',
        'length' => 1024,
        'not null' => FALSE,
        'type' => 'varchar',
      ),
      'width' => array(
        'description' => 'The width of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_payment_reciept',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => '0',
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'profile2_private' => 1,
      'uri_scheme' => 'public',
    ),
    'storage' => array(
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_payment_reciept' => array(
              'alt' => 'field_payment_reciept_alt',
              'fid' => 'field_payment_reciept_fid',
              'height' => 'field_payment_reciept_height',
              'title' => 'field_payment_reciept_title',
              'width' => 'field_payment_reciept_width',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_payment_reciept' => array(
              'alt' => 'field_payment_reciept_alt',
              'fid' => 'field_payment_reciept_fid',
              'height' => 'field_payment_reciept_height',
              'title' => 'field_payment_reciept_title',
              'width' => 'field_payment_reciept_width',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => '0',
    'type' => 'image',
  ),
  'field_instance' => array(
    'bundle' => 'scans',
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_payment_reciept',
    'label' => 'Квитанция об оплате',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/payments',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => '31',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'image',
);
