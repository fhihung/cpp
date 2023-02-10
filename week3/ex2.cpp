#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    // string name = " HelloWorld";
    // for (char &c : name){
    //     if (islower(c)){
    //         c = toupper(c);
    //     }
    // cout << name << endl;
    // }
    int n = 3;
    string ten = "HelloWorld";
    for (int i = ten.size() - 1; i >= ten.size() -n ; --i){
            char &c = ten[i];
            if(islower(c)){
                c = toupper(c);
                cout << c << endl;
            }
        }

    cout << ten << endl;
    return 0;
}