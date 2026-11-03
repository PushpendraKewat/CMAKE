#include <iostream>
#include "mylib/mylib.h"

int main() {
    std::cout << mylib::add(10, 20) << '\n';
    std::cout << mylib::subtract(20, 10) << '\n';
    std::cout << mylib::multiply(10, 20) << '\n';

    return 0;
}