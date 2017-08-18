Product Recommendations API
-------------------------------------

Description
~~~~~~~~~~~~~
Display Product Recommendations on product page optimized based on product features and customer behaviour in realtime.
Our Machine Learning Algorithms dynamically optimizes based on the product features and customer behavior. 
To be effective you need to enable eComtics cookies.

API Definition
~~~~~~~~~~~~~~~~

.. data:: GET https://api.ecomtics.com/bab/v1

**Parameters**
~~~~~~~~~~~~~~~~~

    :string apikey: **Required**. Your secret API key.
    :string orgid: **Required**. Your org id
    :number sku: **Required**. Product ID or SKU
    :number limit: **Optional**. Your org id


Request
~~~~~~~~~~~~~

   .. sourcecode:: js

      apikey: XXXXX (YOUR API SECRET KEY)
      orgid: XXXXX (YOUR ORG ID)
      sku: XXXXX (Product ID)
      limit: 1-10 (Number of Products to retrive)

Response
~~~~~~~~~~

   .. sourcecode:: js

      {
        "widgetname": "Recommendations for You",
        "docs": [{
          "name_s": "Plaid Cotton Shirt",
          "imageurltype": "absolute",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj006a.jpg",
          "price_d": 160,
          "sku_s": "msj006c",
          "currentPageUrl_s": "http://etrial.xyz/plaid-cotton-shirt-574.html"
        }, {
          "name_s": "French Cuff Cotton Twill Oxford",
          "imageurltype": "absolute",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj000a_2.jpg",
          "price_d": 190,
          "sku_s": "msj000c",
          "currentPageUrl_s": "http://etrial.xyz/french-cuff-cotton-twill-oxford-570.html"
        }],
        "qtype": "categoryreco",
        "success": "0",
        "numberofdocs": 2
      }
