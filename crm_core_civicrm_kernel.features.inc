<?php
/**
 * @file
 * crm_core_civicrm_kernel.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function crm_core_civicrm_kernel_default_crm_core_activity_type() {
  $items = array();
  $items['bulk_email'] = entity_import('crm_core_activity_type', '{
    "type" : "bulk_email",
    "label" : "Bulk Email",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['change_membership_status'] = entity_import('crm_core_activity_type', '{
    "type" : "change_membership_status",
    "label" : "Change Membership Status",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['change_membership_type'] = entity_import('crm_core_activity_type', '{
    "type" : "change_membership_type",
    "label" : "Change Membership Type",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['contribution'] = entity_import('crm_core_activity_type', '{
    "type" : "contribution",
    "label" : "Contribution",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['email'] = entity_import('crm_core_activity_type', '{
    "type" : "email",
    "label" : "Email",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['event_registration'] = entity_import('crm_core_activity_type', '{
    "type" : "event_registration",
    "label" : "Event Registration",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['membership_renewal'] = entity_import('crm_core_activity_type', '{
    "type" : "membership_renewal",
    "label" : "Membership Renewal",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['membership_renewal_reminder'] = entity_import('crm_core_activity_type', '{
    "type" : "membership_renewal_reminder",
    "label" : "Membership Renewal Reminder",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['membership_signup'] = entity_import('crm_core_activity_type', '{
    "type" : "membership_signup",
    "label" : "Membership Signup",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  $items['tell_friend'] = entity_import('crm_core_activity_type', '{
    "type" : "tell_friend",
    "label" : "Tell a Friend",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "metatags" : []
  }');
  return $items;
}
