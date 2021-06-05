//
// Created by Лев on 05.06.2021.
//

#include <cmath>
#include "TAircraft.h"
using namespace std;


void TAircraft::move(float t, int a) {
    TLA::move(t, a);
    float omega = -V/R;
    x = -(xc + R * cos(angle + omega * t))*float(a - 1) + float(a)*(x + V * dt);
    y = -(yc + R * sin(angle + omega * t))*float(a - 1) + y * float(a);
}

TAircraft::TAircraft(float x, float y, float v, float xc, float yc) : TLA(x, y, v, xc, yc) {}
