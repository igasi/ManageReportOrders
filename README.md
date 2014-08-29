ManageReportOrders
==================

Manage Report Order in Drupal 7 Commerce

## Requirements
* Drupal 7.31 +
* Drupal Commerce
* Drupal commerce menus
* Composer

## Instalation

1. Download module
2. Configure Private file system (admin/config/media/file-system) configuration recomendated 'sites/default/files/private' see more on https://www.drupal.org/documentation/modules/file
3. cd /path/to/ManageReportOrders
4. composer install
5. drush en -y ManageReportOrders
6. Check status report (admin/reports/status) and search "Manage Report Orders storage"

## Features

* MRO UI
* Private storage
* Use some Symfony Components
* Configuration management with YAML
* Logs (Monolog)
* 