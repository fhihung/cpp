#include <iostream>
#include <vector>

using namespace std;

class Dog{
    public:
    int id;
    string name;
    const char sex;
    float weight;
    string owner;
    string breed;

    Dog(char sex) : sex('m') {}

    Dog( int id,
    string name,
    char sex,
    float weight,
    string owner,
    string breed) : id(id), name(name), sex(sex), weight(weight), owner(owner), breed(breed) {
        cout << "a dog created " << endl;
    }
    //copy
    Dog(const Dog &s) : id(s.id), name(s.name), sex(s.sex), weight(s.weight), owner(s.owner), breed(s.breed) {
        cout << "Copy complete";
    }
    //assignment
    Dog& operator = (const Dog &s){
        int id;
        string name;
        float weight;
        string owner;
        string breed;
        cout << "Assignment Compelete" << endl;
        return *this;
    }
    Dog& operator = (float w){
        weight = w;
        return *this;
    }
    void displayInfo(){
        cout << name << " " << weight << " " << breed << endl;
    }
};

int main(int argc, char const *argv[])
{
    vector<Dog> vec;
    vec.reserve(10);
    for(int i = 0;i <10; ++i){
        Dog d('m');
        d.id = i;
        vec.emplace_back(d);
    }
    Dog s1(1,"con cho",'m', 50.1,"Hung","legend");
    s1.displayInfo();
    // Dog x;
    // x = s1;
    // x(1,"con cho",'m', 50.1,"Hung","legend");
    // x = 2.0;
    // x.displayInfo();
    return 0;
}

