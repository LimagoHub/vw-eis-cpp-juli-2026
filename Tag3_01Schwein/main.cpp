#include <complex>
#include <iostream>
#include <string>

#include "Schwein.h"

int main() {



    Schwein piggy; // Piggy ist das Object wird hier erzeugt und der Konstruktor wird automatisch aufgerufen

    Schwein rudi;

   std::cout << piggy << std::endl;

    piggy.set_name("Miss Piggy");
    piggy.fuettern();
    piggy.fuettern();

    //rudi.fuettern();

    std::cout << piggy << std::endl;

    return 0;
}
