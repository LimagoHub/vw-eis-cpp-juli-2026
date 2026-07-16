//
// Created by JoachimWagner on 16.07.2026.
//

#ifndef TAG4_01AZUBI_AZUBI_H
#define TAG4_01AZUBI_AZUBI_H
#include <ostream>
#include <string>

using namespace std;

class Azubi {
private:

    // Eigenschaften bzw. Attribute
    string name;
    unsigned short alter;

    public:


    // Konstruktoren
    Azubi() {
        name = "Azubi";
        alter = 0;
    }

    Azubi(string name, unsigned short alter) {
        this->name = name;
        this->alter = alter;
    }

    string get_name() const {
        return name;
    }

    void set_name(const string &name) {
        this->name = name;
    }

    unsigned short get_alter() const {
        return alter;
    }

    void set_alter(unsigned short alter) {
        this->alter = alter;
    }


    // Methoden
    bool istVolljaehrig() const {
        return alter >= 18;
    }

    friend std::ostream & operator<<(std::ostream &os, const Azubi &obj) {
        return os
               << "name: " << obj.name
               << " alter: " << obj.alter;
    }
};
#endif //TAG4_01AZUBI_AZUBI_H
