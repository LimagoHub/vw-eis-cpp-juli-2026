//
// Created by JoachimWagner on 17.07.2026.
//

#ifndef TAG5_CTANK_CTANK_H
#define TAG5_CTANK_CTANK_H
#include <iostream>

class CTank {

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

    int getFuellstand() { // Fuellstand
        return usiDigSensoren & 0x00FF;
    }
private:
    unsigned short usiDigSensoren;
    unsigned char bTemperatorSensor;
    unsigned char bDruckSensor;

};
#endif //TAG5_CTANK_CTANK_H
