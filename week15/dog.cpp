#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "dog.h"

// dinh nghia
Dog::Dog (int id, string name):  id(id), name(name){};
void Dog::displayInfo(){
        cout << "DOG: " << id << " " << " " << name; 
}
