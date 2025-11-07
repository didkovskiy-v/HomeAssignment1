/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "gtest/gtest.h"
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Neutral.h"

TEST(TransformerTest, ConstructorAndAccessors) {
    Transformer t("Optimus Prime", 5);
    EXPECT_EQ(t.getName(), "Optimus Prime");
    EXPECT_EQ(t.getLevel(), 5);
    EXPECT_EQ(t.getStrength(), 100);
    EXPECT_EQ(t.getFuel(), 100);

    t.setStrength(150);
    EXPECT_EQ(t.getStrength(), 150);

    t.setFuel(50);
    EXPECT_EQ(t.getFuel(), 50);
}

TEST(TransformerTest, MoveMethod) {
    Transformer t("Bumblebee", 3);
    t.setFuel(10);
    ASSERT_TRUE(t.move());
    EXPECT_EQ(t.getFuel(), 9);

    t.setFuel(0);
    ASSERT_FALSE(t.move()); 
}

TEST(TransformerTest, FireMethod) {
    Transformer t("Ironhide", 4);
    t.setFuel(20);
    t.setStrength(50);
    ASSERT_TRUE(t.fire());
    EXPECT_EQ(t.getFuel(), 15); 
    EXPECT_EQ(t.getStrength(), 40);

    t.setFuel(0);
    ASSERT_FALSE(t.fire());
}

TEST(TransformerTest, Association) {
    Autobot a("Optimus");
    Decepticon d("Megatron");

    a.setAlly(&d);
    ASSERT_NE(a.getAlly(), nullptr);
    EXPECT_EQ(a.getAlly()->getName(), "Megatron");

    if (a.getAlly()) {
        a.getAlly()->setLevel(10);
        EXPECT_EQ(a.getAlly()->getLevel(), 10);
    }
}

TEST(AutobotTest, AutobotMethods) {
    Autobot a("Bumblebee", 3);
    EXPECT_EQ(a.getFaction(), "Autobot");
    EXPECT_EQ(a.getMorale(), 100);

    a.setMorale(80);
    EXPECT_EQ(a.getMorale(), 80);

    ASSERT_TRUE(a.defend());
    ASSERT_TRUE(a.callForHelp());
}

TEST(DecepticonTest, DecepticonMethods) {
    Decepticon d("Starscream", 4);
    EXPECT_EQ(d.getFaction(), "Decepticon");
    EXPECT_EQ(d.getAggression(), 80);

    d.setAggression(95);
    EXPECT_EQ(d.getAggression(), 95);

    ASSERT_TRUE(d.attack());
    ASSERT_TRUE(d.sabotage());
}

TEST(NeutralTest, NeutralMethods) {
    Neutral n("Ratchet", 2);
    EXPECT_EQ(n.getRole(), "Observer");
    EXPECT_EQ(n.getNeutrality(), 90);

    n.setNeutrality(75);
    EXPECT_EQ(n.getNeutrality(), 75);

    ASSERT_TRUE(n.mediate());
    ASSERT_TRUE(n.observe());
}

TEST(TransformerTest, DestructorCalled) {
    {
        Transformer t("TestBot", 1);
    }
}
