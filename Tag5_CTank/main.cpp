#include "CTank.h"

int main() {
    int iMaxIndex = 0;
    CTank Tank[10];

    for (int i = 0; i < 10; i++) {

        if (Tank[i].getFuellstand() > Tank[iMaxIndex].getFuellstand()) {
            iMaxIndex = i;
        }


    }
    std::cout << "Tank " << iMaxIndex + 1 << " hat den hoechsten Fuellstand" << std::endl;
    return 0;
}
