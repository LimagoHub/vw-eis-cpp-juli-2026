#include <iostream>

int main() {
    int a =10;
    int b = 20;

    std::cout << "A = " << a << ", B = " << b << std::endl;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "A = " << a << ", B = " << b << std::endl;

    return 0;
}
