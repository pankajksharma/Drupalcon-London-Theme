<?php
// $Id: jspotlite.views.inc,v 1.6 2009/11/11 22:49:49 neclimdul Exp $
/**
 * @file
 *  Provides views plugin information.
 */

/**
  * Implementation of hook_views_plugin().
  */
function jspotlite_views_plugins() {
  $path = drupal_get_path('module', 'jspotlite');

  return array(
    'module' => 'jspotlite',
    'style' => array(
      'jspotlite' => array(
        'title' => t('jQuery Spotlite'),
        'theme' => 'jspotlite_style_plugin',
        'theme path' => $path,
        'theme file' => 'jspotlite.views.inc',
        'help' => t('A style plugin that provides a list of content and an assosiated spotlighted section.'),
        'handler' => 'jspotlite_style_plugin',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}

function template_preprocess_jspotlite_style_plugin(&$vars) {
  $view    = &$vars['view'];
  $handler = $view->style_plugin;
  $fields  = &$view->field;
  $result   = $vars['rows'];

  $vars['selector'] = form_clean_id('jspotlite-' . $view->name . '-' . $view->current_display);

  $keys = array_keys($fields);
  $list = array_flip($vars['options']['list']);
  $spotlite = array_flip($vars['options']['spotlite_content']);

  // Build a list of rendered fields.
  foreach ($result as $count => $row) {
    foreach ($keys as $id) {
      if (empty($fields[$id]->options['exclude'])) {
        $renders[$count][$id] = $view->field[$id]->theme($row);
      }
    }
  }

  foreach ($result as $num => $row) {
    $row = array(
      'list' => array(),
      'spotlite' => array(),
    );

    // Put together the fields for our list.
    $count = 0;
    foreach ($renders[$num] as $id => $value) {
      ++$count;
      // Build the list content.
      if (isset($list[$id])) {
        $row['list'][] = array(
          '#value' => $value,
          '#weight' => $count,
        );
      }
      // Build the spotlited content.
      if (isset($spotlite[$id])) {
        $row['spotlite'][] = array(
          '#value' => $value,
          '#weight' => $count,
        );
      }
    }

    $vars['grouped_rows'][] = $row;
  }

  jspotlite_add($vars['selector'], array(
    'skin' => $vars['options']['skin'],
    'skin_path' => $vars['options']['skin_path'],
    'options' => $vars['options']['options'],
  ));
}
