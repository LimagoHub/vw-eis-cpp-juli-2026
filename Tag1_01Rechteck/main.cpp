#include <iostream>

using namespace std;

int main() {





    // Declaration + Initialisierung
    int x =10;
    double a = 3.0;
    double b = 4.0;

    while (true) {
        cout << "Bitte geben Sie einen Wert fuer a ein:" << endl;
        cin >> a;
        if (a >= 0) break;
        cout << "a darf nicht negativ sein";
    }
    while (true) {
        cout << "Bitte geben Sie einen Wert fuer b ein:" << endl;
        cin >> b;
        if (b >= 0) break;
        cout << "b darf nicht negativ sein";
    }

    double Flaeche = a * b;
    double Umfang = 2.0 * (a + b);

    cout << "Umfang = " << Umfang << ", Flaeche = " << Flaeche << endl;

    return 0;
}
