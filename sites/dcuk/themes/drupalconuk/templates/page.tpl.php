<?php
// $Id$

/**
 * @file page.tpl.php
 *
 * Theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $css: An array of CSS files for the current page.
 * - $directory: The directory the theme is located in, e.g. themes/garland or
 *   themes/garland/minelli.
 * - $is_front: TRUE if the current page is the front page. Used to toggle the mission statement.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Page metadata:
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $head_title: A modified version of the page title, for use in the TITLE tag.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $body_classes: A set of CSS classes for the BODY tag. This contains flags
 *   indicating the current layout (multiple columns, single column), the current
 *   path, whether the user is logged in, and so on.
 * - $body_attributes: This is similar to $body_classes, except it goes further.
 *   There is the addition of the 'id' to the tag and more classes by default.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $mission: The text of the site mission, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $search_box: HTML to display the search box, empty if search has been disabled.
 * - $primary_links (array): An array containing primary navigation links for the
 *   site, if they have been configured.
 * - $secondary_links (array): An array containing secondary navigation links for
 *   the site, if they have been configured.
 *
 * Page content (in order of occurrance in the default page.tpl.php):
 * - $left: The HTML for the left sidebar.
 *
 * - $breadcrumb: The breadcrumb trail for the current page.
 * - $title: The page title, for use in the actual HTML content.
 * - $help: Dynamic help text, mostly for admin pages.
 * - $messages: HTML for status and error messages. Should be displayed prominently.
 * - $tabs: Tabs linking to any sub-pages beneath the current page (e.g., the view
 *   and edit tabs when displaying a node).
 *
 * - $content: The main content of the current Drupal page.
 *
 * - $right: The HTML for the right sidebar.
 *
 * Footer/closing data:
 * - $feed_icons: A string of all feed icons for the current page.
 * - $footer_message: The footer message as defined in the admin settings.
 * - $footer : The footer region.
 * - $closure: Final closing markup from any modules that have altered the page.
 *   This variable should always be output last, after all other dynamic content.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language ?>" xml:lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <?php print $head; ?>
    <title>
      <?php print $head_title; ?>
    </title>
    <?php print $styles; ?>
    <?php print $ie_styles; ?>
    <?php print $scripts; ?>
    <script type="text/javascript">
      //<![CDATA[
      <?php /* Needed to avoid Flash of Unstyle Content in IE */ ?> 
      //]]>
    </script>
  </head>
  <body<?php print $attributes; ?>>
  <div id="top_bar">
    <div id="top_bar_wrapper">
      <?php print $top_bar; ?>
    </div>
  </div><!-- end top_bar -->
  <div id="header">
    <div class="wrapper">
      
        <div id="logo">
         <?php if (!empty($logo)): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
           <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>
         <?php endif; ?>
        </div>
        <div id="nav">
         <?php if ($nav): ?>
           <?php print $nav; ?>
         <?php endif; ?>
        </div><!-- end nav -->
        <div class="header_region">
          <?php print $header; ?>
        </div>
      
      </div>
    </div><!-- end header -->
    <?php if($carousel): ?>
      <div class="carousel">
        <div class="wrapper">
          <?php print $carousel; ?>
        </div>
      </div>
    <?php endif; ?><!-- end carousel -->
    <div id="container">
      <div class="wrapper">
      <?php if($content_top): ?>
        <div id="content-top">
          <?php print $content_top; ?>
        </div>
      <?php endif; ?><!-- end content top -->
      <div id="main">
        <?php if($content_inner): ?>
          <div id="content-inner">
            <?php print $content_inner; ?>
            <div class="clear"> </div>
          </div>
        <?php endif; ?>
        <?php if (!empty($title)): ?>
          <h1 class="title"><?php print $title; ?></h1>
        <?php endif; ?> <!-- END TITLE -->
         <?php if ($tabs): ?>
            <div id="tabs">
              <?php print $tabs; ?>
            </div> <!-- END TABS -->
         <?php endif; ?> 
        <div id="content">
        <?php print $messages; ?>
        <?php print $help; ?>
        <?php print $content; ?>
        <?php //print $breadcrumb; ?>
        </div><!-- end content -->
      </div><!-- end main -->
      <?php if($sidebar): ?>
        <div class="sidebar">
          <?php print $sidebar; ?>
        </div>
      <?php endif; ?>
      <div class="clear"> </div>
      <?php if($content_bottom): ?>
      	<div id="content-bottom">
      		<?php print $content_bottom; ?>
      		<div class="clear"> &nbsp;</div>
      	</div>
      <?php endif; ?>
      </div>
      </div>
      <div id="footer">
        <div id="footerwrap">
          <?php if ($footer): ?>
              <?php print $footer; ?>
          <?php endif; ?>
          <div id="footer-message">
            <?php print $footer_message; ?>
          </div>
          <div class="clear"> </div>
        </div>
      </div> <!-- end footer -->
    <?php print $closure; ?>
  </body>
</html>
