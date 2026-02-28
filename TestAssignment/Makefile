CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic -g -O0
LDFLAGS =

TARGET = int_array_demo
SRCS = main.cpp int_array.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean test run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp int_array.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

run: $(TARGET)
	./$(TARGET)

test: run

clean:
	rm -f $(OBJS) $(TARGET)
