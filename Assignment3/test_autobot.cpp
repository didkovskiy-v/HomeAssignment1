/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment4
  */
#include "Autobot.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(AutobotTest, DefaultConstructor)
{
    Autobot a;
    EXPECT_EQ(a.GetType(), "Autobot");
}

TEST(AutobotTest, ParameterizedConstructor)
{
    Autobot a("Bee", 3, 90, 30, 20, "Optimus", true);
    EXPECT_EQ(a.GetLeaderName(), "Optimus");
    EXPECT_TRUE(a.GetMedicMode());
}

TEST(AutobotTest, DirectCall)
{
    Autobot a("Bee", 3, 90, 30, 20, "Optimus");
    a.Heal();
    a.Transform();
}

TEST(AutobotTest, ViaBasePointer)
{
    Autobot a("Bee", 3, 90, 30, 20, "Optimus");
    Transformer* p = &a;
    p->Transform();
}

TEST(AutobotTest, StreamOperator)
{
    Autobot a("Bee", 3, 90, 30, 20, "Optimus");
    std::ostringstream oss;
    oss << a;
    EXPECT_FALSE(oss.str().empty());
}

