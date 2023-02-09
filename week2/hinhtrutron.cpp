#include <iostream>
using namespace std;
const double pi = 3.14;
/* khi de ham main len dau tien 
se bao loi vi chua khai bao hai ham se su dung
--> cach fix:
mien khi ham main duoc su dung thi minh khai bao truoc 
*/
double tinhV(double r, double h); // truyen tham tri --> gia tri se bi thay doi ve gia tri ban dau sau khi goi ham

void kiemtraref(double &r, double &h); // truyen tham chieu pass by reference (co the them const de khong bi thay doi gia tri)

void kiemtra(double *r, double *h); // truyen con tro

int main(int argc, char const *argv[])
{
    double r = 2;
    double h = 1;
    cout << "The tich hinh tru tron la: " << tinhV(r,h) << endl;
    kiemtraref(r,h);
    cout << r << " " << h << endl;
    return 0;
}
double tinhV(double r, double h){
return pi*r*r*h;
}
 //


void kiemtra(double *r, double *h){
    float V = tinhV(*r,*h);
    if (V< 10){
        (*r)++; // lay gia tri cua dia chi r tang len 1 don vi
        (*h)++;
    }
    else{
        (*r)--;
        (*h)--;
    }
}
void kiemtraref(double &r, double &h){ // su dung reference & de khong mat du lieu khi chay ham xong
    float V = tinhV(r,h);
    if (V< 10){
        r++; 
        h++;
    }
    else{
        r--;
        h--;
    }
}

// ta co the overloading function

// no giua vao kiểu dữ liệu để phân biệt giữa cách hàm giống nhau
void print(double s){
    cout << s;
}
void print(string s){
    cout << s;
}
void print(double s, double a){
    cout << s << a;
}

void print(double a, double s){
    cout << a << s; 
}
