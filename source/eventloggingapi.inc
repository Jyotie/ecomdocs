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


Example
~~~~~~~~

**Request**

   .. sourcecode:: js

      apikey: XXXXX (YOUR API SECRET KEY)
      orgid: XXXXX (YOUR ORG ID)
      inputJson:
	{
	"properties": {
			"eventAction": {
				"type": "string",
				"value": "load"
			},
			"eventType": {
				"type": "string",
				"value": "view"
			},
			"ipAddress": {
				"type": "string",
				"value": "24.5.125.53"
			},
			"is_mobile": {
				"type": "boolean",
				"value": false
			},
			"deviceInfo": {
				"type": "string",
				"value": "MacIntel"
			},
			"browserInfo": {
				"type": "string",
				"value": "Chrome 59"
			},
			"spotDy_uid": {
				"type": "string",
				"value": "00696e4c-a4ed-4ff8-8a14-6bb9cc6a6c62"
			},
			"domain": {
				"type": "string",
				"value": "boatsvilla.com"
			},
			"date": {
				"type": "ISO_DATE",
				"value": "2017-07-28T02:54:45.663Z"
			},
			"currentPageUrl": {
				"type": "string",
				"value": "http://boatsvilla.com/"
			},
			"spotdy_eventid": {
				"value": "0d1f571d-3bc4-4022-a2c3-07cfc48b31d9",
				"type": "string"
			},
			"spotdySessionId": {
				"type": "string",
				"value": "948756c3-1c58-45b8-bbe6-b4a8d9f5309a"
			},
			"spotdy_eventname": {
				"value": "__ecomtics_pageview",
				"type": "string"
			},
			"userid": {
				"value": "arvind.rapaka@spotdy.com",
				"type": "string"
			}
		}
	}

**Response**

   .. sourcecode:: js

        {
            responseCode: "SUCCESS"
        }
