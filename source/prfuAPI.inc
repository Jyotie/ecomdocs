Product Recommendations API
-------------------------------------

Description
~~~~~~~~~~~~~
Display mostly viewed products on product page optimized based on customer behaviour in real time.
Our Machine Learning Algorithms optimizes based on the features such as demo/gender/geo etc..

API Definition
~~~~~~~~~~~~~~~~

.. data:: GET https://api.ecomtics.com/prfu/v1

**Parameters**
~~~~~~~~~~~~~~~~~

    :string apikey: **Required**. Your secret API key.
    :string orgid: **Required**. Your org id
    :number limit: **Optional**. Your org id


Request
~~~~~~~~~~~~~

   .. sourcecode:: js

      apikey: XXXXX (YOUR API SECRET KEY)
      orgid: XXXXX (YOUR ORG ID)
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
