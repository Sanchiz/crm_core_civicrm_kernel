<?php
/**
 * @file
 * crm_core_civicrm_kernel.features.crm_core_data_import.inc
 */

/**
 * Implements hook_crm_core_data_import_features_default_settings().
 */
function crm_core_civicrm_kernel_crm_core_data_import_features_default_settings() {
  $crm_core_data_import = array();

  $crm_core_data_import['civicrm_data_import'] = array(
    'machine_name' => 'civicrm_data_import',
    'title' => 'CiviCRM Data Import',
    'description' => '',
    'source' => 'CivicrmDataSourceHandler',
    'created' => 1407241328,
    'settings' => array(
      'mapping' => array(
        'CRMCoreContactDataDestinationHandler:individual:1' => array(
          'primary' => array(
            'source_field_primary' => 'Contact:Individual:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Contact:Individual:first_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Contact:Individual:middle_name',
            'destination_field' => 'contact_name:middle',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Contact:Individual:last_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Contact:Individual:prefix_id',
            'destination_field' => 'contact_name:title',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Contact:Individual:suffix_id',
            'destination_field' => 'contact_name:generational',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Contact:Individual:employer_id',
            'destination_field' => 'field_contact_current_employer',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Contact:Individual:custom_7',
            'destination_field' => 'field_contact_percent_donation',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Contact:Individual:custom_8',
            'destination_field' => 'field_contact_percent_date',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Contact:Individual:custom_9',
            'destination_field' => 'field_contact_public_directory',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Contact:Individual:email:location_type_id',
            'destination_field' => 'field_contact_email:field_email_location',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Contact:Individual:email:email',
            'destination_field' => 'field_contact_email:field_email_address',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Contact:Individual:email:on_hold',
            'destination_field' => 'field_contact_email:field_email_on_hold',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Contact:Individual:email:is_bulkmail',
            'destination_field' => 'field_contact_email:field_email_bulk_mailings',
            'default_value' => '',
          ),
          13 => array(
            'source_field' => 'Contact:Individual:email:signature_text',
            'destination_field' => 'field_contact_email:field_email_signature_text',
            'default_value' => '',
          ),
          14 => array(
            'source_field' => 'Contact:Individual:email:signature_html',
            'destination_field' => 'field_contact_email:field_email_signature_html',
            'default_value' => '',
          ),
          15 => array(
            'source_field' => 'Contact:Individual:website:url',
            'destination_field' => 'field_contact_website:field_website_url',
            'default_value' => '',
          ),
          16 => array(
            'source_field' => 'Contact:Individual:website:website_type_id',
            'destination_field' => 'field_contact_website:field_website_type',
            'default_value' => '',
          ),
          17 => array(
            'source_field' => 'Contact:Individual:phone:phone',
            'destination_field' => 'field_contact_phone:field_contact_phone_number',
            'default_value' => '',
          ),
          18 => array(
            'source_field' => 'Contact:Individual:phone:location_type_id',
            'destination_field' => 'field_contact_phone:field_contact_phone_location',
            'default_value' => '',
          ),
          19 => array(
            'source_field' => 'Contact:Individual:phone:phone_type_id',
            'destination_field' => 'field_contact_phone:field_contact_phone_type',
            'default_value' => '',
          ),
          20 => array(
            'source_field' => 'Contact:Individual:phone:phone_ext',
            'destination_field' => 'field_contact_phone:field_contact_phone_number:extension',
            'default_value' => '',
          ),
          21 => array(
            'source_field' => 'default_value',
            'destination_field' => 'field_contact_phone:field_contact_phone_number:country_codes',
            'default_value' => 'us',
          ),
          22 => array(
            'source_field' => 'Contact:Individual:address:county_id',
            'destination_field' => 'field_contact_address:field_address',
            'default_value' => '',
          ),
          23 => array(
            'source_field' => 'Contact:Individual:address:street_address',
            'destination_field' => 'field_contact_address:field_address:thoroughfare',
            'default_value' => '',
          ),
          24 => array(
            'source_field' => 'Contact:Individual:address:supplemental_address_1',
            'destination_field' => 'field_contact_address:field_address:premise',
            'default_value' => '',
          ),
          25 => array(
            'source_field' => 'Contact:Individual:address:city',
            'destination_field' => 'field_contact_address:field_address:locality',
            'default_value' => '',
          ),
          26 => array(
            'source_field' => 'Contact:Individual:address:state_province_id',
            'destination_field' => 'field_contact_address:field_address:administrative_area',
            'default_value' => '',
          ),
          27 => array(
            'source_field' => 'Contact:Individual:address:postal_code',
            'destination_field' => 'field_contact_address:field_address:postal_code',
            'default_value' => '',
          ),
          28 => array(
            'source_field' => 'Contact:Individual:address:location_type_id',
            'destination_field' => 'field_contact_address:field_address_type',
            'default_value' => '',
          ),
          29 => array(
            'source_field' => 'Contact:Individual:email:is_primary',
            'destination_field' => 'field_contact_email:field_email_primary',
            'default_value' => '',
          ),
          30 => array(
            'source_field' => 'Contact:Individual:address:is_primary',
            'destination_field' => 'field_contact_address:field_address_primary',
            'default_value' => '',
          ),
          31 => array(
            'source_field' => 'Contact:Individual:address:is_billing',
            'destination_field' => 'field_contact_address:field_address_billing',
            'default_value' => '',
          ),
          32 => array(
            'source_field' => 'Contact:Individual:image_URL',
            'destination_field' => 'field_contact_image',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:organization:1' => array(
          'primary' => array(
            'source_field_primary' => 'Contact:Organization:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Contact:Organization:organization_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Contact:Organization:middle_name',
            'destination_field' => 'contact_name:middle',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Contact:Organization:first_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Contact:Organization:prefix_id',
            'destination_field' => 'contact_name:title',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Contact:Organization:suffix_id',
            'destination_field' => 'contact_name:generational',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Contact:Organization:email:location_type_id',
            'destination_field' => 'field_contact_email:field_email_location',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Contact:Organization:email:email',
            'destination_field' => 'field_contact_email:field_email_address',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Contact:Organization:email:on_hold',
            'destination_field' => 'field_contact_email:field_email_on_hold',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Contact:Organization:email:is_bulkmail',
            'destination_field' => 'field_contact_email:field_email_bulk_mailings',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Contact:Organization:email:signature_text',
            'destination_field' => 'field_contact_email:field_email_signature_text',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Contact:Organization:email:signature_html',
            'destination_field' => 'field_contact_email:field_email_signature_html',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Contact:Organization:website:url',
            'destination_field' => 'field_contact_website:field_website_url',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Contact:Organization:website:website_type_id',
            'destination_field' => 'field_contact_website:field_website_type',
            'default_value' => '',
          ),
          13 => array(
            'source_field' => 'Contact:Organization:phone:phone',
            'destination_field' => 'field_contact_phone:field_contact_phone_number',
            'default_value' => '',
          ),
          14 => array(
            'source_field' => 'Contact:Organization:phone:location_type_id',
            'destination_field' => 'field_contact_phone:field_contact_phone_location',
            'default_value' => '',
          ),
          15 => array(
            'source_field' => 'Contact:Organization:phone:phone_type_id',
            'destination_field' => 'field_contact_phone:field_contact_phone_type',
            'default_value' => '',
          ),
          16 => array(
            'source_field' => 'Contact:Organization:phone:phone_ext',
            'destination_field' => 'field_contact_phone:field_contact_phone_number:extension',
            'default_value' => '',
          ),
          17 => array(
            'source_field' => 'default_value',
            'destination_field' => 'field_contact_phone:field_contact_phone_number:country_codes',
            'default_value' => 'us',
          ),
          18 => array(
            'source_field' => 'Contact:Organization:address:county_id',
            'destination_field' => 'field_contact_address:field_address',
            'default_value' => '',
          ),
          19 => array(
            'source_field' => 'Contact:Organization:address:street_address',
            'destination_field' => 'field_contact_address:field_address:thoroughfare',
            'default_value' => '',
          ),
          20 => array(
            'source_field' => 'Contact:Organization:address:supplemental_address_1',
            'destination_field' => 'field_contact_address:field_address:premise',
            'default_value' => '',
          ),
          21 => array(
            'source_field' => 'Contact:Organization:address:city',
            'destination_field' => 'field_contact_address:field_address:locality',
            'default_value' => '',
          ),
          22 => array(
            'source_field' => 'Contact:Organization:address:state_province_id',
            'destination_field' => 'field_contact_address:field_address:administrative_area',
            'default_value' => '',
          ),
          23 => array(
            'source_field' => 'Contact:Organization:address:postal_code',
            'destination_field' => 'field_contact_address:field_address:postal_code',
            'default_value' => '',
          ),
          24 => array(
            'source_field' => 'Contact:Organization:address:location_type_id',
            'destination_field' => 'field_contact_address:field_address_type',
            'default_value' => '',
          ),
          25 => array(
            'source_field' => 'Contact:Organization:email:is_primary',
            'destination_field' => 'field_contact_email:field_email_primary',
            'default_value' => '',
          ),
          26 => array(
            'source_field' => 'Contact:Organization:address:is_primary',
            'destination_field' => 'field_contact_address:field_address_primary',
            'default_value' => '',
          ),
          27 => array(
            'source_field' => 'Contact:Organization:address:is_billing',
            'destination_field' => 'field_contact_address:field_address_billing',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:household:1' => array(
          'primary' => array(
            'source_field_primary' => 'Contact:Household:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Contact:Household:household_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Contact:Household:middle_name',
            'destination_field' => 'contact_name:middle',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Contact:Household:last_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Contact:Household:prefix_id',
            'destination_field' => 'contact_name:title',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Contact:Household:suffix_id',
            'destination_field' => 'contact_name:generational',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Contact:Household:email:location_type_id',
            'destination_field' => 'field_contact_email:field_email_location',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Contact:Household:email:email',
            'destination_field' => 'field_contact_email:field_email_address',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Contact:Household:email:on_hold',
            'destination_field' => 'field_contact_email:field_email_on_hold',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Contact:Household:email:is_bulkmail',
            'destination_field' => 'field_contact_email:field_email_bulk_mailings',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Contact:Household:email:signature_text',
            'destination_field' => 'field_contact_email:field_email_signature_text',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Contact:Household:email:signature_html',
            'destination_field' => 'field_contact_email:field_email_signature_html',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Contact:Household:website:url',
            'destination_field' => 'field_contact_website:field_website_url',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Contact:Household:website:website_type_id',
            'destination_field' => 'field_contact_website:field_website_type',
            'default_value' => '',
          ),
          13 => array(
            'source_field' => 'Contact:Household:phone:phone',
            'destination_field' => 'field_contact_phone:field_contact_phone_number',
            'default_value' => '',
          ),
          14 => array(
            'source_field' => 'Contact:Household:phone:location_type_id',
            'destination_field' => 'field_contact_phone:field_contact_phone_location',
            'default_value' => '',
          ),
          15 => array(
            'source_field' => 'Contact:Household:phone:phone_type_id',
            'destination_field' => 'field_contact_phone:field_contact_phone_type',
            'default_value' => '',
          ),
          16 => array(
            'source_field' => 'Contact:Household:phone:phone_ext',
            'destination_field' => 'field_contact_phone:field_contact_phone_number:extension',
            'default_value' => '',
          ),
          17 => array(
            'source_field' => 'default_value',
            'destination_field' => 'field_contact_phone:field_contact_phone_number:country_codes',
            'default_value' => 'us',
          ),
          18 => array(
            'source_field' => 'Contact:Household:address:county_id',
            'destination_field' => 'field_contact_address:field_address',
            'default_value' => '',
          ),
          19 => array(
            'source_field' => 'Contact:Household:address:street_address',
            'destination_field' => 'field_contact_address:field_address:thoroughfare',
            'default_value' => '',
          ),
          20 => array(
            'source_field' => 'Contact:Household:address:supplemental_address_1',
            'destination_field' => 'field_contact_address:field_address:premise',
            'default_value' => '',
          ),
          21 => array(
            'source_field' => 'Contact:Household:address:city',
            'destination_field' => 'field_contact_address:field_address:locality',
            'default_value' => '',
          ),
          22 => array(
            'source_field' => 'Contact:Household:address:state_province_id',
            'destination_field' => 'field_contact_address:field_address:administrative_area',
            'default_value' => '',
          ),
          23 => array(
            'source_field' => 'Contact:Household:address:postal_code',
            'destination_field' => 'field_contact_address:field_address:postal_code',
            'default_value' => '',
          ),
          24 => array(
            'source_field' => 'Contact:Household:address:location_type_id',
            'destination_field' => 'field_contact_address:field_address_type',
            'default_value' => '',
          ),
          25 => array(
            'source_field' => 'Contact:Household:email:is_primary',
            'destination_field' => 'field_contact_email:field_email_primary',
            'default_value' => '',
          ),
          26 => array(
            'source_field' => 'Contact:Household:address:is_primary',
            'destination_field' => 'field_contact_address:field_address_primary',
            'default_value' => '',
          ),
          27 => array(
            'source_field' => 'Contact:Household:address:is_billing',
            'destination_field' => 'field_contact_address:field_address_billing',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:event_registration:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Event Registration:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Event Registration:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Event Registration:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Event Registration:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Event Registration:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Event Registration:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Event Registration:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Event Registration:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Event Registration:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Event Registration:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Event Registration:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Event Registration:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Event Registration:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Event Registration:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:bulk_email:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Bulk Email:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Bulk Email:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Bulk Email:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Bulk Email:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Bulk Email:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Bulk Email:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Bulk Email:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Bulk Email:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Bulk Email:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Bulk Email:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Bulk Email:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Bulk Email:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Bulk Email:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Bulk Email:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:change_membership_status:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Change Membership Status:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Change Membership Status:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Change Membership Status:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Change Membership Status:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Change Membership Status:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Change Membership Status:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Change Membership Status:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Change Membership Status:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Change Membership Status:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Change Membership Status:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Change Membership Status:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Change Membership Status:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Change Membership Status:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Change Membership Status:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:change_membership_type:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Change Membership Type:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Change Membership Type:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Change Membership Type:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Change Membership Type:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Change Membership Type:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Change Membership Type:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Change Membership Type:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Change Membership Type:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Change Membership Type:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Change Membership Type:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Change Membership Type:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Change Membership Type:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Change Membership Type:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Change Membership Type:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:contribution:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Contribution:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Contribution:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Contribution:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Contribution:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Contribution:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Contribution:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Contribution:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Contribution:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Contribution:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Contribution:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Contribution:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Contribution:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Contribution:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Contribution:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:email:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Email:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Email:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Email:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Email:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Email:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Email:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Email:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Email:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Email:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Email:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Email:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Email:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Email:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Email:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:membership_renewal:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Membership Renewal:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Membership Renewal:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Membership Renewal:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Membership Renewal:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Membership Renewal:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Membership Renewal:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Membership Renewal:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Membership Renewal:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Membership Renewal:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Membership Renewal:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Membership Renewal:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Membership Renewal:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Membership Renewal:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Membership Renewal:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:membership_renewal_reminder:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Membership Renewal Reminder:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Membership Renewal Reminder:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:membership_signup:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Membership Signup:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Membership Signup:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Membership Signup:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Membership Signup:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Membership Signup:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Membership Signup:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Membership Signup:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Membership Signup:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Membership Signup:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Membership Signup:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Membership Signup:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Membership Signup:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Membership Signup:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Membership Signup:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:tell_friend:1' => array(
          'primary' => array(
            'source_field_primary' => 'Activity:Tell a Friend:id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'Activity:Tell a Friend:subject',
            'destination_field' => 'title',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'Activity:Tell a Friend:activity_date_time',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'Activity:Tell a Friend:location',
            'destination_field' => 'field_activity_location',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'Activity:Tell a Friend:duration',
            'destination_field' => 'field_activity_duration',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'Activity:Tell a Friend:status',
            'destination_field' => 'field_activity_status',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'Activity:Tell a Friend:priority',
            'destination_field' => 'field_activity_priority',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'Activity:Tell a Friend:details',
            'destination_field' => 'field_activity_details',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'Activity:Tell a Friend:source_contact_id',
            'destination_field' => 'field_activity_source_contact',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'Activity:Tell a Friend:assignee_contact_id',
            'destination_field' => 'field_activity_assignee_contact',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'Activity:Tell a Friend:target_contact_id',
            'destination_field' => 'field_activity_target_contact',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'Activity:Tell a Friend:source_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'Activity:Tell a Friend:assignee_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'Activity:Tell a Friend:target_contact_id',
            'destination_field' => 'field_activity_participants',
            'default_value' => '',
          ),
        ),
      ),
      'relations' => array(
        'enable' => TRUE,
        'civicrm' => TRUE,
        'relations_values' => array(
          4 => array(
            'civicrm_relation_id' => 4,
            'source_entity' => 'Individual',
            'relation_type' => 'crm_employee',
            'new_relation_name' => '',
            'destination_entity' => 'Organization',
          ),
        ),
      ),
      'settings_controllers' => array(
        0 => 'RelationsCiviCrmImportSettings',
        1 => 'ReferencesCiviCrmImportSettings',
      ),
      'references' => array(
        'enable' => 1,
        'fields' => array(
          0 => array(
            'source' => 'crm_core_activity:event_registration:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:event_registration:1:field_activity_participants',
          ),
          1 => array(
            'source' => 'crm_core_activity:event_registration:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:event_registration:1:field_activity_source_contact',
          ),
          2 => array(
            'source' => 'crm_core_activity:event_registration:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:event_registration:1:field_activity_assignee_contact',
          ),
          3 => array(
            'source' => 'crm_core_activity:event_registration:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:event_registration:1:field_activity_target_contact',
          ),
          4 => array(
            'source' => 'crm_core_activity:bulk_email:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:bulk_email:1:field_activity_participants',
          ),
          5 => array(
            'source' => 'crm_core_activity:bulk_email:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:bulk_email:1:field_activity_assignee_contact',
          ),
          6 => array(
            'source' => 'crm_core_activity:bulk_email:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:bulk_email:1:field_activity_source_contact',
          ),
          7 => array(
            'source' => 'crm_core_activity:bulk_email:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:bulk_email:1:field_activity_target_contact',
          ),
          8 => array(
            'source' => 'crm_core_activity:change_membership_status:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:change_membership_status:1:field_activity_participants',
          ),
          9 => array(
            'source' => 'crm_core_activity:change_membership_status:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:change_membership_status:1:field_activity_assignee_contact',
          ),
          10 => array(
            'source' => 'crm_core_activity:change_membership_status:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:change_membership_status:1:field_activity_source_contact',
          ),
          11 => array(
            'source' => 'crm_core_activity:change_membership_status:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:change_membership_status:1:field_activity_target_contact',
          ),
          12 => array(
            'source' => 'crm_core_activity:change_membership_type:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:change_membership_type:1:field_activity_participants',
          ),
          13 => array(
            'source' => 'crm_core_activity:change_membership_type:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:change_membership_type:1:field_activity_assignee_contact',
          ),
          14 => array(
            'source' => 'crm_core_activity:change_membership_type:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:change_membership_type:1:field_activity_source_contact',
          ),
          15 => array(
            'source' => 'crm_core_activity:change_membership_type:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:change_membership_type:1:field_activity_target_contact',
          ),
          16 => array(
            'source' => 'crm_core_activity:contribution:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:contribution:1:field_activity_participants',
          ),
          17 => array(
            'source' => 'crm_core_activity:contribution:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:contribution:1:field_activity_assignee_contact',
          ),
          18 => array(
            'source' => 'crm_core_activity:contribution:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:contribution:1:field_activity_source_contact',
          ),
          19 => array(
            'source' => 'crm_core_activity:contribution:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:contribution:1:field_activity_target_contact',
          ),
          20 => array(
            'source' => 'crm_core_activity:email:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:email:1:field_activity_participants',
          ),
          21 => array(
            'source' => 'crm_core_activity:email:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:email:1:field_activity_assignee_contact',
          ),
          22 => array(
            'source' => 'crm_core_activity:email:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:email:1:field_activity_source_contact',
          ),
          23 => array(
            'source' => 'crm_core_activity:email:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:email:1:field_activity_target_contact',
          ),
          24 => array(
            'source' => 'crm_core_activity:membership_renewal:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_renewal:1:field_activity_participants',
          ),
          25 => array(
            'source' => 'crm_core_activity:membership_renewal:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_renewal:1:field_activity_assignee_contact',
          ),
          26 => array(
            'source' => 'crm_core_activity:membership_renewal:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_renewal:1:field_activity_source_contact',
          ),
          27 => array(
            'source' => 'crm_core_activity:membership_renewal:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_renewal:1:field_activity_target_contact',
          ),
          28 => array(
            'source' => 'crm_core_activity:membership_renewal_reminder:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_renewal_reminder:1:field_activity_participants',
          ),
          29 => array(
            'source' => 'crm_core_activity:membership_renewal_reminder:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_renewal_reminder:1:field_activity_assignee_contact',
          ),
          30 => array(
            'source' => 'crm_core_activity:membership_renewal_reminder:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_renewal_reminder:1:field_activity_source_contact',
          ),
          31 => array(
            'source' => 'crm_core_activity:membership_renewal_reminder:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_renewal_reminder:1:field_activity_target_contact',
          ),
          32 => array(
            'source' => 'crm_core_activity:membership_signup:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_signup:1:field_activity_participants',
          ),
          33 => array(
            'source' => 'crm_core_activity:membership_signup:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_signup:1:field_activity_assignee_contact',
          ),
          34 => array(
            'source' => 'crm_core_activity:membership_signup:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_signup:1:field_activity_source_contact',
          ),
          35 => array(
            'source' => 'crm_core_activity:membership_signup:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:membership_signup:1:field_activity_target_contact',
          ),
          36 => array(
            'source' => 'crm_core_activity:tell_friend:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:tell_friend:1:field_activity_participants',
          ),
          37 => array(
            'source' => 'crm_core_activity:tell_friend:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:tell_friend:1:field_activity_assignee_contact',
          ),
          38 => array(
            'source' => 'crm_core_activity:tell_friend:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:tell_friend:1:field_activity_source_contact',
          ),
          39 => array(
            'source' => 'crm_core_activity:tell_friend:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:tell_friend:1:field_activity_target_contact',
          ),
          40 => array(
            'source' => 'crm_core_contact:individual:1',
            'destination' => 'crm_core_contact:organization:1',
            'reference_type' => 'crm_core_contact:individual:1:field_contact_current_employer',
          ),
        ),
      ),
    ),
    'source_settings' => array(
      'source_mapping' => array(
        'CivicrmActivityEntityType' => array(
          'Email' => array(
            'source_entity' => 'Email',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'email',
          ),
          'Event Registration' => array(
            'source_entity' => 'Event Registration',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'event_registration',
          ),
          'Contribution' => array(
            'source_entity' => 'Contribution',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'contribution',
          ),
          'Membership Signup' => array(
            'source_entity' => 'Membership Signup',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'membership_signup',
          ),
          'Membership Renewal' => array(
            'source_entity' => 'Membership Renewal',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'membership_renewal',
          ),
          'Tell a Friend' => array(
            'source_entity' => 'Tell a Friend',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'tell_friend',
          ),
          'Membership Renewal Reminder' => array(
            'source_entity' => 'Membership Renewal Reminder',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'membership_renewal_reminder',
          ),
          'Bulk Email' => array(
            'source_entity' => 'Bulk Email',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'bulk_email',
          ),
          'Change Membership Status' => array(
            'source_entity' => 'Change Membership Status',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'change_membership_status',
          ),
          'Change Membership Type' => array(
            'source_entity' => 'Change Membership Type',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'change_membership_type',
          ),
        ),
        'CivicrmContactEntityType' => array(
          'Individual' => array(
            'source_entity' => 'Individual',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'individual',
          ),
          'Household' => array(
            'source_entity' => 'Household',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'household',
          ),
          'Organization' => array(
            'source_entity' => 'Organization',
            'destination_entity' => 'existing',
            'destination_entity_new' => '',
            'destination_entity_existing' => 'organization',
          ),
        ),
      ),
      'civicrm_types' => array(
        'CivicrmActivityEntityType' => array(
          'plugin_name' => 'CivicrmActivityEntityType',
          'plugin_type' => 'crm_core_data_import_source_civicrm_entity_type',
          'entity_types' => array(
            'Email' => 'Email',
            'Event Registration' => 'Event Registration',
            'Contribution' => 'Contribution',
            'Membership Signup' => 'Membership Signup',
            'Membership Renewal' => 'Membership Renewal',
            'Tell a Friend' => 'Tell a Friend',
            'Membership Renewal Reminder' => 'Membership Renewal Reminder',
            'Bulk Email' => 'Bulk Email',
            'Change Membership Status' => 'Change Membership Status',
            'Change Membership Type' => 'Change Membership Type',
            'Meeting' => 0,
            'Phone Call' => 0,
            'Text Message (SMS)' => 0,
            'Pledge Acknowledgment' => 0,
            'Pledge Reminder' => 0,
            'Inbound Email' => 0,
            'Open Case' => 0,
            'Follow up' => 0,
            'Change Case Type' => 0,
            'Change Case Status' => 0,
            'Change Case Start Date' => 0,
            'Assign Case Role' => 0,
            'Remove Case Role' => 0,
            'Print PDF Letter' => 0,
            'Merge Case' => 0,
            'Reassigned Case' => 0,
            'Link Cases' => 0,
            'Change Case Tags' => 0,
            'Add Client To Case' => 0,
            'Survey' => 0,
            'Canvass' => 0,
            'PhoneBank' => 0,
            'WalkList' => 0,
            'Petition' => 0,
            'Change Custom Data' => 0,
            'Interview' => 0,
            'Medical evaluation' => 0,
            'Mental health evaluation' => 0,
            'Secure temporary housing' => 0,
            'Income and benefits stabilization' => 0,
            'Long-term housing plan' => 0,
            'ADC referral' => 0,
            'Mass SMS' => 0,
            'Pay by Check Payment Request' => 0,
            'Cancel Recurring Contribution' => 0,
            'Update Recurring Contribution Billing Details' => 0,
            'Update Recurring Contribution' => 0,
            'Export Accounting Batch' => 0,
            'Create Batch' => 0,
            'Edit Batch' => 0,
          ),
        ),
        'CivicrmContactEntityType' => array(
          'plugin_name' => 'CivicrmContactEntityType',
          'plugin_type' => 'crm_core_data_import_source_civicrm_entity_type',
          'entity_types' => array(
            'Individual' => 'Individual',
            'Household' => 'Household',
            'Organization' => 'Organization',
            'Student' => 0,
            'Parent' => 0,
            'Staff' => 0,
            'Team' => 0,
            'Sponsor' => 0,
          ),
        ),
        'CivicrmRelationshipEntityType' => array(
          'plugin_name' => 'CivicrmRelationshipEntityType',
          'plugin_type' => 'crm_core_data_import_source_civicrm_entity_type',
          'entity_types' => array(
            'Employment relationship.' => 'Employment relationship.',
            'Parent/child relationship.' => 0,
            'Spousal relationship.' => 0,
            'Sibling relationship.' => 0,
            'Volunteer relationship.' => 0,
            'Head of household.' => 0,
            'Household membership.' => 0,
            'Immediate workplace supervisor' => 0,
            'Partner relationship.' => 0,
          ),
        ),
      ),
    ),
  );

  return $crm_core_data_import;
}
