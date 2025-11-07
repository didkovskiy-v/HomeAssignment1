CXX = g++

CXXFLAGS = -std=c++17 -Wall -Wextra -g

LDFLAGS = -lgtest -lgtest_main -lpthread

SRC = Transformer.cpp Autobot.cpp Decepticon.cpp Neutral.cpp main.cpp

HDR = Transformer.h Autobot.h Decepticon.h Neutral.h

TEST_SRC = transformer_test.cpp

TARGET = transformers
TEST_TARGET = transformer_tests

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(TEST_TARGET): $(SRC) $(HDR) $(TEST_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)

.PHONY: all test clean
