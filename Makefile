####################################################
#
# Makefile SAILBOT PROD
#
####################################################

CC = g++
CFLAGS = -Wall -pthread -D_REENTRANT -lwiringPi -lgps
TARGET = sailingBoat
INSTALLBINDIR = /usr/local/bin

# Lägg till eventuella nya källkodsfiler för ditt program här
SOURCES = main.cc \
src/control_unit.cc \
src/module_gps.cc \
src/module_servo.cc \
src/module_wind_sensor.cc \
src/module_cmps12.cc \
src/calculation_unit.cc \
src/utilities.cc \
src/DataContainers/gps_position.cc \
src/DataContainers/vec2.cc \
src/DataContainers/log.cc \
src/gps_data.cc \
src/maestro.cc \
src/cmps12.cc \
src/cmps12_data.cc \
src/ma3.cc \
src/gps.cc \
src/logger.cc \
src/io.cc \
src/parser.cc \
test/test_main.cc


all : $(TARGET)

$(TARGET) : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $@

install:
	@echo "Installing $(TARGET)..."; cp $(TARGET) $(INSTALLBINDIR)

distclean:
	@echo "Removing $(TARGET)..."; rm $(INSTALLBINDIR)/$(TARGET)

clean :
	rm $(TARGET) *~
