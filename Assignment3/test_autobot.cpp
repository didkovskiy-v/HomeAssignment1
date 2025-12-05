/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Autobot.h"
#include <gtest/gtest.h>

TEST(AutobotTest, Construction) {
    Autobot a("Bee", 3, 90, 30, 20, "Optimus", false);
    EXPECT_EQ(a.GetName(), "Bee");
    EXPECT_EQ(a.GetLeaderName(), "Optimus");
    EXPECT_FALSE(a.GetMedicMode());
}

TEST(AutobotTest, Mutators) {
    Autobot a("Bee", 3, 90, 30, 20, "Optimus");
    a.SetLeaderName("NewLeader");
    a.SetMedicMode(true);
    EXPECT_EQ(a.GetLeaderName(), "NewLeader");
    EXPECT_TRUE(a.GetMedicMode());
}

TEST(AutobotTest, Methods) {
    Autobot a("Test", 1, 50, 10, 5, "None");
    EXPECT_TRUE(a.Transform());
    EXPECT_TRUE(a.Heal());
}

