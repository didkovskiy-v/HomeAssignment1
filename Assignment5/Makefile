CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic -O2
LDFLAGS = -lgtest -lgtest_main -pthread

all: test_mtrx test_fract

test_mtrx: test_mtrx.cpp Matr.h Fract.h Fract.cpp
	$(CXX) $(CXXFLAGS) test_mtrx.cpp Fract.cpp -o $@ $(LDFLAGS)

test_fract: test_fract.cpp Fract.h Fract.cpp
	$(CXX) $(CXXFLAGS) test_fract.cpp Fract.cpp -o $@ $(LDFLAGS)

test: test_fract test_mtrx
	./test_fract
	./test_mtrx

clean:
	rm -f test_mtrx test_fract

.PHONY: all test clean
