<?php
/**
 * @file
 * permission.assign_workbench_access.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'assign workbench access',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'workbench_access',
);
