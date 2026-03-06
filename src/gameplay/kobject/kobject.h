//
// Created by k3rnel1x on 07.03.2026.
//

#ifndef KOBJECT_H
#define KOBJECT_H
#include <raylib.h>
#include <string>


class KObject {
private:
    Vector2     coords;
public:
    KObject(Vector2 coord);
    double x();
    double y();
    void   x(double x);
    void   y(double x);

    virtual void draw() { };
};



#endif //KOBJECT_H
