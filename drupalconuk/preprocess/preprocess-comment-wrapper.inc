<?php
// $Id: preprocess-comment-wrapper.inc,v 1.1 2010/06/30 20:23:04 nomonstersinme Exp $

$vars['wrapper_attributes'] = array();

$vars['wrapper_attributes']['id'] = 'comments';

if($vars['node']->comment_count == 0) {
	$vars['wrapper_attributes']['class'][] = 'no-comments';
}else {
	$vars['wrapper_attributes']['class'][] = 'has-comments';
	$vars['title'] = t('Comments (@count)', array('@count' => $vars['node']->comment_count));
}

//support for skinr
if($vars['skinr']) {
  $vars['wrapper_attributes']['class'][] = $vars['skinr'];
}

$vars['attributes'] = theme('render_attributes', $vars['wrapper_attributes']);
