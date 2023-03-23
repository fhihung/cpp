// #include <fstream>
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>

// using namespace std;
// //KHAI BAO STRUCT
// // struct Player {
// //     string name;
// //     string club;
// //     int goals;
// // };
// int main(int argc, char const *argv[])
// {
//     //khai bao ten bien
//     ifstream inFile;
//     //mo file de doc
//     inFile.open("/Users/fhihung/Documents/workspaces/cpp/week4/databtvn.txt");
//     if(!inFile.is_open()){
//         cout << " Khong mo duoc file data";
//         exit(0);
//     }
//     string line;
//     while(getline(inFile,line)){
//         istringstream iss(line);
//         string token;
//         string name, club;
//         int goals;

//         getline(iss, name, ',');
//         getline(iss, club, ',');
//         getline(iss, token, ',');
//         goals = stoi(token);

//         cout << name << club << " " << goals << endl;
//     }
//     return 0;
// }



#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {

    
    ifstream inFile;
    inFile.open("/Users/fhihung/Documents/workspaces/cpp/week4/players.txt");
    if (!inFile) {
        cout << "Cannot open file " << endl;
        return 1;
    }

    vector<vector<string> > players;
    string line;

    while (getline(inFile, line)) {
        //Khoi tao luong string
        stringstream ss(line);
        // cout << line << " ";
        
        //Khoi tao vector play_info
        vector<string> player_info;
        //Khoi toa bien info
        string info;
        while (getline(ss, info, ',')) {
            player_info.push_back(info);
        }
        players.push_back(player_info);
        
    }

    inFile.close();

    vector<string> clubs;
    vector<int> club_goals;

    for (auto& p : players) {
        int index = -1;
        for (int i = 0; i < clubs.size(); i++) {
            if (clubs[i] == p[1]) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            club_goals[index] += stoi(p[2]);
        } else {
            clubs.push_back(p[1]);
            club_goals.push_back(stoi(p[2]));
        }
    }

    cout << "Tong so ban thang cua moi CLB:" << endl;
    for (int i = 0; i < clubs.size(); i++) {
        cout << clubs[i] << ": " << club_goals[i] << endl;
    }

    int max_goals = club_goals[0];
    string club_with_max_goals = clubs[0];
    for (int i = 1; i < clubs.size(); i++) {
        if (club_goals[i] > max_goals) {
            max_goals = club_goals[i];
            club_with_max_goals = clubs[i];
        }
    }
    cout << "Cau lac bo co so ban thang nhieu nhat: " << club_with_max_goals << " (" << max_goals << " ban thang)" << endl;

    return 0;
}
