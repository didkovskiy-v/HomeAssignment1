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
    int64_t gcd(int64_t a, int64_t b);
    void normalize();

public:
    Fract(int64_t num = 0, int64_t den = 1);
    Fract operator+(const Fract& other) const;
    Fract operator*(const Fract& other) const;
    int64_t num() const;
    int64_t den() const;
    bool operator==(const Fract& other) const;
};

#endif
