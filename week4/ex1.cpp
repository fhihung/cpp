#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    //KHAI BAO BIEN TEN LA "inFile"
    ifstream inFile;
    //MO FILE "inFile"
    inFile.open("/Users/fhihung/Documents/workspaces/cpp/week4/data.txt");
    //KIEM TRA FILE CO MO DUOC HAY KHONG
    //inFile.is_open kiem tra xem file co mo duoc hay khong, true neu file mo duoc
    if(!inFile.is_open()){
    cout << "Khong the mo duoc file";
    exit(0);
    }
    int x;
    int tong = 0;
    int dem = 0;
    //KHAI BAO BIEN VECTO TEN LA "vec"
    vector<int> vec;
    //DAY DU LIEU VAO BIEN "vec"
    while (inFile >> x){
        tong = tong + x;
        dem++;
        vec.push_back(x);

    }
    // DUNG CTRL D DE OUT 
    // while (cin >> x){
    //     tong = tong + x;
    // }
    cout << tong << endl;
    // ep kieu
    cout << float(tong/dem) << endl;
    //ep kieu cach khac
    //cout << tong/dem*1.0 << endl;
    //inFile.close() DONG STREAM 
    return 0;
}


