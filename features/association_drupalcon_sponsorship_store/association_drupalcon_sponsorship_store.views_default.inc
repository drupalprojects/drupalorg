<?php

/**
 * Implementation of hook_views_default_views().
 */
function association_drupalcon_sponsorship_store_views_default_views() {
  $views = array();

  // Exported view: association_store_con_sponsor
  $view = new view;
  $view->name = 'association_store_con_sponsor';
  $view->description = 'DrupalCon sponsorship store';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('sorts', array(
    'field_assoc_level_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_assoc_level_value',
      'table' => 'node_data_field_assoc_level',
      'field' => 'field_assoc_level_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship_level' => 'association_sponsorship_level',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_assoc_level_conference_value_many_to_one' => array(
      'id' => 'field_assoc_level_conference_value_many_to_one',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value_many_to_one',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('css_class', 'drupalorg-3col-grid');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'grid');
  $handler->override_option('style_options', array(
    'columns' => '3',
    'alignment' => 'horizontal',
    'fill_single_line' => 1,
  ));
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser',
    'links' => 0,
    'comments' => 0,
  ));
  $handler = $view->new_display('page', 'Denver 2012', 'page_1');
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'association_sponsorship_level' => 'association_sponsorship_level',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_assoc_level_conference_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(
        '11' => '11',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'field_assoc_level_conference_value_many_to_one',
      'table' => 'node_data_field_assoc_level_conference',
      'field' => 'field_assoc_level_conference_value_many_to_one',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('title', 'Sponsor DrupalCon Denver');
  $handler->override_option('header', '<h2>What is DrupalCon?</h2>

<p>DrupalCon is an international event that brings together the people who use, develop, design, and support the Drupal platform. More than just another trade show or industry conference, it’s a shared experience that seeks to inspire and engage. DrupalCon Denver 2012 will feature dozens of curated sessions and panels from some of the most influential people and brightest minds within the Drupal community and beyond, as well as countless opportunities for networking, code sprints, informal conversations, and more. Whether you’re new to the community, have been around a while, or are just curious to see what all the fuss is about, we have a place for you.</p>
 
<p><strong>March, 20 - 22, 2012</strong> at the <strong>Colorado Convention Center</strong> in <strong>Denver, Colorado</strong></p> 

<h2>DrupalCon by the Numbers</h2>

<p>The Drupal community is a diverse group, with a variety of interests, that span the globe. Thousands of these Drupal enthusiasts will be in attendance at DrupalCon Denver. Let’s take a look at who took part in last year’s DrupalCon.</p>

<p><strong>Attendees by Job Position</strong> (based on San Francisco DrupalCon)</p>

<table><tbody>
<tr class="even"><th>25%</th> <th>19%</th> <th>14%</th> <th>11%</th> <th>31%</th></tr>
<tr class="even"><td>Corporate Leadership</td> <td>Project Managers</td> <td>Themers</td> <td>Designers</td> <td>Developers</td></tr>
</tbody></table>

<table><tbody>
<tr class="even"><th>3,000</th> <th>1,400</th> <th>800</th> <th>300</th></tr>
<tr class="even"><td>San Francisco 2010</td> <td>Washington D.C 2009</td> <td>Boston 2008</td> <td>Sunnyvale 2007</td></tr>
<tr class="even"><th>1,200</th> <th>750</th> <th>550</th> <th>400</th> <th>150</th> <th>25</th></tr>
<tr class="even"><td>Copenhagen 2010</td> <td>Paris 2009</td> <td>Szeged 2008</td> <td>Barcelona 2007</td> <td>Vancouver, BC 2006</td> <td>Antwerp, Belgium 2005</td></tr>
</tbody></table>

<h2>Why Sponsor at DrupalCon</h2>

<p>Sponsoring DrupalCon is not only a great way to get your message before a targeted audience of Drupal users, developers, businesspeople, and other Web professionals, it’s also a great way to increase the equity of your brand as a company or organization that supports one of the fastest- growing open source software communities in the world.</p>');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 1);
  $handler->override_option('path', 'sponsor/denver2012');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
