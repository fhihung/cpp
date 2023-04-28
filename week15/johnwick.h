#pragma once

#include "dog.h"

using namespace std;
class JohnWick{
    //khai bao
    public:
        vector<Dog> dogs;
        string gun;
         JohnWick();
         JohnWick(string, vector<Dog>);
   void displayInfo();
    
};
