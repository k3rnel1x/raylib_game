//
// Created by k3rnel1x on 07.03.2026.
//

#include "kobject.h"
KObject::KObject(Vector2 coords)
{
    this->coords = coords;
}

// Set / Get coords by overload
double KObject::x()         { return this->coords.x; }
double KObject::y()         { return this->coords.y; }
void   KObject::x(double x) { this->coords.x = x;    }
void   KObject::y(double y) { this->coords.y = y;    }
