#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//KHAI BAO STRUCT
// struct Player {
//     string name;
//     string club;
//     int goals;
// };
int main(int argc, char const *argv[])
{
    //khai bao ten bien
    ifstream inFile;
    //mo file de doc
    inFile.open("/Users/fhihung/Documents/workspaces/learning/cpp/week4/databtvn.txt");
    if(!inFile.is_open()){
        cout << " Khong mo duoc file data";
        exit(0);
    }
    string line;
    vector<string> name;
    vector<string> club;
    vector<int> goals;
    
    vector<string>clubs;
    vector<int>club_goals;

    while(getline(inFile,line)){
        istringstream iss(line);
        string token;
        string ten, clb;
        int banthang;

        getline(iss, ten, ',');
        getline(iss, clb, ',');
        getline(iss, token, ',');

        banthang = stoi(token);
        name.push_back(ten);

        club.push_back(clb);
        goals.push_back(banthang);
        for(auto &x : club){
            cout << x << " ";
        }
    }
    // for (int i = 0; i << clubs.size(); i++){
    //     int check = -1;
    //     for(int j = 0;j < club.size(); j++){
    //         if(clubs[i] == club[j]){
    //             check = i;
    //             break;
    //         }
    //     }
    //     if(check != 1){
    //         club_goals[check] += goals[check];
    //     }else{
    //         clubs.push_back(club[check]);
    //         club_goals.push_back(goals[check]);
    //     }
    // }
    // for (int i = 0; i < clubs.size(); i++) {
    //     cout << clubs[i] << ": " << club_goals[i] << endl;
    // }
    // for(auto &x : club_goals){
    //     cout << x << " ";
    // }
    
    // cout << "Tong so ban thang cua moi CLB:" << endl;
    
        // cout << ten << clb << " " << banthang << endl;

    return 0;
}



