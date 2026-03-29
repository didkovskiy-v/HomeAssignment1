/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment4
  */
#include "Engine.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(EngineTest, DefaultConstructor)
{
    Engine e;
    EXPECT_EQ(e.GetPower(), 100);
}

TEST(EngineTest, ParameterizedConstructor)
{
    Engine e(150);
    EXPECT_EQ(e.GetPower(), 150);
}

TEST(EngineTest, SetPower)
{
    Engine e;
    e.SetPower(200);
    EXPECT_EQ(e.GetPower(), 200);
}

TEST(EngineTest, ToString)
{
    Engine e(120);
    std::string s = e.ToString();
    EXPECT_FALSE(s.empty());
}

TEST(EngineTest, StreamOperator)
{
    Engine e(130);
    std::ostringstream oss;
    oss << e;
    EXPECT_FALSE(oss.str().empty());
}

