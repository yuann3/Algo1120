CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = reverse_linked_list

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)
