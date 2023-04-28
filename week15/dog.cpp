#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;


class Dog{
    //khai bao
    public:
        int id;
        string name;
         Dog();
         Dog(int, string);
   void displayInfo();
    
};
// dinh nghia
Dog::Dog (int id, string name):  id(id), name(name){};
void Dog::displayInfo(){
        cout << "DOG: " << id << " " << " " << name; 
}
int main(int argc, char const *argv[])
{
    Dog Duy(2,"Duyy");
    Duy.displayInfo();
    return 0;
}
