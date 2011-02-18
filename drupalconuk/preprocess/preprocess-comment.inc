<?php
// $Id: preprocess-comment.inc,v 1.2 2010/06/30 20:23:04 nomonstersinme Exp $


/**
 * Implementation of theme_preprocess_HOOK().
 * Passes variables to the comment templates.
 *
 * @return $vars
 */
// Prepare the arrays that will hold the attributes for processing.
if(!$vars['comment']->attributes){
  $vars['comment_attributes'] = array();
}
else {
  $vars['comment_attributes'] = $vars['comment']->attributes;
}

$comment_classes[] = 'comment';

// Add a class to show if a commenter is replying to a node that was authored 
// by them.
if ($vars['comment']->uid == $vars['node']->uid) {
  $comment_classes[] = 'node-author-reply';
}

// Check if a commenter is registered. If true then add a class showing so and 
// also add a class to allow styling based on commenter name. Otherwise flag 
// the commenter as anonymous.
if ($vars['comment']->uid > 0) {
  $comment_classes[] = 'registered-user';
  $comment_classes[]  = 'author-' . strtolower(preg_replace('/[^a-zA-Z0-9-]+/', '-', $vars['comment']->registered_name));
}
else {
  $comment_classes[]  = 'author-anonymous';
}

// Give a new comments a special class.
if ($vars['comment']->new) {
  $comment_classes[] = 'new';
}

// Give a class based on status. 
$comment_classes[] = $vars['status'];

// Add a class designating odd/even alternating posts.
$comment_classes[] = $vars['zebra'];

// Make comment containers self clearing.
$comment_classes[] = 'clear-block';

// Condense classes into a single string.
$vars['comment_attributes']['class'] = implode(' ', $comment_classes);

//support for skinr
if($vars['skinr']) {
  $vars['comment_attributes']['class'][] = $vars['skinr'];
}

// Crunch the attributes down into a single string to be applied to the 
// comment container.
$vars['attributes'] = drupal_attributes($vars['comment_attributes']);
