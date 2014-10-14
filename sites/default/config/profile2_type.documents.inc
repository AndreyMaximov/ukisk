<?php
/**
 * @file
 * profile2_type.documents.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "documents",
    "label" : "\\u0414\\u043e\\u043a\\u0443\\u043c\\u0435\\u043d\\u0442\\u044b",
    "weight" : "0",
    "data" : {
      "registration" : 0,
      "roles" : { "2" : "2", "3" : "3", "4" : "4", "5" : "5" },
      "use_page" : 0
    }
  }');

$dependencies = array();

$optional = array(
  'field.profile2.field_add_documents.documents' => 'field.profile2.field_add_documents.documents',
  'field.profile2.field_required_documents.documents' => 'field.profile2.field_required_documents.documents',
);

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
