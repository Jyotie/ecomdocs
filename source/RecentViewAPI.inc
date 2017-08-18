Recent Views API
----------------------------

Description
~~~~~~~~~~~~~
Display Recent Views. To be effective you need to enable eComtics cookies.

API Definition
~~~~~~~~~~~~~~~~

.. data:: GET https://api.ecomtics.com/rv/v1

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
            "widgetname": "Recent Views",
            "docs": [{
                "name_s": "French Cuff Cotton Twill Oxford",
                "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj000a_2.jpg",
                "price_d": 190,
                "sku_s": "msj000c",
                "currentPageUrl_s": "http://etrial.xyz/french-cuff-cotton-twill-oxford-570.html"
            }, {
                "name_s": "Core Striped Sport Shirt",
                "smallImage_s": "http://etrial.xyz/media/catalog/product/m/t/mtk012a.jpg",
                "price_d": 125,
                "sku_s": "mtk012c",
                "currentPageUrl_s": "http://etrial.xyz/core-striped-sport-shirt-547.html"
            }, {
                "name_s": "Plaid Cotton Shirt",
                "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj006a.jpg",
                "price_d": 160,
                "sku_s": "msj006c",
                "currentPageUrl_s": "http://etrial.xyz/plaid-cotton-shirt-574.html"
            }],
            "qtype": "contentbasedreco",
            "success": "0",
            "numberofdocs": 3
        }
      
