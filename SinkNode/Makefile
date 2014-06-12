COMPONENT=BaseStationC
CFLAGS += -I$(TOSDIR)/lib/printf
CFLAGS += -DCC2420_NO_ACKNOWLEDGEMENTS
CFLAGS += -DCC2420_NO_ADDRESS_RECOGNITION
CFLAGS += -DTASKLET_IS_TASK
BUILD_EXTRA_DEPS += BaseSerial.class
CLEAN_EXTRA = *.class BaseSerialMsg.java

BaseSerial.class: $(wildcard *.java) BaseSerialMsg.java
	javac -target 1.4 -source 1.4 *.java

BaseSerialMsg.java:
	mig java -target=null $(CFLAGS) -java-classname=BaseSerialMsg BaseStation.h radio_count_msg -o $@

include $(MAKERULES)

