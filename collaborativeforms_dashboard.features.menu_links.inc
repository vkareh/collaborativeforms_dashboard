<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function collaborativeforms_dashboard_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:home
  $menu_links['primary-links:home'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:node/add
  $menu_links['primary-links:node/add'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add record',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: primary-links:records
  $menu_links['primary-links:records'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'records',
    'router_path' => 'records',
    'link_title' => 'View records',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add record');
  t('Home');
  t('View records');


  return $menu_links;
}
