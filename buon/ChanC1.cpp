#include <iostream>
#include <sstream>
#include <istream>
#include <fstream>
#include <math.h>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

bool giamDan(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second;
}

void topN(string s, int n) {
    unordered_map<string, int> demTu;
    vector<pair<string, int>> xapSep;

    for (int i = 0; i <= s.length(); ++i) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        if(s[i] < 'a' || s[i] > 'z') {
            s[i] =' ';
        }

    }

    string token;
    istringstream iss(s);
    while(iss >> token) {
        if(demTu.find(token) == demTu.end()) {
            demTu[token] = 1;
        } else {
            demTu[token]++;
        }
    }

    for(auto pair : demTu) {
        xapSep.push_back(pair);
    }

    sort(xapSep.begin(), xapSep.end(), giamDan);

    for(int i = 0; i < min(n, (int)xapSep.size()); ++i) {
        cout << xapSep[i].first << " : " << xapSep[i].second << endl; 
    }
}

int main(int argc, char* argv[]) {
    string s;
    int n;

    cout << "Nhap mot chuoi s :" << endl;
    getline(cin, s);
    
    cout << "Nhap n de in ra top n tu xuat hien nhieu nhat :" << endl;
    cin >> n;

    topN(s, n);
    return 0;

}