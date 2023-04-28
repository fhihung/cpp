#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "dog.h"
#include "dog_weed.h"
#include "johnwick.h"


using namespace std;


int main(int argc, char const *argv[])
{
    Dog Duy(2,"Duyy");
    Duy.displayInfo();
    
    Dog_weed T(2,"Truong", 2.4);
    T.displayInfo();
    return 0;
    vector<Dog> dogs;
    dogs.push_back(Duy);
    JohnWick he("ak",dogs);
    
    he.displayInfo();
}



// g++ -c multi.cpp dog.cpp -o app