#include "Decepticon.h"
#include <gtest/gtest.h>

TEST(DecepticonTest, ConstructionAndAccessors) {
    Decepticon d("Starscream", 7, 110, 40, 25, true, "Jet");
    EXPECT_EQ(d.GetName(), "Starscream");
    EXPECT_TRUE(d.GetTreacheryLevel());
    EXPECT_EQ(d.GetDisguiseForm(), "Jet");
}

TEST(DecepticonTest, Mutators) {
    Decepticon d("SS", 6, 100, 35, 20, false, "Car");
    d.SetTreacheryLevel(true);
    d.SetDisguiseForm("Helicopter");
    EXPECT_TRUE(d.GetTreacheryLevel());
    EXPECT_EQ(d.GetDisguiseForm(), "Helicopter");
}

TEST(DecepticonTest, Methods) {
    Decepticon d("Test", 1, 50, 10, 5, false, "Form");
    EXPECT_TRUE(d.Transform());
    EXPECT_TRUE(d.Sabotage());
}
