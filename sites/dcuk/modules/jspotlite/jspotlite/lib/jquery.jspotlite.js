/**
 * jQuery jSpotlite plugin.
 * http://nerdpalace.net/projects/jspotlite
 *
 * Copyright 2009 James Gilliland
 * Version: 0.1 (May 24, 2009)
 * Licensed under the GPL licenses:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Designed to be used with jQuery v1.2.6 or later
 */

(function($) {
    $.fn.jspotlite = function(options) {
        return this.each(function() {
            new $js(this, options);
        });
    };

    var defaults = {
        /* Spotlite transition options */
        spotlite: {
            animation: "basic",
            options: {}
        },

        horizontal: false,
        start: 0,
        delay: 3,
        pause: true,
        restart: true,
        itemEvent: "click",
        buttonNext:  "<div>",
        buttonPause: "<div>",
        buttonPrev:  "<div>",
        buttonEvent:  "click",
        buttonNextCallback:  null,
        buttonPauseCallback: null,
        buttonPrevCallback:  null
    };

    $.jspotlite = function (e, o) {
        // The ever useful self variable defies scope yet again.
        var self = this;

        // Build a full list of options.
        this.options = $.extend(true, this.options, defaults, o || {});

        // Find our list and ensure our wrappers.
        if (e.nodeName == "UL" || e.nodeName == "OL") {
            this.list = $(e);
            this.container = this.list.parent();

            if (!this.container.hasClass("jspotlite-container")) {
                var id = this.list.get(0).id + "-container";
                this.container = this.list
                    .wrap('<div class="jspotlite-container" id="' + id + '">').parent();
            }
        }
        else {
            this.container = $(e);
            this.list = $(e).find(">ul,>ol,div>ul,div>ol");
        }

        // Make sure we've got a wrapper sections created.
        this.spotlite = $(".jspotlite-spotlite", this.container);
        if (this.spotlite.size() === 0) {
            this.spotlite = $("<div>").insertBefore(this.list);
        }
        // Ensure the section has all the class names it needs.
        this.spotlite.addClass(this.className("jspotlite-spotlite"));

        // Update our list of items.
        this.items = $("li", this.list);

        // Start automated rotation.
        this.start();

        // Make sure these sections have all the class names they need.
        this.list.addClass(this.className("jspotlite-list"));
        this.container.addClass(this.className("jspotlite-container"));

        // Attach behaviors to any buttons
        $(".jspotlite-control", this.container).each(function() {
            self.attachButtons(this);
        });

        if (this.options.pause) {
            // If they show interest in the spotlite stop rotating for a moment.
            this.container.hover(
                function() { self.stop(); },
                function() { self.options.restart && self.restart(); }
            );
        }

        // Attach our event to our elements so they can be brought into the spotlite.
        $.each(this.items, function(i) {
            $(self.items[i]).bind(self.options.itemEvent, function() {
                self.select(i);
            });
        });

    };

    var $js = $.jspotlite;

    $js.fn = $js.prototype = {
        jspotlite: "0.1"
    };

    $js.fn.extend = $js.extend = $.extend;

    // Attach our prototype functions.
    $js.fn.extend({
        index: -1,
        attachButtons: function(context) {
            // A handy hash for passing around information about our buttons.
            this.buttonData = {
                prev: {
                    eFunc: function() {
                        if (self.options.buttonPrevCallback) {
                            self.options.buttonPrevCallback();
                        }
                        self.prev();
                    },
                    jsClass: "jspotlite-prev",
                    html: this.options.buttonPrev
                },
                pause: {
                    eFunc: function() {
                        if (self.options.buttonPrevCallback) {
                            self.options.buttonPrevCallback();
                        }
                        return self.paused ? self.restart() : self.pause();
                    },
                    jsClass: "jspotlite-pause",
                    html: this.options.buttonPause
                },
                next: {
                    eFunc: function() {
                        if (self.options.buttonPrevCallback) {
                            self.options.buttonPrevCallback();
                        }
                        self.next();
                    },
                    jsClass: "jspotlite-next",
                    html: this.options.buttonNext
                }
            };

            $(context).addClass(this.className("jspotlite-control"));

            // Make sure we've got any buttons we need.
            var self = this;
            $.each(this.buttonData, function(i, d) {
                d.button = $("." + d.jsClass, context);
                if (d.button.size() === 0 && d.html !== null) {
                    d.button = $(d.html);
                    d.button.appendTo(context);
                }

                // Ensure the button has all the class names it needs and make sure its visible.
                d.button.addClass(self.className(d.jsClass))
                    .show().css("display", "block")
                    .bind(self.options.buttonEvent, d.eFunc);
            });
        },
        select: function(idx) {
            e = this.items.get(idx);
            if (idx != this.index && e) {
                this.index = idx;
                var self = this;

                // TODO add transitions to item list.
                this.items.removeClass("jspotlite-active");
                $(e).addClass("jspotlite-active");

                // Build the 2 jQuery objects for our animation function. One
                // points to our old content and one to the new.
                var e1 = $(".jspotlite-spotlite-content", this.spotlite);
                var e2 = $("<div>").html($(".feature", e).html())
                    .addClass("jspotlite-spotlite-content")
                    .appendTo(this.spotlite);

                $js.animate(this.options.spotlite, e1, e2);
                return true;
            }
            return false;
        },
        start: function() {
            this.select(this.options.start);
            this.delay();
        },
        stop: function() {
            clearTimeout(this.timer);
        },
        restart: function() {
            if (!this.paused) {
                this.delay();
            }
        },
        pause: function() {
            this.stop();
            this.paused = true;
        },
        next: function() {
            this.select(this.index + 1) || this.select(0);
            this.delay();
        },
        prev: function() {
            this.select(this.index - 1) || this.select(this.items.get().length - 1);
            this.delay();
        },
        delay: function(d) {
            var self = this;
            d |= this.options.delay;
            if (d) {
                clearTimeout(this.timer); // make sure there aren't stray timers.
                this.timer = setTimeout(function() { self.next(); }, d * 1000);
            }
        },
        className: function(c) {
            return c + " " + c + (this.options.horizontal ? "-horizontal" : "-vertical");
        }
    });

    $js.extend({
        /**
         * Animation helper function that checks that a valid animation helper was provided.
         */
        defaultTest: function (e) {
            return typeof e == "object" && e !== null;
        },
        /**
         * Animate between two elements...
         */
        animate: function(o, e1, e2) {
            // Find an call our animation plugin.
            var animation = $js.animation[o.animation];
            if (typeof animation == "function") {
                animation(o.options, e1, e2);
            }
        }
    });

    $.jspotlite.animation = {
        basic: function (o, e1, e2) {
            if ($js.defaultTest(e2)) {
                e1.remove();
                e2.show();
            }
        },
        animate: function (o, e1, e2) {
            if ($js.defaultTest(e2)) {
                o.hide = o.hide || o.options || {};
                o.show = o.show || o.options || {};
                e1.animate(o.hide, o.duration, o.easing, function () { $(this).remove(); });
                e2.css(o.hide).animate(o.show, o.duration, o.easing);
            }
            else {
                e1.animate(o.options, o.duration, o.easing);
            }
        },
        uiEffect: function (o, e1, e2) {
            if ($js.defaultTest(e2)) {
                o.hide = o.hide || o.options || {};
                o.show = o.show || o.options || {};
                var show = o.show.name || o.name || "slide";
                var hide = o.hide.name || o.name || "slide";
                e1.hide(hide, o.hide, o.speed, function() { $(this).remove(); });
                e2.show(show, o.show, o.speed);
            }
            else {
                e1.effect(o.name, o.options, o.speed);
            }
        }
    };

})(jQuery);
