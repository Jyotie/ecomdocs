Event Logging
--------------

Event Logging JSON interface is designed to send user events/actions. 
The message interface is designed generically to support future requirements and extensibility. 
The interface will allow message recursion to support messages within a message. 

.. data:: POST https://api.ecomtics.com/events/v1

    :string project: **Required**. The slug of a project. 
    :string version: **Required**. The slug of the version for this project.
    :string q: **Required**. The search query


    
    
    Results:

   .. sourcecode:: js
  

        {
            "results": {
                "hits": {
                    "hits": [
                        {
                            "fields": {
                                "link": "http://localhost:9999/docs/test-docs/en/latest/history/classes/coworking",
                                "path": [
                                    "history/classes/coworking"
                                ],
                                "project": [
                                    "test-docs"
                                ],
                                "title": [
                                    "PIE coworking"
                                ],
                                "version": [
                                    "latest"
                                ]
                            },
                            "highlight": {
                                "content": [
                                    "\nhelp fund more endeavors. Beta <em>test</em>  This first iteration of PIE was a very underground project"
                                ]
                            }
                        },
                    ],
                    "max_score": 0.47553805,
                    "total": 2
                }
            }
        }
