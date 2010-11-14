<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function featureflow_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featureflow';
  $context->description = 'FeatureFlow sitewide context';
  $context->tag = 'featureflow';
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FeatureFlow sitewide context');
  t('featureflow');

  $export['featureflow'] = $context;
  return $export;
}
