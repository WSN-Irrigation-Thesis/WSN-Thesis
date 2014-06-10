== BaseSerial ===

Author: Kim Öberg and Johanna Simonsson
Last changed: 2014-05-13

The script interprets data packets sent over the serial bus from the sink node,
stores relevant data (node id and sensor data), adds it to an already
created Django database, fetches weather data from the Django database,
checks whether it's going to rain or not and then instructs the sink node
(via serial bus) on what to tell the node that sent the message.

Input:
Serial/Radio packets

Output:
Serial/Radio packets and entries in the Django database

Features:
* -


Dependencies
------------

* Ubuntu 12.04 Precise Pangolin
* Tinyos 2.1.2 
* Java
* JDBC driver (https://bitbucket.org/xerial/sqlite-jdbc)
* BaseStation application

Optional:
* -


Usage
-----

0) Install the dependencies listed above.

1) Go to https://bitbucket.org/xerial/sqlite-jdbc, download the files and put them in the same directory as BaseSerial

2) Put in the folder BaseStation under ($TOSROOT)/apps/

3) Make sure the Makefile includes the dependencies to the file.

4) Make sure the absolute patch to the Django database is correct.

5) Change to the correct directory.

	cd ($TOSROOT)/apps/BaseStation

6) Compile the project with: 'make z1 install.1' in the (the BaseStation should always have ID 1)

7) Run 

	java BaseSerial -comm serial@/dev/ttyUSBX:115200

where USBX is the port where the node with the application BaseStation is mounted.

	
