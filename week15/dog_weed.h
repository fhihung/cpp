#pragma once
#include "dog.h"

class Dog_weed : public Dog{
    public:
        float weight;
        Dog_weed();
        Dog_weed(int,string,float);
        void displayInfo();;

};
