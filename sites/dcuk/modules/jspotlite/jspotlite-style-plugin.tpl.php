<?php
// $Id: jspotlite-style-plugin.tpl.php,v 1.3 2009/11/11 21:23:23 neclimdul Exp $
/**
 * @file
 * Base template file for a spotlite styled view.
 */
?>
<div id="<?php print $selector; ?>" class="jspotlite-container">
  <div class="jspotlite-control"></div>
	<ul id ="spotlite-test" class="jspotlite-list">
<?php
foreach ($grouped_rows as $content) {
  $title = drupal_render($content['list']);
  $spotlite = drupal_render($content['spotlite']);
?>
	  <li><?php print $title; ?><div class="feature"><?php print $spotlite; ?></div></li>
<?php } ?>
	</ul>
</div>
