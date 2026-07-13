#include <iostream>

int main() {


    // 860 - 22 = 838
    
    // 22 + 2 %
    unsigned int a = 10;
    unsigned int b = 4;
    unsigned long long ergebnis=0;

    if (b>a) {
        unsigned int c = a;
        a = b;
        b = c;
    }

    for (unsigned int i = 0; i < b; i++) {
        ergebnis += a;
    }

    std::cout << ergebnis << std::endl;
    return 0;
}
