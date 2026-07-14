#include <iostream>

/*
void unter(int &a) {// Uebergabe by ref (keine Kopie)
    a = 100; // Alias von x
    std::cout << a << std::endl;
}

void ober() {
    int x = 10;
    unter(x);
    std::cout << x << std::endl;
}
*/

void tausche(int x, int y);

// Einsprung in die verarbeitung
int main(void) {

    //ober();

    // Tauschen
    int a =10;
    int b = 20;

    tausche(a,b);

    std::cout << a << " " << b << std::endl;


    return 0;
}


