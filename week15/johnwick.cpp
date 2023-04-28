#include "johnwick.h"
#include <iostream>

JohnWick::JohnWick(string gun, vector<Dog> dogs): gun(gun), dogs(dogs){};
void JohnWick::displayInfo(){
        cout << "JohnWick:" << " " << gun;
}