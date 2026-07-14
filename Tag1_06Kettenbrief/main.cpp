#include <iostream>

int main() {
    unsigned long long weltbevoelkerung = 10'000'000'000;
    unsigned int anzahl_der_nachfolger = 2;
    unsigned long long aktuelle_zahl_der_spieler = 1;
    unsigned int anzahl_der_generation = 1;

    while (aktuelle_zahl_der_spieler < weltbevoelkerung) {
        anzahl_der_generation ++;
        aktuelle_zahl_der_spieler *= anzahl_der_nachfolger;
    }

    std::cout << "Nach " << anzahl_der_generation << "ist Schluss" << std::endl;


    // bool
    // char (unsigned char)
    // short (unsigned short)
    // int (unsigned int)
    // long (unsigned long)
    // long long (unsigned long long)

    // float
    // double
    // long double

    

    return 0;
}
