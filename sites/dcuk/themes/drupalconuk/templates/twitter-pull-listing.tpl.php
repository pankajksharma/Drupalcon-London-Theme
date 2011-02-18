<?php
// $Id: twitter-pull-listing.tpl.php,v 1.1.2.5 2011/01/11 02:49:38 inadarei Exp $

/**
 * @file
 * Theme template for a list of tweets.
 *
 * Available variables in the theme include:
 *
 * 1) An array of $tweets, where each tweet object has:
 *   $tweet->id
 *   $tweet->username
 *   $tweet->userphoto
 *   $tweet->text
 *   $tweet->timestamp
 *
 * 2) $twitkey string containing initial keyword.
 *
 * 3) $title
 *
 */
?>
<div class="tweets-pulled-listing">

  <?php if (is_array($tweets)): ?>
    <?php $tweet_count = count($tweets); ?>
    
    <ul class="tweets-pulled-listing">
    <?php foreach ($tweets as $tweet_key => $tweet): ?>
      <li>
        <?php print l(t('@'. $tweet->username) .': '. drupal_substr($tweet->text, 0, 60) .'...', 'http://twitter.com/' . $tweet->username . '/status/' . $tweet->id); ?>

        <?php if ($tweet_key < $tweet_count - 1): ?>
        <?php endif; ?>
        
      </li>
    <?php endforeach; ?>
    </ul>
  <?php endif; ?>
</div>
