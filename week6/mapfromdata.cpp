#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inFile;
    map<string, int> best;
    
    inFile.open("/Users/fhihung/Documents/workspaces/learning/cpp/week6/data.txt");
    if(!inFile.is_open()){
        cout << "Khong mo duoc file";
        exit(0);
    }
    string token;
   while (inFile >> token)
   {
    istringstream iss(token);
    best[token] += 1;

   }
   string name;
   int max = 0;
   for(auto p : best){
    // cout << p.first << " " << p.second << endl;
    if(p.second > max){
        max = p.second;
        name = p.first;
    }
   }
   cout << name << " " << max;
   

    return 0;
}
