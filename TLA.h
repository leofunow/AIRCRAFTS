//
// Created by Лев on 04.06.2021.
//

#ifndef UNTITLED2_TLA_H
#define UNTITLED2_TLA_H


#include "TAObject.h"

class TLA : public TAObject{
protected:
    float xc;
public:
    void setLanding(bool landing);

protected:
    float yc;
    float R;
    float angle;
    float V;
    bool landing;
public:
    TLA( float x, float y, float V, float xc, float yc );

    bool isLanding() const;

    virtual void move(float t, int a);
};


#endif //UNTITLED2_TLA_H
