#include <iostream>

class CTank {
private:
    unsigned short usiDigSensoren;
    unsigned char bTemperatorSensor;
    unsigned char bDruckSensor;
    public:
    CTank() {
        usiDigSensoren = 0x0000;
        bTemperatorSensor = 0x00;
        bDruckSensor = 0x00;
    }

    CTank(unsigned short usiDigSens, unsigned char bTemperator, unsigned char bDruck) {
        usiDigSensoren = usiDigSens;
        bTemperatorSensor = bTemperator;
        bDruckSensor = bDruck;
    }

    unsigned short getDruck() {
        return bDruckSensor;
    }

    unsigned char getTemperaturSensor() {
        return bTemperatorSensor;
    }


};

int main() {
    int iMaxIndex = 0;
    CTank Tank[10];
    int i;
    for (i = 0; i < 10; i++) {

        // Richtigen Code finden

        iMaxIndex = i;
    }
    std::cout << "Tank " << i + 1 << " hat den hoechsten Fuellstand" << std::endl;
    return 0;
}
