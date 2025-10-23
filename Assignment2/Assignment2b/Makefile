CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
TARGET = rpn_calc
SRC = main.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

.PHONY: clean
