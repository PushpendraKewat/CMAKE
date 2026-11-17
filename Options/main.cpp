#include <iostream>

int main() {

#ifdef ENABLE_LOGGING
    std::cout << "Logging is enabled!\n";
#endif

#ifdef ENABLE_DEBUG_INFO
    std::cout << "Debug information is enabled!\n";
#endif

    std::cout << "Hello from CMake!\n";

    return 0;
}