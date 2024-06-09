CC=g++
CFLAGS=-Wall
LDFLAGS=
SOURCES= main.cpp key_value_pair.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=kvp

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o $(EXECUTABLE)
