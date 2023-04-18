#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Animal{
    
    public:
    int id;
    string name;
    const string sex;
    string dateOfBirth;
    float weight;

    Animal(int id, string name, const string sex, string dateOfBirth, float weight): name(name), sex(sex), dateOfBirth(dateOfBirth), weight(weight){};
        void displayInfo(){
            cout << name << " " << weight << " " << dateOfBirth;
    }
    void getYearOld(string dateOfBirth){
        
    }
    void eat(){
        cout << "Hehe ngon vl!!";
        }
};
class Dog : public Animal{
    public:
    string breed;
    string owner;
   Dog(int id, string name, const string sex, string dateOfBirth, float weight, string bread, string owner): Animal(id,name, sex, dateOfBirth,weight), owner(owner), breed(breed){
    cout << "Dog created!";

   };
};
void khoaPug(){
    cout << "gau gau" << endl;
}

int main(){

}