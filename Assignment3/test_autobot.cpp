#include "Autobot.h"
#include <gtest/gtest.h>

TEST(AutobotTest, ConstructionAndAccessors) {
    Autobot a("Bumblebee", 6, 90, 35, 20, "Optimus Prime", true);
    EXPECT_EQ(a.GetName(), "Bumblebee");
    EXPECT_EQ(a.GetLeaderName(), "Optimus Prime");
    EXPECT_TRUE(a.GetMedicMode());
}

TEST(AutobotTest, Mutators) {
    Autobot a("BB", 5, 80, 30, 15, "OP", false);
    a.SetLeaderName("New Leader");
    a.SetMedicMode(true);
    EXPECT_EQ(a.GetLeaderName(), "New Leader");
    EXPECT_TRUE(a.GetMedicMode());
}

TEST(AutobotTest, Methods) {
    Autobot a("Test", 1, 50, 10, 5, "None");
    EXPECT_TRUE(a.Transform());
    EXPECT_TRUE(a.Heal());
}
