
APIs
=====

We have an extensive APIs that enables you to build smart eCommerce applications, internal analytics and projects. The eComtics API is build using REST. 

* Our API has predictable, resource-oriented URLs, and uses HTTP response codes to indicate API errors. We use built-in HTTP features, like HTTP authentication and HTTP verbs, which are understood by off-the-shelf HTTP clients. 
* Our APIs support cross-origin resource sharing, allowing you to interact securely with our API from a client-side web application. You should never expose secret API key on a public website.
* All our APIs returns JSON as API responses, including errors.
* All our APIs are secure


Authentication
---------------

Every account is will include a secret API key. You can manage your API keys in the Dashboard. Your API keys carry many privileges, so be sure to keep them secret! Do not share your secret API keys in publicly accessible areas such GitHub, client-side code, and so forth.

All the APIs Authentication to the API is performed via HTTP Basic Auth. Provide your API key as the basic auth username value. You do not need to provide a password.

Errors
-------

HTTP response codes to indicate the success or failure of an API request. 

* Codes in the 2xx range indicate success. 
* Codes in the 4xx range indicate an error that failed given the information provided 
* codes in the 5xx range indicate an server error.
* APIs which are valid but not complete will have error message indicating the error.
    
.. include:: ./eventloggingapi.inc
.. include:: ./ViewedAlsoViewedAPI.inc
.. include:: ./BoughtAlsoBoughtAPI.inc
.. include:: ./ProductRecoAPI.inc
.. include:: ./ProductConsiderationAPI.inc
.. include:: ./ProductTrendingAPI.inc
.. include:: ./InspiredByBrowsingAPI.inc
.. include:: ./FrequentlyBoughtTogetherAPI.inc
.. include:: ./RecentViewAPI.inc

