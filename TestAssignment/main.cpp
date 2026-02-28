#include "int_array.h"
#include <cassert>
#include <iostream>
#include <utility>

int main() {
    IntArray a(5, 7);
    assert(a.size() == 5);
    assert(a.data() != nullptr);
    for (std::size_t i = 0; i < a.size(); ++i) {
        assert(a[i] == 7);
    }
    a[2] = 42;
    assert(a[2] == 42);
    std::cout << "[OK] Создание и заполнение\n";

    {
        IntArray b = a;
        assert(b.size() == a.size());
        assert(b.data() != a.data());
        
        b[2] = 1;
        assert(a[2] == 42);
        assert(b[2] == 1);
        std::cout << "[OK] Глубокое копирование\n";
    }

    {
        IntArray a_copy(a);
        IntArray c = std::move(a_copy);
        
        assert(c.size() == 5);
        assert(c[2] == 42);
        
        assert(a_copy.size() == 0);
        assert(a_copy.data() == nullptr);
        std::cout << "[OK] Перемещение\n";
    }

    {
        IntArray d(3, 0);
        d = a;
        assert(d.size() == a.size());
        assert(d.data() != a.data());
        assert(d[2] == 42);
        std::cout << "[OK] Copy assignment\n";
    }

    {
        IntArray e(1, 99);
        IntArray f(4, 11);
        e = std::move(f);
        
        assert(e.size() == 4);
        assert(e[0] == 11);
        assert(f.size() == 0);
        assert(f.data() == nullptr);
        std::cout << "[OK] Move assignment\n";
    }

    {
        IntArray g(3, 5);
        g.resize(5, 10);
        assert(g.size() == 5);
        assert(g[0] == 5 && g[1] == 5 && g[2] == 5);
        assert(g[3] == 10 && g[4] == 10);
        std::cout << "[OK] Resize (увеличение)\n";
    }

    {
        IntArray h(5, 3);
        h[0] = 1; h[1] = 2;
        h.resize(2, 99);
        assert(h.size() == 2);
        assert(h[0] == 1 && h[1] == 2);
        std::cout << "[OK] Resize (уменьшение)\n";
    }

    {
        IntArray x(2, 100);
        IntArray y(4, 200);
        x.swap(y);
        assert(x.size() == 4 && x[0] == 200);
        assert(y.size() == 2 && y[0] == 100);
        std::cout << "[OK] Swap\n";
    }

    {
        IntArray empty;
        assert(empty.size() == 0);
        assert(empty.data() == nullptr);
        
        empty.resize(0, 42);
        assert(empty.size() == 0);
        std::cout << "[OK] Пустой массив и edge-cases\n";
    }

    std::cout << "\n Все тесты пройдены успешно!\n";
    return 0;
}
