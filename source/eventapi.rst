Data types
**********

.. data:: number

    :string project: **Required**. The slug of a project. 
    :string version: **Required**. The slug of the version for this project.
    :string q: **Required**. The search query

    You can search a specific set of documentation using our doc search endpoint.
    It returns data in the format of Elastic Search,
    which requires a bit of traversing to use.

    In the future we might change the format of this endpoint to make it more abstact.

    An example URL: http://readthedocs.org/api/v2/docsearch/?project=docs&version=latest&q=subdomains