#include <iostream>
#include "Azubi.h"

using namespace std;
int main() {
    Azubi max{"Max Mustermann", 17};
    Azubi erika{"Erika Mustermann", 20};
    Azubi john{"John Doe", 19};

    Azubi lehrgang[] = {max, erika, john};

    for (int i = 0; i < 3; i++) {
        cout << lehrgang[i] << endl;
        cout << (lehrgang[i].istVolljaehrig()?"Volljaehrig":"Nicht Volljaehrig") << endl<< endl;
    }


    return 0;
}
