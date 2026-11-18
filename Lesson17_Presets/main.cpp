#include <iostream>

int main() {
    std::cout << "Learning CMake Presets!\n";

#ifdef NDEBUG
    std::cout << "Build Type: Release\n";
#else
    std::cout << "Build Type: Debug\n";
#endif

    return 0;
}