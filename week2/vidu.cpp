// #include <iostream>
// using namespace std;

// bool isNum(string s){
//     for(int i = 0 ; i < s.size(); i++){
//         if(! isdigit(s[i])){
            
//         }
//     }
//     return false;
// }
// int main(int argc, char const *argv[])
// {
//     //argc la so luong phantu
//     //exit(0); la thoat chuong trinh
//     if ( argc < 3){
//         cout << "THIEU DU LIEU\n";
//         exit(0);
//     }
//     else{
//         cout << "THUA DU LIEU\n";
//         exit(0);
//     }
//     string name = argv[1];
//     string age = argv[2];
//     for (int i = 1; i < argc; ++i){
//         if(argv[i] == "-a"){
//             age = argv[i+1];
//         }
//         else if(argv)
//     }
    
//     cout << "Hello " << name << " " << age << " tuoi";
//     return 0;
// }
#include <iostream>
#include <cstdlib>
using namespace std;

bool isNum(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[]) {
    if (argc < 3) {
        cout << "ERROR: Not enough arguments provided" << endl;
        return 1;
    } else if (argc > 3) {
        cout << "ERROR: Too many arguments provided" << endl;
        return 1;
    }

    string name = argv[1];
    string age = argv[2];
    if (!isNum(age)) {
        cout << "ERROR: Age must be a number" << endl;
        return 1;
    }

    cout << "Hello " << name << " " << age << " years old" << endl;
    return 0;
}
