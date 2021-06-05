//
// Created by Лев on 04.06.2021.
//

#include "TAObject.h"

TAObject::TAObject(float x, float y) {
    this->x = x;
    this->y = y;
}

TAObject::~TAObject() {

}

bool TAObject::isF() const {
    return f;
}

float TAObject::getX() const {
    return x;
}

float TAObject::getY() const {
    return y;
}

void TAObject::setF(bool f) {
    TAObject::f = f;
}
