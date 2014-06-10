The serial_sniff.py connects to the serial port dev/ttyUSB0 and listens to incoming serial messages (prints) from a Zolertia Z1 node, parses the messages and adds the different parts into a Django-created database.

NOTE! The file MUST be stored in the same directory as the Django-database (src-folder).

Execute the program in the following way:
user@instant-contiki:/$(HOME)/$(APTANA_WORKSPACE)/$(DJANGO_PROJECT)/src$ python serial_sniff.py

The program will then proceed to sniff the serial port, add data accordingly into the Django-database and print what it's receiving.

NOTE! Make sure the Database table names match those in the models.py in Django.
