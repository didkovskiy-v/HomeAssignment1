CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
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

all: $(TEST_EXES)

test: all
	@for t in $(TEST_EXES); do ./$$t || exit 1; done

test_engine: $(OBJ_DIR)/test_engine.test
	./$(OBJ_DIR)/test_engine.test

test_transformer: $(OBJ_DIR)/test_transformer.test
	./$(OBJ_DIR)/test_transformer.test

test_autobot: $(OBJ_DIR)/test_autobot.test
	./$(OBJ_DIR)/test_autobot.test

test_decepticon: $(OBJ_DIR)/test_decepticon.test
	./$(OBJ_DIR)/test_decepticon.test

test_neutral: $(OBJ_DIR)/test_neutral.test
	./$(OBJ_DIR)/test_neutral.test

clean:
	rm -rf $(OBJ_DIR)

.PHONY: all test test_engine test_transformer test_autobot test_decepticon test_neutral clean
