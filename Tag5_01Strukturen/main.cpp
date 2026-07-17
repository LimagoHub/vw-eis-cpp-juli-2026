#include <iostream>

int main() {

        int a =10;
        // Verzweigung
        if(a>10) {
                std::cout << "a is greater than 10" << std::endl;
        }

        // Mehrfachverzweigung
        switch(a) {
                case 10:
                        std::cout << "a is 10" << std::endl;
                        break;
                case 20:
                        std::cout << "a is 20" << std::endl;
                        break;
                default:
                        std::cout << "a is not 10 or 20" << std::endl;
                        break;
        }

        // Kopfgesteuert
        while(a>0) {
                a--;
        }

        // Fussgesteuerte Schleife
        do {
              a--;
        } while(a>0);

        // Kopfgesteuert (Zaehlschleife)
        for(int i=0; i<10; i++) {
                std::cout << i << std::endl;
        }

        return 0;
}
