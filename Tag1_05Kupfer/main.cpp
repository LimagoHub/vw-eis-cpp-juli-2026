#include <iostream>

int main() {

    double kupferreserve = 860.0;
    double verbrauch = 22.0;
    double wachstum = 1.02;
    int jahre = 0;

    while (kupferreserve > 0) {
        kupferreserve -= verbrauch;
        verbrauch = verbrauch * wachstum;
        jahre++;
    }

    std::cout << "Es dauerte " << jahre << " Jahre, bis der Kupferreservewert negativ wird." << std::endl;
    return 0;
}
