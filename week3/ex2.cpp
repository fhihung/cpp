#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string name = " HelloWorld";
    for (char &c : name){
        if (islower(c)){
            c = toupper(c);
        }
    cout << name << endl;
    }
    
}