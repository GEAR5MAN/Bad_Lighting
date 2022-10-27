#include <iostream>
#include "include/LinkedNode2D.hpp"

int main() {
    Base::LinkedNode2D<int> a(new int(5), 0, 0);
    std::cout << a.getIndex(Base::x);
    return 0;
}
