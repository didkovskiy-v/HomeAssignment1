CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic -O2
LDFLAGS = -lgtest -lgtest_main -pthread
TESTS = test_mtrx test_fract

all: $(TESTS)

test_mtrx: test_mtrx.cpp Matr.h Fract.h
	$(CXX) $(CXXFLAGS) test_mtrx.cpp -o $@ $(LDFLAGS)

test_fract: test_fract.cpp Fract.h
	$(CXX) $(CXXFLAGS) test_fract.cpp -o $@ $(LDFLAGS)

test: $(TESTS)
	./test_fract
	./test_mtrx

clean:
	rm -f $(TESTS)

.PHONY: all test clean
