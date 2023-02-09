#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x, a;
    cout << "Nhap vao so nguyen x: ";
    cin >> x;
    x = a;
    int dem = 0;
    int max = 0;
    while (x >= 0){
        x = x % 10;
        if(max >= x){
            max = x;
        }
        x = x / 10;
        dem++;
    }
    cout << " So cac chu so la: " << dem;
}
