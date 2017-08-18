Viewed Also Viewed API
----------------------

Description
~~~~~~~~~~~~~
Display Viewed Also Viewed on product page optimized based on product features and customer behaviour in realtime.
Our Machine Learning Algorithms dynamically optimizes based on the product and customer  features. 
To be effective you need to enable eComtics cookies.

API Definition
~~~~~~~~~~~~~~~~

.. data:: GET https://api.ecomtics.com/vav/v1

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
        "widgetname": "Users who viewed this also Viewed",
        "docs": [{
          "name_s": "French Cuff Cotton Twill Oxford",
          "imageurltype": "absolute",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj000a_2.jpg",
          "price_d": 190,
          "sku_s": "msj000c",
          "currentPageUrl_s": "http://etrial.xyz/french-cuff-cotton-twill-oxford-570.html",
          "product_id_s": 402
        }, {
          "name_s": "Bowery Chino Pants",
          "imageurltype": "absolute",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/p/mpd003a_2.jpg",
          "price_d": 140,
          "sku_s": "mpd003c",
          "currentPageUrl_s": "http://etrial.xyz/bowery-chino-pants-541.html",
          "product_id_s": 414
        }, {
          "name_s": "Plaid Cotton Shirt",
          "imageurltype": "absolute",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj006a.jpg",
          "price_d": 160,
          "sku_s": "msj006c",
          "currentPageUrl_s": "http://etrial.xyz/plaid-cotton-shirt-574.html",
          "product_id_s": 404
        }, {
          "name_s": "Linen Blazer",
          "imageurltype": "absolute",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj012a_2.jpg",
          "price_d": 455,
          "sku_s": "msj012c",
          "currentPageUrl_s": "http://etrial.xyz/linen-blazer-580.html",
          "product_id_s": 406
        }],
        "qtype": "viewedalsoviewed",
        "success": "0",
        "numberofdocs": 4
      }
      
      
