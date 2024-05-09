CC=g++
CFLAGS=-Wall
LDFLAGS=
SOURCES=program.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=average

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o $(EXECUTABLE)
