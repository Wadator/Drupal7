<?php
/**
 * @file
 * myfeature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function myfeature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_33638bc5-9bc8-4ae3-b8ef-be6c994da230';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Node view variant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'film' => 'film',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bead8ddb-7f4c-4e1b-81f6-fcb4d9876aab';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a6b4f79f-1703-47cd-859e-bc8b055b78d1';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_film';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a6b4f79f-1703-47cd-859e-bc8b055b78d1';
  $display->content['new-a6b4f79f-1703-47cd-859e-bc8b055b78d1'] = $pane;
  $display->panels['left'][0] = 'new-a6b4f79f-1703-47cd-859e-bc8b055b78d1';
  $pane = new stdClass();
  $pane->pid = 'new-1ea6624c-99d3-4f87-b0f2-805c3b705cc7';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_character';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1ea6624c-99d3-4f87-b0f2-805c3b705cc7';
  $display->content['new-1ea6624c-99d3-4f87-b0f2-805c3b705cc7'] = $pane;
  $display->panels['left'][1] = 'new-1ea6624c-99d3-4f87-b0f2-805c3b705cc7';
  $pane = new stdClass();
  $pane->pid = 'new-3707a729-4c17-46b8-aa9a-1b403adff252';
  $pane->panel = 'right';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3707a729-4c17-46b8-aa9a-1b403adff252';
  $display->content['new-3707a729-4c17-46b8-aa9a-1b403adff252'] = $pane;
  $display->panels['right'][0] = 'new-3707a729-4c17-46b8-aa9a-1b403adff252';
  $pane = new stdClass();
  $pane->pid = 'new-dceab20a-fe6f-48a3-9aab-1b00c6cb6d26';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dceab20a-fe6f-48a3-9aab-1b00c6cb6d26';
  $display->content['new-dceab20a-fe6f-48a3-9aab-1b00c6cb6d26'] = $pane;
  $display->panels['right'][1] = 'new-dceab20a-fe6f-48a3-9aab-1b00c6cb6d26';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_33638bc5-9bc8-4ae3-b8ef-be6c994da230'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function myfeature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'films';
  $page->task = 'page';
  $page->admin_title = 'Films';
  $page->admin_description = '';
  $page->path = 'films';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page-films__http_response';
  $handler->task = 'page';
  $handler->subtask = 'films';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '404',
    'destination' => '',
    'name' => 'http_response',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['films'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'via_panels';
  $page->task = 'page';
  $page->admin_title = 'via Panels';
  $page->admin_description = '';
  $page->path = 'via-panels';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Panel Page',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_via_panels__panel';
  $handler->task = 'page';
  $handler->subtask = 'via_panels';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'My Panel Page';
  $display->uuid = 'a5ed3efd-1311-4f1f-a265-14273bffe06a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_via_panels__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f43bf046-3462-4953-b7d0-0861b8c3297b';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'movies';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f43bf046-3462-4953-b7d0-0861b8c3297b';
  $display->content['new-f43bf046-3462-4953-b7d0-0861b8c3297b'] = $pane;
  $display->panels['left'][0] = 'new-f43bf046-3462-4953-b7d0-0861b8c3297b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f43bf046-3462-4953-b7d0-0861b8c3297b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['via_panels'] = $page;

  return $pages;

}
