CC=g++
CFLAGS=-Wall -g
LDFLAGS=
SOURCES=main.cpp int_cell.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=buggy

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o $(EXECUTABLE)
