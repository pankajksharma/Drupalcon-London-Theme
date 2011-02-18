/* $Id: jspotlite.js,v 1.2 2009/11/11 21:23:57 neclimdul Exp $ */

/**
 * @file
 * Provides the jSpotlite Drupal behavior.
 */

/**
 * The jSpotlite Drupal behavior that attaches jSpotlite based on Drupal.settings.jcarousel.
 */
Drupal.behaviors.jspotlite = function() {
  // Iterate through each selector and add the carousel.
  jQuery.each(Drupal.settings.jspotlite, function(selector, options) {
    var $jspotlite = $('#' + selector + ':not(.jspotlite-processed)');

    // Prepare the skin name to be added as a class name.
    var skin = options['skin'];
    if (typeof(skin) == 'string') {
      $jspotlite.addClass('jspotlite-skin-' + skin);
    }

    // Create the countdown element on non-processed elements.
    $jspotlite.addClass('jspotlite-processed').jspotlite(options.options);
  });
};
