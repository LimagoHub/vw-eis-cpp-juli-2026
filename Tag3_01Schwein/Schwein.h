//
// Created by JoachimWagner on 15.07.2026.
//

#ifndef TAG3_01SCHWEIN_SCHWEIN_H
#define TAG3_01SCHWEIN_SCHWEIN_H
#include <ostream>

class Schwein { // KLasse (alles geschuetzt) oder struct ( alles Oeffentlich)

private:
    std::string name;
    int gewicht;


    void set_gewicht(int gewicht) {
        if (gewicht < 10) {
            return;
        }
        this->gewicht = gewicht;
    }

public:

    // Automatischer Aufruf
    Schwein() { // Konstruktor: Aufgabe alle Eigenschaften mit sinnvollen startwerten zu belegen
        name = "Nobody";
        gewicht = 10;
        std::cout << "Ein Schwein wurde erzeugt" << std::endl;
    }

    std::string get_name() const {
        return name;
    }

    void set_name(const std::string &neuerName) {
        if (neuerName == "Elsa") {
            std::cout << "Elsa ist ein schlechter Name" << std::endl;
            return;
        }
        name = neuerName;
    }

    int get_gewicht() const {
        return gewicht;
    }


    // Methode
    void fuettern() {
        gewicht ++;
    }

    friend std::ostream & operator<<(std::ostream &os, const Schwein &obj) {
        return os
               << "name: " << obj.name
               << " gewicht: " << obj.gewicht;
    }
};



#endif //TAG3_01SCHWEIN_SCHWEIN_H
