#include "Neutral.h"
#include <gtest/gtest.h>

TEST(NeutralTest, Construction) {
    Neutral n("Wheeljack", 6, 95, 30, 18, "Guild", true);
    EXPECT_EQ(n.GetName(), "Wheeljack");
    EXPECT_EQ(n.GetAffiliation(), "Guild");
    EXPECT_TRUE(n.GetMercenary());
}

TEST(NeutralTest, Mutators) {
    Neutral n("Wheeljack", 6, 95, 30, 18, "Guild");
    n.SetAffiliation("None");
    n.SetMercenary(false);
    EXPECT_EQ(n.GetAffiliation(), "None");
    EXPECT_FALSE(n.GetMercenary());
}

TEST(NeutralTest, Methods) {
    Neutral n("Test", 1, 50, 10, 5, "None");
    EXPECT_TRUE(n.Transform());
    EXPECT_TRUE(n.Negotiate());
}

