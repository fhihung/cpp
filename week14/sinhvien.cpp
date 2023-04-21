#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class SinhVien{
    public:
        int id;
        string name;
        string sex;
        float gpa;
    SinhVien(int id,string name, string sex, float gpa): id(id), name(name),sex(sex),gpa(gpa){};

    virtual void displayInfo() = 0;
    virtual string getString() const = 0;
};
class SV_CNTT : public SinhVien{
    public:
        float toeic;
         SV_CNTT (int id, string name, string sex, float gpa, float toeic): SinhVien(id, name, sex, gpa),toeic(toeic){};
    void displayInfo()override{
        cout << "SV_CNTT: " << endl << "name: " << name << endl << "sex: " << sex << endl << "gpa: " << gpa << endl; 
    }
    string getString() const override{
        stringstream ss;
        ss << "SV_CNTT" << id << name << sex << gpa;
        return ss.str();
    }
};
class SV_CNTTVJ : public SinhVien{
    public:
        string jlpt;
         SV_CNTTVJ (int id, string name, string sex, float gpa, string jlpt): SinhVien(id, name, sex, gpa),jlpt(jlpt){};
    void displayInfo()override{
        cout << "SV_CNTTVJ: " << endl << "name: " << name << endl << "sex: " << sex << endl << "gpa: " << gpa << endl; 
    }
    string getString() const override{
        stringstream ss;
        ss << "SV_CNTTVJ" << id << name << sex << gpa;
        return ss.str();
    }
};
class SV_CNTT_TALENT : public SinhVien{
    public:
        float ielts;
         SV_CNTT_TALENT (int id, string name, string sex, float gpa, float ielts): SinhVien(id, name, sex, gpa),ielts(ielts){};
    void displayInfo()override{
        cout << "SV_CNTT_TALENT: " << endl << "name: " << name << endl << "sex: " << sex << endl << "gpa: " << gpa << endl; 
    }
    string getString() const override{
        stringstream ss;
        ss << "SV_CNTT_TALENT" << id << name << sex << gpa;
        return ss.str();
    }
};
ostream& operator << (ostream& os, const SinhVien& a){
    os << a.getString();
    return os;
}
int main(int argc, char const *argv[])
{
    SV_CNTT sa1(1,"Hung","m",3.6,980);
    SV_CNTTVJ sam2(2,"Duy","m",2.0,"N4");
    SV_CNTT_TALENT sam3(3,"Giang","m",3.9,8.5);

    sa1.displayInfo();
    sam2.displayInfo();
    sam3.displayInfo();
    return 0;
}
