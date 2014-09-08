<?php

use mro\Config\Config;

/**
 * UI: Tab for settings
 */

function ManageReportOrders_Settings(){

  $config = new mroConfig();
// echo "<pre>";
// print_r( $config->getConfig('mode','defaults') );
// echo "</pre>";

  $form = array();

// Tabs
  $form['tabs_settings'] = array(
    '#type' => 'vertical_tabs',
  );
  
// Tab Mode Executions
  $form['tabs_settings_modeExecutions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Mode Executions'),
    '#collapsible' => TRUE,
    '#description' => t('Select mode execution'),
    '#group' => 'tabs_settings'
  );

  $form['tabs_settings_modeExecutions']['mode'] = array(
    '#title' => t('Mode Execution'),
    '#type' => 'select',
    '#description' => 'Sandbox is mode for testing and development',
    '#options' => $config->getConfig('mode','options'),
    '#default_value' => $config->getConfig('mode','defaults'),
    '#group' => 'tabs_settings',
  );

// Tab Executions
  $form['tabs_settings_typeExecutions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Type Executions'),
    '#collapsible' => TRUE,
    '#description' => t('Select type execution'),
    '#group' => 'tabs_settings'
  );

  $form['tabs_settings_typeExecutions']['type'] = array(
    '#title' => t('Type Execution'),
    '#type' => 'select',
    '#options' => $config->getConfig('type','options'),
    '#default_value' => $config->getConfig('type','defaults'),
    '#group' => 'tabs_settings',
  );


	// Tab Filter Criteria
  $form['tabs_settings_filtercriteria'] = array(
    '#type' => 'fieldset',
    '#title' => t('Filter Criteria'),
    '#collapsible' => TRUE,
    '#description' => t('Select one or more valid status for processed orders filter.'),
    '#group' => 'tabs_settings'
  );

  $form['tabs_settings_filtercriteria']['statuses'] = array(
    '#type' => 'checkboxes',
    '#options' => $config->getConfig('filter_criteria','options'),
    '#title' => t('Select allowed status'),
    '#default_value' => $config->getConfig('filter_criteria','defaults'),
    '#group' => 'tabs_settings'
  );

  $form['tabs_settings_filtercriteria']['help'] = array(
    '#type' => 'markup',
    '#markup' => '
    	<strong>Help Filter Criteria</strong>
    	<p>To generate a full report must be selected all the options (default).</p>
    	',
    '#group' => 'tabs_settings'
  ); 
   

  // Tab Fileds
  $form['tabs_settings_fields'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fields'),
    '#collapsible' => TRUE,
    '#description' => t('Set different settings which will effect site wide.'),
    '#group' => 'tabs_settings'
  );

  $form['tabs_settings_fields']['fields'] = array(
    '#type' => 'checkboxes',
    '#options' => $config->getConfig('fields','options'),
    '#title' => t('Select allowed fields'),
    '#default_value' => $config->getConfig('fields','defaults'),
    '#group' => 'tabs_settings'
  );


  // Tab Order Criteria
  $form['tabs_settings_ordercriteria'] = array(
    '#type' => 'fieldset',
    '#title' => t('Order Criteria'),
    '#collapsible' => TRUE,
    '#description' => t('Set different settings which will effect site wide.'),
    '#group' => 'tabs_settings'
  );
   
  $form['tabs_settings_ordercriteria']['ordercriteria'] = array(
    '#type' => 'radios',
    '#default_value' => $config->getConfig('order_criteria','defaults'),
    '#options' => $config->getConfig('order_criteria','options'),
    '#title' => t('Select allowed order criteria'),
    '#group' => 'tabs_settings'
  );


  // Tab Send Report
  $form['tabs_settings_sendreport'] = array(
    '#type' => 'fieldset',
    '#title' => t('Send Report'),
    '#collapsible' => TRUE,
    '#description' => t('Set different settings which will effect site wide.'),
    '#group' => 'tabs_settings'
  );
   
  $form['tabs_settings_sendreport']['setting'] = array(
    '#type' => 'textarea',
    '#required' => TRUE,
    '#default_value' => 'Default',
    '#title' => t('Contact mail.'),
    '#description' => t('Body text when a new comment is posted by users.'),
    '#group' => 'tabs_settings'
  );


  // Tab Logs Config
  $form['tabs_settings_logsconfig'] = array(
    '#type' => 'fieldset',
    '#title' => t('Logs Config'),
    '#collapsible' => TRUE,
    '#description' => t('Set different settings which will effect site wide.'),
    '#group' => 'tabs_settings'
  );
   
  $form['tabs_settings_logsconfig']['setting'] = array(
    '#type' => 'textarea',
    '#required' => TRUE,
    '#default_value' => 'Default',
    '#title' => t('Contact mail.'),
    '#description' => t('Body text when a new comment is posted by users.'),
    '#group' => 'tabs_settings'
  );


  // Tab Add On
  $form['tabs_settings_addon'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add on'),
    '#collapsible' => TRUE,
    '#description' => t('Set different settings which will effect site wide.'),
    '#group' => 'tabs_settings'
  );
   
  $form['tabs_settings_addon']['setting'] = array(
    '#type' => 'textarea',
    '#required' => TRUE,
    '#default_value' => 'Default',
    '#title' => t('Contact mail.'),
    '#description' => t('Body text when a new comment is posted by users.'),
    '#group' => 'tabs_settings'
  );




// Save
  $form['submit'] = array(
    '#type' => 'submit', 
    '#value' => t('Save settings'),
  );
// Restore default values
  $form['defaults'] = array(
    '#type' => 'submit', 
    '#value' => t('Restore default values'),
  );

  return $form;
}


/**
 * UI: Tab for help
 *

function ManageReportOrders_Help(){
  $form = array();
 
  $form['help'] = array(
    '#type' => 'markup',
    '#markup' => '<h1>Help for MRO</h1>'
  ); 
 
  return $form;
}


/**
 * UI: Tab for List of executions
 *

function ManageReportOrders_Executions(){
  $form = array();
 
  $form['executions'] = array(
    '#type' => 'markup',
    '#markup' => '<h1>List of executions</h1>'
  ); 
 
  return $form;
}
*/