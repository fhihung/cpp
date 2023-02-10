#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    getline(cin,name); // getline de lay dau cach nhe
    cout << "Hello " << name << "," << endl;
    return 0;
}
