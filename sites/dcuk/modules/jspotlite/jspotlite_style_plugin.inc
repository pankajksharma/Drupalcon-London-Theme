<?php
// $Id: jspotlite_style_plugin.inc,v 1.3 2009/11/11 21:23:57 neclimdul Exp $
/**
 * @file
 * Views style plugin handler for jSpotlite.
 */

/**
 * Style plugin to render each item into a spotlite list.
 *
 * @ingroup views_style_plugins
 */
class jspotlite_style_plugin extends views_plugin_style {
  function option_definition() {
    $options = parent::option_definition();
    $options['skin'] = array('default' => 'tango');
    $options['skin_path'] = array('default' => '');
    $options['list'] = array('default' => array());
    $options['spotlite_content'] = array('default' => array());
    // Javascript options.
    $options['options'] = array('default' => array(
      'horizontal' => FALSE,
      'start' => 0,
      'delay' => 3,
      'pause' => TRUE,
      'restart' => TRUE,
      'itemEvent' => 'click',
    ));
    return $options;
  }

  function options_form(&$form, &$form_state) {
    #parent::options_form($form, $form_state);
    $form['skin'] = array(
      '#type' => 'select',
      '#title' => t('Skin'),
      '#default_value' => $this->options['skin'],
      '#options' => array('tango' => t('Tango'), 'custom' => t('Custom')),
    );
    $form['skin_path'] = array(
      '#type' => 'textfield',
      '#title' => t('Custom skin path'),
      '#description' => t('When "Custom" is selected above, it will include the provided path in this textfield. It must be the relative path to the custom CSS file defined for your jSpotlite skin. Example: "sites/all/themes/mytheme/jspotlite.css". Leave blank to not use a custom CSS file.'),
      '#default_value' => $this->options['skin_path'],
      '#process' => array('views_process_dependency'),
      '#dependency' => array('edit-style-options-skin' => array('custom')),
    );

    $handlers = $this->display->handler->get_handlers('field');

    // Create an array of allowed columns from the data we know:
    foreach ($handlers as $field => $handler) {
      if ($label = $handler->label()) {
        $field_names[$field] = $label;
      }
      else {
        $field_names[$field] = $handler->ui_name();
      }
    }

    $form['list'] = array(
      '#title' => t('List content'),
      '#type' => 'select',
      '#multiple' => true,
      '#options' => $field_names,
      '#default_value' => $this->options['list'],
    );

    $form['spotlite_content'] = array(
      '#title' => t('Spotlite content'),
      '#type' => 'select',
      '#multiple' => true,
      '#options' => $field_names,
      '#default_value' => $this->options['spotlite_content'],
    );

    $form['options'] = array(
      '#type' => 'fieldset',
      '#title' => t('Javascript options'),
    );
    $size = $form_state['view']->display_handler->get_option('items_per_page');
    $options = array_keys(array_fill(1, $size + 1, 'fill'));
    $form['options']['start'] = array(
      '#title' => t('Start'),
      '#type' => 'select',
      '#options' => $options,
      '#description' => t('Item to be visible first.'),
      '#default_value' => $this->options['options']['start'],
    );
    $options = array_keys(array_fill(0, 10, 'fill'));
    $form['options']['delay'] = array(
      '#title' => t('Delay'),
      '#type' => 'select',
      '#options' => $options,
      '#description' => t('Delay between automated rotation. 0 will stop automated rotation.'),
      '#default_value' => $this->options['options']['delay'],
    );
    $form['options']['horizontal'] = array(
      '#title' => t('Horizontal'),
      '#type' => 'checkbox',
      '#description' => t('Toggle horizontal or vertical layout.'),
      '#default_value' => $this->options['options']['horizontal'],
    );
    $form['options']['pause'] = array(
      '#title' => t('Pause'),
      '#type' => 'checkbox',
      '#description' => t('Pause auto rotation on hover.'),
      '#default_value' => $this->options['options']['pause'],
    );
    $form['options']['restart'] = array(
      '#title' => t('Restart'),
      '#type' => 'checkbox',
      '#description' => t('Resume rotation after pause.'),
      '#default_value' => $this->options['options']['restart'],
    );
    $form['options']['itemEvent'] = array(
      '#title' => t('Pause event'),
      '#type' => 'select',
      '#options' => array('click' => t('Click'), 'hover' => t('Hover')),
      '#description' => t('Delay between automated rotation. 0 will stop automated rotation.'),
      '#default_value' => $this->options['options']['itemEvent'],
    );
  }
}
