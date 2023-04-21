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
        string cert;
         SV_CNTT (int id, string name, string sex, float gpa, string cert): SinhVien(id, name, sex, gpa),cert(cert){};
   void displayInfo()override{
        cout << "SV_CNTT: " << name << " " << sex << " " << gpa; 
    }
    string getString() const override{
        stringstream ss;
        ss << "SV_CNTT" << id << name << sex << gpa;
        return ss.str();
    }
};
class SV_CNTTVJ : public SinhVien{
    public:
        string cert;
         SV_CNTTVJ (int id, string name, string sex, float gpa, string cert): SinhVien(id, name, sex, gpa),cert(cert){};
   void displayInfo()override{
        cout << "SV_CNTTVJ: " << name << " " << sex << " " << gpa; 
    }
    string getString() const override{
        stringstream ss;
        ss << "SV_CNTTVJ" << id << name << sex << gpa;
        return ss.str();
    }
};
class SV_CNTT_TALENT : public SinhVien{
    public:
        string cert;
         SV_CNTT_TALENT (int id, string name, string sex, float gpa, string cert): SinhVien(id, name, sex, gpa),cert(cert){};
   void displayInfo()override{
        cout << "SV_CNTT_TALENT: " << name << " " << sex << " " << gpa; 
    }
    string getString() const override{
        stringstream ss;
        ss << "SV_CNTT_TALENT" << id << name << sex << gpa;
        return ss.str();
    }
};