#include<iostream>
using namespace std;
int main(){
    int x, n, count, countt;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n so nguyen to: ";
    cin >> n;
    for (int i = 1; i <= countt; i++ ){
        for (int j = 1; j <=i; j++){
            if (i % j == 0) 
            count++;
        }
        if(countt == 2){
            countt++;
            cout << x << "*" << i << "=" << x*i;
        }

    }
}