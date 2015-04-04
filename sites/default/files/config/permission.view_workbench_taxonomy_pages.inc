<?php
/**
 * @file
 * permission.view_workbench_taxonomy_pages.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view workbench taxonomy pages',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'workbench_access',
);
