#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    ifstream inFile;
    inFile.open("/Users/fhihung/Documents/workspaces/cpp/week4/data.txt");
    //KIEM TRA FILE CO MO DUOC HAY KHONG
    //inFile.is_open kiem tra xem file co mo duoc hay khong, true neu file mo duoc
    if(!inFile.is_open())
    cout << "Khong the mo duoc file";
    exit(0);
    return 0;
}

