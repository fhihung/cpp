#include<iostream>
#include<string>
using namespace std;
struct Player{
        string hoten;
        int tuoi;
        float w,h;
        float getBMI(){
            return w/(h*h);
        }
};
int main(){
    Player p;
    p.h = 170;
    p.w = 52;
    cout << p.getBMI() << endl;
    
}