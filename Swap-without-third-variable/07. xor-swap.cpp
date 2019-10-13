#include <iostream>

int main() {
    int a = 2;
    int b = 3;

    std::cout << "Before swapping: a = " << a <<", b = "
             << b << std::endl;

    //Swap a and b using XOR's associative property
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    std::cout << "After swapping: a = " << a <<", b = "
            << b << std::endl;

    return 0;
}
