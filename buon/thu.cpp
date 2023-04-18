#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    //khai bao ten bien
    // ifstream inFile;
    // //mo file de doc
    // inFile.open("/Users/fhihung/Documents/workspaces/learning/cpp/buon/coor.csv");
    // if(!inFile.is_open()){
    //     cout << " Khong mo duoc file data";
    //     exit(0);
    // }
    // string line;

    // while(getline(inFile,line)){
    //     istringstream iss(line);
    //  cout << line;
    // }
    string parsedString = "$276.09 B";
    string unit = parsedString.substr(parsedString.length() - 1, 1);
	parsedString = parsedString.erase(parsedString.length() - 1,1);
	parsedString = parsedString.erase(0 ,1);
    // cout << parsedString;
    double val = stod(parsedString);
    if(unit == "B"){
		val *= 10000000000;
	} else if(unit == "M"){
		val *= 1000000;
	}
    cout << val;

}
   