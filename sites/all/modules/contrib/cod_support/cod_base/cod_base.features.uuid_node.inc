<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function cod_base_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '0',
    'status' => '1',
    'created' => '1295470463',
    'changed' => '1295735116',
    'comment' => '0',
    'promote' => '1',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'COD help',
    'body' => '<em>For the latest documentation, please visit <a href="http://drupal.org/documentation/build/cod">http://drupal.org/documentation/build/cod</a>.</em>
        
        COD is the Conference Organizing Distribution, used for building conference and event sites in Drupal.  You may first be interested in an <a href="http://usecod.com/cod-features">overview of its capabilities</a>.
        
        This documentation is based on the packaged COD Alpha 3 downloaded from <a href="http://usecod.com/download">usecod.com/download</a>.
  <!--break-->
  <strong>Getting started</strong>
        <ol>
        <li>Create and configure an event node; this is the minimum needed to get people to start signing up
        <li>Default home page node is unpublished and inaccessible to non-admins. It will be replaced by new content that is added with \'promote to front page\' enabled, or until you create your own home page with Views, Panels or a single node.
        </ol>
        
        <strong>Image configuration</strong>
        <ol>
        <li>Be sure to enable ImageAPI GD2 or ImageAPI ImageMagick
        <li>Enable Imagecache UI (optional)
        <li>Check permissions
        </ol>
        
        <strong>Goal: Get people signing up to the Event</strong>
        <ol>
        <li>An event needs a title, description, start date/time, end date/time, sku, and a sell price. Everything else is optional.
        <li>Configure an Ubercart payment gateway
        <li>Check permissions and start promoting
        </ol>
        
        
        <strong>Goal: Get sponsors</strong>
        <ol> 
        <li>Enable the COD sponsors feature (admin/build/modules). This also enables the \'Conference administration\' admin menu.
        <li>If needed, modify sponsor levels (e.g. platinum) in the allowed values list of the Sponsor content type (admin/content/node-type/sponsor/fields/field_sponsorship_level)
        <li>Adjust permissions if you\'d like sponsors to create their own sponsor node (it will remain unpublished until an admin approves and publishes it).
        <li>Modify Sponsor view if you\'d like additional sponsor levels to appear on the Sponsor page (by default, only platinum display)
        <li>Or, arrange the blocks (admin/build/block) so the other levels. There are separate sponsor blocks for home page and internal pages
        <li>If needed, rename sponsor levels in the view
        <li>Assign Sponsor blocks to regions
        <li>Check viewing and editing permissions are appropriate for your needs
        </ol>
        
        <strong>Goal: Display attendees who have signed up for the event</strong>
        <ol>
        <li>Enable the COD Attendees feature (admin/build/modules).
        <li>Full names and photos of attendees will be displayed.
        </ol>
        
        <strong>Goal: Begin accepting sessions</strong>
        <ol>
        <li>Enable the COD Sessions feature (admin/build/modules). This enables the \'Conference administration\' admin menu.
        <li>Update the session Track field allowed values in the Session content type (admin/content/node-type/session/fields/field_track)
        <li>As sessions are created, visit the Session administration (conference-admin/sessions) to manage sessions; review and publish submitted sessions so they are visible to the public
        <li>Encourage session submitters to fill in their profile, so their full name appears in the schedule.
        </ol>
        
        <strong>Goal: Allow session voting</strong>
        <ol>
        <li>Voting usually begins once you\'ve finished accepting new sessions, so votes are applied fairly.
        <li>Adjust flag access on the Session vote flag (flags/manage/session_vote) to allow other roles to vote on sessions.
        <li>You will probably want to do some additional theming to ensure the "Vote" links are more prominent on session nodes, or build a view that shows all notes that haven\'t been voted on by the current user, filterable by track/experience level.
        <li>Remove the flag access by role (flags/manage/session_vote) when you want to stop allowing people to vote.
        </ol>
        
        
        <strong>Goal: Create the schedule</strong>
        <ol>
        <li>Create Room and Time slot nodes. These will be the framework for your schedule.
        <li>Sessions and Schedule items are different content types. A Schedule item is something like Lunch, that doesn\'t have a presenter or track, but needs to be assigned a room and time slot.
        <li>Sessions and schedule items can be assigned to multiple rooms. Assign an item to all rooms for it span the width of the schedule grid and indicate there are not other sessions planned during that time (e.g. Registration)
        <li>Sessions and Schedule items need to have a Room and Time slot assigned to them to appear in the schedule, as well as be Accepted and Published.
        <li>You won\'t be able to schedule two sessions/schedule items in the same time slot and room; a warning message will appear, explaining the conflict.
        </ol>
        
        <strong>Community configuration (alpha 3)</strong>
        <ol> 
        <li>The cod_community view displays name, photo and core profile fields of signed up users out of the box, with exposed filters.
        <li>A  forum menu link also appears
        </ol>',
    'teaser' => '<em>For the latest documentation, please visit <a href="http://drupal.org/documentation/build/cod">http://drupal.org/documentation/build/cod</a>.</em>
        
        COD is the Conference Organizing Distribution, used for building conference and event sites in Drupal.  You may first be interested in an <a href="http://usecod.com/cod-features">overview of its capabilities</a>.
        
        This documentation is based on the packaged COD Alpha 3 downloaded from <a href="http://usecod.com/download">usecod.com/download</a>.
  ',
    'log' => '',
    'revision_timestamp' => '1295735116',
    'format' => '1',
    'name' => '',
    'picture' => '',
    'data' => NULL,
    'path' => 'cod-help',
    'signup' => 0,
    'last_comment_timestamp' => '1295735036',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => '79f090a8-755e-102e-a8fe-4040db1cdced',
    'revision_uuid' => '79f12ce8-755e-102e-a8fe-4040db1cdced',
    'pathauto_perform_alias' => FALSE,
    'date' => '2011-01-19 15:54:23 -0500',
  );
  return $nodes;
}
