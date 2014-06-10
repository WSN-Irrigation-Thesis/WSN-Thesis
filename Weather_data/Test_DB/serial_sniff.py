"""Serial port sniffer
Author: Kim Oeberg
Date: 2014-03-25

The script connects to the serial port /dev/ttyUSB0 and listens to 
incoming serial messages (prints) from a Zolertia Z1 node 
(the EOF character symbolises the end of one received message).

It then parses the incoming messages into 'words' (separated by whitespace) 
and adds the different words into their respective Django-created tables.

Args:
DATABASE: The existing or, to be created, database.

Returns:
Nothing.

Raises:
Some_kind_of_error: Error handling goes here.
"""

import serial
import sqlite3

#Connect to Django base (file should be stored in same directory as Django db)
DATABASE = sqlite3.connect('db.sqlite3')
CURSOR = DATABASE.cursor()

#Open serial connection
SERIAL = serial.Serial('/dev/ttyUSB0', 115200, timeout = 5)
print("Connected to: " + SERIAL.portstr)

while 1:
    #Read the incoming msg ('til EOF character) 
	#and split into data segments separated by whitespace
    MSG = SERIAL.readline().split()
    if MSG:	#Only proceed if there is a msg
        print(MSG)	#Print what's being received for debugging reasons
        i = 0
        for word in MSG:	#Save each data segment as they are received
            if i == 0:
                NODE = word
                int(NODE)
            if i == 1:
                TEMP = word
                float(TEMP)

            i += 1

		#Add all received data to the database table
        CURSOR.execute('''INSERT INTO network_measuredata(node, temp)
                   VALUES(?, ?)''', (NODE, TEMP))
        print('Insertion completed')
		
        #Commit the changes to the database
        DATABASE.commit()

#Close the serial connection
SERIAL.close()



