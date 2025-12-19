/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment5
  */
#include "Fract.h"

int64_t Fract::gcd(int64_t a, int64_t b) {
    while (b != 0) {
        int64_t t = a % b;
        a = b;
        b = t;
    }
    return a >= 0 ? a : -a;
}

void Fract::normalize() {
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

Fract::Fract(int64_t num, int64_t den) : num_(num), den_(den) {
    normalize();
}

Fract Fract::operator+(const Fract& other) const {
    return Fract(num_ * other.den_ + other.num_ * den_, den_ * other.den_);
}

Fract Fract::operator*(const Fract& other) const {
    return Fract(num_ * other.num_, den_ * other.den_);
}

int64_t Fract::num() const {
    return num_;
}

int64_t Fract::den() const {
    return den_;
}

bool Fract::operator==(const Fract& other) const {
    return num_ == other.num_ && den_ == other.den_;
}
