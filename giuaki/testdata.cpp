#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inFile;
    //mo file de doc
    inFile.open("/Users/fhihung/Documents/workspaces/learning/cpp/giuaki/IMDB.csv");
    if(!inFile.is_open()){
        cout << " Khong mo duoc file data";
        exit(0);
    }
    string line;

    while(getline(inFile,line)){
        istringstream iss(line);
     cout << line;
    }
  

}