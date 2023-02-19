#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    ifstream inFile;
    inFile.open("/Users/fhihung/Documents/workspaces/cpp/week4/data2.txt");
     if(!inFile.is_open()){
    cout << "Khong the mo duoc file";
    exit(0);
    }
    string line;
    while(getline(inFile,line)){
    istringstream iss(line);
    int tong = 0;
    string token;
    cout << line<< endl;
    while(getline(iss,token, ',')){
        tong = tong + stoi(token);
        }
        cout << tong << endl;

    }
    return 0;
}
