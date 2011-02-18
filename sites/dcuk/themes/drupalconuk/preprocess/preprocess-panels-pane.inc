<?php
// $Id: preprocess-panels-pane.inc,v 1.1 2010/06/30 20:23:04 nomonstersinme Exp $

/**
 * Implementation of theme_preprocess_HOOK().
 * Passes variables to the comment templates.
 *
 * @return $vars
 */
// basic classes
$vars['panel_attributes']['class'][] = 'panel-pane';
if (!empty($content->content)) {
  // user defined ID
  if (!empty($content->css_id)) {
    $vars['panel_attributes']['id'] = $content->css_id;
  }
  // user defined class
  if (!empty($content->css_class)) {
    $vars['panel_attributes']['class'][] = $content->css_class;
  }
}

// Sometimes type and subtype are the same. Avoid redudant classes.
if ($type_class != $subtype_class) {
  $vars['panel_attributes']['class'][] = $type_class . $subtype_class;
}
else {
  $vars['panel_attributes']['class'][] = $type_class;
}

// Add support for Skinr
if ($vars['skinr']) {
  $vars['panel_attributes']['class'][] = $vars['skinr'];
}

// Crunch all the attributes together into a single string to be applied to 
// the node container.
$vars['attributes'] = theme('render_attributes', $vars['panel_attributes']);
