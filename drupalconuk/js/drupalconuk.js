Drupal.behaviors.drupalconukBehaviors = function(context){

  $('#nav ul li, .dd ul li', context).hover(function() {
    $(this).toggleClass('hover');
  }, function() {
     $(this).toggleClass('hover');
  });

};

Drupal.behaviors.dcuksliderBehaviors = function(context){
  var first = true;
   $('.cycle-nodes .view-content').after('<div id="pager">');
   
   function onAfter(curr, next, opts) {
     if (first) {
         first = false;
         return;
     }

     $('#prev,#next,#pager').fadeIn(1000, function() {
       // Animation complete.
     });
   };

   function onBefore(curr, next, opts) {
     if (first) {
         first = false;
         return;
     }

     $('#prev,#next,#pager').fadeOut(50, function() {
       // Animation complete.
     });
   };

   if ($('.cycle-nodes .view-content').length > 0) {
     $('.cycle-nodes .view-content').cycle({
       fx: 'scrollHorz',
       speed: 1000,
       pause: 1,
       timeout: 7000,
       delay: 500,
       prev: '#sprev',
       next: '#next',
       pager:  '#pager',
       after: onAfter,
       before: onBefore
     });
   }

   $('#prev,#next,#pager').click(function(){
     $('#prev,#next,#pager').stop();

     $('#prev,#next,#pager').fadeOut(100, function() {
       // Animation complete.
     });

   });
};