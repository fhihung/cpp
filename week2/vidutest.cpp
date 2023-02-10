#include <iostream>
//#include <cstdlib>
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
        cout << "ERROR: THIEU DU LIEU" << endl;
        return 1;
    } else if (argc > 3) {
        cout << "ERROR: THUA DU LIEU" << endl;
        return 1;
    }

    string name = argv[1];
    string age = argv[2];
    if (!isNum(age)) {
        cout << "ERROR: TUOI PHAI LA CHU SO" << endl;
        return 1;
    }
    for (int i = 1; i < argc; ++i){
        if(argv[1] == "-a"){
            age = argv[i+1];
        }
        else cout << ""
    }

    cout << "Hello " << name << " " << age << " tuoi" << endl;
    return 0;
}
