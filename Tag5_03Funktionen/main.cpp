#include <iostream>


int summe(/* Parameter  */int a, int b); // Funktionsprototyp

void tauschen(int &a, int &b);

int main() {

    int a = 10;
    int b = 20;

    std::cout << "A = " << a << " und B = " << b << std::endl;

    tauschen(a, b);
    std::cout << "A = " << a << " und B = " << b << std::endl;

    /*
    int ergebnis = summe(2, 3); // Funktionsaufruf
    */
    return 0; // Gibt einen Wert zurueck und beendet Unterprogramm sofort
}

int summe(int a, int b) { // Funktionsdefinition Call bei Value (Kopie)
    return a + b; // Gibt einen Wert zurueck und beendet Unterprogramm sofort
}
void tauschen(int &a, int &b) { // Call By Reference (echte Werte)
    int c = a;
    a = b;
    b = c;
}

