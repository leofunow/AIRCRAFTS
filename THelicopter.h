//
// Created by Лев on 05.06.2021.
//

#ifndef UNTITLED2_THELICOPTER_H
#define UNTITLED2_THELICOPTER_H


#include "TLA.h"

class THelicopter: public TLA {
public:
    THelicopter(float x, float y, float v, float xc, float yc);

public:
    virtual void move(float t, int a);
};


#endif //UNTITLED2_THELICOPTER_H
