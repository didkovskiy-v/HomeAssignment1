/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment5
  */
#ifndef FRACT_H
#define FRACT_H

#include <cstdint>

class Fract {
private:
    int64_t num_;
    int64_t den_;

    int64_t gcd(int64_t a, int64_t b) {
        while (b != 0) {
            int64_t t = a % b;
            a = b;
            b = t;
        }
        return a >= 0 ? a : -a;
    }

    void normalize() {
        if (den_ == 0) {
            num_ = 0;
            den_ = 1;
            return;
        }
        int64_t g = gcd(num_, den_);
        num_ /= g;
        den_ /= g;
        if (den_ < 0) {
            num_ = -num_;
            den_ = -den_;
        }
    }

public:
    Fract(int64_t num = 0, int64_t den = 1) : num_(num), den_(den) {
        normalize();
    }

    Fract operator+(const Fract& other) const {
        return Fract(num_ * other.den_ + other.num_ * den_, den_ * other.den_);
    }

    Fract operator*(const Fract& other) const {
        return Fract(num_ * other.num_, den_ * other.den_);
    }

    int64_t num() const {
        return num_;
    }

    int64_t den() const {
        return den_;
    }

    bool operator==(const Fract& other) const {
        return num_ == other.num_ && den_ == other.den_;
    }
};

#endif
