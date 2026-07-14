#include <iostream>

int main() {

    unsigned char wochentag = 25;

    if (0 == wochentag) {
        std::cout << "Montag" << std::endl;
    }

    else if (1 == wochentag) {
        std::cout << "Dienstag" << std::endl;
    }


    switch (wochentag) {
        case 0:
            std::cout << "Montag" << std::endl;
            break;
        case 1:
            std::cout << "Dienstag" << std::endl;
            break;
        case 2:
            std::cout << "Mittwoch" << std::endl;
            break;
        case 3:
            std::cout << "Donnerstag" << std::endl;
            break;

        case 4:
        case 5:
        case 6:

            std::cout << "Wochenende" << std::endl;
            break;
        default:
            std::cout << "Unbekannt" << std::endl;
            break;
    }



    return 0;
}
