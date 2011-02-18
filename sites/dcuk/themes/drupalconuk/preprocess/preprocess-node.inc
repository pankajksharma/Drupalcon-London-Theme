<?php
// $Id: preprocess-node.inc,v 1.2 2010/06/30 20:23:04 nomonstersinme Exp $

/**
 * Implementation of theme_preprocess_HOOK().
 * Passes varables to the node templates.
 *
 * @return $vars
 */

// Adding node_inner region to node template
if($node_inner){
	theme('blocks', $node_inner);
}

// Formatting the date
if($vars['submitted']) {
  // Make individual variables for the parts of the date.
  $date_day = format_date($vars['node']->created, 'custom', 'j');
  $date_month = format_date($vars['node']->created, 'custom', 'M');

  $vars['month'] =$date_month;
  $vars['day'] =  $date_day;

}

// Prepare the arrays to handle the classes and ids for the node container.
if(!isset($vars['node']->attributes)) {
  $vars['node_attributes'] = array();
}
else {
  $vars['node_attributes'] = $vars['node']->attributes;
}

// Add an id to allow the styling of a specific node.
$vars['node_attributes']['id'] = 'node-' . $vars['type'] . '-' . $vars['nid'];

// adding a node class to all nodes
$vars['node_attributes']['class'][] = 'node';

// Add a class to allow styling of nodes of a specific type.
$vars['node_attributes']['class'][] = $vars['type'] . '-ntype';

// Add a class to allow styling based on if a node is showing a teaser or the 
// whole thing.
if ($vars['teaser']) {
  $vars['node_attributes']['class'][] = 'teaser-view';
}
else {
  $vars['node_attributes']['class'][] = 'full-view';
}

//support for skinr
if($vars['skinr']) {
  $vars['node_attributes']['class'][] = $vars['skinr'];
}
// Crunch all the attributes together into a single string to be applied to 
// the node container.
$vars['attributes'] = theme('render_attributes', $vars['node_attributes']);