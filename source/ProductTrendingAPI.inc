Product Trending API
----------------------------

Description
~~~~~~~~~~~~~
Display Product Trending optimized based on trending products and customer behaviour in realtime.
Our Machine Learning Algorithms dynamically optimizes based on the product and customer features. 
To be effective you need to enable eComtics cookies.

API Definition
~~~~~~~~~~~~~~~~

.. data:: GET https://api.ecomtics.com/prt/v1

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
      sku: Product ID or SKU
      limit: 1-10 (Number of Products to retrive)

Response
~~~~~~~~~~

   .. sourcecode:: js

      {
        "widgetname": "Hot Trending Items",
        "docs": [{
          "name_s": "Tori Tank",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/w/b/wbk003a.jpg",
          "price_d": "60.0",
          "sku_s": "wbk003c",
          "currentPageUrl_s": "http://etrial.xyz/tori-tank-587.html"
        }, {
          "name_s": "French Cuff Cotton Twill Oxford",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj000a_2.jpg",
          "price_d": "190.0",
          "sku_s": "msj000c",
          "currentPageUrl_s": "http://etrial.xyz/french-cuff-cotton-twill-oxford-570.html"
        }, {
          "name_s": "Chelsea Tee",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/t/mtk002a.jpg",
          "price_d": "75.0",
          "sku_s": "mtk002c",
          "currentPageUrl_s": "http://etrial.xyz/chelsea-tee-702.html"
        }, {
          "name_s": "TriBeCa Skinny Jean",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/w/p/wpd000a_2.jpg",
          "price_d": "185.0",
          "sku_s": "wpd000c",
          "currentPageUrl_s": "http://etrial.xyz/tribeca-skinny-jean.html"
        }, {
          "name_s": "Bowery Chino Pants",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/p/mpd003a_2.jpg",
          "price_d": "140.0",
          "sku_s": "mpd003c",
          "currentPageUrl_s": "http://etrial.xyz/bowery-chino-pants-541.html"
        }, {
          "name_s": "Aviator Sunglasses",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/a/c/ace000a_1.jpg",
          "price_d": "295.0",
          "sku_s": "ace000",
          "currentPageUrl_s": "http://etrial.xyz/aviator-sunglasses.html"
        }, {
          "name_s": "Lexington Cardigan Sweater",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/m/t/mtk009a.jpg",
          "price_d": "240.0",
          "sku_s": "mtk009c",
          "currentPageUrl_s": "http://etrial.xyz/lexington-cardigan-sweater-561.html"
        }, {
          "name_s": "Modern Murray Ceramic Vase",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/h/d/hdd001_2.jpg",
          "price_d": "135.0",
          "sku_s": "hdd001c",
          "currentPageUrl_s": "http://etrial.xyz/modern-murray-ceramic-vase-480.html"
        }, {
          "name_s": "Swing Time Earrings",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/a/c/acj004_2.jpg",
          "price_d": "75.0",
          "sku_s": "acj004",
          "currentPageUrl_s": "http://etrial.xyz/swing-time-earrings.html"
        }, {
          "name_s": "Ludlow Sheath Dress",
          "smallImage_s": "http://etrial.xyz/media/catalog/product/w/s/wsd008t_2.jpg",
          "price_d": "305.0",
          "sku_s": "wsd008c",
          "currentPageUrl_s": "http://etrial.xyz/ludlow-sheath-dress.html"
        }],
        "qtype": "trending",
        "success": "0",
        "numberofdocs": 10
      }
      
      
