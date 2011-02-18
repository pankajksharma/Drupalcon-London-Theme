<?php
// $Id: comment.tpl.php,v 1.2 2010/06/30 20:23:04 nomonstersinme Exp $

/**
 * @file comment.tpl.php
 * Default theme implementation for comments.
 *
 * Available variables:
 * - $author: Comment author. Can be link or plain text.
 * - $content: Body of the post.
 * - $date: Date and time of posting.
 * - $links: Various operational links.
 * - $new: New comment marker.
 * - $picture: Authors picture.
 * - $signature: Authors signature.
 * - $status: Comment status. Possible values are:
 *   comment-unpublished, comment-published or comment-preview.
 * - $submitted: By line with date and time.
 * - $title: Linked title.
 *
 * These two variables are provided for context.
 * - $comment: Full comment object.
 * - $node: Node object the comments are attached to.
 *
 * @see template_preprocess_comment()
 * @see theme_comment()
 */
?>
<div<?php print $attributes; ?>>

  <?php print $picture ?>

  <?php if ($comment->new): ?>
  <span class="new"><?php print $new ?></span>
  <?php endif; ?>

  <?php if($title): ?>
  <h4><?php print $title ?></h4>
  <?php endif; ?>

  <div class="submitted"><?php print t('!date &mdash; !username', array('!date' => format_date($comment->timestamp, 'custom', 'F jS, Y'), '!username' => theme('username', $comment))) ?></div>

  <?php print $content ?>

  <?php print $signature ?>

  <?php print $links ?>
</div>
