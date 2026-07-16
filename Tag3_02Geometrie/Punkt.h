//
// Created by JoachimWagner on 15.07.2026.
//

#ifndef TAG3_02GEOMETRIE_PUNKT_H
#define TAG3_02GEOMETRIE_PUNKT_H
#include <ostream>

class Punkt {
private:
    const double MAX{10.0};
    double _x, _y;
public:
    void set_x(double x) {
        if (x > MAX) { x = MAX; }
        if (x <-MAX) { x = -MAX;}
        _x = x;
    }

    void set_y(double y) {
        if (y > MAX) { y = MAX; }
        if (y <-MAX) { y = -MAX;}
        _y = y;
    }

public:


    Punkt():Punkt(0,0) {

    }

    Punkt(double x , double y ) {
        set_x(x);
        set_y(y);
    }

    double get_x() const {
        return _x;
    }

    double get_y() const {
        return _y;
    }

    friend std::ostream & operator<<(std::ostream &os, const Punkt &obj) {
        return os
               << "x: " << obj._x
               << " y: " << obj._y;
    }

   /* void rechts() {
        rechts(1);
    }
*/
    void rechts(double offset = 1) {
        set_x(get_x() + offset);
    }
    void links() {
        set_x(get_x() - 1);
    }
    void oben() {
        set_y(get_y() + 1);
    }
    void unten() {
        set_y(get_y() - 1);
    }
};

#endif //TAG3_02GEOMETRIE_PUNKT_H
