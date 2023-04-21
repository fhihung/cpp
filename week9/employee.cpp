#include <string>
#include <iostream>
#include <vector>

using namespace std;;

class Employee{
    public:
    int id;
    string name;
    string address;
    int age;
    const string sex;

    Employee(int id, string name, string address, int age,string sex) : id(id), name(name), address(address), age(age), sex(sex) {
        cout << "New employee!!";
    };
};

class PartTime : public Employee{
    public:
    double wage;
};

class FullTime : public Employee{
    public:
    double salary;
    string contract_date;
    FullTime(int id, string name, string address, int age,string sex, double wage) : Employee(id, name, address, age, sex), salary(salary){
    };
    void showInfo(){
        cout << name << age << salary;  
}
    int remainContract(){

    }
};

int main(){

}