<?php 

function pfe_views_data() {
  $data['m_warehouse']['table']['group'] = t('Mwarehouse');

  $data['m_warehouse']['table']['base'] = array(
    'title' => t('Mwarehouse table'),
    'help' => t('Mwarehouse table description.'),
    'weight' => -10,
  );

  $data['m_warehouse']['mwarehouseId'] = array(
    'title' => t('Mwarehouse ID'),
    'help' => t('Mwarehouse ID.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['m_warehouse']['name'] = array(
    'title' => t('Name'),
    'help' => t('Mwarehouse name.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  return $data;
}