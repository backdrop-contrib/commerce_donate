# Commerce Donate

This module provides a donation line item type along with a donation product and
product display.

It uses the [Select or Other module](http://drupal.org/project/select_or_other)
to provide the donation amount form field. If you need to modify the default
donation option values, the install the [Commerce Customizable Products module](http://drupal.org/project/commerce_custom_product)
in order to modify the line item type form settings.

In addition to being able to create a donation product, this module also provides
a donation checkout pane, allowing customers to add a donation to their order as
part of the checkout process.

# Requirements

Backdrop Commerce
Rules
Select or Other

Optional:
Commerce Customizable Products

## Installation

* Install this module using the [official Backdrop CMS instructions](https://backdropcms.org/guide/modules)

## Configuration

* Create a donation product at Administration » Store » Products
* (Optional) If you want to display the donation product in your shop's product
  catalog, then create a donation product display node for the product you just
  created at Add content » Donation
* (Optional) If you want to capture donations during the checkout process, then
  - ensure the "Donation form" checkout pane is enabled at Store » Configuration
    » Checkout settings
  - configure the "Donation form" checkout pane with the donation product you
    created

## Customization

* To override the default donation amount options:
  1) Install the "Commerce Customizable Products" module
  2) Edit the "Amount" field at Administration » Store » Configuration » Line
    iitem types » Donation and alter the default options there.
* To override the donation amount options visible in checkout:
  1) Edit the "Donation form" checkout pane at Store » Configuration
      » Checkout settings
  2) Enable the "Override available options" option
  3) Enter the new values in key|label format in the "Available options"
     textarea.

## FAQ

Q: When the commerce donate module is enabled, the checkout pane does not
   appear.  Why?

A: First you need to create a donation product at Administration » Store »
   Products and then edit the "Donation form" checkout pane at Store »
   Configuration » Checkout settings and configure it to use this donation
   product.

## Current Maintainers

* Seeking

## Credit

Originally maintained on Drupal by:

* [stella](https://www.drupal.org/u/stella)
* [alanburke](https://www.drupal.org/u/alanburke)
* [asirjacques](https://www.drupal.org/u/asirjacques)

Thanks to [Randy Fay](http://drupal.org/user/30906) for his excellent
screencast on creating donation products for [Drupal Commerce](http://commerceguys.com/blog/using-custom-line-items-provide-donation-feature-drupal-commerce).

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.
