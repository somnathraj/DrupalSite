<?php
/**
 * @file
 * permission.administer_workbench.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer workbench',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'workbench',
);
