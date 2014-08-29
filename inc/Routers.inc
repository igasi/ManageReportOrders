<?php

/**
 * Implements hook_menu().
 */

function ManageReportOrders_menu() {
  // Path Manage Report Orders UI
  $items['admin/commerce/mro'] = array(
    'title' => 'MRO',
    'description' => 'Manage Report Order in Drupal 7 Commerce',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ManageReportOrders_Settings'),
    'access arguments' => array('administer'),
    'type' => MENU_NORMAL_ITEM,
    'access callback' => true,
  );

  $items['admin/commerce/mro/settings'] = array(
    'title' => 'Settings',
    'description' => 'Manage Report Order in Drupal 7 Commerce',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ManageReportOrders_Settings'),
    'access arguments' => array('administer'),
    'type' => MENU_DEFAULT_LOCAL_TASK,
    'access callback' => true,
  );

  $items['admin/commerce/mro/executions'] = array(
    'title' => 'Executions',
    'description' => 'Help for Manage Report Order in Drupal 7 Commerce',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ManageReportOrders_Executions'),
    'access arguments' => array('administer'),
    'type' => MENU_LOCAL_TASK,
    'access callback' => true,
  );

  $items['admin/commerce/mro/help'] = array(
    'title' => 'Help',
    'description' => 'Help for Manage Report Order in Drupal 7 Commerce',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ManageReportOrders_Help'),
    'access arguments' => array('administer'),
    'type' => MENU_LOCAL_TASK,
    'access callback' => true,
  );



  $items['admin/commerce/mro/order-export/%'] = array(
    'type' => MENU_CALLBACK,
    'access callback' => true,
    'page callback' => 'ManageReportOrders_run',
    'page arguments' => array(1)
  );


  $items['admin/commerce/mro/order-fails'] = array(
    'type' => MENU_CALLBACK,
    'access callback' => true,
    'page callback' => 'ManageReportOrders_fails',
    'access arguments' => array('administer site configuration'),
    'page arguments' => array(1)
  );

  return $items;
}

