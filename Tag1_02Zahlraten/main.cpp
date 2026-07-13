#include <iostream>

using namespace std;

int main() {
    unsigned short zufallszahl = 623;
    unsigned short versuch;

    do {
        cout << "Bitte geben Sie eine Zahl zwischen 1 und 1000 ein: ";
        cin >> versuch;

        if (versuch > zufallszahl)
            cout << "Ihr Versuch ist zu gross" << endl;

        if (versuch < zufallszahl)
            cout << "Ihr Versuch ist zu klein" << endl;

    } while (versuch != zufallszahl);

    cout << "Du hast die Zahl geraten!" << endl;
}
