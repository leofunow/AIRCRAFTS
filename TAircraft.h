#ifndef UNTITLED2_TAIRCRAFT_H
#define UNTITLED2_TAIRCRAFT_H


#include "TLA.h"

class TAircraft: public TLA{
public:
    TAircraft(float x, float y, float v, float xc, float yc);

public:
    virtual void move(float t, int a);
};


#endif //UNTITLED2_TAIRCRAFT_H
