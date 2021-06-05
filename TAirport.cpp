
#include <cmath>
#include <iostream>
#include "TAirport.h"
#include "THelicopter.h"
#include "TLA.h"
#include "TAircraft.h"
#include <fstream>

using namespace std;

TAirport::TAirport(float x, float y, float l) : TAObject(x,y){
    this->l = l;
}

float TAirport::getL() const {
    return x;
}

void TAirport::Do(float t0, float tk) {
    ofstream file("var2.txt");
    for(float t = t0; t < tk; t = t + dt){
        for(int j = 0; j < LA.size(); j++) {
            int a;
            if(LA[j]->isLanding()) continue;
            if (typeid(*LA[j]).name()[0] == '1') {
                if (pow(LA[j]->getX() - this->x, 2) + pow(LA[j]->getY() - this->y, 2) < pow(this->l / 50, 2) && LA[j]->isF())
                    LA[j]->setLanding(true);
                else
                    LA[j]->setLanding(false);
            }
            else
            {
                if (LA[j]->getX() > this->x + this->l && LA[j]->isF())
                    LA[j]->setLanding(true);
                else
                if(this->f)
                    LA[j]->setLanding(false);
            }

            if(LA[j]->isLanding()){
                cout << endl << endl << "LANDED" << typeid(*LA[j]).name() << endl << endl;
                this->f = false;
                file << j << " " << t << endl;

                //LA.erase(LA.begin() + j);
            }
            else {
                if (typeid(*LA[j]).name()[0] == '1') {
                    if (!(this->f && !LA[j]->isF()))
                        a = 1;
                    else
                        a = 0;
                } else {
                    float X = this->x + 1.1 * l;
                    if (!(this->f && !LA[j]->isF()) && LA[j]->getX() < X && abs(LA[j]->getY() - this->getY()) < l / 50.)
                        a = 1;
                    else
                        a = 0;
                }
                LA[j]->move(t, a);
            }

            cout << "time: " << t << " Number: " << j << " Type:" << typeid(*LA[j]).name()  << " F: " << this->f << endl;
            cout << " x: " << LA[j]->getX() << " y: " << LA[j]->getY() << " Landing: " << LA[j]->isLanding() << " F: " << LA[j]->isF() << endl;

        }
    }
    file.close();
}

void TAirport::addLA(float x, float y, float v, float xc, float yc, std::string name) {
    TLA* temp;
    if(name == "Helicopter"){
        temp = new THelicopter(x,y,v,xc,yc);
        LA.push_back(temp);
    }
    else{
        temp = new TAircraft(x,y,v,xc,yc);
        LA.push_back(temp);
    }
}
