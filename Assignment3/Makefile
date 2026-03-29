CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -Wpedantic
LDFLAGS = -lgtest -lgtest_main -pthread

OBJ_DIR = build

CLASS_SRCS = Engine.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Neutral.cpp
CLASS_OBJS = $(CLASS_SRCS:%.cpp=$(OBJ_DIR)/%.o)

TESTS = test_engine test_transformer test_autobot test_decepticon test_neutral
TEST_EXES = $(TESTS:%=$(OBJ_DIR)/%.test)

$(shell mkdir -p $(OBJ_DIR))

$(OBJ_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/test_%.test: test_%.cpp $(CLASS_OBJS)
	$(CXX) $(CXXFLAGS) $< $(CLASS_OBJS) $(LDFLAGS) -o $@

test: $(TEST_EXES)
	@for t in $(TEST_EXES); do ./$$t || exit 1; done

clean:
	rm -rf $(OBJ_DIR)

.PHONY: test clean
