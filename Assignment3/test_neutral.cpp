#include "Neutral.h"
#include <gtest/gtest.h>

TEST(NeutralTest, ConstructionAndAccessors) {
    Neutral n("Wheeljack", 6, 95, 30, 18, "Science Guild", true);
    EXPECT_EQ(n.GetName(), "Wheeljack");
    EXPECT_EQ(n.GetAffiliation(), "Science Guild");
    EXPECT_TRUE(n.GetMercenary());
}

TEST(NeutralTest, Mutators) {
    Neutral n("WJ", 5, 90, 25, 15, "None", false);
    n.SetAffiliation("Tech Collective");
    n.SetMercenary(true);
    EXPECT_EQ(n.GetAffiliation(), "Tech Collective");
    EXPECT_TRUE(n.GetMercenary());
}

TEST(NeutralTest, Methods) {
    Neutral n("Test", 1, 50, 10, 5, "None");
    EXPECT_TRUE(n.Transform());
    EXPECT_TRUE(n.Negotiate());
}
