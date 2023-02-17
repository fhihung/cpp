#include <iostream>
using namespace std;

bool isNum(string s){
    for(int i = 0 ; i < s.size(); i++){
        if(! isdigit(s[i])){
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    //argc la so luong phantu
    //exit(0); la thoat chuong trinh
    // if ( argc < 3){
    //     cout << "THIEU DU LIEU\n";
    //     exit(0);
    // }
    // else{
    //     cout << "THUA DU LIEU\n";
    //     exit(0);
    // }
    // string name = argv[1];
    // string age = argv[2];
    string name;
    int age;
    for (int i = 1; i < argc; ++i){
        if(string(argv[i]) == string("-a")){
            age = stoi(argv[i+1]);
            // cout << "ok";
        }
        else if(string(argv[i]) == string("-n")){
            name = argv[i+1];
            // cout << "oke name";
        }
    }
    
    cout << "Hello" << name << " " << age << " tuoi";
    return 0;
}
