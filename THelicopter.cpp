#include <cmath>
#include "THelicopter.h"

void THelicopter::move(float t, int a) {
    TLA::move(t, a);
    x = x - float(a) * V * cos(angle) * dt;
    y = y - float(a) * V * sin(angle) * dt;
}

THelicopter::THelicopter(float x, float y, float v, float xc, float yc) : TLA(x, y, v, xc, yc) {}
