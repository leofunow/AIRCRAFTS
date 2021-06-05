
#ifndef UNTITLED2_TAIRPORT_H
#define UNTITLED2_TAIRPORT_H


#include "TAObject.h"
#include "TLA.h"
#include<vector>
#include <string>

class TAirport : TAObject{
protected:
    float l;
    std::vector<TLA*> LA;
public:
    TAirport(float x, float y, float l);
    void Do(float t0, float tk);
    float getL() const;
    void addLA(float x, float y, float v, float xc, float yc, std::string name);
};


#endif //UNTITLED2_TAIRPORT_H
