<?php
/**
 * @file
 * permission.batch_update_workbench_access.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'batch update workbench access',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'workbench_access',
);
