#!/usr/bin/python
"""XML parser and database storage
Author: Kim Oeberg
Date: 2014-03-26

Parses XML data into strings from a downloaded file.
Then adds the relevant data to a database.

Args:
data.xml: The XML file to be parsed.

Returns:
Stores data in a database of your choice.

Raises:
Some_kind_of_error: Error handling goes here.
"""

import xml.etree.cElementTree as etree
import sqlite3

#Connect to test base (file should be stored in same directory as Django db)

DATABASE = sqlite3.connect('/home/kim/Documents/Aptana_Workspace/WSN/src/db.sqlite3')
CURSOR = DATABASE.cursor()

#Open an XML file for reading
with open('data.xml', 'rt') as W_DATA:
    DATA = etree.parse(W_DATA)
    TOTAL_RAIN = 0
    LOCATION = 'Stockholm'
    for timestamp in DATA.iter('time'):
        if timestamp.attrib['period'] == '0':
            TOTAL_RAIN = 0
        if timestamp.attrib['period'] == '3':
            date = timestamp.attrib['from']
            date = date.split("T")
            date = date[0]
            print type(TOTAL_RAIN) is float
            print ("In Stockholm it will be raining %s mm on the %s\n" %
	        (TOTAL_RAIN, date))
			#Insert into database
            CURSOR.execute('''INSERT INTO weather_forecast(position, rain, date, timestamp)
                   			VALUES(?, ?, ?, date())''', (LOCATION, TOTAL_RAIN, date))
            print('Insertion completed\n')
            #Commit the changes to the database
            DATABASE.commit()

        for rain in timestamp.iter('precipitation'):
            TOTAL_RAIN = TOTAL_RAIN + float(rain.attrib['value'])
