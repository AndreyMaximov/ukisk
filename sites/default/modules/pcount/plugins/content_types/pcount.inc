<?php

$plugin = array(
  'title' => t('Participants count'),
  'single' => TRUE,
//  'icon' => 'icon_node.png',
  'description' => t('Add a node from your site as content.'),
  'render callback' => 'pcount_content_type_render',
  // The default context.
  'defaults' => array(),

  'edit form' => 'pcount_content_type_edit_form',
  'admin title' => 'pcount_content_type_admin_title',
//
  // presents a block which is used in the preview of the data.
  // Pn Panels this is the preview pane shown on the panels building page.
//  'admin info' => 'ctools_plugin_example_simplecontext_content_type_admin_info',
  'category' => 'ukisk',
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function pcount_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $block->title = 'Количество участников';
  $block->content = '<div class="pcount"><span class="pcount-text">Нас уже ' . t('@count participants', array('@count' => _pcount_count())) . '</span></div>';

  return $block;
}

function pcount_content_type_edit_form($form, $form_state) {
  return $form;
}

function pcount_content_type_admin_title($subtype, $conf) {
  return (!empty($conf['title'])) ? $conf['title'] : t('Display Suite content');
}

/**
 * Display the administrative information for a Display Suite content pane.
 */
function pcount_content_type_admin_info($subtype, $conf) {
  return 'Display Suite content can only be rendered on the frontend.';
}


function _pcount_count() {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'user');
  $query->addTag('exceptroles');
  $query->addMetaData('rolenames', array('administrator', 'Модератор'));
  $query->propertyCondition('uid', 1, '>');
  $results = $query->execute();

  if ($results) {
    return count($results['user']);
  }
  return 0;
}