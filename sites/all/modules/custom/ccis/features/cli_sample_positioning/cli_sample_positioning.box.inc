<?php
/**
 * @file
 * cli_sample_positioning.box.inc
 */

/**
 * Implements hook_default_box().
 */
function cli_sample_positioning_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = TRUE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contactinfo';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact/Address';
  $box->options = array(
    'body' => array(
      'value' => '<div class="contactblock">
<h3>Contact</h3>
<p class="contactdata web">http://www.climability.org</p>
<p class="contactdata mail">info@climability.org</p>
<p class="contactdata phone">030 82070657</p>
</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['contactinfo'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'socialmedia';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social media links';
  $box->options = array(
    'body' => array(
      'value' => '<div id="socmed"><a class="fb" href="https://www.facebook.com/pages/Climability/399667536823023" target="_blank"><span>Facebook</span></a><a class="tw" href="https://www.twitter.com/climability" target="_blank"><span>Twitter</span></a><a class="gp" href="https://plus.google.com/109431579820251565186/posts" target="_blank"><span>lala Google +</span></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['socialmedia'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'header_label';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Label Pusat Informasi Perubahan Iklim';
  $box->options = array(
    'body' => array(
      'value' => '<span>PUSAT INFORMASI PERUBAHAN IKLIM</span>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['header_label'] = $box;
  return $export;
}
