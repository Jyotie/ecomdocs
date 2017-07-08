Anatomy of a Event
---------------------

This section describes various fields required to be filled by user for defining a event.

* :ref:`event_name`
* :ref:`event_label`
* :ref:`event_action`
* :ref:`event_properties`


.. _event_name:

Event Name
~~~~~~~~~~~~~~~
This field allows the user to provide a name to the event. name primarily represents the type of event.


.. _event_label:

Event Label 
~~~~~~~~~~~~~~~

In some cases same type of event might be possible to be performed from different web pages or from different actions on the same webpage. example user can do a “Add To Cart” operation either from product view or from search view. Means there are two ways of initiating the same event type “Add To Cart”. So we may need multiple event definitions to capture the same event type. 

To distinguish such multiple event definitions with the same name (event type) event label is used.  In the above mentioned case we will have two events defined with the same name “Add To Cart”, but with different labels like “from_product_view” , “from_search_view” etc… Name & Label combination needs to be unique.



.. _event_action:

Event Action 
~~~~~~~~~~~~~~~
This field is used to specify the action, which triggers the event to be captured. There are three kinds of actions supported currently. Load, Click & Change. You have to select the appropriate option from dropdown menu.

* Load: Currently this option is supported only for page load event and is not supported for any other HTML element load event.

* Click: This option can be chosen for identifying the user click on any of the HTML elements in the webpage.

* Change: This action is meant for input, textarea and select tag  


.. _event_filters:

Event Filters 
~~~~~~~~~~~~~~~

our next objective would be to link filters to the aforementioned action (click/load/change) for accurate identification of the event occurence.we have four different type of filters to choose from.

**CSS Selector**

CSS selector in event definition is used by web pages to help keep information in the proper display format. It can help define font, size, color, spacing, border and location of HTML information on a web page, and can also be used to create a continuous look throughout multiple pages of a websiteThe CSS selector is chosen in the format as given below

::

  tagName#element Id.class Name1.class Name2{{attribute=value}}

**Inner HTML**

InnerHTML is between the opening and the closing html tags. For example,

::

  <div class=”className1 className2”>
      <button class=”addtocart”>Add-to-Cart</button>
  </div>

Here the innerHTML for div element will be – Add-to-Cart text Under Div. InnerHTML for button element will be – Add-to-Cart (which can be put as an innerHTML in event Definition in AddtoCart.)


**Page URL**

Its the URL of the website which identifies the defined event. This would match any url of the website that has given URL as prefix.


**Specific Info**

Specific Info differentiates the page from other pages in the website::

    <meta property=”og:pro” content=”og:property”/>

page may sometime contain some specific CSS like::

    <div id=”elementId” class=”className1 className2” attribute=value></div>

under such circumstances  specific Info is::

    tagName#elmentId.className1.className2{{attribute=value}}


.. note:: Tag name is mandatoy


.. _event_properties:

Event Properties 
~~~~~~~~~~~~~~~~~~

Event Properties are the details to be captured related to the event (Ex: For ProductView event details of the product viewed like product title, product price are termed properties of the ProductView event). While configuring the event details required to identify the values for these properties.  For each event property to be captured, we need to provide the details required to identify the HTML element (like CSS Selector etc…), which contains the property value.There are three fields (Name, Type & CSS Selector) to be filled for each property to be captured. Name is the given name for the property to be captured & the other two parameters Type & CSS Selector are used to identify the elements from which the property values are to be captured.

**Property Name**

Property name for a particular event must be unique, enter the name of the property you are going to capture, you can name it as you wish the name to be


**Property Type**

As explained before Type is used along with CSS Selector to identify the HTML elements containing the propety values to be captured. Propeties are classified into three types based on the way the CSS Selector provided can be used to identify the HTML elements.

**Unique**

If the CSS Selector provided for the property can identify the element in the webpage uniquely then the property type to be choosen is “Unique”.

**Selected**

If the CSS Selector provided can be used to identify the element in the selected (either by click on a element/change in a element value within the) HTML DIV/Container then the property type to be choosen is “Selected”.


**Repeated**

If the CSS Selector provided for the property can identify multiple elements in the webpage within a HTML DIV/Container and we also would like to capture all the element values making the property value to be a array of values then the property type to be chosen is “Repeated”. (Incase of ViewCart event there will be multiple product names to be captured, all the names of the products can be captured as a array of names within a single property say product_names_in_cart).







