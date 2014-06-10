#!/usr/bin/python
"""Fetches weather data
Author: Kim Oeberg
Date: 2014-03-25

Fetches weather data from yr.no in XML format
and saves it in a XML-file for later.

Args:
location: Zip code for location

Returns:
A XML file with the requested data.

Raises:
Some_kind_of_error: Error handling goes here.
"""

import urllib

#Downloading with urllib
URL = 'http://www.yr.no/place/Sweden/Stockholm/Stockholm/varsel.xml'

#Store the XML file
urllib.urlretrieve(URL, "data.xml")
