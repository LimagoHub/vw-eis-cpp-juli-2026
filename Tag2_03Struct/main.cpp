#include <iostream>
#include <string>

struct Person { // eigener datentyp
    std::string anrede;
    std::string vorname;
    std::string nachname;
};



void ausgabe(Person &p) {
    std::cout << p.anrede << " " << p.vorname << " " << p.nachname << std::endl;
    p.anrede = "Frau";
    p.vorname = "Erika";
}

int main() {

    Person p;
    p.anrede = "Herr";
    p.vorname = "Max";
    p.nachname = "Mustermann";


    ausgabe(p);

    std::cout << p.anrede << " " << p.vorname << " " << p.nachname << std::endl;

    std::cout << sizeof(Person) << std::endl;
    return 0;
}
