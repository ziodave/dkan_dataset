<?php
/**
 * @file
 * dkan_dataset_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dkan_dataset_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-dataset-body'
  $field_instances['node-dataset-body'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-dataset-field_additional_info'
  $field_instances['node-dataset-field_additional_info'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'table' => array(
            'first' => array(
              'column_label' => 'Field',
            ),
            'number_column' => 0,
            'number_column_label' => '№',
            'second' => array(
              'column_label' => 'Value',
            ),
          ),
        ),
        'type' => 'double_field_table',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_additional_info',
    'label' => 'Additional Info',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 5,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 15,
          ),
        ),
      ),
      'type' => 'textfield_&_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-dataset-field_author'
  $field_instances['node-dataset-field_author'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the author of the dataset.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-dataset-field_contact_email'
  $field_instances['node-dataset-field_contact_email'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Contact person’s email address. See <a href="http://project-open-data.github.io/schema/#common-core-required-fields">Project Open Data</a> for more info.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact_email',
    'label' => 'Contact Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-dataset-field_contact_name'
  $field_instances['node-dataset-field_contact_name'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Contact person’s name for the asset. See <a href="http://project-open-data.github.io/schema/#common-core-required-fields">Project Open Data</a> for more info. Name should be formatted as Last, First.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact_name',
    'label' => 'Contact Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-dataset-field_data_dictionary'
  $field_instances['node-dataset-field_data_dictionary'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provides some sort of description that helps understanding the data. This usually consists of a table providing explanation of columns meaning, values interpretation and acronyms/codes used in the data. Can be a URL to such a resource. See Project Open Data <a href="http://project-open-data.github.io/schema/#common-core-required-if-applicable-fields">data dictionary</a> for more info.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_data_dictionary',
    'label' => 'Data Dictionary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-dataset-field_frequency'
  $field_instances['node-dataset-field_frequency'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The frequency with which dataset is published.See <a href="http://www.w3.org/TR/vocab-dcat/#Property:dataset_frequency">DCAT frequency</a> for more info.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_frequency',
    'label' => 'Frequency',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-dataset-field_granularity'
  $field_instances['node-dataset-field_granularity'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is usually geographical or temporal but can also be other dimension e.g. Person can be used to describe granularity of a dataset about average income. See <a href="http://project-open-data.github.io/schema/#expanded-fields">DCAT Granularity</a> for more info.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_granularity',
    'label' => 'Granularity',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-dataset-field_license'
  $field_instances['node-dataset-field_license'] = array(
    'bundle' => 'dataset',
    'default_value' => array(
      0 => array(
        'value' => 'notspecified',
      ),
    ),
    'deleted' => 0,
    'description' => 'License definitions and additional information can be found at <a href="http://opendefinition.org">opendefinition.org</a>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'dkan_dataset_content_types',
        'settings' => array(),
        'type' => 'render_license',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_license',
    'label' => 'License',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'apply_chosen' => '',
        'available_options' => 'cc-by|Creative Commons Attribution
cc-by-sa|Creative Commons Attribution Share-Alike
cc-zero|Creative Commons CCZero
cc-nc|Creative Commons Non-Commercial (Any)
gfdl|GNU Free Documentation License
notspecified|License Not Specified
odc-by|Open Data Commons Attribution License
odc-odbl|Open Data Commons Open Database License (ODbL)
odc-pddl|Open Data Commons Public Domain Dedication and Licence (PDDL)
other-at|Other (Attribution)
other-nc|Other (Non-Commercial)
other-closed|Other (Not Open)
other-open|Other (Open)
other-pd|Other (Public Domain)
uk-ogl|UK Open Government Licence (OGL)',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-dataset-field_public_access_level'
  $field_instances['node-dataset-field_public_access_level'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The degree to which this dataset <em>could</em> be made publicly-available, regardless of whether it has been made available. See <a href="http://project-open-data.github.io/schema/#common-core-required-fields">Project Open Data</a> for more info.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public_access_level',
    'label' => 'Public Access Level',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-dataset-field_related_content'
  $field_instances['node-dataset-field_related_content'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'An internal link or link to an outside resource that provides additional context to the dataset.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_content',
    'label' => 'Related Content',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-dataset-field_resources'
  $field_instances['node-dataset-field_resources'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resources',
    'label' => 'Resources',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-dataset-field_spatial'
  $field_instances['node-dataset-field_spatial'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Spatial coverage of the dataset. Will be rendered as GeoJSON. See DCAT <a href="http://www.w3.org/TR/vocab-dcat/#Property:dataset_spatial">spatial/geographical coverage</a> for more info.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spatial',
    'label' => 'Spatial / Geographical Coverage Area',
    'required' => 0,
    'settings' => array(
      'local_solr' => array(
        'enabled' => FALSE,
        'lat_field' => 'lat',
        'lng_field' => 'lng',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'leaflet_widget',
      'settings' => array(
        'draw' => array(
          'tools' => array(
            'circle' => 0,
            'marker' => 'marker',
            'polygon' => 'polygon',
            'polyline' => 0,
            'rectangle' => 'rectangle',
          ),
        ),
        'map' => array(
          'auto_center' => 1,
          'base_url' => 'http://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png',
          'center' => array(
            'lat' => 43,
            'lng' => -89,
          ),
          'zoom' => 4,
        ),
        'toggle' => 1,
      ),
      'type' => 'leaflet_widget_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-dataset-field_spatial_geographical_cover'
  $field_instances['node-dataset-field_spatial_geographical_cover'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Spatial location of the dataset. Could be Address, City, State, part of the world or other description. See DCAT <a href="http://www.w3.org/TR/vocab-dcat/#Property:dataset_spatial">spatial/geographical coverage</a> for more info.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spatial_geographical_cover',
    'label' => 'Spatial / Geographical Coverage Location',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-dataset-field_tags'
  $field_instances['node-dataset-field_tags'] = array(
    'bundle' => 'dataset',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-dataset-field_temporal_coverage'
  $field_instances['node-dataset-field_temporal_coverage'] = array(
    'bundle' => 'dataset',
    'deleted' => 0,
    'description' => 'The temporal period that the dataset covers. See DCAT <a href="http://www.w3.org/TR/vocab-dcat/#Property:dataset_temporal">temporal coverage</a> for more info.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_temporal_coverage',
    'label' => 'Temporal Coverage',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+10',
      ),
      'type' => 'date_popup',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-resource-body'
  $field_instances['node-resource-body'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-resource-field_dataset_ref'
  $field_instances['node-resource-field_dataset_ref'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dataset_ref',
    'label' => 'Dataset',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-resource-field_format'
  $field_instances['node-resource-field_format'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_format',
    'label' => 'Format',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'apply_chosen' => 0,
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'autocomplete_path' => 'taxonomy/autocomplete',
        'mode' => 'single',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-resource-field_link_api'
  $field_instances['node-resource-field_link_api'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link_iframe_formatter',
        'settings' => array(
          'class' => '',
          'height' => 480,
          'original' => 1,
          'style' => '',
          'width' => 900,
        ),
        'type' => 'link_iframe_formatter_iframe',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_api',
    'label' => 'Link API',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-resource-field_link_remote_file'
  $field_instances['node-resource-field_link_remote_file'] = array(
    'bundle' => 'resource',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'recline',
        'settings' => array(),
        'type' => 'recline_default_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_remote_file',
    'label' => 'Link File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'csv html xls json xlsx doc docx rdf txt jpg png gif tiff pdf odf ods odt tsv geojson xml zip',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'reference' => 0,
            'remote' => 0,
            'remotefile' => 'remotefile',
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-resource-field_upload'
  $field_instances['node-resource-field_upload'] = array(
    'bundle' => 'resource',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'recline',
        'settings' => array(),
        'type' => 'recline_default_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_upload',
    'label' => 'Upload',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'csv html xls json xlsx doc docx rdf txt jpg png gif tiff pdf odf ods odt tsv geojson xml zip',
      'max_filesize' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'recline',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'recline_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-resource-og_group_ref'
  $field_instances['node-resource-og_group_ref'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Groups audience',
    'required' => FALSE,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Info');
  t('An internal link or link to an outside resource that provides additional context to the dataset.');
  t('Author');
  t('Contact Email');
  t('Contact Name');
  t('Contact person’s email address. See <a href="http://project-open-data.github.io/schema/#common-core-required-fields">Project Open Data</a> for more info.');
  t('Contact person’s name for the asset. See <a href="http://project-open-data.github.io/schema/#common-core-required-fields">Project Open Data</a> for more info. Name should be formatted as Last, First.');
  t('Data Dictionary');
  t('Dataset');
  t('Description');
  t('Format');
  t('Frequency');
  t('Granularity');
  t('Groups audience');
  t('License');
  t('License definitions and additional information can be found at <a href="http://opendefinition.org">opendefinition.org</a>');
  t('Link API');
  t('Link File');
  t('Provides some sort of description that helps understanding the data. This usually consists of a table providing explanation of columns meaning, values interpretation and acronyms/codes used in the data. Can be a URL to such a resource. See Project Open Data <a href="http://project-open-data.github.io/schema/#common-core-required-if-applicable-fields">data dictionary</a> for more info.');
  t('Public Access Level');
  t('Related Content');
  t('Resources');
  t('Spatial / Geographical Coverage Area');
  t('Spatial / Geographical Coverage Location');
  t('Spatial coverage of the dataset. Will be rendered as GeoJSON. See DCAT <a href="http://www.w3.org/TR/vocab-dcat/#Property:dataset_spatial">spatial/geographical coverage</a> for more info.');
  t('Spatial location of the dataset. Could be Address, City, State, part of the world or other description. See DCAT <a href="http://www.w3.org/TR/vocab-dcat/#Property:dataset_spatial">spatial/geographical coverage</a> for more info.');
  t('Tags');
  t('Temporal Coverage');
  t('The degree to which this dataset <em>could</em> be made publicly-available, regardless of whether it has been made available. See <a href="http://project-open-data.github.io/schema/#common-core-required-fields">Project Open Data</a> for more info.');
  t('The frequency with which dataset is published.See <a href="http://www.w3.org/TR/vocab-dcat/#Property:dataset_frequency">DCAT frequency</a> for more info.');
  t('The temporal period that the dataset covers. See DCAT <a href="http://www.w3.org/TR/vocab-dcat/#Property:dataset_temporal">temporal coverage</a> for more info.');
  t('This is the author of the dataset.');
  t('This is usually geographical or temporal but can also be other dimension e.g. Person can be used to describe granularity of a dataset about average income. See <a href="http://project-open-data.github.io/schema/#expanded-fields">DCAT Granularity</a> for more info.');
  t('Upload');

  return $field_instances;
}
