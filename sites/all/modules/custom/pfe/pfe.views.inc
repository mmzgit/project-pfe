<?php 

function pfe_views_data() {
  $data['voxx_favorites']['table']['group'] = t('Voxx Favorite');

  $data['voxx_favorites']['table']['base'] = array(
    'field' => 'nid', // This is the identifier field for the view.
    'title' => t('Voxx table'),
    'help' => t('Example table contains example content and can be related to nodes.'),
    'weight' => -10,
  );

  $data['voxx_favorites']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );

  // Entity ID.
  $data['voxx_favorites']['entity_id'] = array(
    'title' => t('Favorite Entity ID'),
    'group' => t('Voxx Favorite'),
    'help' => t('A favorited entity.'),

    'relationship' => array(
      'base' => 'node', // The name of the table to join with.
      'base field' => 'nid', // The name of the field on the joined table.
      'handler' => 'views_handler_relationship',
      'label' => t('Voxx Favorite'),
      'title' => t('Entity ID'),
      'help' => t('The ID of the favorited entity.'),
    ),

    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  // User ID.
  $data['voxx_favorites']['uid'] = array(
    'title' => t('Favorite User ID'),
    'group' => t('Voxx Favorite'),
    'help' => t('A favorited entity.'),

    'relationship' => array(
      'base' => 'users', // The name of the table to join with.
      'base field' => 'uid', // The name of the field on the joined table.
      'handler' => 'views_handler_relationship_user_uid',
      'label' => t('Favorited by'),
      'title' => t('User ID'),
      'help' => t('The ID of the user who favorited the item.'),
    ),

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),

    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      'label' => t('Favorited by'),
      'title' => t('User ID'),
      'help' => t('The ID of the user who favorited the item.'),
    ),
  );

  // Example timestamp field.
  $data['voxx_favorites']['insert_date'] = array(
    'title' => t('Date favorited'),
    'group' => t('Voxx Favorite'),
    'help' => t('A timestamp indicating when the user marked the item as a favorite.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  return $data;
}