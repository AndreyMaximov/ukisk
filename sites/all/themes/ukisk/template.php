<?php

/**
 * Implements template_preprocess_html().
 *
 */
//function ukisk_preprocess_html(&$variables) {
//  // Add conditional CSS for IE. To use uncomment below and add IE css file
//  drupal_add_css(path_to_theme() . '/css/ie.css', array('weight' => CSS_THEME, 'browsers' => array('!IE' => FALSE), 'preprocess' => FALSE));
//
//  // Need legacy support for IE downgrade to Foundation 2 or use JS file below
//  // drupal_add_js('http://ie7-js.googlecode.com/svn/version/2.1(beta4)/IE7.js', 'external');
//}

/**
 * Implements template_preprocess_page
 *
 */
function ukisk_preprocess_page(&$variables) {
  global $user;
  // Check if the user is logged in
  if ($user->uid) {
    // Logged in user
  } else {
    // Not logged in
    // if not logged in then give generic custom titles.
    // allow customization of user / login / password page titles
    if (arg(0) == 'user' && arg(1) == 'login') {
      drupal_set_title(t('Login'));
    }
    if (arg(0) == 'user') {
      drupal_set_title(t('Login'));
    }
    if (arg(0) == 'user' && arg(1) == 'password') {
      drupal_set_title(t('Password recovery'));
    }
    if (arg(0) == 'user' && arg(1) == 'register') {
      drupal_set_title(t('Create new account'));
    }
  }
}

/**
 * Implements template_preprocess_node
 *
 */
//function ukisk_preprocess_node(&$variables) {
//}
