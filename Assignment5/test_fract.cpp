/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment5
  */
#include <gtest/gtest.h>
#include "Fract.h"

TEST(FractTest, DefaultConstructor) {
    Fract r;
    EXPECT_EQ(r.num(), 0);
    EXPECT_EQ(r.den(), 1);
}

TEST(FractTest, Normalization) {
    Fract r(2, 4);
    EXPECT_EQ(r.num(), 1);
    EXPECT_EQ(r.den(), 2);
    Fract r2(-4, -6);
    EXPECT_EQ(r2.num(), 2);
    EXPECT_EQ(r2.den(), 3);
    Fract r3(3, -9);
    EXPECT_EQ(r3.num(), -1);
    EXPECT_EQ(r3.den(), 3);
}

TEST(FractTest, Addition) {
    Fract a(1, 2);
    Fract b(1, 3);
    Fract c = a + b;
    EXPECT_EQ(c, Fract(5, 6));
}

TEST(FractTest, Multiplication) {
    Fract a(2, 3);
    Fract b(3, 4);
    Fract c = a * b;
    EXPECT_EQ(c, Fract(1, 2));
}

TEST(FractTest, ZeroDivision) {
    Fract r(5, 0);
    EXPECT_EQ(r.num(), 0);
    EXPECT_EQ(r.den(), 1);
}

TEST(FractTest, Comparison) {
    Fract a(1, 2);
    Fract b(1, 2);
    Fract c(2, 4);
    Fract d(1, 3);
    EXPECT_TRUE(a == b);
    EXPECT_TRUE(a == c);
    EXPECT_FALSE(a == d);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
