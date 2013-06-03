<?php
/**
 * @file
 * ding_library.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ding_library_default_rules_configuration() {
  $items = array();
  $items['rules_ding_library_node_update'] = entity_import('rules_config', '{ "rules_ding_library_node_update" : {
      "LABEL" : "Ding library node update",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "ding_library" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : [ "node_insert", "node_update", "node_delete" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ding_library" : "ding_library" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : {
                "ding_event" : "ding_event",
                "ding_node_search" : "ding_node_search",
                "ding_library" : "ding_library",
                "ding_news" : "ding_news"
              }
            }
          }
        },
        { "cache_actions_action_clear_panels_pane_cache" : { "panes" : { "value" : {
                "task:node_view_panel_context_3:node_view:new-5" : "task:node_view_panel_context_3:node_view:new-5",
                "50bf11a49bb3c" : "50bf11a49bb3c",
                "50bf11a4a426a" : "50bf11a4a426a",
                "50bf11a4b0cad" : "50bf11a4b0cad",
                "50bf11a4da92c" : "50bf11a4da92c",
                "50bf11a4e997d" : "50bf11a4e997d"
              }
            }
          }
        }
      ]
    }
  }');
  return $items;
}
