//
// Created by JoachimWagner on 16.07.2026.
//

#ifndef MESSWERTSPEICHERUNG_CMESSWERTSPEICHERUNG_H
#define MESSWERTSPEICHERUNG_CMESSWERTSPEICHERUNG_H



class CMesswertspeicherung {
private:
    struct TMesswert {
        unsigned short Windrichtung;
        unsigned short  Windgeschwindigkeit;
        short  Wassertemperatur;
        TMesswert() {
            Windgeschwindigkeit = 0;
            Windrichtung = 0;
            Wassertemperatur = 0;
        }
    };

    // Eigenschaft
    TMesswert Messwerte[1440];

    public:
    CMesswertspeicherung() {
        /*for (int i = 0; i < 1440; i++) {
            Messwerte[i].Windgeschwindigkeit = 0;
            Messwerte[i].Windrichtung = 0;
            Messwerte[i].Wassertemperatur = 0;
        }
        */
    }

    void setWassertemeratur(int index, short temperatur) {
        Messwerte[index].Wassertemperatur = temperatur;

    }
    // Rueckgabe Typ - MethodenName - Parameter
    short getWasserTemperatur(int index) {
        return Messwerte[index].Wassertemperatur;
    }
    short getMaxWasserTemperator() {
        short max = Messwerte[0].Wassertemperatur;
        for (int i = 1; i < 1440; i++) {
            if (Messwerte[i].Wassertemperatur > max) {
                max = Messwerte[i].Wassertemperatur;
            }
        }
        return max;
    }
};
#endif //MESSWERTSPEICHERUNG_CMESSWERTSPEICHERUNG_H
