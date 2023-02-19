#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
    ifstream inFile;
    inFile.open("/Users/fhihung/Documents/workspaces/cpp/week4/datagoal.txt") ;
    if(!inFile.is_open()){
        cout << "Khong the mo duoc file";
        exit(0);
    }
    string maxname = "";
    int maxgoal = 0;
    string line;
    while(getline(inFile,line)){
        istringstream iss(line);
        string token;
        string name, club;
        int goal;

        getline(iss, name, ',');
        getline(iss, club, ',');
        getline (iss,token,',');
        goal = stoi(token);
        if(goal > maxgoal){
            maxgoal = goal;
            maxname = name;
        }
    }
        cout << maxname << " " << maxgoal;

    return 0;
}
