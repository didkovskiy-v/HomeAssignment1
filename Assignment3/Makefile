CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
LDFLAGS = -lgtest -lgtest_main -pthread

OBJ_DIR = build

MAIN_SRCS = Transformer.cpp Engine.cpp Autobot.cpp Decepticon.cpp Neutral.cpp main.cpp
OBJS = $(MAIN_SRCS:%.cpp=$(OBJ_DIR)/%.o)
EXEC = $(OBJ_DIR)/transformer_game

TEST_SRCS = $(wildcard test_*.cpp)
TEST_EXES = $(TEST_SRCS:test_%.cpp=$(OBJ_DIR)/test_%.test)

$(shell mkdir -p $(OBJ_DIR))

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/test_%.test: test_%.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) $< $(OBJS) $(LDFLAGS) -o $@

test: $(TEST_EXES)
	@for t in $(TEST_EXES); do \
		./$$t || exit 1; \
	done

clean:
	rm -rf $(OBJ_DIR)

.PHONY: all test clean
