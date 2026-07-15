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

void tausche(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Kein & vor der Variable (wert wird kopiert) ByValue)
// & vor der Variablen (keine Kopie, sondern das UP verwendet den Originalwert) ByRef

// Einsprung in die verarbeitung
int main(void) {

    //ober();

    // Tauschen
    int a =10;
    int b = 20;

    int foo = 5;
    int bar = 6;

    tausche(a,b);
    tausche(foo,bar);
    tausche(a,bar);


    std::cout << a << " " << b << std::endl;


    return 0;
}


