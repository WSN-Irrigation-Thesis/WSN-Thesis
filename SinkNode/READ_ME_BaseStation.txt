== BaseStation ===

Author: Johanna Simonsson
Last changed: 2014-04-11

This script is uploaded to a z1 node to make it act like a base station. This means that all data packets received on the serial bus will be forwarded and sent over the radio, and all packets received over the radio will be sent on the serial bus.

Input:
Serial/Radio packets

Output:
Serial/Radio packets

Features:
* Nothing special.


Dependencies
------------

* Ubuntu 12.04 Precise Pangolin
* Tinyos 2.1.2 

Optional:
* Some other cool things you might need.


Usage
-----

0) Install the dependencies listed above.

1) Put the folder BaseStation under ($TOSROOT)/apps/

2) Make sure the line

	source ($TOSROOT)/tinyos.env

is implemented, and the node is connected properly.

3) Change to the correct directory.

	cd ($TOSROOT)/apps/BaseStation

4) Run the following line to upload the program to the node:

	make z1 install bsl,/dev/ttyUSBX

where X is the USB-port the node is connected to. To see which port, run

	motelist

in the terminal.

5) To see the debugging output, run:

	java net.tinyos.tools.PrintfClient -comm serial@/dev/ttyUSBX:115200


	
