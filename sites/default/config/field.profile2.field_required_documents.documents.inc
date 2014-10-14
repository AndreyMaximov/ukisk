<?php
/**
 * @file
 * field.profile2.field_required_documents.documents.inc
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
    'field_name' => 'field_required_documents',
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
        'agreement' => 'заполненное и подписанное туристом соглашение об оказании юридической помощи',
        'booking-proof' => 'доказательства, что этот тур.продукт был забронирован у данного туроператора',
        'contract' => 'договор туриста с турагентом, с приложениями',
        'letter-of-attorney' => 'нотариально удостоверенная доверенность юристам (примерный текст прилагается)',
        'passport' => 'копия паспорта туриста;',
        'payment-proof' => 'доказательства оплаты туристом турагенту',
        'payment-to-proof' => 'доказательства, что забронированный тур/продукт был оплачен турагентом туроператору',
        'receipt' => 'квитанция об оплате по этому соглашению',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 1,
    ),
    'storage' => array(
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_required_documents' => array(
              'value' => 'field_required_documents_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_required_documents' => array(
              'value' => 'field_required_documents_value',
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
    'description' => 'Все указанные в этом списке документы необходимы для дела. Пояснения к документам вы можете найти на странице «<a href="/documents" target="_blank">документы</a>»',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'userprofile',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'list_show_all',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_required_documents',
    'label' => 'Обязательные документы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '31',
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
