/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment5
  */
#ifndef MATR_H
#define MATR_H

#include <vector>
#include <cstddef>

template<typename T>
class Matr {
private:
    size_t rows_;
    size_t cols_;
    std::vector<T> data_;

public:
    Matr(size_t rows, size_t cols, const T& value = T())
        : rows_(rows), cols_(cols), data_(rows * cols, value) {}

    ~Matr() = default;

    T& at(size_t r, size_t c) {
        return data_[r * cols_ + c];
    }

    const T& at(size_t r, size_t c) const {
        return data_[r * cols_ + c];
    }

    size_t rows() const {
        return rows_;
    }

    size_t cols() const {
        return cols_;
    }

    Matr operator*(const T& scalar) const {
        Matr result(rows_, cols_);
        for (size_t i = 0; i < data_.size(); ++i) {
            result.data_[i] = data_[i] * scalar;
        }
        return result;
    }

    Matr operator+(const Matr& other) const {
        Matr result(rows_, cols_);
        for (size_t i = 0; i < data_.size(); ++i) {
            result.data_[i] = data_[i] + other.data_[i];
        }
        return result;
    }

    Matr operator*(const Matr& other) const {
        Matr result(rows_, other.cols_, T());
        for (size_t i = 0; i < rows_; ++i) {
            for (size_t j = 0; j < other.cols_; ++j) {
                T sum = T(0);
                for (size_t k = 0; k < cols_; ++k) {
                    sum = sum + at(i, k) * other.at(k, j);
                }
                result.at(i, j) = sum;
            }
        }
        return result;
    }

    Matr transpose() const {
        Matr result(cols_, rows_);
        for (size_t i = 0; i < rows_; ++i) {
            for (size_t j = 0; j < cols_; ++j) {
                result.at(j, i) = at(i, j);
            }
        }
        return result;
    }
};

#endif
