#include <cmath>
#include <iostream>

using namespace std;

int main() {

    double p;
    double q;

    cout << "Bitte wert fuer p eingeben: "   << endl;
    cin >> p;

    cout << "Bitte wert fuer q eingeben: "   << endl;
    cin >> q;

    double minusPHalbe = -p/2.;
    double diskriminante = minusPHalbe * minusPHalbe - q;

    if (diskriminante < 0) {
        cout << "Keine realen Loesungen" << endl;
    } else if (diskriminante == 0) {
        cout << "Eine reale Loesung. X = " << minusPHalbe << endl;
    } else {
        double sqrtDiskriminante = sqrt(diskriminante);
        cout << "Zwei reale Loesungen. X1 = " << minusPHalbe - sqrtDiskriminante << " und X2 = " << minusPHalbe + sqrtDiskriminante << endl;
    }

    return 0;
}
