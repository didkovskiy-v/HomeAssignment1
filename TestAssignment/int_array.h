#pragma once
#include <cstddef>
#include <algorithm>

class IntArray {
public:
    IntArray() noexcept;
    explicit IntArray(std::size_t n, int value = 0);

    IntArray(const IntArray& other);
    IntArray& operator=(const IntArray& other);

    IntArray(IntArray&& other) noexcept;
    IntArray& operator=(IntArray&& other) noexcept;

    ~IntArray();

    std::size_t size() const noexcept;

    int* data() noexcept;
    const int* data() const noexcept;

    int& operator[](std::size_t i) noexcept;
    const int& operator[](std::size_t i) const noexcept;

    void swap(IntArray& other) noexcept;
    void resize(std::size_t new_size, int value = 0);

private:
    std::size_t n_ = 0;
    int* p_ = nullptr;
};
