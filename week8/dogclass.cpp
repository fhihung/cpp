
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


class Dog {
    private:
    const string breed;

    public:
    string name;
    const char sex;
    const int age;
    string color;
    string owner_name;
    int date_tiem;
    vector<string>dac_san;
Dog(){}
    Dog(string name, bool sex, int age, string color,vector<string>dac_san, int date_tiem): name(name), sex(sex), age(age),color(color), owner_name(owner_name),dac_san(dac_san),date_tiem(date_tiem){

    }
    string getName(){
        return name;
    }
    void displayInfo(){
        cout << name << " " << owner_name << " " << color << " " << age;
    }

    void setDateTiemChung(int diTiem){
        int day_tiem_chung = diTiem;
    }
   
};
 int main(int argc, char const *argv[])
    {
        Dog mot{

        }
        return 0;
    }