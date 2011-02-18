fasttoggle.module
=================

This module is a result of SoC 2006 from the Administration usability project.
It adds "fast toggling" capabilities to Drupal so that you can perform common
tasks a lot quicker because they are managed via AJAX callbacks instead of
loading new pages every time you unpublish a node for example.

Currently, fasttoggle.module has these functionalites:

* Add publish/unpublish, sticky/not sticky and promoted/not promoted links to
  each node
* Add publish/unpublish links to the content listing in the administration
  section
* Add block/unblock links to the user listing in the administration section
  and to the user profile of each user
* Adds publish/unpublish links to each comment
* Adds a field type "Fasttoggle" to views which allows fasttoggling of nodes.


CUSTOMIZING LABELS
==================
In addition to selecting a different predefined set of labels that show
actions instead of the current state, you can also define your own set of
labels. In your settings.php, you can add:

$conf['fasttoggle_labels'] = array(
  'node_status' => array(0 => 'show', 1 => 'hide'),
);

to change the label for toggling the node status. The fasttoggle options this
module ships with by default are:
    - node_status
    - node_sticky
    - node_promote
    - comment_admin
    - user_status
    - comment_status

For further details on the syntax, see the fasttoggle_fasttoggle_labels()
function. Additionally, you can write modules that override these strings by
implementing hook_fasttoggle_labels().

After you added your custom strings, make sure to select them on the
configuration page.
