#include "Engine.h"
#include <gtest/gtest.h>

TEST(EngineTest, ConstructorAndGetPower) {
    Engine e(150);
    EXPECT_EQ(e.GetPower(), 150);
}

TEST(EngineTest, SetPower) {
    Engine e;
    e.SetPower(200);
    EXPECT_EQ(e.GetPower(), 200);
}

