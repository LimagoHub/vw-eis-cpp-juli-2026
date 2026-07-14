
#include <iostream>

// 1. Aufgabe Summe
// 2. MaxValue
// 3. Mittelwert


int summe(int feld[], size_t size) {
    int result = 0;
    for (size_t i = 0; i < size; i++) {
        result += feld[i];
    }
    return result;
}

int maxWert(int feld[], size_t size) {
    int max = feld[0];
    for (size_t i = 1; i < size; i++) {
        if (feld[i] > max) {
            max = feld[i];
        }
    }
    return max;
}

double mittelwert(int feld[]/* Adresse des Arrays ohne Groesse */, size_t size /* Groesse des Arrays */) {
    double result = summe(feld, size);

    return result / size;
}


int main() {

    int feld[] = { 10, 13,94,56,8,1};

    unsigned int anzahl_der_element = sizeof(feld)/sizeof(int);




    int sum = summe(feld, anzahl_der_element);


    std::cout << "Summe: " << sum << std::endl;

/*

    int max = feld[0];
    for (int i = 1; i < anzahl_der_element; i++) {
        if (feld[i] > max) {
            max = feld[i];
        }
    }
    std::cout << "Max: " << max << std::endl;

    double mittelwert = 0;
    for (int i = 0; i < anzahl_der_element; i++) {
        mittelwert += feld[i];
    }
    mittelwert /= anzahl_der_element;
    std::cout << "Mittelwert: " << mittelwert << std::endl;
    */
    return 0;
}
