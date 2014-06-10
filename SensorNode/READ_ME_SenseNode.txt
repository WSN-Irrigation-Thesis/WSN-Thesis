== SenseNode ===

Author: Johanna Simonsson
Last changed: 2014-06-10

This script makes a node read the soil moisture sensor sensor, and then send moisture data along with the node ID to the node with the preprogrammed ROOT_NODE_ID. It listens for return packets for a finite time, then shuts off all its peripheral components to enter sleep mode.

Input:
Radio Packets and Sensor data

Output:
Radio packets

Features:
* Nothing special.


Dependencies
------------

* Tinyos 2.1.2 
* Soil Moisture Sensor

Optional:
* Some other cool things you might need.


Usage
-----

0) Install the dependencies listed above.

1) Put the folder SenseNode under ($TOSROOT)/apps/

2) Make sure the line

	source ($TOSROOT)/tinyos.env

is implemented, and the node is connected properly.

3) Change to the correct directory.

	cd ($TOSROOT)/apps/SenseNode

4) Run the following line to upload the program to the node:

	make z1 install.Y bsl,/dev/ttyUSBX

where X is the USB-port the node is connected to and Y the node ID. Make sure the node ID is unique. To see which port, run

	motelist

in the terminal.

5) Insert the Soil moisture sensor into the female connector on the sensor node. Make sure it is the same as the preprogrammed ADC-channel (It is the one closest to the micro-USB connector). Be sure it the contact is secured to avoid an intermittent connection. 


) To see the debugging output, run:

	java net.tinyos.tools.PrintfClient -comm serial@/dev/ttyUSBX:115200


	
