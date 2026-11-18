#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
float multiply(float a, float b);
float divide(float a,float b);

int main() {
    std::cout << "Addition: " << add(10, 5) << '\n';
    std::cout << "Subtraction: " << subtract(10, 5) << '\n';
    std::cout<<" multiplication :"<<multiply(10,5)<<'\n';
    std::cout<<" division :"<<divide(10,5)<<'\n';

    return 0;
}