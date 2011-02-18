<?php
// $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
 $background = $fields['field_bg_image_fid']->content;
 $title = $row->node_title;
 $body = $row->node_revisions_body;
?>
<div class="carousel-item" style="background:url('<?php print $background; ?>') no-repeat 0 0;">
  <div class="text">
  <h3><?php print $title; ?></h3>
    <?php print $body; ?>
  </div>
  <?php
  global $user;
  if (in_array('site administrator', array_values($user->roles))) {
        print '<a href="/node/'. $fields['nid']->raw .'/edit"  class="carousel-edit">edit</a>';
      }
  ?>
</div>