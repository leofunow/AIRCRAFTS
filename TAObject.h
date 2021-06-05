//
// Created by Лев on 04.06.2021.
//

#ifndef UNTITLED2_TAOBJECT_H
#define UNTITLED2_TAOBJECT_H


class TAObject {
protected:
    const float dt = 1.;
    float x;
public:
    bool isF() const;

    void setF(bool f);

protected:
    bool f;
    float y;
public:
    TAObject(float x, float y);
    ~TAObject();

    float getX() const;

    float getY() const;
};


#endif //UNTITLED2_TAOBJECT_H
