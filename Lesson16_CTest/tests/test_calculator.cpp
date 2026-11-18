#include <cassert>
#include <iostream>

int add(int a, int b);
int subtract(int a, int b);

int main() {
    assert(add(10, 5) == 15);
    assert(add(-5, 5) == 0);

    assert(subtract(10, 5) == 5);
    assert(subtract(5, 10) == -5);

    std::cout << "All calculator tests passed!\n";

    return 0;
}