#include <iostream>


double wurzel(double x) {

    // Heronverfahren
    return x*x;
}


int main() {
    double sqrt = wurzel(9.0);
    std::cout << sqrt << std::endl;
    return 0;
}
