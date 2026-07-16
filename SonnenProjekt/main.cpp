#include <iostream>

class Sonne {
    private:
    bool messwerte[60];
    float dauerInProzent;

    void berechne_sonnendauer() {
        dauerInProzent = 0;
        for (int i = 0; i < 60; i++) {
            if (messwerte[i] == true) {
                dauerInProzent += 1;
            }
        }
        dauerInProzent /= 60.0;
    }

    public:
    Sonne() {
        dauerInProzent = 0;
        for (int i = 0; i < 60; i++) {
            messwerte[i] = false;
        }
    }

    void set_messwerte(bool andere_werte[]) {
        for (int i = 0; i < 60; i++) {
            messwerte[i] = andere_werte[i];
        }
    }

    float getDauer()  {
        berechne_sonnendauer();
        return dauerInProzent;
    }
};

class CAuswertung {
    private:
    unsigned char Messwerte[24];
    public:

    void setMesswerte(unsigned char Niederschlaege[]) {
        for (int i = 0; i < 24; i++) {
            Messwerte[i] = Niederschlaege[i];
        }
    }

    unsigned char getMaxNiederschlag() {
        unsigned char max = 0;
        for (int i = 0; i < 24; i++) {
            if (Messwerte[i] > max) {
                max = Messwerte[i];
            }
        }

        return max;
    }
};

int main() {
    /*Sonne unsereSonne;

    bool wert[60];

    for (int i = 0; i < 30; i++) {
        wert[i] = true;
    }
    for (int i = 30; i < 60; i++) {
        wert[i] = false;
    }

    unsereSonne.set_messwerte(wert);
    float dauer = unsereSonne.getDauer();
    std::cout << dauer << std::endl;
*/

    return 0;
}
