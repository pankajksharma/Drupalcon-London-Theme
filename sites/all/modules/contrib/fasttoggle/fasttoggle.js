// $Id: fasttoggle.js,v 1.5 2007/10/07 12:27:53 timcn Exp $

Drupal.fasttoggle = {
  'comment': function(data) {
    if (data.option == 'status') {
      $(this).parents('.comment')[data.status ? 'addClass' : 'removeClass']('comment-unpublished');
    }
  },

  'node': function(data) {
    var node = $(this).parents('.node');

    if (data.option == 'sticky') {
      node[data.status ? 'addClass' : 'removeClass']('sticky');
    }
    else if (data.option == 'status') {
      node[data.status ? 'removeClass' : 'addClass']('node-unpublished');
    }
  }
};

Drupal.behaviors.fasttoggle = function(context) {
  $('a.fasttoggle', context).unbind('click').click(function() {
    // Add the throbber
    var link = $(this).addClass('throbbing');

    // Perform a request to the server
    jQuery.ajax({
      'url': this.href,
      'type': 'POST',
      'cache': false,
      'data': { confirm: true, javascript: true },
      'dataType': 'json',
      'success': function(data) {
        // Remove the throbber
        link.html(data.text).removeClass('throbbing');
        
        // Call the callback function for altering the display of other elements
        if (data.callback && Drupal.fasttoggle[data.callback]) {
          Drupal.fasttoggle[data.callback].call(link[0], data);
        }
      },
      'error': function() {
        // Remove the throbber
        link.removeClass('throbbing');
        alert(Drupal.t('Toggling the setting failed.'));
      }
    });

    // Do not execute the regular functionality when the user clicks the link
    return false;
  });
};
