#include <iostream>

using namespace std;

class Student{
    public:
    int id;
    double GPA;
    string name;
    string classes;
    const char sex;

    Student(): sex('m'){}
    
    Student(int id,
    double GPA,
    string name,
    string classes,
    char sex) : id(id), GPA(GPA), name(name), classes(classes), sex(sex){
        cout << "Student created" << endl;
    }
    // copy constructor
    Student(const Student &s) : id(s.id), GPA(s.GPA), name(s.name), classes(s.classes),sex(s.sex){
    id = s.id;
    GPA = s.GPA;
    name = s.name;
    classes = s.classes;
    // sex = s.sex;
    cout << "Copy Completed" << endl;
    }
    // assignment
    Student& operator = (const Student &s) {
        id = s.id;
        GPA = s.GPA;
        name = s.name;
        classes = s.classes;
        cout << "Assignment Completed " << endl;
        return *this;
    }
    //ham in Info
    void displayInfo(){
        cout << id << " " << name << " " << GPA << endl;
    }
};



int main(int argc, char const *argv[])
{
    Student s1(12,3.9,"Hung","CNTT1",'m');
    s1.displayInfo();
    Student s_copy(s1);
    Student x;
    x = s1;
    return 0;
}