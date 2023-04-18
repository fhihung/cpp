#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class Rectangle{
    public:
    int id;
    float dai;
    float rong;
    string color;

    Rectangle(){}
    Rectangle(
    int id,
    float dai,
    float rong,
    string color
    ): id(id),dai(dai),rong(rong),color(color) {
        cout << "Rectangle created!" << endl;
    }
    // copy constructor
    Rectangle(const Rectangle &s) : id(s.id),dai(s.dai),rong(s.rong),color(s.color) {
        id = s.id;
        dai = s.dai;
        rong = s.rong;
        color = s.color;
        cout << "Rectangle created!" << endl;
    }
    // assignment
    Rectangle& operator = (const Rectangle &s){
        id = s.id;
        dai = s.dai;
        rong = s.rong;
        color = s.color;
        return *this;
    }
    Rectangle& operator =(string s){
        color = s;
        return *this;
    }
    // void operator ++(int){
    //     dai++ ;
    //     rong++ ;
    // }
    // void operator ++(){
    //     dai++ ;
    //     rong++ ;
    // }
    Rectangle&  operator ++(int){
        dai++ ;
        rong++ ;
        return *this;
    }
    Rectangle&  operator ++(){
        dai++ ;
        rong++ ;
        return *this;
    }

    Rectangle & operator +=(float a){
        dai += a;
        rong += a;
        return *this;
    }
    // Rectangle operator +(const Rectangle& a){
    //     Rectangle temp;
    //     temp.dai = dai + a.dai;
    //     temp.rong = rong + a.rong;
    //     return temp;
    // }


     Rectangle operator +(const Rectangle& a){
        // Rectangle temp;
        dai = dai + a.dai;
        rong = rong + a.rong;
        return *this;
    }
    // void operator << (ostream& os){
    //     os << "id:" << id << endl << "dai:"<< dai << endl << "rong:" << rong << endl << "color:" <<color << endl;
    // }
    bool operator <= (Rectangle& a){
     
        return (dai * rong <= a.dai * a.rong );
    }
    // display thong
    void displayInfo(){
        cout << id << " " << dai << " " << rong << " " <<color << endl;
    }

    // friend void operator << (ostream& os , const Rectangle& a);
    
};
// ham ngoai
void displayInfo(Rectangle r){
        cout << r.id << " " << r.dai << " " << r.rong << " " << r.color << endl;
    }

// void operator <<(ostream& os, Rectangle r){
//         os << "id: " << r.id << endl << "dai: "<< r.dai << endl << "rong: " << r.rong << endl << "color: " << r.color << endl;
//     }
// khong tra ve gia tri nao

ostream& operator <<(ostream& os, Rectangle r){
        os << "id: " << r.id << endl << "dai: "<< r.dai << endl << "rong: " << r.rong << endl << "color: " << r.color << endl;
        return os;
    }
istream& operator >>(istream& is, Rectangle r){
    is >> r.id >> r.dai >> r.rong >> r.color;
    // istringstream iss ()
   return is;
}
int main(int argc, char const *argv[])
{
    Rectangle tong;
    Rectangle a(1,6.0,1.3,"Do");
    Rectangle b(1,2.0,1.3,"White");
    // a+=2;
    string s = "3 9.0 9.0 green";
    istringstream iss(s);
    iss >> tong;
    cout << tong;
    // cout << a << endl;
    if (a <= b){
    cout << "a <= b";
    }
    else 
        cout << "a >= b";
    return 0;
}

