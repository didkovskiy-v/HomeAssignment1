/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment3
  */
#include "Decepticon.h"
#include <gtest/gtest.h>

TEST(DecepticonTest, Construction) {
    Decepticon d("Megatron", 10, 180, 45, 35, true, "Tank");
    EXPECT_EQ(d.GetName(), "Megatron");
    EXPECT_TRUE(d.GetTreacheryLevel());
    EXPECT_EQ(d.GetDisguiseForm(), "Tank");
}

TEST(DecepticonTest, Mutators) {
    Decepticon d("Megatron", 10, 180, 45, 35, false, "Gun");
    d.SetTreacheryLevel(true);
    d.SetDisguiseForm("Jet");
    EXPECT_TRUE(d.GetTreacheryLevel());
    EXPECT_EQ(d.GetDisguiseForm(), "Jet");
}

TEST(DecepticonTest, Methods) {
    Decepticon d("Test", 1, 50, 10, 5, false, "Form");
    EXPECT_TRUE(d.Transform());
    EXPECT_TRUE(d.Sabotage());
}

