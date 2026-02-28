#include "int_array.h"
#include <algorithm>

IntArray::IntArray() noexcept = default;

IntArray::IntArray(std::size_t n, int value)
    : n_(n), p_(n > 0 ? new int[n] : nullptr)
{
    for (std::size_t i = 0; i < n_; ++i) {
        p_[i] = value;
    }
}

IntArray::IntArray(const IntArray& other)
    : n_(other.n_), p_(other.n_ > 0 ? new int[other.n_] : nullptr)
{
    for (std::size_t i = 0; i < n_; ++i) {
        p_[i] = other.p_[i];
    }
}

IntArray& IntArray::operator=(const IntArray& other) {
    if (this != &other) {
        IntArray temp(other);
        swap(temp);
    }
    return *this;
}

IntArray::IntArray(IntArray&& other) noexcept
    : n_(other.n_), p_(other.p_)
{
    other.n_ = 0;
    other.p_ = nullptr;
}

IntArray& IntArray::operator=(IntArray&& other) noexcept {
    if (this != &other) {
        delete[] p_;
        p_ = other.p_;
        n_ = other.n_;
        other.p_ = nullptr;
        other.n_ = 0;
    }
    return *this;
}

IntArray::~IntArray() {
    delete[] p_;
}

std::size_t IntArray::size() const noexcept {
    return n_;
}

int* IntArray::data() noexcept {
    return p_;
}

const int* IntArray::data() const noexcept {
    return p_;
}

int& IntArray::operator[](std::size_t i) noexcept {
    return p_[i];
}

const int& IntArray::operator[](std::size_t i) const noexcept {
    return p_[i];
}

void IntArray::swap(IntArray& other) noexcept {
    using std::swap;
    swap(n_, other.n_);
    swap(p_, other.p_);
}

void IntArray::resize(std::size_t new_size, int value) {
    if (new_size == n_) {
        return;
    }

    int* new_p = new_size > 0 ? new int[new_size] : nullptr;
    std::size_t copy_count = std::min(n_, new_size);

    for (std::size_t i = 0; i < copy_count; ++i) {
        new_p[i] = p_[i];
    }

    for (std::size_t i = copy_count; i < new_size; ++i) {
        new_p[i] = value;
    }

    delete[] p_;
    p_ = new_p;
    n_ = new_size;
}
