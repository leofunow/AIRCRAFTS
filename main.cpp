#include <iostream>
#include "TLA.h"
#include "TAirport.h"
#include "THelicopter.h"
#include "TAircraft.h"

using namespace std;

int main() {
    TAirport airport(100,100,500);
    airport.addLA(101,101,10,100,100,"Helicopter");
    airport.addLA(300,200,10,100,100,"Aircraft");

    airport.Do(0,200);
    return 0;
}
