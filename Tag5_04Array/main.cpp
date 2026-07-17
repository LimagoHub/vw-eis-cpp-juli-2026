#include <iostream>

struct Messwert {
    int a;// 4 Byte ~-2000 000 000 bis ~+ 2000 000 000
    int  b;

}; // 8Byte

int main() {



    //double array [10];
    Messwert array[] = {
        {1,2},
        {3,4},
        {5,6},
        {7,8},
        {9,0}
    };



    std::cout << sizeof(Messwert) << std::endl;
    std::cout << sizeof(array) << std::endl;

    return 0;
}
