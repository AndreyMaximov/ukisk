<?php

/**
 * Implements hook_panels_layouts()
 */
function ukisk_ukisk_front_panels_layouts() {
  $items['ukisk_front'] = array(
    'title' => t('uk isk: front page'),
    'category' => t('uk isk'),
    'icon' => 'ukisk_front.png',
    'theme' => 'ukisk_front',
    'regions' => array(
      'top' => t('Top'),
      'above_left' => t('Above Left'),
      'above_right' => t('Above Right'),
      'middle' => t('Middle'),
      'below_left' => t('Below Left'),
      'below_right' => t('Below Right'),
      'bottom' => t('Bottom'),
    ),
  );
  return $items;
}

