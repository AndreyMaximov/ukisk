(function($){
  Drupal.behaviors.jquery_coundown_timer_init_popup = {
    attach: function(context, settings) {
      var note = $('#jquery-countdown-timer-note'),
      ts = new Date(Drupal.settings.jquery_countdown_timer.jquery_countdown_timer_date * 1000);
      $('#jquery-countdown-timer').not('.jquery-countdown-timer-processed').addClass('jquery-countdown-timer-processed').countdown({
	timestamp : ts,
	callback : function(days, hours, minutes, seconds){
          var dateStrings = new Array();
          dateStrings['@days'] = Drupal.formatPlural(days, '1 day', '@count days');
          dateStrings['@hours'] = Drupal.formatPlural(hours, '1 hour', '@count hours');
          dateStrings['@minutes'] = Drupal.formatPlural(minutes, '1 minute', '@count minutes');
          var message = Drupal.t('@days, @hours, @minutes left', dateStrings);
          note.html(message);
        }
      });
    }
  }
})(jQuery);
