#include <cmath>
#include "TLA.h"
using namespace std;

TLA::TLA(float x, float y, float V, float xc, float yc): TAObject(x,y) {
    this->V = V;
    this->xc = xc;
    this->yc = yc;
    R = sqrtf(pow(x-xc,2) + pow(y-yc,2));
    int b;
    if(x>xc)
        b = 0;
    else
        if(y<yc)
            b = -1;
        else
            b = 1;
    angle = b * M_PI + atan((y-yc)/(x-xc));
}

void TLA::move(float t, int a) {
    if(a == 0)
        f = false;
    else
        f = true;
}

bool TLA::isLanding() const {
    return landing;
}

void TLA::setLanding(bool landing) {
    TLA::landing = landing;
}

