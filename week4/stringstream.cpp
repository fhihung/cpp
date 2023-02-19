#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    string s = "NguyenPhiHung, DongAnh, 19";
    istringstream iss(s);
    string name, add;
    int age;
    string token;
    
    // iss >> name;
    // iss >> add;
    // iss >> age;
    getline(iss, token, ',');
    cout << token;
    // cout << name << " " << add << " " << age << endl;
    
    return 0;
}
