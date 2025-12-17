/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment5
  */
#include <gtest/gtest.h>
#include "Matr.h"
#include "Fract.h"

TEST(MatrixInt, Summation) {
    Matr<int> a(2, 2, 1);
    Matr<int> b(2, 2, 2);
    Matr<int> c = a + b;
    EXPECT_EQ(c.at(0, 0), 3);
}

TEST(MatrixInt, MultiplicationByScalar) {
    Matr<int> a(2, 2, 3);
    Matr<int> b = a * 2;
    EXPECT_EQ(b.at(1, 1), 6);
}

TEST(MatrixInt, Multiplication) {
    Matr<int> a(2, 2);
    a.at(0, 0) = 1;
    a.at(0, 1) = 2;
    a.at(1, 0) = 3;
    a.at(1, 1) = 4;
    Matr<int> b = a;
    Matr<int> c = a * b;
    EXPECT_EQ(c.at(0, 0), 7);
    EXPECT_EQ(c.at(1, 1), 22);
}

TEST(MatrixInt, Transposition) {
    Matr<int> a(2, 3);
    a.at(0, 1) = 5;
    Matr<int> t = a.transpose();
    EXPECT_EQ(t.at(1, 0), 5);
}

TEST(MatrixDouble, Summation) {
    Matr<double> a(2, 2, 1.5);
    Matr<double> b(2, 2, 2.5);
    Matr<double> c = a + b;
    EXPECT_DOUBLE_EQ(c.at(0, 0), 4.0);
    EXPECT_DOUBLE_EQ(c.at(1, 1), 4.0);
}

TEST(MatrixDouble, MultiplicationByScalar) {
    Matr<double> a(2, 2, 1.5);
    Matr<double> b = a * 2.0;
    EXPECT_DOUBLE_EQ(b.at(0, 0), 3.0);
    EXPECT_DOUBLE_EQ(b.at(1, 1), 3.0);
}

TEST(MatrixDouble, Multiplication) {
    Matr<double> a(1, 2);
    a.at(0, 0) = 1.5;
    a.at(0, 1) = 2.0;
    Matr<double> b(2, 1);
    b.at(0, 0) = 2.0;
    b.at(1, 0) = 3.0;
    Matr<double> c = a * b;
    EXPECT_DOUBLE_EQ(c.at(0, 0), 1.5 * 2 + 2.0 * 3);
}

TEST(MatrixDouble, Transposition) {
    Matr<double> a(2, 3, 1.0);
    a.at(1, 2) = 4.5;
    Matr<double> t = a.transpose();
    EXPECT_DOUBLE_EQ(t.at(2, 1), 4.5);
}

TEST(MatrixFract, Summation) {
    Matr<Fract> a(2, 2, Fract(1, 2));
    Matr<Fract> b(2, 2, Fract(1, 3));
    Matr<Fract> c = a + b;
    EXPECT_EQ(c.at(0, 0), Fract(5, 6));
}

TEST(MatrixFract, MultiplicationByScalar) {
    Matr<Fract> a(2, 2, Fract(1, 2));
    Matr<Fract> b = a * Fract(2, 3);
    EXPECT_EQ(b.at(0, 0), Fract(1, 3));
}

TEST(MatrixFract, Multiplication) {
    Fract r1(1, 2);
    Fract r2(2, 3);
    Matr<Fract> m(1, 1, r1);
    Matr<Fract> n(1, 1, r2);
    Matr<Fract> c = m * n;
    EXPECT_EQ(c.at(0, 0), Fract(1, 3));
}

TEST(MatrixFract, Transposition) {
    Matr<Fract> a(2, 3, Fract(1, 2));
    a.at(1, 2) = Fract(3, 4);
    Matr<Fract> t = a.transpose();
    EXPECT_EQ(t.at(2, 1), Fract(3, 4));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
