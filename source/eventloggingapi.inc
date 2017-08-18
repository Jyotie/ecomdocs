Event Logging
--------------

Event Logging JSON interface is designed to send user events/actions. 
The message interface is designed generically to support future requirements and extensibility. 
The interface will allow message recursion to support messages within a message. 

.. data:: POST https://api.ecomtics.com/events/v1

**Parameters**

    :inputJson: **Required**. The input key/values you want to capture. 
    :string apikey: **Required**. Your secret API key.
    :string orgid: **Required**. Your org id


    
    
**Results**:

   .. sourcecode:: js

        {
        responseCode: "SUCCESS"
        }
