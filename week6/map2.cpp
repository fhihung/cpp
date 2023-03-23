#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>

using namespace std;
int main(int argc, char const *argv[])
{
    ifstream inFile;
    inFile.open("/Users/fhihung/Documents/workspaces/cpp/week6/datashowbiz.txt");
    if(!inFile.is_open()){
        cout << " Khong mo duoc file data";
        exit(0);
    }
    unordered_map<string, int> showbiz;

    string line;
    while(getline(inFile,line)){
        istringstream iss(line);
        string token;
        string que;
        iss >> token;
        iss >> que;
        iss >> token;
        cout << token << " " ;
        showbiz[que] += stoi(token);
        // for(auto x : showbiz){
        //     cout << x.first << " " << x.second << endl;
        // }
    }
    int max = 0;
    string diadiem;
    for(auto p : showbiz){
        if(max < p.second){
            max = p.second;
            diadiem = p.first;
        }
    }
        cout << diadiem << " " << max << endl;

    return 0;
}
