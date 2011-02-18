<?php
// $Id: template.php,v 1.2 2010/06/30 20:23:04 nomonstersinme Exp $

/**
 * Implementation of hook_theme().
 *
 * @return
 */
function drupalconuk_theme() {
  return array(
    // Custom theme functions.
    'search_block_form' => array(
      'arguments' => array('form' => NULL),
    ),
    'breadcrumb' => array(
      'arguments' => array('breadcrumb' => array()),
    ),
    'links' => array(
      'arguments' => array('links' => array()),
    ),
    'id_safe' => array(
      'arguments' => array('string'),
      ),
    'conditional_stylesheets' => array(),
    'render_attributes' => array(
      'arguments' => array('attributes'),
    )
  );
}

/**
  * Implementation of theme_breadcrumb()
  * @see theme_breadcrumb(), drupalconuk_theme();
  *
  * Changed breadcrumb separator to an image and add current page's title to end
  */
function drupalconuk_breadcrumb($breadcrumb) {
  if (!empty($breadcrumb)) {
    $breadcrumb[] = drupal_get_title();
    $separator = '&raquo;';
    return '<div class="breadcrumb">'. implode(' '. $separator .' ', $breadcrumb) .'</div>';
  }
}

/**
 * Theme override for search block form.
 *
 * Remove the title from output.
 */
function drupalconuk_search_block_form($form) {
  $output = '';
  //$output .= dsm($form);

  unset($form['search_block_form']['#title']);

  $output .= drupal_render($form);
  return $output;
}
/**
  * Implementation of theme_block
  *
  * @see theme_block()
  *
  * Added first and last class to all blocks for styling.
  */
function drupalconuk_blocks($region) {
  $output = '';

  if ($list = block_list($region)) {
    $counter = 1; 
    foreach ($list as $key => $block) {
      
      $block->firstlast = '';
      if ($counter == 1){
        $block->firstlast .= ' first'; 
      }
      if ($counter == count($list)){
        $block->firstlast .= ' last';
      }
      $output .= theme('block', $block);
      $counter++;
    }
    //$block->count = count($list);
  }

  $output .= drupal_get_content($region);

  return $output;
}

/**
 * CSS Filter
 * Borrowed from Studio
 */
function drupalconuk_id_safe($string) {
  // Replace with dashes anything that isn't A-Z, numbers, dashes, or underscores.
  $string = drupal_strtolower(preg_replace('/[^a-zA-Z0-9-]+/', '-', $string));
  // If the first character is not a-z, add 'n' in front.
  if (!ctype_lower($string{0})) { // Don't use ctype_alpha since its locale aware.
    $string = 'id'. $string;
  }
  return $string;
}

/**
 * Conditional Stylesheets
 * Loads alternate stylesheets for Internet Explorer
 */
function drupalconuk_conditional_stylesheets() {
  // Targets IE 6 and under
  $output = "\n".'<!--[if lt IE 7.0]><link rel="stylesheet" href="'. base_path() . path_to_theme() .'/css/ie-6.css" type="text/css" media="all" charset="utf-8" /><![endif]-->'."\n";
  // Targets IE 7
  $output .= '<!--[if IE 7.0]><link rel="stylesheet" href="'. base_path() . path_to_theme() .'/css/ie-7.css" type="text/css" media="all" charset="utf-8" /><![endif]-->'."\n";
  return $output;
  $output .= '<meta equiv="X-UA-Compatible" content="IE=8">';
}

/**
 * Create a string of attributes form a provided array.
 * Borrowed from Studio, http://drupal.org/project/studio
 *
 * @param $attributes
 * @return string
 */
function drupalconuk_render_attributes($attributes) {
  if ($attributes) {
    $items = array();
    foreach ($attributes as $attribute => $data) {
      if (is_array($data)) {
        $data = implode(' ', $data);
     	}
      if (is_string($data)) {
        $items[] = $attribute .'="'. $data .'"';
     	}
    }    
    $output = ' '. str_replace('_', '-', implode(' ', $items));
  }
  return $output;
}

/**
 * Implementation of hook_preprocess()
 * 
 * This function checks to see if a hook has a preprocess file associated with 
 * it, and if so, loads it.
 * 
 * @param $vars
 * @param $hook
 * @return Array
 */
function drupalconuk_preprocess(&$vars, $hook) {
  if(is_file(drupal_get_path('theme', 'drupalconuk') . '/preprocess/preprocess-' . str_replace('_', '-', $hook) . '.inc')) {
    include('preprocess/preprocess-' . str_replace('_', '-', $hook) . '.inc');
  }
}

function drupalconuk_links($links, $attributes = array('class' => 'links')) {
  global $language;
  $output = '';

  if (count($links) > 0) {
    $output = '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = $key;

      // Add first, last and active classes to the list of links to help out themers.
      if ($i == 1) {
        $class .= ' first';
      }
      if ($i == $num_links) {
        $class .= ' last';
      }
if ($i & 1) {
  $class .= ' odd';
}
else {
  $class .= ' even';
}
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
           && (empty($link['language']) || $link['language']->language == $language->language)) {
        $class .= ' active';
      }
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      else if (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}
function drupalconuk_menu_item($link, $has_children, $menu = '', $in_active_trail = FALSE, $extra_class = NULL) {
  static $count = 0;
  $zebra = ($count % 2) ? 'odd' : 'even';
  $count++;
  $class = ($menu ? 'expanded' : ($has_children ? 'collapsed' : 'leaf'));
  if (!empty($extra_class)) {
    $class .= ' ' . $extra_class;
  }
  if ($in_active_trail) {
    $class .= ' active-trail';
  }
  $class .= ' item-'. $zebra;
  return '<li class="' . $class . '">' . $link . $menu . "</li>\n";
}

jquery_plugin_add('cycle');