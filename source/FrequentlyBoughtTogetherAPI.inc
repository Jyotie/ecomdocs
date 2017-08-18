Frequently Bought Together API
-------------------------------

Description
~~~~~~~~~~~~~
Display Frequently Bought Together on product page optimized based on product features and customer behaviour in realtime.
Our Machine Learning Algorithms dynamically optimizes based on the product and customer  features. 
To be effective you need to enable eComtics cookies.

API Definition
~~~~~~~~~~~~~~~~

.. data:: GET https://api.ecomtics.com/fbt/v1

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
      sku:  Product ID or SKU
      limit: 1-10 (Number of Products to retrive)

Response
~~~~~~~~~~

   .. sourcecode:: js
   
        {
          "widgetname": "Frequently bought together",
          "docs": [{
            "cannoical_url_s": "http://etrial.xyz/catalog/product/view/id/234",
            "name_s": "Slim fit Dobby Oxford Shirt",
            "productinview": true,
            "imageurltype": "absolute",
            "smallImage_s": "http://etrial.xyz/media/catalog/product/m/s/msj003t_1.jpg",
            "image_s": "http://etrial.xyz/media/catalog/product/m/s/msj003t_1.jpg",
            "product_id_s": "234"
          }, {
            "name_s": "Delancy Cardigan Sweater",
            "smallImage_s": "http://etrial.xyz/media/catalog/product/w/b/wbk006a.jpg",
            "price_d": 275,
            "sku_s": "wbk006c",
            "currentPageUrl_s": "http://etrial.xyz/delancy-cardigan-sweater-589.html",
            "product_id_s": 419
          }],
          "qtype": "crosssell",
          "success": "0",
          "numberofdocs": 2
        }
      
