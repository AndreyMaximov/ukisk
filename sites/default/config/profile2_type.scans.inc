<?php
/**
 * @file
 * profile2_type.scans.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "scans",
    "label" : "\\u0421\\u043a\\u0430\\u043d-\\u043a\\u043e\\u043f\\u0438\\u0438",
    "weight" : "0",
    "data" : { "registration" : 0, "roles" : { "2" : "2", "5" : "5" }, "use_page" : 0 }
  }');

$dependencies = array();

$optional = array(
  'field.profile2.field_insurance.scans' => 'field.profile2.field_insurance.scans',
  'field.profile2.field_payment_reciept.scans' => 'field.profile2.field_payment_reciept.scans',
  'field.profile2.field_post_despatch.scans' => 'field.profile2.field_post_despatch.scans',
);

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
