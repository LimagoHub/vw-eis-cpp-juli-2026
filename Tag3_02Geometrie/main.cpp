#include <iostream>

#include "Punkt.h"




int main() {



    Punkt p1;
    p1.set_x(5);

   // std::cout << "x = " << p1.get_x() << " ,Y = " << p1.get_y() << std::endl;

    std::cout << p1 << std::endl;

    for (int i = 0; i < 15; i++) {
        p1.rechts();
        std::cout << p1 << std::endl;
    }

    return 0;
}
