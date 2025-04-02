# Views Sort Expression
<!--
The first paragraph of this file should be kept short as it will be used as the
project summary on BackdropCMS.org. Aim for about 240 characters (three lines at
80 characters each).

All lines in this file should be no more than 80 characters long for legibility,
unless including a URL or example that requires the line to not wrap.
|<- - - - - - - This line is exactly 80 characters for reference - - - - - - ->|

Detail in READMEs should be limited to the minimum required for installation and
getting started. More detailed documentation should be moved to a GitHub wiki
page; for example: https://github.com/backdrop-contrib/setup/wiki/Documentation.
-->
Views Sort Expression allows you to add an SQL expression as a sort handler in
your View. This is an advanced module that requires knowledge of SQL and how to construct expression-based ORDER BYs.

It aims to be a helper module to achieve custom ordering that is normally not
possible with the regular sort handlers or that are not covered by existing
modules.

By sorting by an expression you can do things like showing NULL items last when
sorting by a numeric field, or creating a custom sort order putting some content
types on top. The possibilities are endless.

You may use whatever is you have currently available on the query. For that
reason you should always enable the "Show the SQL query" on the Views's setting
page. Normally, adding a field or the like doesn't necessarily add to the SQL
query, so you may find useful adding whatever is you want to use and inside
the expression as a sort in the end, and put your expression where you need it.

## Installation
<!--
List the steps needed to install and configure the module. Add/remove steps as
necessary.
-->
- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.

## Usage
1. Click to 'Add' a 'Sort Criteria'
2. Search for 'Expression' or filter by 'Global'
3. Select and add the sort criteria.

Advanced documentation will be added here:
https://docs.backdropcms.org/documentation/add-ons/views-sort-expression

## Issues
<!--
Link to the repo's issue queue.
-->
Bugs and Feature Requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/views_sort_expression/issues.

## Current Maintainers
<!--
List the current maintainer(s) of the module, and note if this module needs
new/additional maintainers.
-->
- [Martin Price](https://github.com/yorkshire-pudding) - [System Horizons Ltd](https://www.systemhorizons.co.uk)
- Collaboration and co-maintainers welcome!

## Credits
<!--
Give credit where credit's due.
If this is a Drupal port, state who ported it, and who wrote the original Drupal
module. If this module is based on another project, or uses third-party
libraries, list them here. You can also mention any organisations/companies who
sponsored the module's development.
-->
- Ported to Backdrop CMS by - [Martin Price](https://github.com/yorkshire-pudding) - [System Horizons Ltd](https://www.systemhorizons.co.uk).
- Port and ongoing development sponsored by [System Horizons Ltd](https://www.systemhorizons.co.uk).
- Originally written for Drupal by [hanoii](https://www.drupal.org/u/hanoii)

## License
<!--
Mention what license this module is released under, and where people can find
it.
-->

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.
