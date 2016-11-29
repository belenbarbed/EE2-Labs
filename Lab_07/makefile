CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=Lab_07.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=thing

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@