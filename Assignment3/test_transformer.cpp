#include "Transformer.h"
#include <gtest/gtest.h>

TEST(TransformerTest, ConstructorAndGetters) {
    Transformer t("TestBot", 5, 100, 40, 25, 120);
    EXPECT_EQ(t.GetName(), "TestBot");
    EXPECT_EQ(t.GetLevel(), 5u);
    EXPECT_EQ(t.GetStrength(), 100u);
    EXPECT_EQ(t.GetRange(), 40u);
    EXPECT_EQ(t.GetAmmo(), 25u);
    EXPECT_EQ(t.GetEngine().GetPower(), 120);
    EXPECT_EQ(t.GetAlly(), nullptr);
}

TEST(TransformerTest, Setters) {
    Transformer t("Bot", 1, 50, 10, 5);
    t.SetName("NewBot");
    t.SetLevel(2);
    t.SetStrength(60);
    t.SetRange(15);
    t.SetAmmo(10);
    t.SetEnginePower(110);
    Transformer other("Other", 1, 10, 10, 10);
    t.SetAlly(&other);

    EXPECT_EQ(t.GetName(), "NewBot");
    EXPECT_EQ(t.GetLevel(), 2u);
    EXPECT_EQ(t.GetStrength(), 60u);
    EXPECT_EQ(t.GetRange(), 15u);
    EXPECT_EQ(t.GetAmmo(), 10u);
    EXPECT_EQ(t.GetEngine().GetPower(), 110);
    EXPECT_EQ(t.GetAlly(), &other);
}

TEST(TransformerTest, Methods) {
    Transformer t("Bot", 1, 50, 10, 5);
    EXPECT_TRUE(t.Move());
    EXPECT_TRUE(t.Transform());
    EXPECT_TRUE(t.Fire());
    EXPECT_EQ(t.GetAmmo(), 4u);
}

TEST(TransformerTest, DamageAndAlive) {
    Transformer t("Bot", 1, 50, 10, 5);
    t.TakeDamage(30);
    EXPECT_EQ(t.GetStrength(), 20u);
    EXPECT_TRUE(t.IsAlive());
    t.TakeDamage(30);
    EXPECT_EQ(t.GetStrength(), 0u);
    EXPECT_FALSE(t.IsAlive());
}
