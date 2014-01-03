<?php
/**
 * @file
 * system_profile.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function system_profile_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_town'
  $field_bases['field_town'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_town',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Canton, NY' => 'Canton, NY',
        'Hammond, NY' => 'Hammond, NY',
        'Lisbon, NY' => 'Lisbon, NY',
        'Macomb, NY' => 'Macomb, NY',
        'Massena, NY' => 'Massena, NY',
        'Norfolk, NY' => 'Norfolk, NY',
        'Norwood, NY' => 'Norwood, NY',
        'Potsdam, NY' => 'Potsdam, NY',
        'Russell, NY' => 'Russell, NY',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_year'
  $field_bases['field_year'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_year',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'month' => 0,
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  return $field_bases;
}
