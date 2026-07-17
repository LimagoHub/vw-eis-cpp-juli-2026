#include <iostream>
#include <string>

using namespace std;

struct Adresse {
    string strasse;
    string ort;
    string plz;
};

struct Person {
    string vorname;
    string nachname;
    Adresse adresse;
};



class Schwein { // Bauplan, Definition, (Daten-)Typ
    // Eigenschaften
    string name;
    int gewicht{10};
    int andere_variable{gewicht + 1};
public:

    Schwein() { // Konstruktor (hat keinen Rueckgabewert und wird automatisch aufgerufen
        name = "noch kein Name";
        gewicht = 10;
    }
    Schwein(string name) {
        this->name = name;
        this->gewicht = 10;
    }
    Schwein(string name, int gewicht) {
        this->name = name;
        this->gewicht = gewicht;
    }
    ~Schwein() { // Destruktor (wird aufgerufen wenn das Schwein stirbt
        cout << "Schwein " << name << " wurde geloescht" << endl;
    }

    string get_name() const {
        return name;
    }

    void set_name(const string &name) {
        this->name = name;
    }

    int get_gewicht() const {
        return gewicht;
    }

    void set_gewicht(int gewicht) {
        this->gewicht = gewicht;
    }

    // Methode
    void fuettern() {
        gewicht += 1;
    }
};

int main() {
    Schwein piggy("Miss Piggy", 20);
    Schwein babe("Babe");
    Schwein rudi;

    Person peter;
    peter.vorname = "Peter";
    peter.adresse.strasse = "Hauptstrasse";
    return 0;
}
