#ifndef CANNON_H
#define CANNON_H
//#include "Cylinder.h"
//#include "Sphere.h"
#include "Shapes/Cylinder.h"
#include "Shapes/Sphere.h"

class Cannon {
private:
    Cylinder body;
    Sphere end;

public:
    void build();
    void render() const;
};
#endif