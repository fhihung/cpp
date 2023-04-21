#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class Animal{
    public:
        int id;
        string name;
        string sex;
        int age;
    Animal(int id,string name, string sex, int age): id(id), name(name),sex(sex),age(age){};

    virtual void displayInfo() = 0;
    virtual string getString() const = 0;
};

class Dog : public Animal{
    public:
        string color;
        string owner;
         Dog (int id, string name, string sex, int age, string color, string owner): Animal(id, name, sex, age), color(color), owner(owner){};
   void displayInfo()override{
        cout << "DOG: " << name << " " << sex << " " << age; 
    }
    string getString() const override{
        stringstream ss;
        ss << "DOG" << id << name << sex << age;
        return ss.str();
    }
};

class Goose : public Animal{
    public:
        float h;
        float w;
    Goose (int id, string name, string sex, int age, float h, float w): Animal(id, name, sex, age), h(h), w(w){};
   void displayInfo()override{
        cout << "GOOSE: " << name << " " << sex << " " << age; 
    }
     string getString() const override{
        stringstream ss;
        ss << "GOOSE" << id << name << sex << age;
        return ss.str();
    }
};

ostream& operator << (ostream& os, Animal& a){
    os << a.getString();
    return os;
}

int main(int argc, char const *argv[])
{
    // Animal ani(1,"name","m",8);
    Dog dog(2,"ci","m",2,"den","Hung");
    Goose goose(2,"cu","m",2,2.1,2.4);

    // vector<Animal> zoo;
    // zoo.push_back(dog);
    // zoo.push_back(goose);

    vector<Animal*> zoop;
    zoop.push_back(&dog);
    zoop.push_back(&goose);
    for (auto x : zoop){
       cout << *x;
       cout << endl;
    }

    return 0;
}
