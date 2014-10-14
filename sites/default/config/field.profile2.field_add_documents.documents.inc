<?php
/**
 * @file
 * field.profile2.field_add_documents.documents.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'active' => '1',
    'cardinality' => '-1',
    'columns' => array(
      'value' => array(
        'length' => 255,
        'not null' => FALSE,
        'type' => 'varchar',
      ),
    ),
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_add_documents',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => '0',
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'claim' => 'претензия туроператору и/или турагенту',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 1,
    ),
    'storage' => array(
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_add_documents' => array(
              'value' => 'field_add_documents_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_add_documents' => array(
              'value' => 'field_add_documents_value',
            ),
          ),
        ),
      ),
      'module' => 'field_sql_storage',
      'settings' => array(),
      'type' => 'field_sql_storage',
    ),
    'translatable' => '0',
    'type' => 'list_text',
  ),
  'field_instance' => array(
    'bundle' => 'documents',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'userprofile',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => 'sdfs',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'list_show_all',
        'weight' => '1',
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_add_documents',
    'label' => 'Дополнительные документы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '32',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
