Events
=========================

In eComtics terminology, an event represents an action on the web app along with some of the properties relevant to the action, which the administrator has chosen to monitor. One of the example events is “AddToCart”, which is the combination of the user click action on “add to cart” button and the properties related to it like the product name, product id, product price & product quantity.

Many times the same event may occur because of user actions on different web pages. To accommodate this the same event can have multiple configurations. Each configuration for an event must be identified with a label. A good example of this scenario is the “AddToCart” event that can be triggered by clicking on the “add to cart” button in Product View or by clicking on the “add to cart” button in Search View page. The labels for the two different configurations must be unique and say “from_product_view” & “from_search_view” respectively, where as the event name remains same as “AddToCart”.

Events are classified into two types as mentioned below, which are explained in detail in the next sections.


Types of Events
----------------
* :ref:`standard_events`
* :ref:`custom_events`

.. _standard_events:

Standard Events
~~~~~~~~~~~~~~~

eComtics has few predefined event names that are the most common events in an eCommerce Web app. The following are the predefined standard events.

* Add To Cart
* Add To Wishlist
* Checkout
* Product View
* Ratings And Reviews
* Search View
* Transaction
* View Cart
* Log In
* Sign up


.. _custom_events:

Custom Events
~~~~~~~~~~~~~~~
While creating a custom event please make sure not to use any of the predefined standard event names for the custom event name.

.. include:: ./events_def.inc
.. include:: ./events_create.inc
