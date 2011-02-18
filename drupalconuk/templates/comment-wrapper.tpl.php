<?php
// $Id: comment-wrapper.tpl.php,v 1.1 2009/12/11 18:38:07 nomonstersinme Exp $

/**
 * @file comment-wrapper.tpl.php
 * Default theme implementation to wrap comments.
 *
 * Available variables:
 * - $content: All comments for a given page. Also contains sorting controls
 *   and comment forms if the site is configured for it.
 *
 * @see template_preprocess_comment_wrapper()
 * @see theme_comment_wrapper()
 */
?>
<div<?php print $attributes; ?>>

  <?php if($title): ?>
  <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $comment_count; ?>

  <?php print $content; ?>

</div>
