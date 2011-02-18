<?php
// $Id: preprocess-page.inc,v 1.3 2010/09/16 15:14:22 nomonstersinme Exp $

/**
 * Implementation of theme_preprocess_HOOK().
 * Passes variables to the page templates.
 *
 * @return $vars
 */

$vars['ie_styles'] = theme('conditional_stylesheets');


/**
 * Create an array to will contain body classes and id's
 */
$body_attributes = array();

/**
 * Grab data from arguments to build a catch_all set of classes.
 * Special cases are addressed below in the arg(0) switch, but this aims
 * to be a catch-all class to account for everything else
 */
$index = 0;
$arguments = array();

while (($argument_value = arg($index)) != '') {
  // Exclude values that are numeric (i.e node id's, user id's)
  if (!is_numeric($argument_value)) {
    $arguments[$index] = check_plain($argument_value);
  }
  $index++;
}

$catch_all = implode('-', preg_replace('/[\s_]+/', '-', $arguments));

/**
 * Handle special cases for CSS classes and id attributes.
 */
switch (arg(0)) {

  case 'admin':
    // Add a common class across admin pages
    $vars['body_attributes']['class'][] = 'section-admin';
    // Use the catch-all variable as an ID
    $vars['body_attributes']['id'][] = 'page-'. $catch_all;
  break;

  case 'comment':
      $vars['body_attributes']['class'][] = 'page-comment';
  break;

  case 'contact':
    // Add a common class across contact pages
    $vars['body_attributes']['id'][] = 'page-contact';
    $vars['body_attributes']['class'][] = 'page-form';

    // Support for http://drupal.org/project/contact_forms
    if (function_exists('contact_forms_menu')) {
      // Set a common class across each contact category
      $vars['body_attributes']['class'][] = 'page-contact';
      if (arg(1)) {
        // Use the catch-all to grab a class for each category
        $vars['body_attributes']['class'][] = 'page-'. $catch_all;
      }
    }
  break;

  case 'node':
    if ($node = menu_get_object()) {
      // Add a the node type and common .page-node class
      $vars['body_attributes']['class'][] = 'page-node';
      // Add a page-level node type class
      $vars['body_attributes']['class'][] = 'page-'. $node->type;
      if ($node->type == 'blog') {
        // Add a common class across user blogs
        $vars['body_attributes']['class'][] = 'section-blog';
      }
      if (!arg(2)) {
        // We are viewing a node, so add an ID
        $vars['body_attributes']['id'][] = 'page-node-'. $node->nid;
        // Also add a class to distinguish viewing a node vs. editing, etc.
        $vars['body_attributes']['class'][] = 'page-node-view';
      }
      else {
        // Catch other node actions, i.e. edit, preview, delete, load, clone, etc.
        $vars['body_attributes']['class'][] = 'page-'. $catch_all;
        // Catch "edit" specifically for a .page-form class
        if (arg(2) == 'edit' || arg(2) == 'outline') {
          $vars['body_attributes']['class'][] = 'page-form';
        }
      }
    }
    elseif (arg(1) == 'add') {
      // We aren't viewing a node, but instead the node/add page
      $vars['body_attributes']['class'][] = 'page-form';
    }

  break;

  case 'user':
    // Add a common class across user pages
    $vars['body_attributes']['class'][] = 'section-user';

    if (arg(0) == 'user' && $user->uid == 0 && !is_numeric(arg(1))) {
      switch (arg(1)) {
        // Login
        case NULL:
        case 'login':
          $vars['body_attributes']['id'][] = 'page-user-login';
        break;
        // Registration
        case 'register':
          $vars['body_attributes']['id'][] = 'page-user-register';
        break;
        // Password Recovery
        case 'password':
          $vars['body_attributes']['id'][] = 'page-user-password';
        break;
      }
    }
    else {
      // Account for other user pages like the "contact" and "open id" tabs
      $vars['body_attributes']['class'][] = 'page-'. $catch_all;
      }
  break;

  default:
    $vars['body_attributes']['id'][] = 'page-'. $catch_all;
  break;
}

if($vars['carousel']) {
  $vars['body_attributes']['class'][] = ' carousel-active';
} else {
  $vars['body_attributes']['class'][] = ' carousel-inactive';
}

// if side bar is active
if (!$vars['sidebar']) {
    // Both regions are empty
    $vars['body_attributes']['class'][] = 'no-sidebar';
} else if ($vars['sidebar']) {
    $vars['body_attributes']['class'][] = 'has-sidebar';
}

//logout text
if ($vars['logged_in']) {
   $vars['body_attributes']['class'][] = 'registered-user';
   $vars['member_login'] = l(t('My Account'), 'user');
   $vars['member_login'] .= " + ";
   $vars['member_login'] .= l(t('Log Out'), 'logout');
} else {
   $vars['body_attributes']['class'][] = 'anonymous-user';
}

//support for skinr
if($vars['skinr']) {
  $vars['body_attributes']['class'][] = $vars['skinr'];
}

// Crunch down our attributes into a single string to be appended to the body
// tag in the page template.
$vars['attributes'] = theme('render_attributes', $vars['body_attributes']);
