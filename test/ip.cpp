#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> split(string s, char delim) {
    vector<int> result;
    string token = "";
    for (char c : s) {
        if (c == delim) {
            result.push_back(stoi(token));
            token = "";
        } else {
            token += c;
        }
    }
    result.push_back(stoi(token));
    return result;
}

bool isValidIP(string s) {
    vector<int> parts = split(s, '.');
    if (parts.size() != 4) {
        return false;
    }
    for (int part : parts) {
        if (part < 0 || part > 255) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1;
    cin >> s1;

    cout << s1 << ": " << (isValidIP(s1) ? "Đúng" : "Sai") << endl;

    return 0;
}
